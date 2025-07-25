/*
 * File: TEST_FOR_GIT.h
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

#ifndef TEST_FOR_GIT_h_
#define TEST_FOR_GIT_h_
#ifndef TEST_FOR_GIT_COMMON_INCLUDES_
#define TEST_FOR_GIT_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* TEST_FOR_GIT_COMMON_INCLUDES_ */

#include "TEST_FOR_GIT_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Real-time Model Data Structure */
struct tag_RTM_TEST_FOR_GIT_T {
  const char_T * volatile errorStatus;
};

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern uint16_T Input_1;               /* '<Root>/Input_1' */
extern uint16_T Output_1;              /* '<S1>/Product' */

/* Model entry point functions */
extern void TEST_FOR_GIT_initialize(void);
extern void TEST_FOR_GIT_step(void);
extern void TEST_FOR_GIT_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TEST_FOR_GIT_T *const TEST_FOR_GIT_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TEST_FOR_GIT'
 * '<S1>'   : 'TEST_FOR_GIT/Subsystem'
 */
#endif                                 /* TEST_FOR_GIT_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
