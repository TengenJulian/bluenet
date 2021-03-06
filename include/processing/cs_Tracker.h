/**
 * Author: Crownstone Team
 * Copyright: Crownstone (https://crownstone.rocks)
 * Date: May 20, 2016
 * License: LGPLv3+, Apache License 2.0, and/or MIT (triple-licensed)
 */
#pragma once

#include <ble/cs_Stack.h>
#include <drivers/cs_Timer.h>
#include <structs/cs_TrackDevices.h>

#define TRACKER_UPATE_FREQUENCY 10

class Tracker : EventListener {
public:
	//! Gets a static singleton (no dynamic memory allocation)
	static Tracker& getInstance() {
		static Tracker instance;
		return instance;
	}

	void init();

	void setStack(Nrf51822BluetoothStack* stack);

	static void staticTick(Tracker* ptr);

	void writeTrackedDevices();

	void readTrackedDevices();

	void onBleEvent(ble_evt_t * p_ble_evt);

	void startTracking();

	void stopTracking();

	void removeTrackedDevice(TrackedDevice device);

	void addTrackedDevice(TrackedDevice device);

	TrackedDeviceList* getTrackedDevices();

	void setNearbyTimeout(uint16_t counts);

	uint16_t getNearbyTimeout();

	bool isTracking();

	void handleTrackedDeviceCommand(buffer_ptr_t buffer, uint16_t size);

	void handleEvent(uint16_t evt, void* p_data, uint16_t length);

protected:
	void tick();

	void publishTrackedDevices();

	void onAdvertisement(ble_gap_evt_adv_report_t* p_adv_report);

private:
	Tracker();

	uint16_t _timeoutCounts;

	bool _tracking;
	bool _trackIsNearby;

	TrackedDeviceList* _trackedDeviceList;

	Nrf51822BluetoothStack* _stack;

#if (NORDIC_SDK_VERSION >= 11)
	app_timer_t              _appTimerData;
	app_timer_id_t           _appTimerId;
#else
	uint32_t                 _appTimerId;
#endif

	uint8_t _trackBuffer[sizeof(tracked_device_list_t)];

};

