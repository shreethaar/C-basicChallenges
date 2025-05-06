#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H

typedef struct {
    float current_temp;
    float min_temp;
    float max_temp;
} TemperatureData;

void temp_sensor_init(void);
TemperatureData temp_sensor_read(void);
void temp_sensor_calibrate(float offset);

#endif


