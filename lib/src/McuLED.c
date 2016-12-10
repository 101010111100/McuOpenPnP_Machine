/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : McuLED.c
**     Project     : FRDM-K64F_Generator
**     Processor   : MK64FN1M0VLL12
**     Component   : LED
**     Version     : Component 01.073, Driver 01.00, CPU db: 3.00.000
**     Repository  : Legacy User Components
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-12-10, 11:17, # CodeGen: 88
**     Abstract    :
**          This component implements a universal driver for a single LED.
**     Settings    :
**          Component name                                 : McuLED
**          SDK                                            : McuLib
**          Turned On with initialization                  : no
**          HW Interface                                   : 
**            Anode on port side, HIGH is ON               : no
**            On/Off                                       : Enabled
**              Pin                                        : LEDpin
**            PWM                                          : Disabled
**          Shell                                          : Disabled
**     Contents    :
**         On         - void McuLED_On(void);
**         Off        - void McuLED_Off(void);
**         Neg        - void McuLED_Neg(void);
**         Get        - uint8_t McuLED_Get(void);
**         Put        - void McuLED_Put(uint8_t val);
**         SetRatio16 - void McuLED_SetRatio16(uint16_t ratio);
**         Deinit     - void McuLED_Deinit(void);
**         Init       - void McuLED_Init(void);
**
**     * Copyright (c) 2013-2016, Erich Styger
**      * Web:         https://mcuoneclipse.com
**      * SourceForge: https://sourceforge.net/projects/mcuoneclipse
**      * Git:         https://github.com/ErichStyger/McuOnEclipse_PEx
**      * All rights reserved.
**      *
**      * Redistribution and use in source and binary forms, with or without modification,
**      * are permitted provided that the following conditions are met:
**      *
**      * - Redistributions of source code must retain the above copyright notice, this list
**      *   of conditions and the following disclaimer.
**      *
**      * - Redistributions in binary form must reproduce the above copyright notice, this
**      *   list of conditions and the following disclaimer in the documentation and/or
**      *   other materials provided with the distribution.
**      *
**      * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**      * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**      * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**      * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**      * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**      * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**      * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**      * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**      * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**      * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file McuLED.c
** @version 01.00
** @brief
**          This component implements a universal driver for a single LED.
*/         
/*!
**  @addtogroup McuLED_module McuLED module documentation
**  @{
*/         

/* MODULE McuLED. */

#include "McuLED.h"

/*
** ===================================================================
**     Method      :  McuLED_On (component LED)
**     Description :
**         This turns the LED on.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void McuLED_On(void)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  McuLED_Off (component LED)
**     Description :
**         This turns the LED off.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void McuLED_Off(void)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  McuLED_Neg (component LED)
**     Description :
**         This negates/toggles the LED
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void McuLED_Neg(void)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  McuLED_Get (component LED)
**     Description :
**         This returns logical 1 in case the LED is on, 0 otherwise.
**     Parameters  : None
**     Returns     :
**         ---             - Status of the LED (on or off)
** ===================================================================
*/
/*
uint8_t McuLED_Get(void)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  McuLED_Put (component LED)
**     Description :
**         Turns the LED on or off.
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - value to define if the LED has to be on or
**                           off.
**     Returns     : Nothing
** ===================================================================
*/
/*
void McuLED_Put(uint8_t val)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  McuLED_Init (component LED)
**     Description :
**         Performs the LED driver initialization.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void McuLED_Init(void)
{
#if McuLib_CONFIG_SDK_VERSION_USED != McuLib_CONFIG_SDK_PROCESSOR_EXPERT
  LEDpin1_Init();
#endif
  McuLED_Off();
}

/*
** ===================================================================
**     Method      :  McuLED_Deinit (component LED)
**     Description :
**         Deinitializes the driver
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void McuLED_Deinit(void)
{
#if McuLib_CONFIG_SDK_VERSION_USED != McuLib_CONFIG_SDK_PROCESSOR_EXPERT
  LEDpin1_Deinit();
#endif
}

/*
** ===================================================================
**     Method      :  McuLED_SetRatio16 (component LED)
**     Description :
**         Method to specify the duty cycle. If using a PWM pin, this
**         means the duty cycle is set. For On/off pins, values smaller
**         0x7FFF means off, while values greater means on.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ratio           - Ratio value, where 0 means 'off' and
**                           0xffff means 'on'
**     Returns     : Nothing
** ===================================================================
*/
void McuLED_SetRatio16(uint16_t ratio)
{
  /* on/off LED: binary on or off */
  if (ratio<(0xffff/2)) {
    McuLED_Off();
  } else {
    McuLED_On();
  }
}

/* END McuLED. */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
