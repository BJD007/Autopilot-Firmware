void readSensorData()
{
    // Subscribe to sensor_combined topic
    int sensor_sub_fd = orb_subscribe(ORB_ID(sensor_combined));
    struct sensor_combined_s sensor_data;
    
    // Check for new data
    bool updated;
    orb_check(sensor_sub_fd, &updated);
    if (updated) {
        orb_copy(ORB_ID(sensor_combined), sensor_sub_fd, &sensor_data);
        // Process sensor data
        float accel_x = sensor_data.accelerometer_m_s2[0];
        float accel_y = sensor_data.accelerometer_m_s2[1];
        float accel_z = sensor_data.accelerometer_m_s2[2];
        
        float gyro_x = sensor_data.gyro_rad[0];
        float gyro_y = sensor_data.gyro_rad[1];
        float gyro_z = sensor_data.gyro_rad[2];
        
        // Additional processing as needed
    }
}
