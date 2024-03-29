/// @file Queue.hpp
/// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
/// @brief
/// @version 0.1.0
/// @date 06-04-2023
///
/// @copyright Copyright (c) 2023

#ifndef Queue_Hpp_Included
#define Queue_Hpp_Included

#include "Base_Types.hpp"

namespace Xila_Namespace
{

    typedef class Queue_Class
    {
    public:
        // - Methods

        // - - Constructors / Destructors

        /// @brief Default constructor.
        Queue_Class();

        /// @brief Create a new queue.
        /// @param Length Length of the queue.
        /// @param Item_Size Size of each item in the queue.
        /// @return Result_Type
        Result_Type Create(Size_Type Length, Size_Type Item_Size);

        /// @brief Delete the queue.
        void Delete();

        // - - Operations

        /// @brief Send an item to the queue.
        /// @param Item_To_Send Item to send.
        /// @param Time Timeout to wait for the queue to be available in milliseconds.
        void Send(const void* Item_To_Send, uint32_t Time = 0xFFFFFFFF);

        /// @brief Send an item to the queue.
        /// @param Item_To_Send Item to send.
        /// @param Time Timeout to wait for the queue to be available in milliseconds.
        void Send_To_Back(const void* Item_To_Send, uint32_t Time = 0xFFFFFFFF);

        /// @brief Send an item to the back of the queue.
        /// @param Item_To_Send Item to send.
        /// @param Time Timeout to wait for the queue to be available in milliseconds.
        void Send_To_Front(const void* Item_To_Send, uint32_t Time = 0xFFFFFFFF);

        /// @brief Overwrite the queue with an item.
        /// @param Item_To_Send Item to send.
        void Overwrite(const void* Item_To_Send);

        /// @brief Receive an item from the queue.
        /// @param Buffer Buffer to store the item.
        /// @param Time Timeout to wait for the queue to be available in milliseconds.
        void Receive(void* Buffer, uint32_t Time = 0xFFFFFFFF);

         /// @brief Return an item from the queue without removing it. 
         /// @param Buffer Buffer to store the item.
         /// @param Time Timeout to wait for the queue to be available in milliseconds.
        void Peek(void* Buffer, uint32_t Time = 0xFFFFFFFF);

        /// @brief Return the number of items in the queue.
        /// @return `Size_Type` Number of items in the queue.
        Size_Type Get_Available();

        /// @brief Return the number of free spaces in the queue.
        /// @return `Size_Type` Number of free spaces in the queue.
        Size_Type Get_Free_Space();

        /// @brief Clear the queue (make it empty).
        void Clear();

    private:

        /// @brief Handle of the queue.
        QueueHandle_t Handle;
    } Queue_Type;

}

#endif // Queue_Hpp_Included