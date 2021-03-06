/**
 * Author: Crownstone Team
 * Author: Crownstone Team
 * License: LGPLv3+, Apache License 2.0, and/or MIT (triple-licensed)
 */

#include "ble/cs_Handlers.h"

#include <storage/cs_Settings.h>
#include <drivers/cs_RTC.h>
#include <events/cs_EventDispatcher.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <pstorage.h>
#if BUILD_MESHING == 1
#include <rbc_mesh.h>
#endif

// Called by softdevice
// Since we init the softdevice with app scheduler, this callback runs on the main thread.
void sys_evt_dispatch(uint32_t sys_evt) {

//	LOGi("Sys evt dispatch: %d", sys_evt);

//	LOGi("interrupt level=%u", __get_IPSR() & 0x1FF);

    if ((sys_evt == NRF_EVT_FLASH_OPERATION_SUCCESS) ||
            (sys_evt == NRF_EVT_FLASH_OPERATION_ERROR)) {
    	pstorage_sys_event_handler(sys_evt);
    }

#if BUILD_MESHING == 1
    Settings& settings = Settings::getInstance();
    if (settings.isInitialized() && settings.isSet(CONFIG_MESH_ENABLED)) {
		rbc_mesh_sd_evt_handler(sys_evt);
		storage_sys_evt_handler(sys_evt);
    }
#endif

    switch(sys_evt) {
    case NRF_EVT_POWER_FAILURE_WARNING: {
    	EventDispatcher::getInstance().dispatch(EVT_BROWNOUT_IMPENDING);
    }
    }

}

#ifdef __cplusplus
}
#endif

