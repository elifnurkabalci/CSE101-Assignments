#include <stdio.h>   
#include <string.h>  
#include <unistd.h>  
#include <fcntl.h>   
#include <errno.h>   
#include <termios.h> 
#include <time.h>
#include <sys/types.h>

#include <stdlib.h>
#include <stdint.h>   
#include <string.h>   
#include <unistd.h>   
#include <fcntl.h>    
#include <errno.h>    
#include <termios.h>  
#include <sys/ioctl.h>
#include <getopt.h>
#include "arduino-serial-lib.h"
#include "arduino-serial-lib.c"


int main(){
	int chos,result,num;
	int dev=serialport_init("/dev/ttyUSB0",9600); //dev(device) is arduino,I connected the c and arduino code each other
	

	printf("## WELCOME TO GTU ARDUINO LAB                          ##:\n"); //this is menu for choose to operation
	printf("## STUDENT NAME: ELİFNUR KABALCI                       ##:\n");
	printf("## PLEASE SELECT FROM THE FOLLOWING                    ##:\n");
	printf("## MENU                                                ##:\n");
	printf("(1) TURN ON LED ON ARDUINO                               :\n");
	printf("(2) TURN OFF LED ON ARDUINO                              :\n");
	printf("(3) FLASH ARDUINO LED 3 TIMES                            :\n");
	printf("(4) SEND A NUMBER TO ARDUINO TO COMPUTE SQUARE BY ARDUINO:\n");
	printf("(5) BUTTON PRESS COUNTER                                 :\n");
	printf("(0) EXIT                                                 :\n");
    printf("PLEASE SELECT:\n");   //to select from the menu
    scanf("%d",&chos);

    const char* a="select1";     //select1 is function in arduino, I connect with a.
    const char* b="select2";     //select2 is function in arduino, I connect with b. 
    const char* c="select3";     //select3 is function in arduino, I connect with c.
    const char* e="select5";     //select5 is function in arduino, I connect with e.
   
    if(chos==1){
        serialport_write(dev,a);   //I want to point out select1
    }
    if(chos==2){
	    serialport_write(dev,b);   //I want to point out select2
    }
    if(chos==3){
	    serialport_write(dev,c);   //Iwant to point out select3
    }
    if(chos==4){
	    printf("Please enter a number");  //for calculate square of a number
	    scanf("%d",&num);
	    result=num*num;
        printf("\n %d",result);
    }
    if(chos==5){
        serialport_write(dev,e);    //I want to point out select5
    }
    if(chos==0){
        printf("EXIT");
    }
    serialport_close(dev);      //I opened device in line 25, I close this line
	return 0;
	
}