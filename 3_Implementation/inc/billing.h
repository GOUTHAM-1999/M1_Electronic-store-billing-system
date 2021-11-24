void main()
{
  int a;
   	for( a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		printf("...");
	}
      printf("\n\n\t\t\t\t\tBill Generated. \n\n");
      
      system("PAUSE");
      system("CLS");

//	Calculation Statements

	total_tv = tvQTY * TV_PRICE;
	total_vcr = vcrQTY * VCR_PRICE;
	total_remote = remoteQTY * REMOTE_PRICE;
	total_lcd = lcdQTY * LCD_PRICE;
	total_tape = tapeQTY * TAPE_PRICE;
	subTotal = total_tv + total_vcr + total_remote + total_lcd + total_tape;
	tax = (subTotal * taxRate)/100;
	bill_Amount = subTotal + tax;



//	Printing Bills
    printf("\n");
    printf("\t\t\t====================================================\n");
	printf("\t\t\t\t      Electronics Store Bill\n");
	printf("\t\t\t====================================================\n");
	printf("\t\t\tQTY \t Description \t Unit Price$\t Total Price$\n");
	printf("\t\t\t--- \t ----------- \t ---------- \t -----------\n\n");
	printf("\t\t\t%02d \t TV                  %.2f       %10.2f \n", tvQTY, TV_PRICE, total_tv);
	printf("\t\t\t%02d  \t VCR                  %.2f       %10.2f  \n", vcrQTY, VCR_PRICE, total_vcr);
	printf("\t\t\t%02d   \t Remote CTRLR          %.2f       %10.2f   \n", remoteQTY, REMOTE_PRICE, total_remote);
	printf("\t\t\t%02d    \t LCD                 %.2f       %10.2f    \n", lcdQTY, LCD_PRICE, total_lcd);
	printf("\t\t\t%02d     \t Tape Recorder        %.2f       %10.2f     \n\n", tapeQTY, TAPE_PRICE, total_tape);
	printf("\t\t\t                                           ---------\n\n");
	printf("\t\t\t                           SUBTOTAL       %10.2f   \n", subTotal);
	printf("\t\t\t                           TAX            %10.2f    \n", tax);
	printf("\t\t\t                           Total$         %10.2f     \n", bill_Amount);
	printf("\t\t\t                           Customer         %s     \n", cname);
	printf("\t\t\t                           Cashier          %s     \n", name);
	printf("\t\t\t====================================================\n\n");
	printf("\t\t\t\t\t\tEnd of bill\n\n");

	system("PAUSE");
	system("CLS");
	//main();
	return 0;
	
} 
}

