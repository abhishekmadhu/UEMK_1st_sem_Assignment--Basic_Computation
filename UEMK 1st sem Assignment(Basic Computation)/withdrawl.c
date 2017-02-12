/*76. This C Program performs ATM transaction with 50000 balances in hand. The types of ATM
transaction are:
1) Balance checking
2) Cash withdrawl ( e.g 500 = 5 x 100; 900 = 1 x 500 + 4 x 100; 1000 = 2 x 500; 1700 = 1 x 1000 +
1 x 500 + 2 x 200; 5000 = 4 x 1000 + 2 x 500
3) Cash deposition.
You can opt any of the above transaction according to your need of transaction.*/


#include <stdio.h>

int main()
{
	long int balance=50000,bal=50000,withdrawl,wdr,n100,n500=0,n1000;
	printf("Ener withdrawl amount(multiple of 100): ");
	scanf("%ld",&wdr);
	withdrawl=wdr;
	if ((wdr%100)==0 && wdr<=balance)
	{
		/*amount selection begins*/
		if(wdr>=1500)
		{
			n1000=wdr/1000;
			wdr-=1000*n1000;
			n500=wdr/500;
			wdr-=500*n500;
			n100=wdr/100;
		}

		else
		{
			n1000=0;
			n500=wdr/500;
			wdr-=500*n500;
			n100=wdr/100;
		}
		balance-=withdrawl;
		printf("1000=%ld;500=%ld;100=%ld\n",n1000,n500,n100 );
		printf("Remaining Balance=%ld\n", balance);
		return 0;
	}
}