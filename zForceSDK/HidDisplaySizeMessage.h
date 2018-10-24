/*! \file
 * \brief A HidDisplaySizeMessage that contains the Hid Display Size.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2018 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef MESSAGE_HIDDISPLAYSIZEMESSAGE_HIDDISPLAYSIZEMESSAGE_H
#define MESSAGE_HIDDISPLAYSIZEMESSAGE_HIDDISPLAYSIZEMESSAGE_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

/*!
 * \brief This structure represents a Hid Display Size Message.
 *
 * This structure represents a message containing the Hid Display Size.
 */
struct HidDisplaySizeMessage
{
    Message;             //!< Base Message.
    uint32_t SizeX;      //!< X Size.
    bool     HasSizeX;   //!< Is the X Size reported?
    uint32_t SizeY;      //!< Y Size.
    bool     HasSizeY;   //!< Is the Y Size reported?
};

/*!
 * \brief Internal constructor for HidDisplaySizeMessage.
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
 * \return Pointer to HidDisplaySizeMessage.
 */
DLLINTERNAL HidDisplaySizeMessage * HidDisplaySizeMessage_New (MessageGroup messageGroup, uint32_t size);

#endif // MESSAGE_HIDDISPLAYSIZEMESSAGE_HIDDISPLAYSIZEMESSAGE_H

