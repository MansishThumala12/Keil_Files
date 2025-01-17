
#include "cmsis_os.h"                                           // CMSIS RTOS header file

/*----------------------------------------------------------------------------
 *      Thread 1 'Thread_Name': Sample thread
 *---------------------------------------------------------------------------*/
 
void Thread2 (void const *argument);                             // thread function
osThreadId tid_Thread2;                                          // thread id
osThreadDef (Thread2, osPriorityNormal, 1, 0);                   // thread object

int Init_Thread2 (void) {

  tid_Thread2 = osThreadCreate (osThread(Thread2), NULL);
  if (!tid_Thread2) return(-1);
  
  return(0);
}

void Thread2 (void const *argument) {

  while (1) {
    ; // Insert thread code here...
    osThreadYield ();                                           // suspend thread
  }
}
