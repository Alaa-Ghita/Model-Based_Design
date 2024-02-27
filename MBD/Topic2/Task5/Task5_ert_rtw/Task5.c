/*
 * File: Task5.c
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

#include "Task5.h"
#include "Task5_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Task5_T Task5_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Task5_T Task5_Y;

/* Real-time model */
static RT_MODEL_Task5_T Task5_M_;
RT_MODEL_Task5_T *const Task5_M = &Task5_M_;
real_T rt_modd_snf(real_T u0, real_T u1)
{
  real_T q;
  real_T y;
  boolean_T yEq;
  y = u0;
  if (u1 == 0.0) {
    if (u0 == 0.0) {
      y = u1;
    }
  } else if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (u0 == 0.0) {
    y = 0.0 / u1;
  } else if (rtIsInf(u1)) {
    if ((u1 < 0.0) != (u0 < 0.0)) {
      y = u1;
    }
  } else {
    y = fmod(u0, u1);
    yEq = (y == 0.0);
    if ((!yEq) && (u1 > floor(u1))) {
      q = fabs(u0 / u1);
      yEq = !(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q);
    }

    if (yEq) {
      y = u1 * 0.0;
    } else if ((u0 < 0.0) != (u1 < 0.0)) {
      y += u1;
    }
  }

  return y;
}

/* Model step function */
void Task5_step(void)
{
  /* If: '<S1>/If' incorporates:
   *  Constant: '<S1>/Constant'
   *  Inport: '<Root>/Input'
   *  Inport: '<S2>/In1'
   *  Inport: '<S3>/In1'
   *  Math: '<S1>/Mod'
   *  Outport: '<Root>/Output'
   *  Outport: '<Root>/Output1'
   */
  if (rt_modd_snf(Task5_U.Input, 2.0) == 0.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&Task5_Y.Output[0], &Task5_ConstB.StringConstant[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    Task5_Y.Output[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&Task5_Y.Output1[0], &Task5_ConstB.StringConstant1[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    Task5_Y.Output1[255] = '\x00';
  }

  /* End of If: '<S1>/If' */
}

/* Model initialize function */
void Task5_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(Task5_M, (NULL));

  /* external inputs */
  Task5_U.Input = 0.0;

  /* external outputs */
  (void) memset((void *)&Task5_Y, 0,
                sizeof(ExtY_Task5_T));
}

/* Model terminate function */
void Task5_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
