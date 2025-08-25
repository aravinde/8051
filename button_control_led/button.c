#include<8051.h>
void delay(unsigned char);
int main(){
P0_2=0;
P1_0=0;
while(1){
if(P0_2==1){
P1_0^=1;
delay(1000);
}

}
}
void delay(unsigned char ms){
unsigned char i,j;
for(i=0;i<ms;i++)
for(j=0;j<ms;j++);
}
