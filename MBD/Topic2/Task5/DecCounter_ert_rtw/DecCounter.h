/*
 * File: DecCounter.h
 *
 * Code generated for Simulink model 'DecCounter'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 30 15:06:31 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DecCounter_h_
#define RTW_HEADER_DecCounter_h_
#include <stddef.h>
#include <string.h>
#ifndef DecCounter_COMMON_INCLUDES_
#define DecCounter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* DecCounter_COMMON_INCLUDES_ */

#include "DecCounter_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
} DW_DecCounter_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_DecCounter_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
} ExtY_DecCounter_T;

/* Real-time Model Data Structure */
struct tag_RTM_DecCounter_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_DecCounter_T DecCounter_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_DecCounter_T DecCounter_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_DecCounter_T DecCounter_Y;

/* Model entry point functions */
extern void DecCounter_initialize(void);
extern void DecCounter_step(void);
extern void DecCounter_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DecCounter_T *const DecCounter_M;

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
 * '<Root>' : 'DecCounter'
 * '<S1>'   : 'DecCounter/Subsystem'
 */
#endif                                 /* RTW_HEADER_DecCounter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
