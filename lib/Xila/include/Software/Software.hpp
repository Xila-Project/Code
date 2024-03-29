/// @file Software.hpp
/// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
/// @brief
/// @version 0.1.0
/// @date 20-07-2022
///
/// @copyright Copyright (c) 2022

#ifndef Software_Hpp_Included
#define Software_Hpp_Included

#include "../Module/Module.hpp"

#include "Software_Handle.hpp"

#include <vector>

/*
///
/// @brief String to 16 bits encoded instruction conversion macro.
///
#define Instruction(Sender, Argument_1, Argument_2, Argument_3) (Sender * 16777216 + Argument_1 * 65536 + Argument_2 * 256 + Argument_3)*/

namespace Xila_Namespace
{

    typedef class Softwares_Class Softwares_Type;

    /// @brief Software base class.
    namespace Softwares_Types
    {
        typedef class Software_Class : public Module_Class
        {
        public:
            // - Methods

            // - Getters

            /// @brief Get the software's handle.
            /// @return const Software_Handle_Type*
            const Software_Handle_Type *Get_Handle() const;

            /// @brief Get the software's owner user.
            /// @return const Accounts_Types::User_Type*
            const Accounts_Types::User_Type *Get_Owner_User() const;

        protected:
            // - Methods

            // - - Constructor / Destructor
            Software_Class() = delete;

            /// @brief Construct a new Software_Class object.
            /// @param Handle Software handle.
            Software_Class(const Software_Handle_Type& Handle, const Accounts_Types::User_Type *Owner_User, Size_Type Main_Task_Stack_Size = Default_Main_Task_Stack_Size, Size_Type Queue_Size = Default_Instruction_Queue_Size);
            virtual ~Software_Class();

            // - - Task

            static void Start_Main_Task_Function(void *Instance_Pointer);
            virtual void Main_Task_Function(); // ? : Instead of virtual function, use lambda function in constructor ?

            // - Attributes

            /// @brief Software task handle.
            Task_Type Main_Task;

        private:
            // - Attributes
            // - - Local attributes

            const Accounts_Types::User_Type *Owner_User;
            /// @brief Software task handle.
            const Software_Handle_Type& Handle_Pointer;

            // - - Static attributes
            /// @brief Opened software pointer array
            static std::vector<Software_Class *> List;

            friend class Xila_Namespace::Softwares_Class;

        } Software_Type;
    }
}

#endif