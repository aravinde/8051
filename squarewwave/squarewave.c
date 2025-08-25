
#include<8051.h>
void timer_delay(){
TMOD=0x01;
TL0=0x33;
TH0=0xFE;
TR0=1;
while(TF0==0);
TF0=0;
TR0=0;
}
int main(){
P1_0=0;
while(1){
P1_0=1;
timer_delay();
P1_0=0;
timer_delay();
}

}

