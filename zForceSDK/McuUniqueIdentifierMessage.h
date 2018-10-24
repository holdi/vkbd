/*! \file
 * \brief Brief description of module's purpose.
 *
 * More detailed description of module's purpose
 * that can span more than one line.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2017-2018 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef MESSAGE_MCUUNIQUEIDENTIFIERMESSAGE_MCUUNIQUEIDENTIFIERMESSAGE_H
#define MESSAGE_MCUUNIQUEIDENTIFIERMESSAGE_MCUUNIQUEIDENTIFIERMESSAGE_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

 /*!
 * \brief This structure represents a mcu unique identifier message.
 *
 * This structure represents a message which contains the unique mcu identifier of a platform.
 */
struct McuUniqueIdentifierMessage
{
    Message;                       //!< Base Message.
    uint8_t * McuUniqueIdentifier; //!< Mcu identifier.
    uint32_t  BufferSize;          //!< Size of mcu identifier.
};

/*!
* \brief Internal constructor for McuUniqueIdentifier.
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
* \return Pointer to McuUniqueIdentifierMessage.
*/
DLLINTERNAL McuUniqueIdentifierMessage * McuUniqueIdentifierMessage_New
                                      (MessageGroup messageGroup,
                                       uint32_t size);

#endif // MESSAGE_MCUUNIQUEIDENTIFIERMESSAGE_MCUUNIQUEIDENTIFIERMESSAGE_H

