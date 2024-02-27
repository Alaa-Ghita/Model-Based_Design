/*
 * File: Task2.c
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

#include "Task2.h"
#include "Task2_private.h"

/* Block states (default storage) */
DW_Task2_T Task2_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Task2_T Task2_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Task2_T Task2_Y;

/* Real-time model */
static RT_MODEL_Task2_T Task2_M_;
RT_MODEL_Task2_T *const Task2_M = &Task2_M_;

/* Model step function */
void Task2_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/Input'
   */
  Task2_Y.Output = Task2_U.Input;

  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/Input'
   */
  Task2_Y.Output1 = Task2_U.Input;

  /* Outport: '<Root>/Output2' incorporates:
   *  Inport: '<Root>/Input'
   */
  Task2_Y.Output2 = Task2_U.Input;

  /* Outport: '<Root>/Output3' incorporates:
   *  Inport: '<Root>/Input'
   */
  Task2_Y.Output3 = Task2_U.Input;
}

/* Model initialize function */
void Task2_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Task2_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Task2_DW, 0,
                sizeof(DW_Task2_T));

  /* external inputs */
  Task2_U.Input = 0.0;

  /* external outputs */
  (void) memset((void *)&Task2_Y, 0,
                sizeof(ExtY_Task2_T));
}

/* Model terminate function */
void Task2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
