#include "stm32f4xx.h"
#include "RttSelf.h"
#include "sys.h"
int main()
{
	
	
	while(1)
	{
		Debug_Log_Self("get_rcc_clock %d\r\n");
		delay_s(1);
	}

}
