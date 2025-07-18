#ifndef __MOTOR_CONTROL_H
#define __MOTOR_CONTROL_H

#include "stm32f1xx_hal.h"
#include "pid_controller.h"

// ���ID����
#define MOTOR_X 0
#define MOTOR_Y 1
#define MOTOR_Z 2

// ����ⲿ��������
//extern MotorController motor_x, motor_y, motor_z;

// ������ƽṹ��
typedef struct {
  uint8_t id;
  float current_angle;
  float target_angle;
  float max_angle;
  float min_angle;
  PIDController pid;
  uint32_t last_update;
} MotorController;

// ��ʼ�����������
void motor_init(MotorController* motor, uint8_t id, float min_angle, float max_angle);

// ����Ŀ��Ƕ�
void set_target_angle(MotorController* motor, float angle);

// ���¿���ѭ��
void motor_control_update(MotorController* motor);

// ����ֹͣ
void emergency_stop(void);

#endif
