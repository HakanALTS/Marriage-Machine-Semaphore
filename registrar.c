#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "registrar.h"


void registrar1_makes_MARRIAGE_CEREMONY(int number)
{
	//printf("1. Marriage Ceremony \n");

	printf("                                	 --.\n");
	printf("           @@@          Registrar1      /  ))\n");
	printf("          (( }          starts          7_ /\n");
	printf("          ``)           marriage         / \\ \n");
	printf("         ``( \\  @@@    ceremony         |<| |\n");
	printf("        ```\\`.\\_`|/                    /|/| |\n");
	printf("       ```` )|---~                    / | | |\n");
	printf("      ~~~~~/ \\`                    o_)\\/| |_|\n");
	printf("          / ' \\`                        |__>)\n");
	printf("         /  '  \\`                       || |\n");
	printf("        /   '    `                      |\\ \\ \n");
	printf("       /   _!__.-._`                    | \\ \\ \n");
	printf("      /_.-'    ( \\                      | |\\ \\ \n");
	printf("      /,        ` \\                     |_| \\_\\ \n");
	printf("     |`_         |`_                  __'_)__.-'\n");
	printf("      %d.Bride                         %d.Groom    \n",number,number);
        printf("\n");
	printf("\n");

	int wait = rand()%5;// Maximum marriage ceremony time equals max 4 seconds, First registrar1 is fastre than register2 
	unsigned int x = sleep(wait);


	printf("               Registrar1 --.\n");
	printf("           @@@  finished /  ))\n");
	printf("          (( }  marriage 7_ /\n");
	printf("          ``)             / \\ \n");
	printf("         ``( \\           |<| |\n");
	printf("        ```\\`.\\__     __/|/| |\n");
	printf("       ```` )|---~o_)|___| | |\n");
	printf("      ~~~~~/ \\`          | |_|\n");
	printf("          / ' \\`         |__>)\n");
	printf("         /  '  \\`        || |\n");
	printf("        /   '    `       |\\ \\ \n");
	printf("       /   _!__.-._`     | \\ \\ \n");
	printf("      /_.-'  ( |         | |\\ \\ \n");
	printf("         /    `|         |_| \\_\\ \n");
	printf("        |`_   |`_      __'_)__.-'\n");
 	printf("        %d.Bride        %d.Groom   \n",number,number);
	printf("\n");
	printf("\n");

}

void registrar2_makes_MARRIAGE_CEREMONY(int number)
{
	//printf("2. Marriage Ceremony \n");

	printf("                                	 --.\n");
	printf("           @@@          Registrar2      /  ))\n");
	printf("          (( }          starts          7_ /\n");
	printf("          ``)           marriage         / \\ \n");
	printf("         ``( \\  @@@    ceremony         |<| |\n");
	printf("        ```\\`.\\_`|/                    /|/| |\n");
	printf("       ```` )|---~                    / | | |\n");
	printf("      ~~~~~/ \\`                    o_)\\/| |_|\n");
	printf("          / ' \\`                        |__>)\n");
	printf("         /  '  \\`                       || |\n");
	printf("        /   '    `                      |\\ \\ \n");
	printf("       /   _!__.-._`                    | \\ \\ \n");
	printf("      /_.-'    ( \\                      | |\\ \\ \n");
	printf("      /,        ` \\                     |_| \\_\\ \n");
	printf("     |`_         |`_                  __'_)__.-'\n");
	printf("      %d.Bride                         %d.Groom    \n",number,number);
        printf("\n");
	printf("\n");

	int wait = rand()%8;// Maximum marriage ceremony time equals 7 seconds
	unsigned int x = sleep(wait);


	printf("               Registrar2 --.\n");
	printf("           @@@  finished /  ))\n");
	printf("          (( }  marriage 7_ /\n");
	printf("          ``)             / \\ \n");
	printf("         ``( \\           |<| |\n");
	printf("        ```\\`.\\__     __/|/| |\n");
	printf("       ```` )|---~o_)|___| | |\n");
	printf("      ~~~~~/ \\`          | |_|\n");
	printf("          / ' \\`         |__>)\n");
	printf("         /  '  \\`        || |\n");
	printf("        /   '    `       |\\ \\ \n");
	printf("       /   _!__.-._`     | \\ \\ \n");
	printf("      /_.-'  ( |         | |\\ \\ \n");
	printf("         /    `|         |_| \\_\\ \n");
	printf("        |`_   |`_      __'_)__.-'\n");
	printf("        %d.Bride        %d.Groom   \n",number,number);
	printf("\n");
	printf("\n");	
		
}


void registrarSleeping(int number)
{
	printf("\n"); 
	printf("\n"); 
	printf(" Not Enough Couple \n");
	printf("		_____|~~\\_____      _____________\n");
	printf("             _-~               \\    |    \\ \n");	
	printf("          /___\\    |                |    /___\\ \n");
	printf("             _-    | )     \\    |__/   \\   \\ \n");
	printf("             _-         )   |   |  |     \\  \\ \n");
	printf("             _-    | )     /    |--|      |  |\n");
	printf("            __-_______________ /__/_______|  |_________\n");
	printf("           (                |----         |  | \n");
	printf("            `---------------'--\\\\\\\\      .`--'    \n");
	printf("                                         `|||| \n");
	printf("		%d.Registrar sleeping		\n",number);
	printf("\n"); 
	printf("\n"); 
	int wait = rand()%15;// Maximum marriage ceremony time equals 14 seconds
	unsigned int x = sleep(wait);





}

