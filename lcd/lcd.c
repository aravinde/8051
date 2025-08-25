#include<8051.h>
#include<string.h>
#define rs P3_0
#define en P3_2

void lcd_data(unsigned char);
void lcd_cmd(unsigned char);
void delay(unsigned char);

int main(void){
unsigned char dat[]="welcome";
lcd_cmd(0x38);//2 lines and 5x7 matrix
lcd_cmd(0x01);//clear display
lcd_cmd(0x06);// increment cursor
lcd_cmd(0x0E);//display on curor blinking
lcd_cmd(0x80);//force cursor to begining to 1st line
unsigned char j=0;
for(j=0;j<strlen(dat);j++){
lcd_data(dat[j]);
}
while(1){
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
