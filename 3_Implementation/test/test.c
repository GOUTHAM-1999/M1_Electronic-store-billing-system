#include<stdio.h>
#include <conio.h>

#define TV_PRICE 110.00
#define VCR_PRICE 80.00
#define REMOTE_PRICE 9.20


int main(void)
{

//	Local Declarations

	const double LCD_PRICE = 500.00;
	const double TAPE_PRICE = 48.00;
	const double taxRate = 8.25; 

	int tvQTY;
	int vcrQTY;
	int remoteQTY;
	int lcdQTY;
	int tapeQTY;

	float total_tv;
	float total_vcr;
	float total_remote;
	float total_lcd;
	float total_tape;
	float subTotal;
	float tax;
	float bill_Amount;
	char name[250];
	char cname[250];

//	Statements


	printf("\t\tWelcome To Electronics Store Billing System\n");
	printf("\n Please Enter the following details. \n\n");
	
	printf("Cashier's Name: \n");
	scanf("%s",name);
	printf("Customer's Name: \n");
	scanf("%s",cname);
	
	printf("\n\t***Enter 0 for none****");

	printf("\nHow many TVs were sold? \n");
	scanf("%d", &tvQTY);

	printf("How many VCRs were sold? \n");
	scanf("%d", &vcrQTY);

	printf("How many Remote Controllers were sold? \n");
	scanf("%d", &remoteQTY);

	printf("How many LCDs were sold? \n");
	scanf("%d", &lcdQTY);

	printf("How many Tape Recorders were sold? \n");
	scanf("%d", &tapeQTY);
	
	printf("\n Press Any Key To Generate Bill");
	getch();
}
© 2021 GitHub, Inc.
Term
