// ----------------------------------------------------------------------------
/**
 
   Property of Kartech  
   (c) Copyright Kartech 2011-2019 jaroslaw.karwik@gmail.com
   
   See license.txt for details

   Author:      Jarosaw Karwik
   E-Mail:     jaroslaw.karwik(at)gmail.com
   
**/
// ----------------------------------------------------------------------------




#include "stdint.h" 
#include "init.h" 
#include "serial.h"
#include "pinctrl.h"
#include "timer.h"




void init_reset(void)
{
  //todo
}





void init_main(void)
{

    serial_init();
    timer_init();

}

void  init_net(void)
{
    httpd_init();
    netbiosns_init();
    netbiosns_set_name("step2mach");

}

