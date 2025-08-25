
#include<8051.h>
#include<string.h>
#include<stdio.h>

#define rs P3_0
#define en P3_2
#define sw1 P2_0
#define sw2 P2_2
unsigned char count=0;
void lcd_data(unsigned char);
void lcd_cmd(unsigned char);
void delay(unsigned char);
void lcd_number(unsigned char);
void lcdstring(unsigned char*);
void timer0()__interrupt(1){
if(sw1==0){
count=count+1;
delay(1000);
}
}
void timer1()__interrupt(3){
if(sw2==0){
count=count-1;
delay(1000);
}
}
int main(void){
 TMOD=0x11; 
 TH0=0x00;
 TL0=0X00;
 TH1=0x00;
 TL1=0X00;
IE=0X8A;
TR0=1;
TR1=1;
unsigned char dat[]="TOTAL:";
lcd_cmd(0x38);//2 lines and 5x7 matrix
lcd_cmd(0x01);//clear display
lcd_cmd(0x06);// increment cursor
lcd_cmd(0x0E);//display on curor blinking
lcd_cmd(0x80);//force cursor to begining to 1st line
unsigned char j=0;
for(int j=0;j<strlen(dat);j++)
{
lcd_data(dat[j]);
}
while(1){
lcd_cmd(0x87);
lcd_number(count);
delay(1200);
}
}

void lcd_data(unsigned char datas){
P1=datas;
rs=1;
en=0;
delay(10);
en=1;
}
void lcd_cmd(unsigned char cmd){
P1=cmd;
rs=0;
en=0;
delay(10);
en=1;
}
void delay(unsigned char ms){
unsigned char i,j;
for(i=0;i<ms;i++)
for(j=0;j<ms;j++);
}
void lcd_number(unsigned char num) {
    char buffer[10];
    sprintf(buffer, "%02u", num);
    lcdstring(buffer);
}
void lcdstring(unsigned char *str){
	while(*str){
	lcd_data(*str++);
		//delay(1000);
	}
}

