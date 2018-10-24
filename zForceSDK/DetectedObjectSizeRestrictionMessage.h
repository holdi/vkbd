/*! \file
 * \brief A DetectedObjectSizeRestrictionMessage contains Detected Object
 * Size Restrictions of a Device.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2017 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef MESSAGE_DETECTEDOBJECTSIZERESTRICTIONMESSAGE_DETECTEDOBJECTSIZERESTRICTIONMESSAGE_H
#define MESSAGE_DETECTEDOBJECTSIZERESTRICTIONMESSAGE_DETECTEDOBJECTSIZERESTRICTIONMESSAGE_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

/*!
 * \brief This structure represents a detected object size restriction message.
 *
 * This structure represents a message which indicates if a device has
 * detected object size restriction on and for which maximum and minimum sizes.
 */
struct DetectedObjectSizeRestrictionMessage
{
    Message;                 //!< Base Message.
    uint32_t MinimumSize;    //!< Minimum size for device to detect.
    uint32_t MaximumSize;    //!< Maximum size for device to detect.
    bool     HasMinimumSize; //!< Is minimum size valid.
    bool     HasMaximumSize; //!< Is maximum size valid.
};

/*! Internal constructor for DetectedObjectSizeRestrictionMessage.
 * \brief Internal constructor for DetectedObjectSizeRestrictionMessage.
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
 * \return Pointer to DetectedObjectSizeRestrictionMessage.
 */
DLLINTERNAL DetectedObjectSizeRestrictionMessage
                                    * DetectedObjectSizeRestrictionMessage_New
                                    (MessageGroup messageGroup, uint32_t size);

#endif // MESSAGE_DETECTEDOBJECTSIZERESTRICTIONMESSAGE_DETECTEDOBJECTSIZERESTRICTIONMESSAGE_H

