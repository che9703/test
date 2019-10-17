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
		printf("\t|     리뷰 프로그램     |\n");
		printf("\t*-----------------------*\n\n");

		puts("\t로그인(1)\n");
		puts("\t회원가입(2)\n");
		puts("\tID/PW찾기(3)\n");
		puts("\t종료(0)\n");		
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
				printf("\n\n\n\n\n\n\n\t\t\t정말로 종료하시겠습니까?(y/n)");
				M_choice = getch();
				if(M_choice == 'y')
				{
					system("cls");
					puts("\n\n\n\n\n\n\n\t\t\t종료합니다.");
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