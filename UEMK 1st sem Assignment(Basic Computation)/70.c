/*	Question: 
Write a program for a matchstick game being played between the 
computer and a user. Your program should ensure that the computer always wins. 
Rules for the game are as follows: 
There are 21 matchsticks. The Computer asks the player to pick 1, 2, 3, 0r 4 
matchsticks. After the person picks, the computer does its picking. 
Whoever is forced to pick up the last matchstick loses the game.	*/

#include<stdio.h>

int main()
{
	int i = 3,computer_pick, match_picked = 0, user_pick, match_remaining = 21, last_pick = 0;
	printf("Rules:\n1. Pick match sticks between 1~4.\n2. Cannot pick more than available matches.\n"); 
	printf("3. Failure to comply with any one or more of the\naforesaid rules cause immediate winning of the opponent.\n\n");
	
	while(match_picked != 21)
	{
		if (match_remaining == 1)
		{
			printf("\nComputer says:''Seems like you're gonna loose, man!''\n\n");
		}
		printf("Enter the number of matches you wanna pick (1~4): ");			
		scanf("%d", &user_pick);
		last_pick = 0;
		if (user_pick>match_remaining)
		{
			printf("Are you dumb?\nYou cannot pick more matchsticks than available, can you?\n");
			break;
		}
		if (user_pick <= 0 || user_pick > 4)
		{
			printf("Invalid Input!\n");
			break;
		}
		
		printf("You have picked %d matches.\n", user_pick);
		match_picked += user_pick;
		match_remaining = 21 - match_picked;
		
		
		printf("Matches Remaining: %d.\n", match_remaining);

		if (match_remaining != 0)
		{
			computer_pick = match_remaining - (5*i) - 1;
			printf("The computer picks %d matches.\n", computer_pick);
			last_pick = 1;
			match_picked += computer_pick;
			match_remaining = 21 - match_picked;
			printf("Matches Remaining: %d.\n", match_remaining);
			i--;
		}
	}
	printf("Game Over!\n");
	if(last_pick == 0)
		printf("Oopsie! The Computer Wins.\n");
	else
		printf("Congratulations! You won. But the coder is stupid.\n");
	return 0;
}
