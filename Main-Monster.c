# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <Windows.h>
char console[10];
char password[20];

void su(void);
void cd(char *,int);
void ls(void);
void rm(char *);
void touch(char *);
void mkdir1(char *);
void rd(void);
void reset(void);
void loginlose(char *);
void systemconfig(void);
int main(void)
{
	char pt[500];
	FILE * fp = NULL;
	FILE * pfp = NULL;
	char *ps;
	size_t ret;
	system("cls");
	printf("欢迎进入Monster系统!\n");
	printf("		　　((`'-\"\"\"\"\"-'`))		\n");
	printf("		　　 )　-　　-　 (			\n");
	printf("		　　/　 (o _ o) 　\			\n");
	printf("		    \\　　( 0 )　　/			\n");
	printf("		　_'-.._　'='　_..-'_		\n");
	printf("		/`;#'#'#.　-.　#'#'#;`\		\n");
	printf("		\_))　　　'#'　　　((_/		\n");
	printf("		#.　　☆　☆　☆　　.#		\n");
	printf("		'#.　　  hello  　.#'		\n");
	printf("		　/'#.　　　　　.#'\		\n");
	printf("		　_\\'#.　　　.#'//_		\n");
	printf("		　　(((___)'#'(___			\n");
	printf("\n");
	fp = fopen("C:\\Users\\Administrator\\Desktop\\Monster\\system\\cache\\pass\\passtest.txt", "w");
	fclose(fp);
	system("dir C:\\Users\\Administrator\\Desktop\\Monster\\system>>C:\\Users\\Administrator\\Desktop\\Monster\\system\\cache\\pass\\passtest.txt");
	fp = fopen("C:\\Users\\Administrator\\Desktop\\Monster\\system\\cache\\pass\\passtest.txt", "r");
	fread(pt, 1, 500, fp);
	if (strstr(pt, "password.ps") != NULL)
	{
		printf("请输入系统登录密码:");
		gets(password);
		pfp = fopen("C:\\Users\\Administrator\\Desktop\\Monster\\system\\password.ps","r");
		fread(ps,1,20,pfp);
		if((strcmp(password,ps)) == 0)
		{
			printf("登录成功！\n三秒后进入系统...\n");
			Sleep(3000);
			system("cls");
			systemconfig();
		}
		else
		{
			printf("密码错误请重新输入:");
			loginlose(ps);
		}
	}
	else
	{
		printf("尊敬的用户，系统尚未设置密码\n请设置系统密码:");
		gets(password);
		pfp = fopen("C:\\Users\\Administrator\\Desktop\\Monster\\system\\password.ps","w");
		fwrite(password,1,strlen(password),pfp);
	}
	

	getchar();

	return 0;
}


void loginlose(char *ps)
{
	while(1)
	{
		gets(password);
		if((strcmp(password,ps)) == 0)
		{
			printf("登录成功！\n三秒后进入系统...\n");
			Sleep(3000);
			system("cls");
			systemconfig();
		}
		else
		{
			printf("密码错误请重新输入:");
			fflush(stdin);//清洗缓冲区
		}
	}
}

void systemconfig(void)
{
	printf("one@Monster:/ $ ");
	gets(console);
		if(strstr(console,"rm") != NULL)
		{
			if(strlen(console) == 2);
			{
				printf("您输入的命令不完整，请重新输入\n");
				systemconfig();
			}
		}
	
	return;
}

void su(void)
{
	printf("root@Monster:/ $ ");
	gets(console);
	
	return;
}

void rm(char *filename)
{
	
}

void touch(char *filename)
{
	
}

void mkdir1(char *filename)
{
	
}

void cd (char *filename,int i)
{
	
}
//待续。。To be continued。。
