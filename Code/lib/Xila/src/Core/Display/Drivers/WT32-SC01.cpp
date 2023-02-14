///
/// @file WT32-SC01.cpp
/// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
/// @brief
/// @version 0.1.0
/// @date 24-07-2022
///
/// @copyright Copyright (c) 2022
///

#if Display_Hardware == Display_Wireless_Tag_WT32_SC01

#define LGFX_USE_V1
#include "LovyanGFX.hpp"

#include "Core/Display/Display.hpp"

using namespace Xila_Namespace;

class WT32_SC01_Driver_Class : public lgfx::LGFX_Device
{
    /*
     クラス名は"LGFX"から別の名前に変更しても構いません。
     AUTODETECTと併用する場合は"LGFX"は使用されているため、LGFX以外の名前に変更してください。
     また、複数枚のパネルを同時使用する場合もそれぞれに異なる名前を付けてください。
     ※ クラス名を変更する場合はコンストラクタの名前も併せて同じ名前に変更が必要です。

     名前の付け方は自由に決めて構いませんが、設定が増えた場合を想定し、
     例えばESP32 DevKit-CでSPI接続のILI9341の設定を行った場合、
      LGFX_DevKitC_SPI_ILI9341
     のような名前にし、ファイル名とクラス名を一致させておくことで、利用時に迷いにくくなります。
    //*/

    // 接続するパネルの型にあったインスタンスを用意します。
    // lgfx::Panel_GC9A01      _panel_instance;
    // lgfx::Panel_GDEW0154M09 _panel_instance;
    // lgfx::Panel_HX8357B     _panel_instance;
    // lgfx::Panel_HX8357D     _panel_instance;
    // lgfx::Panel_ILI9163     _panel_instance;
    // lgfx::Panel_ILI9341     _panel_instance;
    // lgfx::Panel_ILI9342     _panel_instance;
    // lgfx::Panel_ILI9481     _panel_instance;
    // lgfx::Panel_ILI9486     _panel_instance;
    // lgfx::Panel_ILI9488     _panel_instance;
    // lgfx::Panel_IT8951      _panel_instance;
    // lgfx::Panel_RA8875      _panel_instance;
    // lgfx::Panel_SH110x      _panel_instance; // SH1106, SH1107
    // lgfx::Panel_SSD1306     _panel_instance;
    // lgfx::Panel_SSD1327     _panel_instance;
    // lgfx::Panel_SSD1331     _panel_instance;
    // lgfx::Panel_SSD1351     _panel_instance; // SSD1351, SSD1357
    // lgfx::Panel_SSD1963     _panel_instance;
    // lgfx::Panel_ST7735      _panel_instance;
    // lgfx::Panel_ST7735S     _panel_instance;
    // lgfx::Panel_ST7789      _panel_instance;
    lgfx::Panel_ST7796 _panel_instance;

    // パネルを接続するバスの種類にあったインスタンスを用意します。
    lgfx::Bus_SPI _bus_instance; // SPIバスのインスタンス
                                 // lgfx::Bus_I2C       _bus_instance;   // I2Cバスのインスタンス (ESP32のみ)
    // lgfx::Bus_Parallel8 _bus_instance;   // 8ビットパラレルバスのインスタンス (ESP32のみ)

    // バックライト制御が可能な場合はインスタンスを用意します。(必要なければ削除)
    lgfx::Light_PWM _light_instance;

    // タッチスクリーンの型にあったインスタンスを用意します。(必要なければ削除)
    lgfx::Touch_FT5x06 _touch_instance; // FT5206, FT5306, FT5406, FT6206, FT6236, FT6336, FT6436
    // lgfx::Touch_GSL1680E_800x480 _touch_instance; // GSL_1680E, 1688E, 2681B, 2682B
    // lgfx::Touch_GSL1680F_800x480 _touch_instance;
    // lgfx::Touch_GSL1680F_480x272 _touch_instance;
    // lgfx::Touch_GSLx680_320x320  _touch_instance;
    // lgfx::Touch_GT911            _touch_instance;
    // lgfx::Touch_STMPE610         _touch_instance;
    // lgfx::Touch_TT21xxx          _touch_instance; // TT21100
    // lgfx::Touch_XPT2046          _touch_instance;

public:
    // コンストラクタを作成し、ここで各種設定を行います。
    // クラス名を変更した場合はコンストラクタも同じ名前を指定してください。
    WT32_SC01_Driver_Class(void)
    {
        {                                      // バス制御の設定を行います。
            auto cfg = _bus_instance.config(); // バス設定用の構造体を取得します。

            // SPIバスの設定
            cfg.spi_host = HSPI_HOST; // 使用するSPIを選択  ES P32-S2,C3 : SPI2_HOST or SPI3_HOST / ESP32 : VSPI_HOST or HSPI_HOST
            // ※ ESP-IDFバージョンアップに伴い、VSPI_HOST , HSPI_HOSTの記述は非推奨になるため、エラーが出る場合は代わりにSPI2_HOST , SPI3_HOSTを使用してください。
            cfg.spi_mode = 0;                  // SPI通信モードを設定 (0 ~ 3)
            cfg.freq_write = 80000000;         // 送信時のSPIクロック (最大80MHz, 80MHzを整数で割った値に丸められます)
            cfg.freq_read = 16000000;          // 受信時のSPIクロック
            cfg.spi_3wire = false;             // 受信をMOSIピンで行う場合はtrueを設定
            cfg.use_lock = true;               // トランザクションロックを使用する場合はtrueを設定
            cfg.dma_channel = SPI_DMA_CH_AUTO; // 使用するDMAチャンネルを設定 (0=DMA不使用 / 1=1ch / 2=ch / SPI_DMA_CH_AUTO=自動設定)
            // ※ ESP-IDFバージョンアップに伴い、DMAチャンネルはSPI_DMA_CH_AUTO(自動設定)が推奨になりました。1ch,2chの指定は非推奨になります。
            cfg.pin_sclk = 14; // SPIのSCLKピン番号を設定
            cfg.pin_mosi = 13; // SPIのMOSIピン番号を設定
            cfg.pin_miso = 12; // SPIのMISOピン番号を設定 (-1 = disable)
            cfg.pin_dc = 21;   // SPIのD/Cピン番号を設定  (-1 = disable)
                               // SDカードと共通のSPIバスを使う場合、MISOは省略せず必ず設定してください。
                               //*/
                               /*
                               // I2Cバスの設定
                                     cfg.i2c_port    = 0;          // 使用するI2Cポートを選択 (0 or 1)
                                     cfg.freq_write  = 400000;     // 送信時のクロック
                                     cfg.freq_read   = 400000;     // 受信時のクロック
                                     cfg.pin_sda     = 21;         // SDAを接続しているピン番号
                                     cfg.pin_scl     = 22;         // SCLを接続しているピン番号
                                     cfg.i2c_addr    = 0x3C;       // I2Cデバイスのアドレス
                               //*/
                               /*
                               // 8ビットパラレルバスの設定
                                     cfg.i2s_port = I2S_NUM_0;     // 使用するI2Sポートを選択 (I2S_NUM_0 or I2S_NUM_1) (ESP32のI2S LCDモードを使用します)
                                     cfg.freq_write = 20000000;    // 送信クロック (最大20MHz, 80MHzを整数で割った値に丸められます)
                                     cfg.pin_wr =  4;              // WR を接続しているピン番号
                                     cfg.pin_rd =  2;              // RD を接続しているピン番号
                                     cfg.pin_rs = 15;              // RS(D/C)を接続しているピン番号
                                     cfg.pin_d0 = 12;              // D0を接続しているピン番号
                                     cfg.pin_d1 = 13;              // D1を接続しているピン番号
                                     cfg.pin_d2 = 26;              // D2を接続しているピン番号
                                     cfg.pin_d3 = 25;              // D3を接続しているピン番号
                                     cfg.pin_d4 = 17;              // D4を接続しているピン番号
                                     cfg.pin_d5 = 16;              // D5を接続しているピン番号
                                     cfg.pin_d6 = 27;              // D6を接続しているピン番号
                                     cfg.pin_d7 = 14;              // D7を接続しているピン番号
                               //*/

            _bus_instance.config(cfg);              // 設定値をバスに反映します。
            _panel_instance.setBus(&_bus_instance); // バスをパネルにセットします。
        }

        {                                        // 表示パネル制御の設定を行います。
            auto cfg = _panel_instance.config(); // 表示パネル設定用の構造体を取得します。

            cfg.pin_cs = 15;   // CSが接続されているピン番号   (-1 = disable)
            cfg.pin_rst = 22;  // RSTが接続されているピン番号  (-1 = disable)
            cfg.pin_busy = -1; // BUSYが接続されているピン番号 (-1 = disable)

            // ※ 以下の設定値はパネル毎に一般的な初期値が設定されていますので、不明な項目はコメントアウトして試してみてください。

            cfg.panel_width = Display_Horizontal_Definition;    // 実際に表示可能な幅
            cfg.panel_height = Display_Vertical_Definition;   // 実際に表示可能な高さ
            cfg.offset_x = 0;         // パネルのX方向オフセット量
            cfg.offset_y = 0;         // パネルのY方向オフセット量
            cfg.offset_rotation = 0;  // 回転方向の値のオフセット 0~7 (4~7は上下反転)
            cfg.dummy_read_pixel = 8; // ピクセル読出し前のダミーリードのビット数
            cfg.dummy_read_bits = 1;  // ピクセル以外のデータ読出し前のダミーリードのビット数
            cfg.readable = true;      // データ読出しが可能な場合 trueに設定
            cfg.invert = false;       // パネルの明暗が反転してしまう場合 trueに設定
            cfg.rgb_order = false;    // パネルの赤と青が入れ替わってしまう場合 trueに設定
            cfg.dlen_16bit = false;   // 16bitパラレルやSPIでデータ長を16bit単位で送信するパネルの場合 trueに設定
            cfg.bus_shared = false;   // SDカードとバスを共有している場合 trueに設定(drawJpgFile等でバス制御を行います)

            // 以下はST7735やILI9163のようにピクセル数が可変のドライバで表示がずれる場合にのみ設定してください。
            //    cfg.memory_width     =   240;  // ドライバICがサポートしている最大の幅
            //    cfg.memory_height    =   320;  // ドライバICがサポートしている最大の高さ

            _panel_instance.config(cfg);
        }

        //*
        {                                        // バックライト制御の設定を行います。（必要なければ削除）
            auto cfg = _light_instance.config(); // バックライト設定用の構造体を取得します。

            cfg.pin_bl = 23;     // バックライトが接続されているピン番号
            cfg.invert = false;  // バックライトの輝度を反転させる場合 true
            cfg.freq = 44100;    // バックライトのPWM周波数
            cfg.pwm_channel = 7; // 使用するPWMのチャンネル番号

            _light_instance.config(cfg);
            _panel_instance.setLight(&_light_instance); // バックライトをパネルにセットします。
        }
        //*/

        //*
        { // タッチスクリーン制御の設定を行います。（必要なければ削除）
            auto cfg = _touch_instance.config();

            cfg.x_min = 0;           // タッチスクリーンから得られる最小のX値(生の値)
            cfg.x_max = 319;         // タッチスクリーンから得られる最大のX値(生の値)
            cfg.y_min = 0;           // タッチスクリーンから得られる最小のY値(生の値)
            cfg.y_max = 479;         // タッチスクリーンから得られる最大のY値(生の値)
            cfg.pin_int = -1;        // INTが接続されているピン番号
            cfg.bus_shared = false;  // 画面と共通のバスを使用している場合 trueを設定
            cfg.offset_rotation = 0; // 表示とタッチの向きのが一致しない場合の調整 0~7の値で設定

            /* SPI接続の場合
                  cfg.spi_host = VSPI_HOST;// 使用するSPIを選択 (HSPI_HOST or VSPI_HOST)
                  cfg.freq = 1000000;     // SPIクロックを設定
                  cfg.pin_sclk = 18;     // SCLKが接続されているピン番号
                  cfg.pin_mosi = 23;     // MOSIが接続されているピン番号
                  cfg.pin_miso = 19;     // MISOが接続されているピン番号
                  cfg.pin_cs   =  5;     //   CSが接続されているピン番号*/

            // I2C接続の場合
            cfg.i2c_port = 1;    // 使用するI2Cを選択 (0 or 1)
            cfg.i2c_addr = 0x38; // I2Cデバイスアドレス番号
            cfg.pin_sda = 18;    // SDAが接続されているピン番号
            cfg.pin_scl = 19;    // SCLが接続されているピン番号
            cfg.freq = 400000;   // I2Cクロックを設定

            _touch_instance.config(cfg);
            _panel_instance.setTouch(&_touch_instance); // タッチスクリーンをパネルにセットします。
        }
        //*/

        setPanel(&_panel_instance); // 使用するパネルをセットします。
    }
};

static WT32_SC01_Driver_Class WT32_SC01_Driver;

Result_Type Display_Class::Start()
{
    if (Load_Registry() != Result_Type::Success)
    {
        Save_Registry();
    }
    
    if (WT32_SC01_Driver.init())
    {
        return Result_Type::Success;
    }
    return Result_Type::Error;
};

void Display_Class::Set_Brightness(uint8_t Brightness)
{
    WT32_SC01_Driver.setBrightness(Brightness);
    this->Brightness = Brightness;
};

uint8_t Display_Class::Get_Brightness()
{
    return Brightness;
};

void Display_Class::Output_Flush(lv_disp_drv_t *Display_Driver_Interface, const lv_area_t *Area, lv_color_t *Buffer)
{
    static uint32_t Width, Height;

    Width = (Area->x2 - Area->x1 + 1);
    Height = (Area->y2 - Area->y1 + 1);

    WT32_SC01_Driver.startWrite();
    WT32_SC01_Driver.setAddrWindow(Area->x1, Area->y1, Width, Height);
    // tft.pushColors((uint16_t *)&color_p->full, w * h, true);
    WT32_SC01_Driver.writePixels((lgfx::rgb565_t *)&Buffer->full, Width * Height);
    WT32_SC01_Driver.endWrite();

    lv_disp_flush_ready(Display_Driver_Interface);
};

void Display_Class::Input_Read(lv_indev_drv_t *Input_Device_Driver_Interface, lv_indev_data_t *Data)
{
    static int32_t Input_X, Input_Y;

    if (WT32_SC01_Driver.getTouch(&Input_X, &Input_Y))
    {
        Data->state = LV_INDEV_STATE_PR;
        /*Set the coordinates*/
        Data->point.x = Input_X;
        Data->point.y = Input_Y;
    }
    else
    {
        Data->state = LV_INDEV_STATE_REL;
    }
};

void Display_Class::Calibrate()
{
    WT32_SC01_Driver.setTextSize((std::max(WT32_SC01_Driver.width(), WT32_SC01_Driver.height()) + 255) >> 8);

    // Calibration
    if (WT32_SC01_Driver.touch())
    {
        if (WT32_SC01_Driver.width() < WT32_SC01_Driver.height())
        {
            WT32_SC01_Driver.setRotation(WT32_SC01_Driver.getRotation() ^ 1);
        }
        // 画面に案内文章を描画します。
        WT32_SC01_Driver.setTextDatum(textdatum_t::middle_center);
        WT32_SC01_Driver.drawString("Touch the arrow marker.", WT32_SC01_Driver.width() >> 1, WT32_SC01_Driver.height() >> 1);
        WT32_SC01_Driver.setTextDatum(textdatum_t::top_left);

        // タッチを使用する場合、キャリブレーションを行います。画面の四隅に表示される矢印の先端を順にタッチしてください。
        std::uint16_t fg = TFT_WHITE;
        std::uint16_t bg = TFT_BLACK;
        if (WT32_SC01_Driver.isEPD())
        {
            std::swap(fg, bg);
        }
        WT32_SC01_Driver.calibrateTouch(nullptr, fg, bg, std::max(WT32_SC01_Driver.width(), WT32_SC01_Driver.height()) >> 3);
    }
};

#endif