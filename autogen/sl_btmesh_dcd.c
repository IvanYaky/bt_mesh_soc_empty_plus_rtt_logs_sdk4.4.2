/******************************************************************************
 *
 * @file   sl_btmesh_dcd.c
 * @brief  BLE Mesh Device Composition Data and memory configuration
 *
 *  Autogenerated file, do not edit
 *
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/
// *INDENT-OFF*

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>
#include <stdint.h>
#include "sl_btmesh_memory_config.h"
#include "sl_bluetooth_config.h"
#include "sl_btmesh_dcd.h"
#include "sl_btmesh_config.h"
#include "sl_btmesh.h"
#include "sl_btmesh_capi_types.h"
#define U16TOA(A) ((A) & 0xFF), ((A) >> 8)

const uint8_t __mesh_dcd[] = {
  U16TOA(0x02FF), /* Company ID */
  U16TOA(0x0001), /* Product ID */
  U16TOA(0x0600), /* Version Number */
  U16TOA(SL_BTMESH_CONFIG_RPL_SIZE), /* Capacity of Replay Protection List */
  U16TOA(SL_BTMESH_FEATURE_BITMASK), /* Features Bitmask */
  /* Main */
    U16TOA(0x0000), /* Location */
    0x0B, /* Number of SIG Models = 11 */
    0x00, /* Number of Vendor Models = 0 */
    /* SIG Models */
      U16TOA(0x0000), /* Configuration Server */
      U16TOA(0x0002), /* Health Server */
      U16TOA(0x1000), /* Generic OnOff Server */
      U16TOA(0x1002), /* Generic Level Server */
      U16TOA(0x1004), /* Generic Default Transition Time Server */
      U16TOA(0x1006), /* Generic Power OnOff Server */
      U16TOA(0x1007), /* Generic Power OnOff Setup Server */
      U16TOA(0x1300), /* Light Lightness Server */
      U16TOA(0x1301), /* Light Lightness Setup Server */
      U16TOA(0x1100), /* Sensor Server */
      U16TOA(0x1101), /* Sensor Setup Server */
  /* Light LC */
    U16TOA(0x0000), /* Location */
    0x03, /* Number of SIG Models = 3 */
    0x00, /* Number of Vendor Models = 0 */
    /* SIG Models */
      U16TOA(0x1000), /* Generic OnOff Server */
      U16TOA(0x130F), /* Light LC Server */
      U16TOA(0x1310), /* Light LC Setup Server */
};

const size_t __mesh_dcd_len = sizeof(__mesh_dcd);
const uint8_t *__mesh_dcd_ptr = __mesh_dcd;

const uint8_t __mesh_dcd_page_1[] = {

  /* Element: Main (0) */
  0x0B, /* Number of SIG Models = 11 */
  0x00, /* Number of Vendor Models = 0 */

    /* SIG Model 0: Configuration Server (0x0000) */
    0x00, /* Corresponding_Present = 0, Format = 0 (short), Extended_Items_Count = 0 */

    /* SIG Model 1: Health Server (0x0002) */
    0x00, /* Corresponding_Present = 0, Format = 0 (short), Extended_Items_Count = 0 */

    /* SIG Model 2: Generic OnOff Server (0x1000) */
    0x00, /* Corresponding_Present = 0, Format = 0 (short), Extended_Items_Count = 0 */

    /* SIG Model 3: Generic Level Server (0x1002) */
    0x00, /* Corresponding_Present = 0, Format = 0 (short), Extended_Items_Count = 0 */

    /* SIG Model 4: Generic Default Transition Time Server (0x1004) */
    0x00, /* Corresponding_Present = 0, Format = 0 (short), Extended_Items_Count = 0 */

    /* SIG Model 5: Generic Power OnOff Server (0x1006) */
    0x05, /* Corresponding_Present = 1, Format = 0 (short), Extended_Items_Count = 1 */
    0x00, /* Corresponding_Group_ID: 0 */
          /*  - Generic Power OnOff Server (0x1006) on Main (0) element */
          /*  - Generic Power OnOff Setup Server (0x1007) on Main (0) element */
          /* Extended_Model_Items */
    0x10, /*  - Generic OnOff Server (0x1000) on Main (0) element */
          /*    Element_Offset = 0, Model_Item_Index = 2 */

    /* SIG Model 6: Generic Power OnOff Setup Server (0x1007) */
    0x09, /* Corresponding_Present = 1, Format = 0 (short), Extended_Items_Count = 2 */
    0x00, /* Corresponding_Group_ID: 0 */
          /*  - Generic Power OnOff Server (0x1006) on Main (0) element */
          /*  - Generic Power OnOff Setup Server (0x1007) on Main (0) element */
          /* Extended_Model_Items */
    0x20, /*  - Generic Default Transition Time Server (0x1004) on Main (0) element */
          /*    Element_Offset = 0, Model_Item_Index = 4 */
    0x28, /*  - Generic Power OnOff Server (0x1006) on Main (0) element */
          /*    Element_Offset = 0, Model_Item_Index = 5 */

    /* SIG Model 7: Light Lightness Server (0x1300) */
    0x09, /* Corresponding_Present = 1, Format = 0 (short), Extended_Items_Count = 2 */
    0x01, /* Corresponding_Group_ID: 1 */
          /*  - Light Lightness Server (0x1300) on Main (0) element */
          /*  - Light Lightness Setup Server (0x1301) on Main (0) element */
          /* Extended_Model_Items */
    0x18, /*  - Generic Level Server (0x1002) on Main (0) element */
          /*    Element_Offset = 0, Model_Item_Index = 3 */
    0x28, /*  - Generic Power OnOff Server (0x1006) on Main (0) element */
          /*    Element_Offset = 0, Model_Item_Index = 5 */

    /* SIG Model 8: Light Lightness Setup Server (0x1301) */
    0x09, /* Corresponding_Present = 1, Format = 0 (short), Extended_Items_Count = 2 */
    0x01, /* Corresponding_Group_ID: 1 */
          /*  - Light Lightness Server (0x1300) on Main (0) element */
          /*  - Light Lightness Setup Server (0x1301) on Main (0) element */
          /* Extended_Model_Items */
    0x30, /*  - Generic Power OnOff Setup Server (0x1007) on Main (0) element */
          /*    Element_Offset = 0, Model_Item_Index = 6 */
    0x38, /*  - Light Lightness Server (0x1300) on Main (0) element */
          /*    Element_Offset = 0, Model_Item_Index = 7 */

    /* SIG Model 9: Sensor Server (0x1100) */
    0x01, /* Corresponding_Present = 1, Format = 0 (short), Extended_Items_Count = 0 */
    0x02, /* Corresponding_Group_ID: 2 */
          /*  - Sensor Server (0x1100) on Main (0) element */
          /*  - Sensor Setup Server (0x1101) on Main (0) element */

    /* SIG Model 10: Sensor Setup Server (0x1101) */
    0x05, /* Corresponding_Present = 1, Format = 0 (short), Extended_Items_Count = 1 */
    0x02, /* Corresponding_Group_ID: 2 */
          /*  - Sensor Server (0x1100) on Main (0) element */
          /*  - Sensor Setup Server (0x1101) on Main (0) element */
          /* Extended_Model_Items */
    0x48, /*  - Sensor Server (0x1100) on Main (0) element */
          /*    Element_Offset = 0, Model_Item_Index = 9 */

  /* Element: Light LC (1) */
  0x03, /* Number of SIG Models = 3 */
  0x00, /* Number of Vendor Models = 0 */

    /* SIG Model 0: Generic OnOff Server (0x1000) */
    0x00, /* Corresponding_Present = 0, Format = 0 (short), Extended_Items_Count = 0 */

    /* SIG Model 1: Light LC Server (0x130F) */
    0x09, /* Corresponding_Present = 1, Format = 0 (short), Extended_Items_Count = 2 */
    0x03, /* Corresponding_Group_ID: 3 */
          /*  - Light LC Server (0x130F) on Light LC (1) element */
          /*  - Light LC Setup Server (0x1310) on Light LC (1) element */
          /* Extended_Model_Items */
    0x00, /*  - Generic OnOff Server (0x1000) on Light LC (1) element */
          /*    Element_Offset = 0, Model_Item_Index = 0 */
    0x3F, /*  - Light Lightness Server (0x1300) on Main (0) element */
          /*    Element_Offset = -1, Model_Item_Index = 7 */

    /* SIG Model 2: Light LC Setup Server (0x1310) */
    0x05, /* Corresponding_Present = 1, Format = 0 (short), Extended_Items_Count = 1 */
    0x03, /* Corresponding_Group_ID: 3 */
          /*  - Light LC Server (0x130F) on Light LC (1) element */
          /*  - Light LC Setup Server (0x1310) on Light LC (1) element */
          /* Extended_Model_Items */
    0x08, /*  - Light LC Server (0x130F) on Light LC (1) element */
          /*    Element_Offset = 0, Model_Item_Index = 1 */
};


const mesh_dcd_page_t __mesh_dcd_pages[] = {
    {
        /* DCD Page 1 */
        .page_number = 1,
        .size = sizeof(__mesh_dcd_page_1),
        .data = __mesh_dcd_page_1
    },
    {
        /* List terminator */
        .page_number = 0,
        .size = 0,
        .data = NULL
    }
};

const mesh_dcd_page_t *__mesh_dcd_pages_ptr = __mesh_dcd_pages;

const mesh_memory_config_t __mesh_memory_config = {
  .max_elements = SL_BTMESH_CONFIG_MAX_ELEMENTS,
  .max_models = SL_BTMESH_CONFIG_MAX_MODELS,
  .max_net_keys = SL_BTMESH_CONFIG_MAX_NETKEYS,
  .max_appkeys = SL_BTMESH_CONFIG_MAX_APPKEYS,
  .max_friendships = SL_BTMESH_CONFIG_MAX_FRIENDSHIPS,
  .max_app_binds = SL_BTMESH_CONFIG_MAX_APP_BINDS,
  .max_subscriptions = SL_BTMESH_CONFIG_MAX_SUBSCRIPTIONS,
  .max_foundation_model_commands = SL_BTMESH_CONFIG_MAX_FOUNDATION_CLIENT_CMDS,
  .net_cache_size = SL_BTMESH_CONFIG_NET_CACHE_SIZE,
  .replay_size = SL_BTMESH_CONFIG_RPL_SIZE,
  .max_send_segs = SL_BTMESH_CONFIG_MAX_SEND_SEGS,
  .max_recv_segs = SL_BTMESH_CONFIG_MAX_RECV_SEGS,
  .max_virtual_addresses = SL_BTMESH_CONFIG_MAX_VAS,
  .max_provision_sessions = SL_BTMESH_CONFIG_MAX_PROV_SESSIONS,
  .max_provision_bearers = SL_BTMESH_CONFIG_MAX_PROV_BEARERS,
  .max_gatt_connections = SL_BTMESH_CONFIG_MAX_GATT_CONNECTIONS,
  .gatt_txqueue_size = SL_BTMESH_CONFIG_GATT_TXQ_SIZE,
  .provisioner_max_ddb_entries = SL_BTMESH_CONFIG_MAX_PROVISIONED_DEVICES,
  .provisioner_max_node_net_keys = SL_BTMESH_CONFIG_MAX_PROVISIONED_DEVICE_NETKEYS,
  .provisioner_max_node_app_keys = SL_BTMESH_CONFIG_MAX_PROVISIONED_DEVICE_APPKEYS,
  .pstore_write_interval_elem_seq = (1 << (SL_BTMESH_CONFIG_SEQNUM_WRITE_INTERVAL_EXP)),
  .friend_max_total_cache = SL_BTMESH_CONFIG_FRIEND_MAX_TOTAL_CACHE,
  .friend_max_single_cache = SL_BTMESH_CONFIG_FRIEND_MAX_SINGLE_CACHE,
  .friend_max_subs_list = SL_BTMESH_CONFIG_FRIEND_MAX_SUBS_LIST,
  .app_send_max_queue = SL_BTMESH_CONFIG_APP_TXQ_SIZE,
  .its_key_cache = SL_BTMESH_CONFIG_ITS_KEY_CACHE_SIZE,
  .proxy_max_access_control_list_entries = SL_BTMESH_CONFIG_MAX_PROXY_ACCESS_CONTROL_LIST_ENTRIES,
  .limit_prov_concurrent_kr = SL_BTMESH_CONFIG_LIMIT_PROV_CONCURRENT_KR
};

#ifdef __cplusplus
}
#endif
// *INDENT-ON*
