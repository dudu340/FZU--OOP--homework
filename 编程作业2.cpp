# include<stdio.h>
# include<string.h>
int main()
	{
		printf("请输入文件名\n"); 
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
			if(strcmp(str1,"输出")==0)
			    break;
			else
			    {
				if(strcmp(str2,"增加")==0)
				    {
					sum=sum+zengjia(str3);
				    }
				else
				    if(strcmp(str2,"减少")==0)
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
		if(strcmp(s,"零")==0)
			return 0;
		else
			if(strcmp(s,"一")==0)
				return 1;
		else
			if(strcmp(s,"二")==0)
				return 2;
		else
			if(strcmp(s,"三")==0)
				return 3;
		else
			if(strcmp(s,"四")==0)
				return 4;
		else
			if(strcmp(s,"五")==0)
				return 5;
		else
			if(strcmp(s," 六")==0)
				return 6;
		else
			if(strcmp(s,"七")==0)
				return 7;
		else
			if(strcmp(s,"八")==0)
				return 8;
		else
			return 9; 
	}
int zengjia(char s[15])
	{
		if(strcmp(s,"零")==0)
			return 0;
		else
			if(strcmp(s,"一")==0)
				return 1;
		else
			if(strcmp(s,"二")==0)
				return 2;
		else
			if(strcmp(s,"三")==0)
				return 3;
		else
			if(strcmp(s,"四")==0)
				return 4;
		else
			if(strcmp(s,"五")==0)
				return 5;
		else
			if(strcmp(s," 六")==0)
				return 6;
		else
			if(strcmp(s,"七")==0)
				return 7;
		else
			if(strcmp(s,"八")==0)
				return 8;
		else
			return 9; 
	}
int jianshao(char s[15])
	{
		if(strcmp(s,"零")==0)
			return 0;
		else
			if(strcmp(s,"一")==0)
				return 1;
		else
			if(strcmp(s,"二")==0)
				return 2;
		else
			if(strcmp(s,"三")==0)
				return 3;
		else
			if(strcmp(s,"四")==0)
				return 4;
		else
			if(strcmp(s,"五")==0)
				return 5;
		else
			if(strcmp(s," 六")==0)
				return 6;
		else
			if(strcmp(s,"七")==0)
				return 7;
		else
			if(strcmp(s,"八")==0)
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
					printf("零");
				else
					if(sum==1)
						printf("一");
				else
					if(sum==2)
						printf("二");
				else
					if(sum==3)
						printf("三");
				else
					if(sum==4)
						printf("四");
				else
					if(sum==5)
						printf("五");
				else
					if(sum==6)
						printf("六");
				else
					if(sum==7)
						printf("七");
				else
					if(sum==8)
						printf("八");
				else
					if(sum==9)
						printf("九");
				else
					printf("十");
			}
		else
			{
				m=sum/10;n=sum%10;
				if(m==1)
					{
						if(n==1)
							printf("十一");
						else
							if(n==2)
								printf("十二"); 
						else
							if(n==3)
								printf("十三");
						else
							if(n==4)
								printf("十四");
						else
							if(n==5)
								printf("十五");
						else
							if(n==6)
								printf("十六");
						else
							if(n==7)
								printf("十七");
						else
							if(n==8)
								printf("十八");
						else
							printf("十九"); 
					}
				else
					if(m==2)
						{
							if(n==0)
								printf("二十"); 
							else 
								if(n==1)
									printf("二十一");
							else
								if(n==2)
									printf("二十二"); 
							else
								if(n==3)
									printf("二十三");
							else
								if(n==4)
									printf("二十四");
							else
								if(n==5)
									printf("二十五");
							else
								if(n==6)
									printf("二十六");
							else
								if(n==7)
									printf("二十七");
							else
								if(n==8)
									printf("二十八");
							else
								printf("二十九"); 		
						}	
					if(m==3)
						{
							if(n==0)
								printf("三十"); 
							else 
								if(n==1)
									printf("三十一");
							else
								if(n==2)
									printf("三十二"); 
							else
								if(n==3)
									printf("三十三");
							else
								if(n==4)
									printf("三十四");
							else
								if(n==5)
									printf("三十五");
							else
								if(n==6)
									printf("三十六");
							else
								if(n==7)
									printf("三十七");
							else
								if(n==8)
									printf("三十八");
							else
								printf("三十九"); 	
						}
					else
						if(m==4)
							{
								if(n==0)
								printf("四十"); 
							else 
								if(n==1)
									printf("四十一");
							else
								if(n==2)
									printf("四十二"); 
							else
								if(n==3)
									printf("四十三");
							else
								if(n==4)
									printf("四十四");
							else
								if(n==5)
									printf("四十五");
							else
								if(n==6)
									printf("四十六");
							else
								if(n==7)
									printf("四十七");
							else
								if(n==8)
									printf("四十八");
							else
								printf("四十九"); 		
							} 
					else
						if(m==5)
							{
								if(n==0)
								printf("五十"); 
							else 
								if(n==1)
									printf("五十一");
							else
								if(n==2)
									printf("五十二"); 
							else
								if(n==3)
									printf("五十三");
							else
								if(n==4)
									printf("五十四");
							else
								if(n==5)
									printf("五十五");
							else
								if(n==6)
									printf("五十六");
							else
								if(n==7)
									printf("五十七");
							else
								if(n==8)
									printf("五十八");
							else
								printf("五十九"); 		
							} 
					else
						if(m==6)
							{
								if(n==0)
								printf("六十"); 
							else 
								if(n==1)
									printf("六十一");
							else
								if(n==2)
									printf("六十二"); 
							else
								if(n==3)
									printf("六十三");
							else
								if(n==4)
									printf("六十四");
							else
								if(n==5)
									printf("六十五");
							else
								if(n==6)
									printf("六十六");
							else
								if(n==7)
									printf("六十七");
							else
								if(n==8)
									printf("六十八");
							else
								printf("六十九"); 	
							}
					else
						if(m==7)
							{
								if(n==0)
								printf("七十"); 
							else 
								if(n==1)
									printf("七十一");
							else
								if(n==2)
									printf("七十二"); 
							else
								if(n==3)
									printf("七十三");
							else
								if(n==4)
									printf("七十四");
							else
								if(n==5)
									printf("七十五");
							else
								if(n==6)
									printf("七十六");
							else
								if(n==7)
									printf("七十七");
							else 
								if(n==8)
									printf("七十八");
							else
								printf("七十九"); 	
							}
					else
						if(m==8)
							{
								if(n==0)
								printf("八十"); 
							else 
								if(n==1)
									printf("八十一");
							else
								if(n==2)
									printf("八十二"); 
							else
								if(n==3)
									printf("八十三");
							else
								if(n==4)
									printf("八十四");
							else
								if(n==5)
									printf("八十五");
							else
								if(n==6)
									printf("八十六");
							else
								if(n==7)
									printf("八十七");
							else
								if(n==8)
									printf("八十八");
							else
								printf("八十九"); 		
							} 
					else
						{
							if(n==0)
								printf("九十"); 
							else 
								if(n==1)
									printf("九十一");
							else
								if(n==2)
									printf("九十二"); 
							else
								if(n==3)
									printf("九十三");
							else
								if(n==4)
									printf("九十四");
							else
								if(n==5)
									printf("九十五");
							else
								if(n==6)
									printf("九十六");
							else
								if(n==7)
									printf("九十七");
							else
								if(n==8)
									printf("九十八");
							else
								printf("九十九"); 	
						} 
			} 
	}
