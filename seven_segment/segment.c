#include<8051.h>
unsigned char i=0,count=0;
unsigned char segment[] = {
    0xC0, // 0 (inverted 0x3F)
    0xF9, // 1 (inverted 0x06)
    0xA4, // 2 (inverted 0x5B)
    0xB0, // 3 (inverted 0x4F)
    0x99, // 4 (inverted 0x66)
    0x92, // 5 (inverted 0x6D)
    0x82, // 6 (inverted 0x7D)
    0xF8, // 7 (inverted 0x07)
    0x80, // 8 (inverted 0x7F)
    0x90  // 9 (inverted 0x6F)
};
void timer_0 ()__interrupt(1){
if(count==14){
count=0;
P1=segment[i++];
}
count++;
}
int main(){
TMOD=0x01;
TL0=0x00;
TH0=0x00;
IE=0x82;
TR0=1;
P1=0x00;
while(1)
{
}
}

