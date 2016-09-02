/*
 * This file generated automatically from dpms.xml by c-client.xsl using XSLT.
 * Edit at your peril.
 */

/**
 * @defgroup XCB_DPMS_API XCB DPMS API
 * @brief DPMS XCB Protocol Implementation.
 * @{
 **/

#ifndef __DPMS_H
#define __DPMS_H

#include "xcb.h"

#define XCB_DPMS_MAJOR_VERSION 0
#define XCB_DPMS_MINOR_VERSION 0
  
extern xcb_extension_t xcb_dpms_id;

/**
 * @brief xcb_dpms_get_version_cookie_t
 **/
typedef struct xcb_dpms_get_version_cookie_t {
    unsigned int sequence; /**<  */
} xcb_dpms_get_version_cookie_t;

/** Opcode for xcb_dpms_get_version. */
#define XCB_DPMS_GET_VERSION 0

/**
 * @brief xcb_dpms_get_version_request_t
 **/
typedef struct xcb_dpms_get_version_request_t {
    uint8_t  major_opcode; /**<  */
    uint8_t  minor_opcode; /**<  */
    uint16_t length; /**<  */
    uint16_t client_major_version; /**<  */
    uint16_t client_minor_version; /**<  */
} xcb_dpms_get_version_request_t;

/**
 * @brief xcb_dpms_get_version_reply_t
 **/
typedef struct xcb_dpms_get_version_reply_t {
    uint8_t  response_type; /**<  */
    uint8_t  pad0; /**<  */
    uint16_t sequence; /**<  */
    uint32_t length; /**<  */
    uint16_t server_major_version; /**<  */
    uint16_t server_minor_version; /**<  */
} xcb_dpms_get_version_reply_t;

/**
 * @brief xcb_dpms_capable_cookie_t
 **/
typedef struct xcb_dpms_capable_cookie_t {
    unsigned int sequence; /**<  */
} xcb_dpms_capable_cookie_t;

/** Opcode for xcb_dpms_capable. */
#define XCB_DPMS_CAPABLE 1

/**
 * @brief xcb_dpms_capable_request_t
 **/
typedef struct xcb_dpms_capable_request_t {
    uint8_t  major_opcode; /**<  */
    uint8_t  minor_opcode; /**<  */
    uint16_t length; /**<  */
} xcb_dpms_capable_request_t;

/**
 * @brief xcb_dpms_capable_reply_t
 **/
typedef struct xcb_dpms_capable_reply_t {
    uint8_t  response_type; /**<  */
    uint8_t  pad0; /**<  */
    uint16_t sequence; /**<  */
    uint32_t length; /**<  */
    uint8_t  capable; /**<  */
} xcb_dpms_capable_reply_t;

/**
 * @brief xcb_dpms_get_timeouts_cookie_t
 **/
typedef struct xcb_dpms_get_timeouts_cookie_t {
    unsigned int sequence; /**<  */
} xcb_dpms_get_timeouts_cookie_t;

/** Opcode for xcb_dpms_get_timeouts. */
#define XCB_DPMS_GET_TIMEOUTS 2

/**
 * @brief xcb_dpms_get_timeouts_request_t
 **/
typedef struct xcb_dpms_get_timeouts_request_t {
    uint8_t  major_opcode; /**<  */
    uint8_t  minor_opcode; /**<  */
    uint16_t length; /**<  */
} xcb_dpms_get_timeouts_request_t;

/**
 * @brief xcb_dpms_get_timeouts_reply_t
 **/
typedef struct xcb_dpms_get_timeouts_reply_t {
    uint8_t  response_type; /**<  */
    uint8_t  pad0; /**<  */
    uint16_t sequence; /**<  */
    uint32_t length; /**<  */
    uint16_t standby_timeout; /**<  */
    uint16_t suspend_timeout; /**<  */
    uint16_t off_timeout; /**<  */
} xcb_dpms_get_timeouts_reply_t;

/** Opcode for xcb_dpms_set_timeouts. */
#define XCB_DPMS_SET_TIMEOUTS 3

/**
 * @brief xcb_dpms_set_timeouts_request_t
 **/
typedef struct xcb_dpms_set_timeouts_request_t {
    uint8_t  major_opcode; /**<  */
    uint8_t  minor_opcode; /**<  */
    uint16_t length; /**<  */
    uint16_t standby_timeout; /**<  */
    uint16_t suspend_timeout; /**<  */
    uint16_t off_timeout; /**<  */
} xcb_dpms_set_timeouts_request_t;

/** Opcode for xcb_dpms_enable. */
#define XCB_DPMS_ENABLE 4

/**
 * @brief xcb_dpms_enable_request_t
 **/
typedef struct xcb_dpms_enable_request_t {
    uint8_t  major_opcode; /**<  */
    uint8_t  minor_opcode; /**<  */
    uint16_t length; /**<  */
} xcb_dpms_enable_request_t;

/** Opcode for xcb_dpms_disable. */
#define XCB_DPMS_DISABLE 5

/**
 * @brief xcb_dpms_disable_request_t
 **/
typedef struct xcb_dpms_disable_request_t {
    uint8_t  major_opcode; /**<  */
    uint8_t  minor_opcode; /**<  */
    uint16_t length; /**<  */
} xcb_dpms_disable_request_t;

/** Opcode for xcb_dpms_force_level. */
#define XCB_DPMS_FORCE_LEVEL 6

/**
 * @brief xcb_dpms_force_level_request_t
 **/
typedef struct xcb_dpms_force_level_request_t {
    uint8_t  major_opcode; /**<  */
    uint8_t  minor_opcode; /**<  */
    uint16_t length; /**<  */
    uint16_t power_level; /**<  */
} xcb_dpms_force_level_request_t;

/**
 * @brief xcb_dpms_info_cookie_t
 **/
typedef struct xcb_dpms_info_cookie_t {
    unsigned int sequence; /**<  */
} xcb_dpms_info_cookie_t;

/** Opcode for xcb_dpms_info. */
#define XCB_DPMS_INFO 7

/**
 * @brief xcb_dpms_info_request_t
 **/
typedef struct xcb_dpms_info_request_t {
    uint8_t  major_opcode; /**<  */
    uint8_t  minor_opcode; /**<  */
    uint16_t length; /**<  */
} xcb_dpms_info_request_t;

/**
 * @brief xcb_dpms_info_reply_t
 **/
typedef struct xcb_dpms_info_reply_t {
    uint8_t  response_type; /**<  */
    uint8_t  pad0; /**<  */
    uint16_t sequence; /**<  */
    uint32_t length; /**<  */
    uint16_t power_level; /**<  */
    uint8_t  state; /**<  */
} xcb_dpms_info_reply_t;


/*****************************************************************************
 **
 ** xcb_dpms_get_version_cookie_t xcb_dpms_get_version
 ** 
 ** @param xcb_connection_t *c
 ** @param uint16_t          client_major_version
 ** @param uint16_t          client_minor_version
 ** @returns xcb_dpms_get_version_cookie_t
 **
 *****************************************************************************/
 
xcb_dpms_get_version_cookie_t
xcb_dpms_get_version (xcb_connection_t *c  /**< */,
                      uint16_t          client_major_version  /**< */,
                      uint16_t          client_minor_version  /**< */);


/*****************************************************************************
 **
 ** xcb_dpms_get_version_cookie_t xcb_dpms_get_version_unchecked
 ** 
 ** @param xcb_connection_t *c
 ** @param uint16_t          client_major_version
 ** @param uint16_t          client_minor_version
 ** @returns xcb_dpms_get_version_cookie_t
 **
 *****************************************************************************/
 
xcb_dpms_get_version_cookie_t
xcb_dpms_get_version_unchecked (xcb_connection_t *c  /**< */,
                                uint16_t          client_major_version  /**< */,
                                uint16_t          client_minor_version  /**< */);


/*****************************************************************************
 **
 ** xcb_dpms_get_version_reply_t * xcb_dpms_get_version_reply
 ** 
 ** @param xcb_connection_t               *c
 ** @param xcb_dpms_get_version_cookie_t   cookie
 ** @param xcb_generic_error_t           **e
 ** @returns xcb_dpms_get_version_reply_t *
 **
 *****************************************************************************/
 
xcb_dpms_get_version_reply_t *
xcb_dpms_get_version_reply (xcb_connection_t               *c  /**< */,
                            xcb_dpms_get_version_cookie_t   cookie  /**< */,
                            xcb_generic_error_t           **e  /**< */);


/*****************************************************************************
 **
 ** xcb_dpms_capable_cookie_t xcb_dpms_capable
 ** 
 ** @param xcb_connection_t *c
 ** @returns xcb_dpms_capable_cookie_t
 **
 *****************************************************************************/
 
xcb_dpms_capable_cookie_t
xcb_dpms_capable (xcb_connection_t *c  /**< */);


/*****************************************************************************
 **
 ** xcb_dpms_capable_cookie_t xcb_dpms_capable_unchecked
 ** 
 ** @param xcb_connection_t *c
 ** @returns xcb_dpms_capable_cookie_t
 **
 *****************************************************************************/
 
xcb_dpms_capable_cookie_t
xcb_dpms_capable_unchecked (xcb_connection_t *c  /**< */);


/*****************************************************************************
 **
 ** xcb_dpms_capable_reply_t * xcb_dpms_capable_reply
 ** 
 ** @param xcb_connection_t           *c
 ** @param xcb_dpms_capable_cookie_t   cookie
 ** @param xcb_generic_error_t       **e
 ** @returns xcb_dpms_capable_reply_t *
 **
 *****************************************************************************/
 
xcb_dpms_capable_reply_t *
xcb_dpms_capable_reply (xcb_connection_t           *c  /**< */,
                        xcb_dpms_capable_cookie_t   cookie  /**< */,
                        xcb_generic_error_t       **e  /**< */);


/*****************************************************************************
 **
 ** xcb_dpms_get_timeouts_cookie_t xcb_dpms_get_timeouts
 ** 
 ** @param xcb_connection_t *c
 ** @returns xcb_dpms_get_timeouts_cookie_t
 **
 *****************************************************************************/
 
xcb_dpms_get_timeouts_cookie_t
xcb_dpms_get_timeouts (xcb_connection_t *c  /**< */);


/*****************************************************************************
 **
 ** xcb_dpms_get_timeouts_cookie_t xcb_dpms_get_timeouts_unchecked
 ** 
 ** @param xcb_connection_t *c
 ** @returns xcb_dpms_get_timeouts_cookie_t
 **
 *****************************************************************************/
 
xcb_dpms_get_timeouts_cookie_t
xcb_dpms_get_timeouts_unchecked (xcb_connection_t *c  /**< */);


/*****************************************************************************
 **
 ** xcb_dpms_get_timeouts_reply_t * xcb_dpms_get_timeouts_reply
 ** 
 ** @param xcb_connection_t                *c
 ** @param xcb_dpms_get_timeouts_cookie_t   cookie
 ** @param xcb_generic_error_t            **e
 ** @returns xcb_dpms_get_timeouts_reply_t *
 **
 *****************************************************************************/
 
xcb_dpms_get_timeouts_reply_t *
xcb_dpms_get_timeouts_reply (xcb_connection_t                *c  /**< */,
                             xcb_dpms_get_timeouts_cookie_t   cookie  /**< */,
                             xcb_generic_error_t            **e  /**< */);


/*****************************************************************************
 **
 ** xcb_void_cookie_t xcb_dpms_set_timeouts_checked
 ** 
 ** @param xcb_connection_t *c
 ** @param uint16_t          standby_timeout
 ** @param uint16_t          suspend_timeout
 ** @param uint16_t          off_timeout
 ** @returns xcb_void_cookie_t
 **
 *****************************************************************************/
 
xcb_void_cookie_t
xcb_dpms_set_timeouts_checked (xcb_connection_t *c  /**< */,
                               uint16_t          standby_timeout  /**< */,
                               uint16_t          suspend_timeout  /**< */,
                               uint16_t          off_timeout  /**< */);


/*****************************************************************************
 **
 ** xcb_void_cookie_t xcb_dpms_set_timeouts
 ** 
 ** @param xcb_connection_t *c
 ** @param uint16_t          standby_timeout
 ** @param uint16_t          suspend_timeout
 ** @param uint16_t          off_timeout
 ** @returns xcb_void_cookie_t
 **
 *****************************************************************************/
 
xcb_void_cookie_t
xcb_dpms_set_timeouts (xcb_connection_t *c  /**< */,
                       uint16_t          standby_timeout  /**< */,
                       uint16_t          suspend_timeout  /**< */,
                       uint16_t          off_timeout  /**< */);


/*****************************************************************************
 **
 ** xcb_void_cookie_t xcb_dpms_enable_checked
 ** 
 ** @param xcb_connection_t *c
 ** @returns xcb_void_cookie_t
 **
 *****************************************************************************/
 
xcb_void_cookie_t
xcb_dpms_enable_checked (xcb_connection_t *c  /**< */);


/*****************************************************************************
 **
 ** xcb_void_cookie_t xcb_dpms_enable
 ** 
 ** @param xcb_connection_t *c
 ** @returns xcb_void_cookie_t
 **
 *****************************************************************************/
 
xcb_void_cookie_t
xcb_dpms_enable (xcb_connection_t *c  /**< */);


/*****************************************************************************
 **
 ** xcb_void_cookie_t xcb_dpms_disable_checked
 ** 
 ** @param xcb_connection_t *c
 ** @returns xcb_void_cookie_t
 **
 *****************************************************************************/
 
xcb_void_cookie_t
xcb_dpms_disable_checked (xcb_connection_t *c  /**< */);


/*****************************************************************************
 **
 ** xcb_void_cookie_t xcb_dpms_disable
 ** 
 ** @param xcb_connection_t *c
 ** @returns xcb_void_cookie_t
 **
 *****************************************************************************/
 
xcb_void_cookie_t
xcb_dpms_disable (xcb_connection_t *c  /**< */);


/*****************************************************************************
 **
 ** xcb_void_cookie_t xcb_dpms_force_level_checked
 ** 
 ** @param xcb_connection_t *c
 ** @param uint16_t          power_level
 ** @returns xcb_void_cookie_t
 **
 *****************************************************************************/
 
xcb_void_cookie_t
xcb_dpms_force_level_checked (xcb_connection_t *c  /**< */,
                              uint16_t          power_level  /**< */);


/*****************************************************************************
 **
 ** xcb_void_cookie_t xcb_dpms_force_level
 ** 
 ** @param xcb_connection_t *c
 ** @param uint16_t          power_level
 ** @returns xcb_void_cookie_t
 **
 *****************************************************************************/
 
xcb_void_cookie_t
xcb_dpms_force_level (xcb_connection_t *c  /**< */,
                      uint16_t          power_level  /**< */);


/*****************************************************************************
 **
 ** xcb_dpms_info_cookie_t xcb_dpms_info
 ** 
 ** @param xcb_connection_t *c
 ** @returns xcb_dpms_info_cookie_t
 **
 *****************************************************************************/
 
xcb_dpms_info_cookie_t
xcb_dpms_info (xcb_connection_t *c  /**< */);


/*****************************************************************************
 **
 ** xcb_dpms_info_cookie_t xcb_dpms_info_unchecked
 ** 
 ** @param xcb_connection_t *c
 ** @returns xcb_dpms_info_cookie_t
 **
 *****************************************************************************/
 
xcb_dpms_info_cookie_t
xcb_dpms_info_unchecked (xcb_connection_t *c  /**< */);


/*****************************************************************************
 **
 ** xcb_dpms_info_reply_t * xcb_dpms_info_reply
 ** 
 ** @param xcb_connection_t        *c
 ** @param xcb_dpms_info_cookie_t   cookie
 ** @param xcb_generic_error_t    **e
 ** @returns xcb_dpms_info_reply_t *
 **
 *****************************************************************************/
 
xcb_dpms_info_reply_t *
xcb_dpms_info_reply (xcb_connection_t        *c  /**< */,
                     xcb_dpms_info_cookie_t   cookie  /**< */,
                     xcb_generic_error_t    **e  /**< */);


#endif

/**
 * @}
 */
