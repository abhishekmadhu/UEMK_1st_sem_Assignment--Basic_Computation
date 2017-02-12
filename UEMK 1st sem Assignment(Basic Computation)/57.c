/*	INCOMPLETE	*/
Mon, 9 Jan 2017 21:04:38 +0530
/*57. Write the program that will read a real number 
from the keyboard and print the following
output in one line:
Smallest integer not less than the number(SINLTTN)
The given number
Largest integer not greater than the number(LINGTTN)*/

#include <stdio.h> 
#include <math.h>

int main()
{
	float num,SINLTTN,LINGTTN;
	printf("Enter the real number: ");
	scanf("%f",&num);
	SINLTTN = ceil(num);
	LINGTTN = floor(num); 
	printf("%d %f %d\n", SINLTTN,num,LINGTTN);
	return 0;
}
