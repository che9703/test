#include "header.h"


main()
{
	printf("%sdf");
	int M_choice;
	memberinit();
	categoryinit();
	reviewinit();
	filteringinit();
	rollbackinit();
	
	readmember();
	readcategory();
	readreview();
	readfilter();

	while(1)
	{
		system("cls");
		printf("\t*-----------------------*\n");
		printf("\t|     ���� ���α׷�     |\n");
		printf("\t*-----------------------*\n\n");

		puts("\t�α���(1)\n");
		puts("\tȸ������(2)\n");
		puts("\tID/PWã��(3)\n");
		puts("\t����(0)\n");		
		M_choice = getch();
		switch(M_choice)
		{
		case '1':
			system("cls");
			loginmenu();
			break;
		case '2':
			system("cls");
			signup();
			getch();
			system("cls");
			break;
		case '3':
			findmenu();
			break;
		case '0':
			while(1)
			{
				system("cls");
				printf("\n\n\n\n\n\n\n\t\t\t������ �����Ͻðڽ��ϱ�?(y/n)");
				M_choice = getch();
				if(M_choice == 'y')
				{
					system("cls");
					puts("\n\n\n\n\n\n\n\t\t\t�����մϴ�.");
					getch();
					savemember();
					savecategory();
					savereview();
					savefilter();
					exit(1);
				}
				else if(M_choice == 'n')
				{
					break;
				}
			}
			break;
		}
	}
}