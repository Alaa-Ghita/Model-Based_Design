/*
 * File: Task3.c
 *
 * Code generated for Simulink model 'Task3'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 29 12:07:34 2024
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
void MultiWordAnd(const uint32_T u1[], const uint32_T u2[], uint32_T y[],
                  int32_T n)
{
  int32_T i;
  for (i = 0; i < n; i++) {
    y[i] = u1[i] & u2[i];
  }
}

void MultiWordIor(const uint32_T u1[], const uint32_T u2[], uint32_T y[],
                  int32_T n)
{
  int32_T i;
  for (i = 0; i < n; i++) {
    y[i] = u1[i] | u2[i];
  }
}

void MultiWordXor(const uint32_T u1[], const uint32_T u2[], uint32_T y[],
                  int32_T n)
{
  int32_T i;
  for (i = 0; i < n; i++) {
    y[i] = u1[i] ^ u2[i];
  }
}

void MultiWordNot(const uint32_T u1[], uint32_T y[], int32_T n)
{
  int32_T i;
  for (i = 0; i < n; i++) {
    y[i] = ~u1[i];
  }
}

/* Model step function */
void Task3_step(void)
{
  int64m_T tmp;
  int64m_T tmp_0;

  /* S-Function (sfix_bitop): '<Root>/Bitwise Operator' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Outport: '<Root>/Output'
   */
  MultiWordAnd(&Task3_U.Input.chunks[0U], &Task3_U.Input1.chunks[0U],
               &Task3_Y.Output.chunks[0U], 2);

  /* S-Function (sfix_bitop): '<Root>/Bitwise Operator1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Outport: '<Root>/Output1'
   */
  MultiWordIor(&Task3_U.Input.chunks[0U], &Task3_U.Input1.chunks[0U],
               &Task3_Y.Output1.chunks[0U], 2);

  /* S-Function (sfix_bitop): '<Root>/Bitwise Operator2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Outport: '<Root>/Output2'
   */
  tmp = Task3_U.Input;
  tmp_0 = Task3_U.Input1;
  MultiWordXor(&Task3_U.Input.chunks[0U], &Task3_U.Input1.chunks[0U],
               &Task3_Y.Output2.chunks[0U], 2);

  /* S-Function (sfix_bitop): '<Root>/Bitwise Operator3' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   */
  MultiWordIor(&Task3_U.Input.chunks[0U], &Task3_U.Input1.chunks[0U],
               &tmp_0.chunks[0U], 2);
  MultiWordNot(&tmp_0.chunks[0U], &tmp.chunks[0U], 2);

  /* S-Function (sfix_bitop): '<Root>/Bitwise Operator4' */
  MultiWordNot(&tmp.chunks[0U], &tmp_0.chunks[0U], 2);

  /* Outport: '<Root>/Output3' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator4'
   */
  Task3_Y.Output3 = tmp_0;
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
