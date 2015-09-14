/******************************************************************************
*
* @file    $Name$
* @version $Revision$
* @date    $LastChangedDate$
*
* @Copyright 2015 - Advance Tech.
*  This material is protected by copyright law. It is unlawful
*  to copy it.
*
* This document contains confidential information. It is not to be
* disclosed or used except in accordance with applicable contracts
* or agreements. This document must be rendered illegible when
* being discarded.
* 
* @remarks
* Modification History
* -------------------------
* See Version Control System History.
*
* @file This file contains the template class.
*
******************************************************************************/

/*****************************************************************************/
/*                              Include File                                 */
/*****************************************************************************/
#include "typedef.h"
#include "r_cg_macrodriver.h"
#include "r_cg_port.h"
#include "bsp_do.h"

/*****************************************************************************/
/*                      Global Variable Definition                           */
/*****************************************************************************/


/*****************************************************************************/
/*                    Local Macro or Enum Definition                         */
/*****************************************************************************/


/*****************************************************************************/
/*                 Local Structure or Union Definition                       */
/*****************************************************************************/


/*****************************************************************************/
/*                      Local Variable Definition                            */
/*****************************************************************************/


/*****************************************************************************/
/*                     Local Function Declaration                            */
/*****************************************************************************/


/*****************************************************************************/
/*                       Configuration Checking                              */
/*****************************************************************************/


/*****************************************************************************/
/*                      Local Function Definition                            */
/*****************************************************************************/
/******************************************************************************
 * @brief   :
 *
 * @param   :   None.
 * @return  :	None.
 * @remarks :	None.
 *****************************************************************************/

 
/*****************************************************************************/
/*                      Global Function Definition                           */
/*****************************************************************************/
/******************************************************************************
 * @brief   :
 *
 * @param   :   None.
 * @return  :	None.
 * @remarks :	None.
 *****************************************************************************/
void bsp_do_set(bsp_do_dev_id_t id)
{
    ASSERT(id == BSP_DO_DEV_ID_LED);
    
    if (id == BSP_DO_DEV_ID_LED)
    {
        P1 |= _20_Pn5_OUTPUT_1;          
    }
    else if (id == BSP_DO_DEV_ID_DGN_1)
    {
        P2 |= _01_Pn0_OUTPUT_1;
    }
    else if (id == BSP_DO_DEV_ID_DGN_2)
    {
        P2 |= _02_Pn1_OUTPUT_1;
    }
}

/******************************************************************************
 * @brief   :
 *
 * @param   :   None.
 * @return  :	None.
 * @remarks :	None.
 *****************************************************************************/
void bsp_do_clear(bsp_do_dev_id_t id)
{
    ASSERT(id == BSP_DO_DEV_ID_LED);
    
    if (id == BSP_DO_DEV_ID_LED)
    {
        P1 &= ~_20_Pn5_OUTPUT_1;  
    }
    else if (id == BSP_DO_DEV_ID_DGN_1)
    {
        P2 &= ~_01_Pn0_OUTPUT_1;
    }
    else if (id == BSP_DO_DEV_ID_DGN_2)
    {
        P2 &= ~_02_Pn1_OUTPUT_1;
    }
}

/* EOF */