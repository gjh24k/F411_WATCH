#include "sys.h"
#include "stm32f4xx.h"

#define AHB_INPUT  100 

void NVICInit(void)
{
//	NVIC_InitTypeDef  NVIC_InitStructure;
	
	/* Configure two bits for preemption priority */
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_4);
	
 
	
}

void delay_us(u16 us) 
{
	u32 temp;
	SysTick->LOAD=AHB_INPUT*us;              
	SysTick->VAL=0x00;                               
	SysTick->CTRL=0x00000005;                       
	do
	{
		temp=SysTick->CTRL;
	}while(temp&0x01&&!(temp&(1<<16)));
	SysTick->CTRL=0x00000004;                                
  SysTick->VAL=0x00;    
}

void delay_ms(u16 ms) 
{
	while( ms-- != 0)
	{
			delay_us(1000);     
	}
}

void delay_s(u16 s)       
{                                    
	while( s-- != 0)
	{
		delay_ms(1000);    
	}
}
					
				
				















