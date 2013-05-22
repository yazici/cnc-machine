
//----------------------------------------------------------------------------------------------------
// main.h
//----------------------------------------------------------------------------------------------------

#ifndef _MAIN_H_
#define _MAIN_H_

//----------------------------------------------------------------------------------------------------
// FUNCTION PROTOTYPES
//----------------------------------------------------------------------------------------------------

void Ethernet_ISR(void);
void EInt0_ISR(void);

void Task_Start(void *pdata);
void Task_Start2(void *pdata);

//----------------------------------------------------------------------------------------------------
// EOF
//----------------------------------------------------------------------------------------------------

#endif // _MAIN_H_

