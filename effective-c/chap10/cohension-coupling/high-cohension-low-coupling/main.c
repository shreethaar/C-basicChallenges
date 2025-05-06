int main() {
    temp_sensor_init();
    display_init();
    
    while(1) {
        TemperatureData data = temp_sensor_read();
        display_temperature(data.current_temp);
        delay(1000);
    }
    
    return 0;
}
