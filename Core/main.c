#include "stm32f4xx.h"
#include "RttSelf.h"
int main()
{
	Debug_Log_Self("RIGHT");
	while(1)
	{
		Debug_Log_Self("RIGHT\r\n");
	}
	return 0;
}
