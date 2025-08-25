#include<8051.h>
void external_interrupt(void)__interrupt(0){
P1_0^=1;
}
int main(){
IE=0x81;
TCON=0X01;
while(1){
}
}
