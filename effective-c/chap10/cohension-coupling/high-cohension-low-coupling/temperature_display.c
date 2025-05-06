#include "temperature_display.h"
#include "temperature_sensor.h"
#include "screen_driver.h" // Only screen-specific dependency

void display_init(void) {
    screen_init();
}

void display_temperature(float temp) {
    char buffer[20];
    sprintf(buffer, "Temp: %.1fC", temp);
    screen_print(buffer);
}
