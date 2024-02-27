/*
 * File: DecCounter.c
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

#include "DecCounter.h"
#include "DecCounter_private.h"

/* Block states (default storage) */
DW_DecCounter_T DecCounter_DW;

/* External inputs (root inport signals with default storage) */
ExtU_DecCounter_T DecCounter_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_DecCounter_T DecCounter_Y;

/* Real-time model */
static RT_MODEL_DecCounter_T DecCounter_M_;
RT_MODEL_DecCounter_T *const DecCounter_M = &DecCounter_M_;

/* Model step function */
void DecCounter_step(void)
{
  real_T rtb_Subtract;

  /* Sum: '<S1>/Subtract' incorporates:
   *  Constant: '<S1>/Constant1'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  rtb_Subtract = DecCounter_DW.UnitDelay_DSTATE - 1.0;

  /* Switch: '<S1>/Switch' incorporates:
   *  Inport: '<Root>/Input'
   */
  if (!(rtb_Subtract >= 0.0)) {
    rtb_Subtract = DecCounter_U.Input;
  }

  /* End of Switch: '<S1>/Switch' */

  /* Outport: '<Root>/Output' */
  DecCounter_Y.Output = rtb_Subtract;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  DecCounter_DW.UnitDelay_DSTATE = rtb_Subtract;
}

/* Model initialize function */
void DecCounter_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(DecCounter_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&DecCounter_DW, 0,
                sizeof(DW_DecCounter_T));

  /* external inputs */
  DecCounter_U.Input = 0.0;

  /* external outputs */
  DecCounter_Y.Output = 0.0;
}

/* Model terminate function */
void DecCounter_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
