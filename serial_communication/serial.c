#include<8051.h>
void serial_init(void);
void delay(unsigned char);
void UART_transmit(unsigned char);
void UART_receive(void);
unsigned char rece;
int main(){
serial_init();
while(1)
{
//UART_transmit('B');
//delay(1000);
UART_receive();
delay(1000);
}
}
void serial_init()
{
TMOD=0x20;// set timer mode 1
TH1=0xFD;//baud rate 9600
SCON=0x50;// set the reception enable 0101 0000
TR1=1;// start the timer 1
}
void delay(unsigned char ms){
unsigned char i,j;
for(i=0;i<ms;i++)
for(j=0;j<ms;j++);
}
void UART_transmit(unsigned char character){
SBUF=character;
while(TI==0);
T1=0;
}
void UART_receive(void){
while(RI==0);
rece=SBUF;
P1=rece;
UART_transmit(rece);
RI=0;
}
