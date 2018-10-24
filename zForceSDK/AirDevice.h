/*! \file
 * \brief Handles requests to the AirDevice.
 *
 * AirDevice is a specific implementation of a SensorDevice for zForce Air(TM).
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2017 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef DEVICE_SENSORDEVICE_AIRDEVICE_AIRDEVICE_H
#define DEVICE_SENSORDEVICE_AIRDEVICE_AIRDEVICE_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif // ZFORCECOMMON_H

/*!
 * \brief Struct representing an AirDevice.
 *
 * Struct representing an AirDevice. AirDevice is a specific
 * implementation of a SensorDevice for zForce Air(TM).
 *
 */
struct AirDevice
{
    SensorDevice; //!< Base device.
};

/*!
 * \brief Internal call used to create a new AirDevice.
 *
 * On failure, errno is set.
 * - ::EINVALIDSIZE - Invalid size
 *
 * \param connection The Connection the Device is associated with.
 * \param deviceType Which DeviceType to create.
 * \param deviceIndex Which Device Index to set.
 * \param size If this is used as a base class for another class, set size to
 *             non-zero.
 *
 * \return A pointer to the new Device.
 */
DLLINTERNAL AirDevice * AirDevice_New (Connection * connection,
                                       DeviceType deviceType,
                                       uint32_t deviceIndex, size_t size);

#endif // DEVICE_SENSORDEVICE_AIRDEVICE_AIRDEVICE_H

