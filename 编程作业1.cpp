  # include<stdio.h>
# include<string.h>
int main()
	{
		int sum,m,n;
		int zhi(char s[15]);
		int zengjia(char s[15]);
		int jianshao(char s[15]);
		int cheng(char s[15]);
		int chu(char s[15]);
		char *shuchu(int sum);
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
						else
							if(strcmp(str2,"����")==0)
								{
									sum=sum*cheng(str3);
								}
						else
							if(strcmp(str2,"����")==0)
								{
									sum=sum/chu(str3);
								}
					}
			}
		scanf("%s %s",a,b);
		if(strcmp(b,str2)==0)
			{
				if(sum>=0)
					{
						if(sum<10)
							{
								printf("%s",*shuchu(sum));	
							}	
						else
							{
								m=sum/10;n=sum%10;
								if(n==0)
									{
										printf("%sʮ",*shuchu(m));	
									} 
								else
									{
										printf("%sʮ%s",*shuchu(m),*shuchu(n));
									}
							}
					}
				else
					{
						printf("��");
						if(sum>-10)
							{
								printf("%s",*shuchu(sum));
							} 
						else
							{
								sum=-sum;
								m=sum/10;n=sum%10;
								if(n==0)
									{
										printf("%sʮ",*shuchu(m));	
									} 
								else
									{
										printf("%sʮ%s",*shuchu(m),*shuchu(n));
									}
							}
					} 
			}
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
int cheng(char s[15])
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
int chu(char s[15])
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
char *shuchu(int x)
	{ 
		char s1[3]="һ",s2[3]="��",s3[3]="��",s4[3]="��",s5[3]="��",s6[3]="��",s7[3]="��",s8[3]="��",s9[3]="��";
		if(x==1)
			return s1;
		else 
			if(x==2)
				return s2;
		else
			if(x==3)
				return s3;
		else
			if(x==4)
				return s4;
		else
			if(x==5)
				return s5;
		else
			if(x==6)
				return s6;
		else
			if(x==7)
				return s7;
		else
			if(x==8)
				return s8;
		else
			return s9;			 
	}

