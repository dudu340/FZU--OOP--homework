# include<stdio.h>
# include<string.h>
int main()
	{
		printf("�������ļ���\n"); 
 		char s[15];
 		scanf("%s",s);
 		freopen(s,"r",stdin);
		int zhi(char s[]);
		char a[11][10]={"��","һ","��","��","��","��","��","��","��","��","ʮ"}; 
   		char b[6][10]={"��","��","��","ƫ","��"};
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
		if(strcmp(s,"һ")==0) return 1;
    	else 
			if(strcmp(s,"��")==0) return 2;
   		else 
		   	if(strcmp(s,"��")==0) return 3;
   	 	else 
			if(strcmp(s,"��")==0) return 4;
    	else 
			if(strcmp(s,"��")==0) return 5;
    	else 
			if(strcmp(s,"��")==0) return 6;
    	else 
			if(strcmp(s,"��")==0) return 7;
    	else 
			if(strcmp(s,"��")==0) return 8;
    	else 
			if(strcmp(s,"��")==0) return 9;
    	else 
			if(strcmp(s,"��")==0) return 0;
    	else return -2;
	}
