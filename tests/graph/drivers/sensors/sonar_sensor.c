// Pseudo code which contains uMsg api function calls to test graph generation

int main(void) {
  // single task which will publish messages and then read them back
  xTaskCreate(dummy_task, "dummy_task", 1000, NULL, 1, NULL);
  vTaskStartScheduler();

  return 0;
}

static void dummy_task(void* params) {
  umsg_sensor_imu_t msg;
  while (1) {
    // read sensor via I2C
    i2c_read(&msg)
        // publish umsg
        umsg_sensors_sonar_publish(&msg);
  }
}
