
/* *******************************************************************
 * anime.c													 
 *																	 
 * Created on : Apr 12, 2023												 
 *      Author: Emmanuel Adedayo Oyedokun							 
 *																	 
 * Description:This file contains the animation part of the project
 * 																	 *
 * Copyright © 2023 - Emmanuel Adedayo Oyedokun.					 *
 *   This is a free software under the GNU license, you can			 * 
 *   redistribute it and/or modify it under the terms of the		 *
 *   GNU General Public License V3.0 as published by the			 * 
 *   Free Software Foundation.										 *
 * 																	 *
 *   This software library is shared with the public for			 * 
 *   educational purposes, without warranty and author is not		 *				 
 *   liable for any damages caused directly or indirectly by		 *				 
 *   this software, read more about this on the GNU General			 *			 
 *   Public License.												 *								 
 *********************************************************************/
#include "stm32_tm1637.h"
#include "main.h"


void delay_ms(uint32_t ms);





/*void animation(){

	    tm1637DisplayUpdate(0,0,0,0); delay_ms(300);
		tm1637DisplayUpdate(0,0,0,0x6d); delay_ms(300);//   S
		tm1637DisplayUpdate(0,0,0x6d,0x3e); delay_ms(300);//  SU
		tm1637DisplayUpdate(0,0x6d,0x3e,0x7c); delay_ms(300);// SUb
		tm1637DisplayUpdate(0x6d,0x3e,0x7c,0x6d); delay_ms(300);//SUbS
		tm1637DisplayUpdate(0x7c,0x6d,0x39,0x31); delay_ms(300);//bSCr
		tm1637DisplayUpdate(0x6d,0x39,0x31,0x30); delay_ms(300);//SCrI
		tm1637DisplayUpdate(0x39,0x31,0x30,0x7c); delay_ms(300);//CrIb
		tm1637DisplayUpdate(0x31,0x30,0x7c,0x79); delay_ms(300);//rIbe
		tm1637DisplayUpdate(0x30,0x7c,0x79,0); delay_ms(300);//Ibe
		tm1637DisplayUpdate(0x7c,0x79,0,0); delay_ms(300);//be
		tm1637DisplayUpdate(0x79,0,0,0); delay_ms(300);//e


} */

void animation2(){

	        tm1637DisplayUpdate(0,0,0,0); delay_ms(300);
			tm1637DisplayUpdate(0,0,0,0x76); delay_ms(300);//   H
			tm1637DisplayUpdate(0,0,0x76,0x79); delay_ms(300);//  HE
			tm1637DisplayUpdate(0,0x76,0x79,0x38); delay_ms(300);// HEL
			tm1637DisplayUpdate(0x76,0x79,0x38,0x38); delay_ms(300);//HELL
			tm1637DisplayUpdate(0x79,0x38,0x38,0x5c); delay_ms(300);//ELLO
			tm1637DisplayUpdate(0x38,0x38,0x5c,0); delay_ms(300);//LLO
			tm1637DisplayUpdate(0x38,0x5c,0,0); delay_ms(300);//LO
			tm1637DisplayUpdate(0x5c,0,0,0); delay_ms(300);//O
			//tm1637DisplayUpdate(0,0,0,0); delay_ms(100);//SPACE
			//tm1637DisplayUpdate(0,0,0,0); delay_ms(300);//SPACE
			tm1637DisplayUpdate(0,0,0,0x78); delay_ms(300);//T
			tm1637DisplayUpdate(0,0,0x78,0x76); delay_ms(300);//th
			tm1637DisplayUpdate(0,0x78,0x76,0x79); delay_ms(300);//the
			tm1637DisplayUpdate(0x78,0x76,0x79,0x50); delay_ms(300);//ther
			tm1637DisplayUpdate(0x76,0x79,0x50,0x79); delay_ms(300);//here
			tm1637DisplayUpdate(0x79,0x50,0x79,0); delay_ms(300);//ere
			tm1637DisplayUpdate(0x50,0x79,0,0); delay_ms(300);//re
			tm1637DisplayUpdate(0x79,0,0,0); delay_ms(300);//e




}


void delay_ms(uint32_t ms){
	  uint32_t tickstart = HAL_GetTick();
	  while((HAL_GetTick() - tickstart) < ms){
		  __NOP();
	  };
}

