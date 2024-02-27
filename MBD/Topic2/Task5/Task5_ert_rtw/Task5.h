/*
 * File: Task5.h
 *
 * Code generated for Simulink model 'Task5'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 30 14:25:57 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Task5_h_
#define RTW_HEADER_Task5_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Task5_COMMON_INCLUDES_
#define Task5_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Task5_COMMON_INCLUDES_ */

#include "Task5_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Invariant block signals (default storage) */
typedef struct {
  const char_T StringConstant[256];    /* '<S1>/String Constant' */
  const char_T StringConstant1[256];   /* '<S1>/String Constant1' */
} ConstB_Task5_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_Task5_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Output[256];                  /* '<Root>/Output' */
  char_T Output1[256];                 /* '<Root>/Output1' */
} ExtY_Task5_T;

/* Real-time Model Data Structure */
struct tag_RTM_Task5_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Task5_T Task5_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Task5_T Task5_Y;
extern const ConstB_Task5_T Task5_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void Task5_initialize(void);
extern void Task5_step(void);
extern void Task5_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Task5_T *const Task5_M;

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
 * '<Root>' : 'Task5'
 * '<S1>'   : 'Task5/Subsystem'
 * '<S2>'   : 'Task5/Subsystem/If Action Subsystem'
 * '<S3>'   : 'Task5/Subsystem/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_Task5_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
