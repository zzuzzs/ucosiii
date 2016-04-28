#include "includes.h"
#include "bsp.h"

void BspInit(void)
{
	SysTick_CLKSourceConfig(SysTick_CLKSource_HCLK_Div8);
	OS_CPU_SysTickInit(9000);
}

void CPU_TS_TmrInit(void)
{
}


CPU_TS_TMR  CPU_TS_TmrRd (void)
{
//    return ((CPU_TS_TMR)DWT_CYCCNT);
	return (CPU_TS_TMR)0;
}

