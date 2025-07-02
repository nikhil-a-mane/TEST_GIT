/*
 * File: TEST_FOR_GIT.c
 *
 * Code generated for Simulink model 'TEST_FOR_GIT'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jul  2 18:40:23 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TEST_FOR_GIT.h"
#include "rtwtypes.h"

/* Exported block signals */
uint16_T Input_1;                      /* '<Root>/Input_1' */
uint16_T Output_1;                     /* '<S1>/Product' */

/* Real-time model */
static RT_MODEL_TEST_FOR_GIT_T TEST_FOR_GIT_M_;
RT_MODEL_TEST_FOR_GIT_T *const TEST_FOR_GIT_M = &TEST_FOR_GIT_M_;

/* Model step function */
void TEST_FOR_GIT_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */
  /* Product: '<S1>/Product' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Inport: '<Root>/Input_1'
   *  Sum: '<S1>/Add'
   */
  Output_1 = (uint16_T)((uint16_T)(Input_1 + 100) * 10);

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */
}

/* Model initialize function */
void TEST_FOR_GIT_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void TEST_FOR_GIT_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
