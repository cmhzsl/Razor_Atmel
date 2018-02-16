/***********************************************************************************************************************
File: mpgl1_audio_test.h                                                                

Description:
Header file for mpgl1_audio_test.c.
***********************************************************************************************************************/

#ifndef __AUDIO_TEST_H
#define __AUDIO_TEST_H

/**********************************************************************************************************************
Type Definitions
***********************************************************************************************************************/


/***********************************************************************************************************************
Constants / Definitions
***********************************************************************************************************************/
#define UTEST_INIT_MSG_TIMEOUT          (u32)1000     /* Time in ms for init message to send */


/***********************************************************************************************************************
Function Declarations
***********************************************************************************************************************/

/*--------------------------------------------------------------------------------------------------------------------*/
/* Public functions                                                                                                   */
/*--------------------------------------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------------------------------------*/
/* Protected functions                                                                                                */
/*--------------------------------------------------------------------------------------------------------------------*/
void AudioTestInitialize(void);


/*--------------------------------------------------------------------------------------------------------------------*/
/* Private functions                                                                                                  */
/*--------------------------------------------------------------------------------------------------------------------*/


/***********************************************************************************************************************
State Machine Declarations
***********************************************************************************************************************/
void AudioTestSM_Idle(void);             
void AudioTestSM_Error(void);         


#endif /* __AUDIO_TEST_H */


/*--------------------------------------------------------------------------------------------------------------------*/
/* End of File                                                                                                        */
/*--------------------------------------------------------------------------------------------------------------------*/