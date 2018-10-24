/*! \file
 * \brief A ResolutionMessage that contains the Resolution a Device is set to.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2017 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef MESSAGE_RESOLUTIONMESSAGE_RESOLUTIONMESSAGE_H
#define MESSAGE_RESOLUTIONMESSAGE_RESOLUTIONMESSAGE_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

/*!
 * \brief This structure represents a resolution message.
 *
 * This structure represents a message containing resolution information.
 */
struct ResolutionMessage
{
    Message;              //!< Base Message.
    CartesianCoordinates; //!< X, Y and Z Coordinates.
};

/*!
 * \brief Internal constructor for ResolutionMessage.
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
 * \return Pointer to ResolutionMessage.
 */
DLLINTERNAL ResolutionMessage * ResolutionMessage_New
                                    (MessageGroup messageGroup, uint32_t size);

#endif // MESSAGE_RESOLUTIONMESSAGE_RESOLUTIONMESSAGE_H

