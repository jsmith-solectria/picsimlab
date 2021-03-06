/* ########################################################################

   PICsimLab - PIC laboratory simulator

   ########################################################################

   Copyright (c) : 2010-2015  Luis Claudio Gambôa Lopes

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

   For e-mail suggestions :  lcgamboa@yahoo.com
   ######################################################################## */

#ifndef BOARD_2_H
#define	BOARD_2_H

#include "board_pic.h"


class cboard_2:public board_pic
{
  private:
    int p_CL1; 
    int p_CL2; 
    int p_CL3;    

     lcd_t lcd;

     mi2c_t mi2c;
     rtc_t rtc;
     
     int lcde;

     unsigned char clko;
     unsigned char d;
     unsigned char sda,sck;
       
    
  public:
      cboard_2(void);
      ~cboard_2(void);
      void Draw(CDraw *draw,double scale);
      void Run_CPU(void);
      String GetSupportedDevices(void){return lxT("PIC16F628A,PIC16F648A,PIC16F84A,");};
      String GetPictureFileName(void){return lxT("picsimlab2.png");};
      String GetInputMapFile(void){return lxT("input2.map");};
      String GetOutputMapFile(void){return lxT("output2.map");};
      void Reset(void);
      void EvMouseButtonPress(uint button, uint x, uint y,uint state);
      void EvMouseButtonRelease(uint button, uint x, uint y,uint state);
      void EvKeyPress(uint key, uint mask);
      void EvKeyRelease(uint key,uint mask);      
      void EvOnShow(void);
      void RefreshStatus(void);
      void WritePreferences(void);
      void ReadPreferences(char *name,char *value);
      unsigned short get_in_id(char * name);
      unsigned short get_out_id(char * name);
};



#endif	/* BOARD_1_H */

