/*
 * File: IncCounter.c
 *
 * Code generated for Simulink model 'IncCounter'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 30 14:48:48 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "IncCounter.h"
#include "IncCounter_private.h"

/* Block states (default storage) */
DW_IncCounter_T IncCounter_DW;

/* External inputs (root inport signals with default storage) */
ExtU_IncCounter_T IncCounter_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_IncCounter_T IncCounter_Y;

/* Real-time model */
static RT_MODEL_IncCounter_T IncCounter_M_;
RT_MODEL_IncCounter_T *const IncCounter_M = &IncCounter_M_;

/* Model step function */
void IncCounter_step(void)
{
  real_T rtb_Subtract;

  /* Sum: '<S1>/Subtract' incorporates:
   *  Constant: '<S1>/Constant1'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  rtb_Subtract = IncCounter_DW.UnitDelay_DSTATE - 1.0;

  /* Switch: '<S1>/Switch' incorporates:
   *  Inport: '<Root>/Input'
   */
  if (!(rtb_Subtract >= 0.0)) {
    rtb_Subtract = IncCounter_U.Input;
  }

  /* End of Switch: '<S1>/Switch' */

  /* Outport: '<Root>/Output' */
  IncCounter_Y.Output = rtb_Subtract;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  IncCounter_DW.UnitDelay_DSTATE = rtb_Subtract;
}

/* Model initialize function */
void IncCounter_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(IncCounter_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&IncCounter_DW, 0,
                sizeof(DW_IncCounter_T));

  /* external inputs */
  IncCounter_U.Input = 0.0;

  /* external outputs */
  IncCounter_Y.Output = 0.0;
}

/* Model terminate function */
void IncCounter_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
