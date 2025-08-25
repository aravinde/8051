#include<8051.h>
void delay(void){
unsigned int i=0;
for(i=0;i<14;i++){
TMOD=0x01;
TL0=0x00;
TH0=0x00;
TR0=1;
while(TF0==0);
TR0=0;
TF0=0;
}
}
int main(){

while(1){
P1_0=0;
delay();
P1_0=1;
delay();

}
}
