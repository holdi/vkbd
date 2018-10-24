/*! \file
 * \brief StreamingDataFrame.
 *
 * \copyright
 * COPYRIGHT NOTICE: (c) 2017 Neonode Technologies AB. All rights reserved.
 *
 */

#ifndef DATAFRAME_STREAMINGDATAFRAME_H
#define DATAFRAME_STREAMINGDATAFRAME_H

#ifndef ZFORCECOMMON_H
    #error Please include "zForceCommon.h" before this file.
#endif

/*!
 * \sa struct StreamingDataFrame
 */
typedef struct StreamingDataFrame StreamingDataFrame;
/*!
 * \brief Struct containing the StreamingDataFrame information.
 *
 * StreamingDataFrame contains the DataFrame base, a pointer to the data and
 * its length.
 *
 */
struct StreamingDataFrame
{
    DataFrame;        //!< The base DataFrame.
    uint8_t * Data;   //!< Pointer to the data.
    uint32_t  Length; //!< Length of the data.
};

/*!
 * \brief Create a new StreamingDataFrame.
 *
 * Creates a new streaming data frame and all the resources needed.
 * \n\n
 * On failure, errno is set.
 * - ::EOUTOFMEMORY - Memory allocation failed.
 *
 * \return Return a pointer to the allocated StreamingDataFrame upon success,
 *         otherwise a NULL pointer is returned and errno is set accordingly.
 */
DLLEXTERNAL StreamingDataFrame * StreamingDataFrame_New (
        uint64_t relativeTimeoutMilliSeconds, uint32_t length);

/*!
 * \brief The streaming DataFrameType.
 */
#define STREAMINGDATAFRAMETYPE "Streaming"

#endif // DATAFRAME_STREAMINGDATAFRAME_H

