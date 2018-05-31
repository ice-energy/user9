#include <stdio.h>
#include <modbus/modbus.h>
#include <modbus/modbus-tcp.h>
#include <modbus/modbus-version.h>


// compile:    gcc xmodbus.c -lmodbus
//1,0,0,0,0,2,772,7,35498


void main( void )
{
    modbus_t *mb;
    uint16_t tab_reg[32];
    int      rc;
    int      i;


    mb = modbus_new_tcp("192.168.20.14", 502);
    if( mb == NULL )
    {
        fprintf(stderr, "fail on modbus_new_tcp\n");
        return;
    }

    if( modbus_connect(mb) == -1 )
    {
        fprintf(stderr, "fail on modbus_connect\n");
        modbus_free(mb);
        return;
    }

    /* Read 5 registers from the address 0 */
    rc = modbus_read_registers(mb, 4, 9, tab_reg);    // 9 total, starting at 4
    if( rc == -1 )
    {
        fprintf(stderr, "fail on modbus_read_registers\n");
        // allow fall thru to the end
    }
    else
    {
/*      for( i=0; i < 9; ++i )
        {
            if( i <= 4 )
                printf("DS%d:  %d    (0x%x)\n", i+5,tab_reg[i],tab_reg[i]);
            else
                printf("DS%d: %d    (0x%x)\n", i+5,tab_reg[i],tab_reg[i]);
        } */

        printf("%d,%d,%d,%d,%d,%d,%d,%d,%d\n",tab_reg[0],tab_reg[1],tab_reg[2],
             tab_reg[3],tab_reg[4],tab_reg[5],tab_reg[6],tab_reg[7],tab_reg[8]);
    }

    modbus_close(mb);
    modbus_free(mb);
}

