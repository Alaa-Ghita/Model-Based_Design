/*
 * File: Task1.h
 *
 * Code generated for Simulink model 'Task1'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 29 10:59:51 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Task1_h_
#define RTW_HEADER_Task1_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Task1_COMMON_INCLUDES_
#define Task1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Task1_COMMON_INCLUDES_ */

#include "Task1_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
  real_T Input1;                       /* '<Root>/Input1' */
  real_T Input2;                       /* '<Root>/Input2' */
} ExtU_Task1_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
  real_T Output1;                      /* '<Root>/Output1' */
  real_T Output2;                      /* '<Root>/Output2' */
  real_T Output3;                      /* '<Root>/Output3' */
  real_T Output4;                      /* '<Root>/Output4' */
  real_T Output5;                      /* '<Root>/Output5' */
  real_T Output6;                      /* '<Root>/Output6' */
  real_T Output7;                      /* '<Root>/Output7' */
} ExtY_Task1_T;

/* Real-time Model Data Structure */
struct tag_RTM_Task1_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Task1_T Task1_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Task1_T Task1_Y;

/* Model entry point functions */
extern void Task1_initialize(void);
extern void Task1_step(void);
extern void Task1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Task1_T *const Task1_M;

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
 * '<Root>' : 'Task1'
 */
#endif                                 /* RTW_HEADER_Task1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
