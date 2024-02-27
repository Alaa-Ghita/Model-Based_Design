/*
 * File: Task3.c
 *
 * Code generated for Simulink model 'Task3'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 29 14:38:54 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Task3.h"
#include "Task3_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Task3_T Task3_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Task3_T Task3_Y;

/* Real-time model */
static RT_MODEL_Task3_T Task3_M_;
RT_MODEL_Task3_T *const Task3_M = &Task3_M_;

/* Model step function */
void Task3_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<S1>/Add'
   */
  Task3_Y.Output = Task3_U.Input + Task3_U.Input1;

  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<S1>/Subtract'
   */
  Task3_Y.Output1 = Task3_U.Input - Task3_U.Input1;

  /* Outport: '<Root>/Output2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<S1>/Product'
   */
  Task3_Y.Output2 = Task3_U.Input * Task3_U.Input1;

  /* Outport: '<Root>/Output3' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<S1>/Divide'
   */
  Task3_Y.Output3 = Task3_U.Input / Task3_U.Input1;

  /* Outport: '<Root>/Output4' incorporates:
   *  Inport: '<Root>/Input2'
   *  UnaryMinus: '<S2>/Unary Minus'
   */
  Task3_Y.Output4 = -Task3_U.Input2;

  /* Outport: '<Root>/Output5' incorporates:
   *  Inport: '<Root>/Input2'
   *  Sqrt: '<S2>/Sqrt'
   */
  Task3_Y.Output5 = sqrt(Task3_U.Input2);

  /* Outport: '<Root>/Output6' incorporates:
   *  Constant: '<S2>/Constant3'
   *  Inport: '<Root>/Input2'
   *  Sum: '<S2>/Add1'
   */
  Task3_Y.Output6 = Task3_U.Input2 + 1.0;

  /* Outport: '<Root>/Output7' incorporates:
   *  Constant: '<S2>/Constant3'
   *  Inport: '<Root>/Input2'
   *  Sum: '<S2>/Subtract1'
   */
  Task3_Y.Output7 = Task3_U.Input2 - 1.0;
}

/* Model initialize function */
void Task3_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Task3_M, (NULL));

  /* external inputs */
  (void)memset(&Task3_U, 0, sizeof(ExtU_Task3_T));

  /* external outputs */
  (void) memset((void *)&Task3_Y, 0,
                sizeof(ExtY_Task3_T));
}

/* Model terminate function */
void Task3_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
