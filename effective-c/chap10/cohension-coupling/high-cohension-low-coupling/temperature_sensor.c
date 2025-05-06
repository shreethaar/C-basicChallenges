#include "temperature_sensor.h"
#include "hardware_specific.h" // only hardware-specific dependency

static TemperatureData sensor_data;

void temp_sensor_init(void) {
    sensor_data.current_temp=0.0f;
    sensor_data.min_temp=-20.0f;
    sensor_data.max_temp=100.0f;
    hardware_init();
}

TemperatureData temp_sensor_read(void) {
    sensor_data.current_temp=read_hardware_temp();
    return sensor_data;
}

void temp_sensor_calibrate(float offset) {
    sensor_data.current_temp += offset;
}
