/*
 * File: Task2.h
 *
 * Code generated for Simulink model 'Task2'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 29 11:26:28 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Task2_h_
#define RTW_HEADER_Task2_h_
#include <stddef.h>
#include <string.h>
#ifndef Task2_COMMON_INCLUDES_
#define Task2_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Task2_COMMON_INCLUDES_ */

#include "Task2_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Mean_AccVal;                  /* '<Root>/Mean' */
} DW_Task2_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_Task2_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
  real_T Output1;                      /* '<Root>/Output1' */
  real_T Output2;                      /* '<Root>/Output2' */
  real_T Output3;                      /* '<Root>/Output3' */
} ExtY_Task2_T;

/* Real-time Model Data Structure */
struct tag_RTM_Task2_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Task2_T Task2_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Task2_T Task2_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Task2_T Task2_Y;

/* Model entry point functions */
extern void Task2_initialize(void);
extern void Task2_step(void);
extern void Task2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Task2_T *const Task2_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/MinMax' : Eliminated since input is scalar
 * Block '<Root>/MinMax1' : Eliminated since input is scalar
 */

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
 * '<Root>' : 'Task2'
 */
#endif                                 /* RTW_HEADER_Task2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
