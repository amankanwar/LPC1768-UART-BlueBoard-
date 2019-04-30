/********************************************************************
Basic Code
Author - Aman Kanwar
*********************************************************************/

#include "Uart_CortexM3.h"

int main(void)
{
  init_UART();
	//UART_init();
//	unsigned char data = '\0';	
	unsigned char userName[20];
	unsigned char userPassword[40];
	while(1)
	{		
	  sendString((unsigned char *)"============>Kindly Enter your details <================");
    
		nextLine(5);               // 5 lines of spaces
		sendString((unsigned char *)"User Name     : ");
   	receiveString(userName);
		
		nextLine(2);               // 2 lines of spaces
		sendString((unsigned char *)"Enter Password: ");
    receivePassword(userPassword);
		
		nextLine(2);              
		sendString((unsigned char *)"Your username is : ");
    sendString(userName);              // 2 lines of spaces
		
		nextLine(2);
		sendString((unsigned char *)"Password is      : ");
		sendString(userPassword);
		
		nextLine(2);               // 2 lines of spaces
	}
return 0;
}
