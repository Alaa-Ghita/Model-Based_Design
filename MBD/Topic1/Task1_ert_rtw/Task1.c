/*
 * File: Task1.c
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

#include "Task1.h"
#include "Task1_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Task1_T Task1_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Task1_T Task1_Y;

/* Real-time model */
static RT_MODEL_Task1_T Task1_M_;
RT_MODEL_Task1_T *const Task1_M = &Task1_M_;

/* Model step function */
void Task1_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Add'
   */
  Task1_Y.Output = Task1_U.Input + Task1_U.Input1;

  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Subtract'
   */
  Task1_Y.Output1 = Task1_U.Input - Task1_U.Input1;

  /* Outport: '<Root>/Output2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<Root>/Product'
   */
  Task1_Y.Output2 = Task1_U.Input * Task1_U.Input1;

  /* Outport: '<Root>/Output3' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<Root>/Divide'
   */
  Task1_Y.Output3 = Task1_U.Input / Task1_U.Input1;

  /* Outport: '<Root>/Output4' incorporates:
   *  Inport: '<Root>/Input2'
   *  UnaryMinus: '<Root>/Unary Minus'
   */
  Task1_Y.Output4 = -Task1_U.Input2;

  /* Outport: '<Root>/Output5' incorporates:
   *  Inport: '<Root>/Input2'
   *  Sqrt: '<Root>/Sqrt'
   */
  Task1_Y.Output5 = sqrt(Task1_U.Input2);

  /* Outport: '<Root>/Output6' incorporates:
   *  Constant: '<Root>/Constant3'
   *  Inport: '<Root>/Input2'
   *  Sum: '<Root>/Add1'
   */
  Task1_Y.Output6 = Task1_U.Input2 + 1.0;

  /* Outport: '<Root>/Output7' incorporates:
   *  Constant: '<Root>/Constant3'
   *  Inport: '<Root>/Input2'
   *  Sum: '<Root>/Subtract1'
   */
  Task1_Y.Output7 = Task1_U.Input2 - 1.0;
}

/* Model initialize function */
void Task1_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Task1_M, (NULL));

  /* external inputs */
  (void)memset(&Task1_U, 0, sizeof(ExtU_Task1_T));

  /* external outputs */
  (void) memset((void *)&Task1_Y, 0,
                sizeof(ExtY_Task1_T));
}

/* Model terminate function */
void Task1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
