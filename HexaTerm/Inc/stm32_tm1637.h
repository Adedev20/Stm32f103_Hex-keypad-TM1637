#pragma once

void tm1637Init(void);
void tm1637DisplayDecimal(int v, int displaySeparator);
void tm1637SetBrightness(char brightness);
void tm1637Displaykey(int key);
void tm1637DisplayUpdate(int d0, int d1, int d2, int d3);
void animation();
void animation2();
void displayClr();
extern int key;
