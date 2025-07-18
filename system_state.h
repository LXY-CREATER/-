#ifndef __SYSTEM_STATE_H
#define __SYSTEM_STATE_H

#include "stm32f1xx_hal.h"

// ϵͳ״̬����
typedef enum {
    SYS_STATE_INIT,
    SYS_STATE_RUNNING,
    SYS_STATE_EMERGENCY_STOP
} SystemState;

// ����ȫ�ֱ���
extern SystemState g_system_state;

// ��������
void system_state_machine(void);
void emergency_button_handler(void);

#endif
