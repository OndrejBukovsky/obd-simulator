

#include "includes.h"

int main(void)
{

    Bsp_Init();
    while(1)
    {
        IRQVar.LEN = 0;
        IRQVar.flag = RESET;
        IRQVar.acctiveflag = 0;
        Flagspeedw = RESET;
        ClearTab(CotrolVale);
        switch (CotrolVale)
        {
        case SYS01:
            ProVale = SYS01;
            ISO15765_4Setting(&CANCPTab1,CAN_500K,CAN_ID_STD);
            break;
        case SYS02:
            ProVale = SYS02;
            ISO15765_4Setting(&CANCPTab1,CAN_500K,CAN_ID_EXT);
            break;
        case SYS03:
            ProVale = SYS03;
            ISO15765_4Setting(&CANCPTab1,CAN_250K,CAN_ID_STD);
            break;
        case SYS04:
            ProVale = SYS04;
            ISO15765_4Setting(&CANCPTab1,CAN_250K,CAN_ID_EXT);
            break;
#ifndef _REDUCE_SIZE_WORKAROUND_
        case SYS05:
            ProVale = SYS05;
            ISO14230_4Setting(&KWP2000CPTAB,10400);
            break;
        case SYS06:
            ProVale = SYS06;
            ISO14230_4Setting(&KWP2000CPTAB,10400);
            break;
        case SYS07:
            ProVale = SYS07;
            ISO9141_2Setting(&ISO9141CPTAB,10400);
            break;
#endif
        case SYSEND:
            ProVale = SYSXX;
            break;
        case SYSXX:
            ProVale = SYSXX;
            break;
        default:
            printf(STR001);
            CotrolVale = SYSEND;
            break;
        }
    }
}


