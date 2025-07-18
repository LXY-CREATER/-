#ifndef __SYSTEM_STATE_H
#define __SYSTEM_STATE_H

#include "stm32f1xx_hal.h"

// 系统状态定义
typedef enum {
    SYS_STATE_INIT,
    SYS_STATE_RUNNING,
    SYS_STATE_EMERGENCY_STOP
} SystemState;

// 声明全局变量
extern SystemState g_system_state;

// 函数声明
void system_state_machine(void);
void emergency_button_handler(void);

#endif
