#include "MyPrintf.h"
#include "usart.h"

int MyPrintf(const char* format, ...)
{
    int ret;
    char buffer[256];
    va_list args;
    va_start(args, format);
    ret = vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);
    HAL_UART_Transmit(&huart1, (uint8_t*)buffer, ret, 1000);
    return ret;
}