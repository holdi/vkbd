/*! \file
 * \brief An TouchMessage contains the Data of a Touch.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2017 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef MESSAGE_TOUCHMESSAGE_TOUCHMESSAGE_H
#define MESSAGE_TOUCHMESSAGE_TOUCHMESSAGE_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

/*!
 * \brief This structure represents a touch message.
 *
 * This structure represents a message containing touch information.
 */
struct TouchMessage
{
    Message;                         //!< Base Message.
    uint32_t         Id;             //!< Id of the Touch.
    TouchEvent       Event;          //!< Event of the Touch.
    CartesianCoordinates;            //!< X, Y, Z coordinates.
    uint32_t         SizeX;          //!< Size of the object on the X axis.
    bool             HasSizeX;       //!< Is the size reported for X?
    uint32_t         SizeY;          //!< Size of the object on the Y axis.
    bool             HasSizeY;       //!< Is the size reported for Y?
    uint32_t         SizeZ;          //!< Size of the object on the Z axis.
    bool             HasSizeZ;       //!< Is the size reported for Z?
    TouchOrientation Orientation;    //!< Orientation of the object.
    bool             HasOrientation; //!< Is Orientation reported?
    uint32_t         Confidence;     //!< Detection confidence.
    bool             HasConfidence;  //!< Is Confidence reported?
    uint32_t         Pressure;       //!< Pressure of the object.
    bool             HasPressure;    //!< Is Pressure reported?
    uint64_t         Timestamp;      //!< Message timestamp.
    bool             HasTimestamp;   //!< Is Timestamp reported?
};

/*!
 * \brief Internal constructor for TouchMessage.
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
 * \return Pointer to TouchMessage.
 */
DLLINTERNAL TouchMessage * TouchMessage_New (MessageGroup messageGroup,
                                             uint32_t size);

#endif // MESSAGE_TOUCHMESSAGE_TOUCHMESSAGE_H

