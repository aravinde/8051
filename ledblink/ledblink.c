#include<8051.h>
void main(){
while(1){
P1_0=0; //select the sigle pin of the port 1 and set the output low
P1_1=0;
for(unsigned int i=0;i<10000;i++);
P1_0=1; //select the sigle pin of the port 1 and set the output high
for(unsigned int i=0;i<10000;i++);
}

}

