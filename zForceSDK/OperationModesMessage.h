/*! \file
 * \brief An OperationModesMessage contains the modes the Device is set to.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2017 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef MESSAGE_OPERATIONMODESMESSAGE_OPERATIONMODESMESSAGE_H
#define MESSAGE_OPERATIONMODESMESSAGE_OPERATIONMODESMESSAGE_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

/*!
 * \brief This structure represents a operation mode message.
 *
 * This structure represents a message containing operation mode information.
 * The operating modes of the Device is described by two bitmasks.
 * The Mask contains which modes were changed and Values contains what value
 * they were set to.
 */
struct OperationModesMessage
{
    Message;               //!< Base Message.
    OperationModes Mask;   //!< Mode Mask.
    OperationModes Values; //!< Mode Values.
};

/*!
 * \brief Internal constructor for OperationModesMessage.
 *
 * Do not use this, but use the Factory creator instead.
 * \n\n
 * On failure, see errno.
 * - ::EOUTOFMEMORY - Out of memory.
 * - ::EINVALIDSIZE - Invalid size.
 *
 * \param messageGroup MessageGroup of Message.
 * \param size If this is used as a base class for another class, set size to
 *             non-zero.
 *
 * \return Pointer to OperationModesMessage.
 */
DLLINTERNAL OperationModesMessage * OperationModesMessage_New
                                        (MessageGroup messageGroup,
                                         uint32_t size);

#endif // MESSAGE_OPERATIONMODESMESSAGE_OPERATIONMODESMESSAGE_H

