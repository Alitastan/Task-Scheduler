
#include <stdint.h>

#define SRAM1_START	(0x20000000U)
#define SIZE_SRAM1 ((12) * (1024))
#define SRAM1_END ((SRAM1_START) + (SIZE_SRAM1))

#define STACK_START	SRAM1_END

extern uint32_t _etext;
extern uint32_t	_sdata;
extern uint32_t	_edata;
extern uint32_t _la_data;


extern uint32_t	_sbss;
extern uint32_t	_ebss;

//prototype of main
int main(void);

void __libc_init_array(void);

void Reset_Handler(void);
void NMI_Handler(void) 								__attribute__ ((weak, alias ("Default_Handler"))); 
void HardFault_Handler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void MemManage_Handler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void BusFault_Handler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void UsageFault_Handler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void SVC_Handler(void) 								__attribute__ ((weak, alias ("Default_Handler")));
void DebugMon_Handler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void PendSV_Handler(void) 							__attribute__ ((weak, alias ("Default_Handler")));
void SysTick_Handler(void) 							__attribute__ ((weak, alias ("Default_Handler")));
void WWDG_IRQHandler(void) 							__attribute__ ((weak, alias ("Default_Handler")));
void PVD_PVM_IRQHandler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void TAMP_STAMP_LSECSS_IRQHandler(void) 			__attribute__ ((weak, alias ("Default_Handler")));
void RTC_WKUP_IRQHandler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void FLASH_IRQHandler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void RCC_IRQHandler(void)							__attribute__ ((weak, alias ("Default_Handler")));
void EXTI0_IRQHandler(void)							__attribute__ ((weak, alias ("Default_Handler")));
void EXTI1_IRQHandler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void EXTI2_IRQHandler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void EXTI3_IRQHandler(void)							__attribute__ ((weak, alias ("Default_Handler")));
void EXTI4_IRQHandler(void)							__attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Channel1_IRQHandler(void)					__attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Channel2_IRQHandler(void) 				__attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Channel3_IRQHandler(void)					__attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Channel4_IRQHandler(void) 				__attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Channel5_IRQHandler(void) 				__attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Channel6_IRQHandler(void) 				__attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Channel7_IRQHandler(void) 				__attribute__ ((weak, alias ("Default_Handler")));
void ADC1_IRQHandler(void) 							__attribute__ ((weak, alias ("Default_Handler")));
void C2SEV_PWR_C2H_IRQHandler(void) 				__attribute__ ((weak, alias ("Default_Handler")));
void COMP_IRQHandler(void) 							__attribute__ ((weak, alias ("Default_Handler")));
void EXTI9_5_IRQHandler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void TIM1_BRK_IRQHandler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void TIM1_UP_IRQHandler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void TIM1_TRG_COM_IRQHandler(void) 					__attribute__ ((weak, alias ("Default_Handler")));
void TIM1_CC_IRQHandler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void TIM2_IRQHandler(void) 							__attribute__ ((weak, alias ("Default_Handler")));
void PKA_IRQHandler(void) 							__attribute__ ((weak, alias ("Default_Handler")));
void I2C1_EV_IRQHandler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void I2C1_ER_IRQHandler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void SPI1_IRQHandler(void) 							__attribute__ ((weak, alias ("Default_Handler")));
void USART1_IRQHandler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void LPUART1_IRQHandler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void TSC_IRQHandler(void) 							__attribute__ ((weak, alias ("Default_Handler")));
void EXTI15_10_IRQHandler(void) 					__attribute__ ((weak, alias ("Default_Handler")));
void RTC_Alarm_IRQHandler(void) 					__attribute__ ((weak, alias ("Default_Handler")));
void PWR_SOTF_BLEACT_RFPHASE_IRQHandler(void) 		__attribute__ ((weak, alias ("Default_Handler")));
void IPCC_C1_RX_IRQHandler(void) 					__attribute__ ((weak, alias ("Default_Handler")));
void IPCC_C1_TX_IRQHandler(void) 					__attribute__ ((weak, alias ("Default_Handler")));
void HSEM_IRQHandler(void) 							__attribute__ ((weak, alias ("Default_Handler")));
void LPTIM1_IRQHandler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void LPTIM2_IRQHandler(void) 						__attribute__ ((weak, alias ("Default_Handler")));
void AES2_IRQHandler(void) 							__attribute__ ((weak, alias ("Default_Handler")));
void RNG_IRQHandler(void) 							__attribute__ ((weak, alias ("Default_Handler")));
void FPU_IRQHandler(void) 							__attribute__ ((weak, alias ("Default_Handler")));
void DMAMUX1_OVR_IRQHandler(void) 					__attribute__ ((weak, alias ("Default_Handler")));


uint32_t vectors[] __attribute__ ((section(".isr_vector"))) ={
	STACK_START,
	(uint32_t)&Reset_Handler,
	(uint32_t)&NMI_Handler,
	(uint32_t)&HardFault_Handler,
	(uint32_t)&BusFault_Handler,
	(uint32_t)&UsageFault_Handler,
	0,
	0,
	0,
	0,
	(uint32_t)&SVC_Handler,
	0,
	(uint32_t)&DebugMon_Handler,
	0,
	(uint32_t)&PendSV_Handler,
	(uint32_t)&SysTick_Handler,
	(uint32_t)&WWDG_IRQHandler,
	(uint32_t)&PVD_PVM_IRQHandler,
	(uint32_t)&TAMP_STAMP_LSECSS_IRQHandler,
	(uint32_t)&RTC_WKUP_IRQHandler,
	(uint32_t)&FLASH_IRQHandler,
	(uint32_t)&RCC_IRQHandler,
	(uint32_t)&EXTI0_IRQHandler,
	(uint32_t)&EXTI1_IRQHandler,
	(uint32_t)&EXTI2_IRQHandler,
	(uint32_t)&EXTI3_IRQHandler,
	(uint32_t)&EXTI4_IRQHandler,
	(uint32_t)&DMA1_Channel1_IRQHandler,
	(uint32_t)&DMA1_Channel2_IRQHandler,
	(uint32_t)&DMA1_Channel3_IRQHandler,
	(uint32_t)&DMA1_Channel4_IRQHandler,
	(uint32_t)&DMA1_Channel5_IRQHandler,
	(uint32_t)&DMA1_Channel6_IRQHandler,
	(uint32_t)&DMA1_Channel7_IRQHandler,
	(uint32_t)&ADC1_IRQHandler,
	0,
	0,
	(uint32_t)&C2SEV_PWR_C2H_IRQHandler,
	(uint32_t)&COMP_IRQHandler,
	(uint32_t)&EXTI9_5_IRQHandler,
	(uint32_t)&TIM1_BRK_IRQHandler,
	(uint32_t)&TIM1_UP_IRQHandler,
	(uint32_t)&TIM1_TRG_COM_IRQHandler,
	(uint32_t)&TIM1_CC_IRQHandler,
	(uint32_t)&TIM2_IRQHandler,
	(uint32_t)&PKA_IRQHandler,
	(uint32_t)&I2C1_EV_IRQHandler,
	(uint32_t)&I2C1_ER_IRQHandler,
	0,
	0,
	(uint32_t)&SPI1_IRQHandler,
	0,
	(uint32_t)&USART1_IRQHandler,
	(uint32_t)&LPUART1_IRQHandler,
	(uint32_t)&RTC_Alarm_IRQHandler,
	0,
	(uint32_t)&PWR_SOTF_BLEACT_RFPHASE_IRQHandler,
	(uint32_t)&IPCC_C1_RX_IRQHandler,
	(uint32_t)&IPCC_C1_TX_IRQHandler,
	(uint32_t)&HSEM_IRQHandler,
	(uint32_t)&LPTIM1_IRQHandler,
	(uint32_t)&LPTIM2_IRQHandler,
	0,
	0,
	0,
	(uint32_t)&AES2_IRQHandler,
	(uint32_t)&RNG_IRQHandler,
	(uint32_t)&FPU_IRQHandler,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(uint32_t)&DMAMUX1_OVR_IRQHandler,
};

void Default_Handler(void){
	
	while(1);
	
}

void Reset_Handler(void){
	
	//Copy .data section to SRAM1_END
	uint32_t size = (uint32_t)&_edata - (uint32_t)&_sdata;
	
	uint8_t *pDst = (uint8_t*)&_sdata; //sram
	uint8_t *pSrc = (uint8_t*)&_la_data; //flash
	
	for(uint32_t i=0 ; i<size ; i++){
		*pDst++ = *pSrc++;
			
	}
	//Initialize the .bss section to zero in SRAM1_END
	size = (uint32_t)&_ebss - (uint32_t)&_sbss;
	pDst = (uint8_t*)&_sbss;
	for(uint32_t i=0 ; i<size ; i++){
		*pDst++ = 0;
			
	}
	//Call init function of std.library (This is required only if you are using printf scanf etc.)
	__libc_init_array();
	
	//Call main()
	main();
	
}