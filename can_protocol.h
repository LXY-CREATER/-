#ifndef __CAN_PROTOCOL_H
#define __CAN_PROTOCOL_H

#include "stm32f1xx_hal.h"

// CAN ID���� (MITģʽ)
#define MOTOR_X_CMD_ID 0x201
#define MOTOR_Y_CMD_ID 0x202
#define MOTOR_Z_CMD_ID 0x203

//���������
#define HEARTBEAT_ID 0X200

// ��������
void send_motor_command(uint8_t motor_id, float torque);
void can_receive_handler(uint32_t id, uint8_t* data);
void send_heartbeat(void);

#endif
