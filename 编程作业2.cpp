# include<stdio.h>
# include<string.h>
int main()
	{
		printf("�������ļ���\n"); 
		 char s[15];
		 scanf("%s",s);
		 freopen(s,"r",stdin);
		int sum;
		int zhi(char s[15]);
		int zengjia(char s[15]);
		int jianshao(char s[15]);
		void shuchu(int sum);
		char s1[15],s2[15],s3[15],s4[15];
		char str1[15],str2[15],str3[15];
		char a[15],b[15];
		scanf("%s %s %s %s",s1,s2,s3,s4);
		sum=zhi(s4);
		while(1)
		    {
			scanf("%s %s %s",str1,str2,str3);
			if(strcmp(str1,"���")==0)
			    break;
			else
			    {
				if(strcmp(str2,"����")==0)
				    {
					sum=sum+zengjia(str3);
				    }
				else
				    if(strcmp(str2,"����")==0)
					{
				            sum=sum-jianshao(str3);
					}
			    }
		    }
		scanf("%s %s",a,b);
		if(strcmp(b,str2)==0)
			shuchu(sum);
		return 0;
	}
int zhi(char s[15])
	{
		if(strcmp(s,"��")==0)
			return 0;
		else
			if(strcmp(s,"һ")==0)
				return 1;
		else
			if(strcmp(s,"��")==0)
				return 2;
		else
			if(strcmp(s,"��")==0)
				return 3;
		else
			if(strcmp(s,"��")==0)
				return 4;
		else
			if(strcmp(s,"��")==0)
				return 5;
		else
			if(strcmp(s," ��")==0)
				return 6;
		else
			if(strcmp(s,"��")==0)
				return 7;
		else
			if(strcmp(s,"��")==0)
				return 8;
		else
			return 9; 
	}
int zengjia(char s[15])
	{
		if(strcmp(s,"��")==0)
			return 0;
		else
			if(strcmp(s,"һ")==0)
				return 1;
		else
			if(strcmp(s,"��")==0)
				return 2;
		else
			if(strcmp(s,"��")==0)
				return 3;
		else
			if(strcmp(s,"��")==0)
				return 4;
		else
			if(strcmp(s,"��")==0)
				return 5;
		else
			if(strcmp(s," ��")==0)
				return 6;
		else
			if(strcmp(s,"��")==0)
				return 7;
		else
			if(strcmp(s,"��")==0)
				return 8;
		else
			return 9; 
	}
int jianshao(char s[15])
	{
		if(strcmp(s,"��")==0)
			return 0;
		else
			if(strcmp(s,"һ")==0)
				return 1;
		else
			if(strcmp(s,"��")==0)
				return 2;
		else
			if(strcmp(s,"��")==0)
				return 3;
		else
			if(strcmp(s,"��")==0)
				return 4;
		else
			if(strcmp(s,"��")==0)
				return 5;
		else
			if(strcmp(s," ��")==0)
				return 6;
		else
			if(strcmp(s,"��")==0)
				return 7;
		else
			if(strcmp(s,"��")==0)
				return 8;
		else
			return 9; 
	}
void shuchu(int sum)
	{
		int m,n;
		if(sum<=10)
			{
				if(sum==0)
					printf("��");
				else
					if(sum==1)
						printf("һ");
				else
					if(sum==2)
						printf("��");
				else
					if(sum==3)
						printf("��");
				else
					if(sum==4)
						printf("��");
				else
					if(sum==5)
						printf("��");
				else
					if(sum==6)
						printf("��");
				else
					if(sum==7)
						printf("��");
				else
					if(sum==8)
						printf("��");
				else
					if(sum==9)
						printf("��");
				else
					printf("ʮ");
			}
		else
			{
				m=sum/10;n=sum%10;
				if(m==1)
					{
						if(n==1)
							printf("ʮһ");
						else
							if(n==2)
								printf("ʮ��"); 
						else
							if(n==3)
								printf("ʮ��");
						else
							if(n==4)
								printf("ʮ��");
						else
							if(n==5)
								printf("ʮ��");
						else
							if(n==6)
								printf("ʮ��");
						else
							if(n==7)
								printf("ʮ��");
						else
							if(n==8)
								printf("ʮ��");
						else
							printf("ʮ��"); 
					}
				else
					if(m==2)
						{
							if(n==0)
								printf("��ʮ"); 
							else 
								if(n==1)
									printf("��ʮһ");
							else
								if(n==2)
									printf("��ʮ��"); 
							else
								if(n==3)
									printf("��ʮ��");
							else
								if(n==4)
									printf("��ʮ��");
							else
								if(n==5)
									printf("��ʮ��");
							else
								if(n==6)
									printf("��ʮ��");
							else
								if(n==7)
									printf("��ʮ��");
							else
								if(n==8)
									printf("��ʮ��");
							else
								printf("��ʮ��"); 		
						}	
					if(m==3)
						{
							if(n==0)
								printf("��ʮ"); 
							else 
								if(n==1)
									printf("��ʮһ");
							else
								if(n==2)
									printf("��ʮ��"); 
							else
								if(n==3)
									printf("��ʮ��");
							else
								if(n==4)
									printf("��ʮ��");
							else
								if(n==5)
									printf("��ʮ��");
							else
								if(n==6)
									printf("��ʮ��");
							else
								if(n==7)
									printf("��ʮ��");
							else
								if(n==8)
									printf("��ʮ��");
							else
								printf("��ʮ��"); 	
						}
					else
						if(m==4)
							{
								if(n==0)
								printf("��ʮ"); 
							else 
								if(n==1)
									printf("��ʮһ");
							else
								if(n==2)
									printf("��ʮ��"); 
							else
								if(n==3)
									printf("��ʮ��");
							else
								if(n==4)
									printf("��ʮ��");
							else
								if(n==5)
									printf("��ʮ��");
							else
								if(n==6)
									printf("��ʮ��");
							else
								if(n==7)
									printf("��ʮ��");
							else
								if(n==8)
									printf("��ʮ��");
							else
								printf("��ʮ��"); 		
							} 
					else
						if(m==5)
							{
								if(n==0)
								printf("��ʮ"); 
							else 
								if(n==1)
									printf("��ʮһ");
							else
								if(n==2)
									printf("��ʮ��"); 
							else
								if(n==3)
									printf("��ʮ��");
							else
								if(n==4)
									printf("��ʮ��");
							else
								if(n==5)
									printf("��ʮ��");
							else
								if(n==6)
									printf("��ʮ��");
							else
								if(n==7)
									printf("��ʮ��");
							else
								if(n==8)
									printf("��ʮ��");
							else
								printf("��ʮ��"); 		
							} 
					else
						if(m==6)
							{
								if(n==0)
								printf("��ʮ"); 
							else 
								if(n==1)
									printf("��ʮһ");
							else
								if(n==2)
									printf("��ʮ��"); 
							else
								if(n==3)
									printf("��ʮ��");
							else
								if(n==4)
									printf("��ʮ��");
							else
								if(n==5)
									printf("��ʮ��");
							else
								if(n==6)
									printf("��ʮ��");
							else
								if(n==7)
									printf("��ʮ��");
							else
								if(n==8)
									printf("��ʮ��");
							else
								printf("��ʮ��"); 	
							}
					else
						if(m==7)
							{
								if(n==0)
								printf("��ʮ"); 
							else 
								if(n==1)
									printf("��ʮһ");
							else
								if(n==2)
									printf("��ʮ��"); 
							else
								if(n==3)
									printf("��ʮ��");
							else
								if(n==4)
									printf("��ʮ��");
							else
								if(n==5)
									printf("��ʮ��");
							else
								if(n==6)
									printf("��ʮ��");
							else
								if(n==7)
									printf("��ʮ��");
							else 
								if(n==8)
									printf("��ʮ��");
							else
								printf("��ʮ��"); 	
							}
					else
						if(m==8)
							{
								if(n==0)
								printf("��ʮ"); 
							else 
								if(n==1)
									printf("��ʮһ");
							else
								if(n==2)
									printf("��ʮ��"); 
							else
								if(n==3)
									printf("��ʮ��");
							else
								if(n==4)
									printf("��ʮ��");
							else
								if(n==5)
									printf("��ʮ��");
							else
								if(n==6)
									printf("��ʮ��");
							else
								if(n==7)
									printf("��ʮ��");
							else
								if(n==8)
									printf("��ʮ��");
							else
								printf("��ʮ��"); 		
							} 
					else
						{
							if(n==0)
								printf("��ʮ"); 
							else 
								if(n==1)
									printf("��ʮһ");
							else
								if(n==2)
									printf("��ʮ��"); 
							else
								if(n==3)
									printf("��ʮ��");
							else
								if(n==4)
									printf("��ʮ��");
							else
								if(n==5)
									printf("��ʮ��");
							else
								if(n==6)
									printf("��ʮ��");
							else
								if(n==7)
									printf("��ʮ��");
							else
								if(n==8)
									printf("��ʮ��");
							else
								printf("��ʮ��"); 	
						} 
			} 
	}
