// Generated with Jinja2

#pragma once
#include <umsg_types.h>

// msg structure typedefs
typedef struct
{
    float gyro[3]; 
    float accel[3]; 
    float temperature; 
} umsg_sensors_imu_t;

typedef struct
{
    float pressure; 
    float temperature; 
} umsg_sensors_baro_t;


// api function headers
umsg_queue_handle_t umsg_sensors_imu_subscribe(uint32_t prescaler, uint8_t length);
void umsg_sensors_imu_publish(umsg_sensors_imu_t* data);
uint8_t umsg_sensors_imu_receive(umsg_queue_handle_t queue, umsg_sensors_imu_t* data, uint32_t timeout)
uint8_t umsg_sensors_imu_peek(msg_sensors_imu_t* data);

umsg_queue_handle_t umsg_sensors_baro_subscribe(uint32_t prescaler, uint8_t length);
void umsg_sensors_baro_publish(umsg_sensors_baro_t* data);
uint8_t umsg_sensors_baro_receive(umsg_queue_handle_t queue, umsg_sensors_baro_t* data, uint32_t timeout)
uint8_t umsg_sensors_baro_peek(msg_sensors_baro_t* data);
