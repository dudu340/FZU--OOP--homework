# include<stdio.h>
# include<string.h>
int main()
	{
		printf("请输入文件名\n"); 
 		char s[15];
 		scanf("%s",s);
 		freopen(s,"r",stdin);
		int zhi(char s[]);
		char a[11][10]={"零","一","二","三","四","五","六","七","八","九","十"}; 
   		char b[6][10]={"傲","慢","与","偏","见"};
		int i,j,k,t;
		for(i=0;i<=9;i++)
			{
				printf("%s\n",a[i]);
				t=zhi(a[i]);
				if(t!=-2)
					printf("pass");
				else
					printf("error");
			}
		for(i=0;i<=4;i++)
			{
				printf("%c\n",b[i]);
				t=zhi(b[i]);
				if(t!=-2)
					printf("pass");
				else
					printf("error");
			}
		return 0;
	}
int zhi(char s[])
	{
		if(strcmp(s,"一")==0) return 1;
    	else 
			if(strcmp(s,"二")==0) return 2;
   		else 
		   	if(strcmp(s,"三")==0) return 3;
   	 	else 
			if(strcmp(s,"四")==0) return 4;
    	else 
			if(strcmp(s,"五")==0) return 5;
    	else 
			if(strcmp(s,"六")==0) return 6;
    	else 
			if(strcmp(s,"七")==0) return 7;
    	else 
			if(strcmp(s,"八")==0) return 8;
    	else 
			if(strcmp(s,"九")==0) return 9;
    	else 
			if(strcmp(s,"零")==0) return 0;
    	else return -2;
	}
