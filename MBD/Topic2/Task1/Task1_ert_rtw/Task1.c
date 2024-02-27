/*
 * File: Task1.c
 *
 * Code generated for Simulink model 'Task1'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 29 14:26:37 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Task1.h"
#include "Task1_private.h"

/* Block states (default storage) */
DW_Task1_T Task1_DW;

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
  int32_T s1_iter;
  int32_T tmp;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* Inport: '<Root>/Input' */
  tmp = Task1_U.Input;
  if (Task1_U.Input > 2147483646) {
    tmp = 2147483646;
  } else if (Task1_U.Input < 0) {
    tmp = 0;
  }

  /* End of Inport: '<Root>/Input' */
  for (s1_iter = 1; s1_iter <= tmp; s1_iter++) {
    /* Outport: '<Root>/Output' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    Task1_Y.Output = s1_iter * Task1_DW.UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/Output'
     */
    Task1_DW.UnitDelay_DSTATE = Task1_Y.Output;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model initialize function */
void Task1_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Task1_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Task1_DW, 0,
                sizeof(DW_Task1_T));

  /* external inputs */
  Task1_U.Input = 0;

  /* external outputs */
  Task1_Y.Output = 0;

  /* SystemInitialize for Iterator SubSystem: '<Root>/For Iterator Subsystem' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Task1_DW.UnitDelay_DSTATE = 1;

  /* End of SystemInitialize for SubSystem: '<Root>/For Iterator Subsystem' */
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
