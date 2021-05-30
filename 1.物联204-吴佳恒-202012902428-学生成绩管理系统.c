/*物联204-吴佳恒-202012902428-学生成绩信息管理系统*/ 
#include   <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
struct Score
{
	char id[20];
	char name[20];
	int gs;
	int cs;
	int ys;
    int sum;
}stu[100];
int count=0;
void
Welcome(),Password(),Menu(),Input(),Query(),Xuehao(),Xingming(),Edit(),Xiugai(),Shanchu(),Statistic(),Max(),Min(),Avg(),Sort(),Output();
void Welcome()
{
	
	printf("\n\n\t\t|----------------------------------------|\n");
    printf("\t\t|----------------------------------------|\n");
    printf("\t\t|        《程序设计》课程设计            |\n");
    printf("\t\t|          学生成绩管理系统              |\n");
    printf("\t\t|----------------------------------------|\n");
    printf("\t\t|----------------------------------------|\n");
    printf("\n\n\t\t程序设计：新工科产业学院\n");
    printf("\t\t  专业：物联网工程\n");
    printf("\t\t  班级：物联204\n");
    printf("\t\t  姓名：吴佳恒\n");
    printf("\t\t  学号：202012902428\n");
    printf("\t\t   2020年3月4日\n"); 
    printf("\n");printf("\n");
}
void Password()
{
	char key[]="28";
	char shuru[20];
	printf("请输入登录密码（学号的后两位）：");
	scanf("%s",shuru);
	if(strcmp(key,shuru)==0)
	  {printf("哎呦，不错哦，密码输入正确！\n\t任意键进入菜单！");getche();Menu();
	 
	   } 
	else {
	printf("哎呀，错了呦，再来一次吧！\n");
	Password();
	}
}
void Menu()
{
	system("cls");
	printf("\t----------------------------------------\n");
	printf("\t|          1.学生成绩信息录入          |\n");
	printf("\t|          2.学生成绩信息查询          |\n");
	printf("\t|          3.学生成绩信息编辑          |\n");
	printf("\t|          4.学生成绩信息统计          |\n");
	printf("\t|          5.学社成绩信息显示          |\n");
	printf("\t|          6.退出程序                  |\n");
	printf("\t----------------------------------------\n");
	printf("\t请输入菜单选项1-6：");
	switch(getchar()) 
	{
		case '1':system("cls");Input();break;
		case '2':system("cls");Query();break;
	    case '3':system("cls");Edit();break;
	    case '4':system("cls");Statistic();break;
        case '5':system("cls");Output();break; 
        case '6':exit(0);
		default:printf("\n呀，少侠，你输入的不对，应该输入1到6之间的数\n");Menu();//此文件是我所有//
	}
	}
	
void Input()
{    int i,x=1,geshu;
     char m;
     
	printf("注意输入的学号不能重复！\n");
	printf("请输入要录入学生的总数：");
	scanf("%d",&geshu);
	printf("\n");
	for(i=1;i<=geshu;i++)
	{
		printf("请输入第%d个学生的学号: ",i);
		scanf("%s",stu[i].id);
		printf("\n");
		if(i>=2)	
		{for(x=1;x<i;x++)
		{
    	if(strcmp(stu[i].id,stu[x].id)==0)
    	{
	printf("真粗心，您重复输入了学号，请重新输入吧！\n");x=99;break;
		}
			}
		
		}	if(x==99){i--;	continue;
		}
	
		printf("请输入第%d个学生的名字: ",i);
		scanf("%s",stu[i].name);
		printf("\n");
		printf("请输入第%d个学生的高数成绩: ",i);
		scanf("%d",&stu[i].gs);
		printf("\n");
		printf("请输入第%d个学生的英语成绩: ",i);
		scanf("%d",&stu[i].ys);
		printf("\n");
		printf("请输入第%d个学生的c语言成绩: ",i);
		scanf("%d",&stu[i].cs);
		printf("\n");
	}printf("学生成绩录入成功!\n是否继续录入学生信息(Y/N):\n");int j;
for(j=1;j<=99;j++)
{
	stu[j].sum=stu[j].cs+stu[j].gs+stu[j].ys;
}
	if(getche()=='Y')  Input();
	else Menu();
	 
}
	   //姓名查询方式 
 void Xingming()
 {     
	 	char n,a[20];int i,c=1;
	 	printf("请输入姓名");
	 	scanf("%s",a);
	 	for(i=1;i<=100;i++)
	 	{
            if(strcmp(a,stu[i].name)==0)
	 		{
			 printf("\t姓名：%s   学号：%s   c语言：%d   高数：%d   英语：%d   总分：%d\n",stu[i].name,stu[i].id,stu[i].cs,stu[i].gs,stu[i].ys,stu[i].sum);c=99;break;}
	 		}
		if(c==1) printf("对不起，查无此人！\n"); 
		 printf("是否继续查询(Y/N)\n");
		 if(getche()=='Y')  Query();
	else Menu();
		
 }
 
       //学号查询方式
void Xuehao()
{    
	char n,b[20];int i,c=1;
	printf("请输入学号");
	scanf("%s",b);
	for(i=1;i<=100;i++)
	{
		if(strcmp(b,stu[i].id)==0)
	 		{
			 
			printf("\t姓名：%s   学号：%s   c语言：%d   高数：%d   英语：%d   总分：%d",stu[i].name,stu[i].id,stu[i].cs,stu[i].gs,stu[i].ys,stu[i].sum);c=99;break;}
       	
	}
	if(c==1)
	 printf("对不起，查无此人！\n");
	 printf("是否继续查询(Y/N)\n");
	 if(getche()=='Y')  Query();
	else Menu();

 } 
//学生成绩的查询
void Query()
{
	printf("\t1.根据姓名查询学生\n");
	printf("\t2.根据学号查询学生\n");
	printf("\t3.返回菜单\n");
	printf("请输入您选择的查询方式:"); 
	switch(getche())
	{
		case '1':system("cls");Xingming();break;
		case '2':system("cls");Xuehao();break;
		case '3':system("cls");Menu();break;
		default:printf("\n呀，少侠，你输入的不对，应该输入1到3之间的数\n");Query();break;
	}
 } 
  //学生成绩信息修改
 void Xiugai()
 {
char n,b[20];int i,c=1;
	printf("请输入要修改学生的学号");
	scanf("%s",b);
	for(i=1;i<=100;i++)
	{
		if(strcmp(b,stu[i].id)==0)
		{	printf("你要修改学生的信息为：%s  %s  c语言：%d  高数：%d  英语：%d  总分：%d  ",stu[i].name,stu[i].id,stu[i].cs,stu[i].gs,stu[i].ys,stu[i].sum);
		    printf("请输入新的成绩，顺序不要错了哦！\n");
		    printf("名字");
			scanf("%s",stu[i].name);
			printf("学号");
			scanf("%s",stu[i].id);
			printf("c语言");
			scanf("%d",&stu[i].cs);
			printf("高数");
			scanf("%d",&stu[i].gs);
			printf("英语");
			scanf("%d",&stu[i].ys);
			printf("%s的信息更为：%s  %s  %d  %d  %d  %d",stu[i].name,stu[i].name,stu[i].id,stu[i].cs,stu[i].gs,stu[i].ys,stu[i].sum);c=99;break;
		} 
	 	
   }if(c==1)printf("少侠，你好像学号输入错误，没有找到这个人");
 printf("是否继续查询(Y/N)\n");
	 if(getche()=='Y') Edit();
	else Menu();
}
           //学生成绩删除
void Shanchu()
{
	char n,b[20];int i,c=1,j;
	printf("请输入要删除学生的学号");
	scanf("%s",b);
	for(i=1;i<=100;i++)
	{
		if(strcmp(b,stu[i].id)==0)
		{ printf("你要删除学生的信息为：%s  %s  c语言：%d  高数：%d  英语：%d  总分：%d  ",stu[i].name,stu[i].id,stu[i].cs,stu[i].gs,stu[i].ys,stu[i].sum);c=99;
		  printf("是否真的要删除(Y/N)");
		  if(getchar()=='Y')
		  {
		  	for(j=i;j<=99;j++);
		  	stu[i]=stu[i+1];printf("删除成功！");break;
		   } 
		 } 
 }if(c==1)
 printf("没有找到您想要的学生学生信息");
 printf("是否继续删除学生信息");
 if(getche()=='Y') Edit();
 else Menu(); 
  }

//学生成绩信息编辑
void Edit()
{
	printf("\t1.学生成绩信息修改\n");
	printf("\t2.学生信息删除\n");
	printf("\t3.返回菜单\n");
	printf("请输入您选择的查询方式"); 
	switch(getche())
	{
		case '1':system("cls");Xiugai();break;
		case '2':system("cls");Shanchu();break;
		case '3':system("cls");Menu();break;
		default:printf("\n呀，少侠，你输入的不对，应该输入1到3之间的数\n");Edit();break;

 } }
    

 //最大值
void Max()
{	  int k=0,i;
for(i=1;i<=99;i++)
  	{
  		if(stu[i].sum==0)  continue;
  		k++;}
	 	int xc,yc,ic,maxc,xg,yg,ig,maxg,xy,yy,iy,maxy;
	 	for(ic=1;ic<=k;ic++)
	 	{
            maxc=0;
	 		yc=stu[ic].cs;
	 		if(yc>=maxc)
			 maxc=yc;
			
		 }
	 
	  for(ig=1;ig<=k;ig++)
	 	{
	 		maxg=0;
	 		yg=stu[ig].gs;
	 		if(yg>=maxg)
			 maxg=yg;
			 
		 }
	  for(iy=1;iy<=k;iy++)
	 	{
	 		maxy=0;
	 		yy=stu[iy].ys;
	 		if(yy>=maxy)
			 maxy=yy;
			 
		 }
	   printf("c语言最高值%d   高数最高值%d   英语最高值%d",maxc,maxg,maxy); 

	printf("是否继续(Y/N)\n");
 if(getche()=='Y') Statistic(); 
 else Menu(); 
  }
 

//最小值
void Min()
{     int k=0,i;
for(i=1;i<=99;i++)
  	{
  		if(stu[i].sum==0)  continue;
  		k++;}
	int xc,yc,ic,minc,xg,yg,ig,ming,xy,yy,iy,miny;
	 	for(ic=k;ic>=1;ic--)
	 	{
	 		minc=101;
	 		yc=stu[ic].cs;
	 		if(yc<=minc){minc=yc;
			 }
		 }
	 
	  for(ig=k;ig>=1;ig--)
	 	{
	 		ming=101;
	 		yg=stu[ig].gs;
	 		if(yg<=ming){ming=yg;
			 }
		 }
	  for(iy=k;iy>=1;iy--)
	 	{
	 		miny=101;
	 		yy=stu[iy].ys;
	 		if(yy<=miny){miny=yy;
			 }
		 }
	   printf("c语言最小值%d   高数最小值%d   英语最小值%d",minc,ming,miny); 
printf("是否继续(Y/N)\n");
 if(getche()=='Y') Statistic();
 else Menu(); 
  }  
  
  //平均值 
  void Avg()
  {int i,sum=0,c=0,g=0,y=0,k=0,cavg,gavg,yavg,sumavg;
  	for(i=1;i<=99;i++)
  	{
  		if(stu[i].sum==0)  continue;
  		k++;
  		c+=stu[i].cs;g+=stu[i].gs;y+=stu[i].ys,sum=stu[i].sum;
  		cavg=c/k;gavg=g/k;yavg=y/k;sumavg=sum/k;
  		
  		
	  }printf("c语言的平均值：%d   高数的平均值：%d   英语的平均值：%d   总分平均值：%d\n",cavg,gavg,yavg,sumavg);
	  printf("是否继续(Y/N)\n");
 if(getche()=='Y') Statistic();
 else Menu(); 
  }
  //排列
void Sort()
{
	int i,j,a,b,k=0;
	for(j=1;j<=99;j++){
		if(stu[j].sum==0) continue;
		k++;

	for(i=1;i<=99-i;i++)
	{
		a=stu[i].sum;b=stu[i+1].sum;
		if(stu[i].sum<stu[i+1].sum){
			stu[0].sum=stu[i].sum;
			stu[i].sum=stu[i+1].sum;
			stu[i+1].sum=stu[0].sum;
		}
	}	}for(i=1;i<=k;i++){printf("%s   %s   c语言：%d   高数：%d   英语：%d\n",stu[i].name,stu[i].id,stu[i].cs,stu[i].gs,stu[i].ys,stu[i].sum);
	}
	printf("是否继续(Y/N)\n");
 if(getche()=='Y') Statistic();
 else Menu(); 
 } 







  //学生成绩信息统计 
void Statistic()
{
	printf("\t1.最大值\n");
	printf("\t2.最小值\n");
	printf("\t3.平均值\n");
	printf("\t4.排序\n");
	printf("\t5.返回菜单\n");
	printf("请输入你想查询的选项:");
	switch(getche())
	{
		case '1':system("cls");Max();break;
		case '2':system("cls");Min();break;
		case '3':system("cls");Avg();break;
		case '4':system("cls");Sort();break;
		case '5':printf("\t这么快就要离开了吗？\n好吧！下次再来哦！\n");Menu();break;
		default:printf("\n呀，少侠，你输入的不对，应该输入1到6之间的数\n");Statistic();break;
		
	 } 
}
 
 //学生成绩显示
  void Output()
  {  int i,j,k=0;
  for(j=1;j<=99;j++){
		if(stu[j].sum==0) continue;
		k++;}
    printf("\t1.全部显示\n");
	printf("\t2.c语言60分以下\n");
	printf("\t3.c语言60分及60分以上\n");
	printf("\t4.高数60分以下\n");
	printf("\t5.高数60分及60分以上\n");
	printf("\t6.英语60分以下\n"); 
	printf("\t7.英语60分及60分以上\n");
	printf("\t8.返回菜单\n");
	 switch(getche())
	 {
	 	case '1':system("cls");for(i=1;i<=k;i++){printf("%s   %s   c语言：%d   高数：%d   英语：%d   总分：%d\n",stu[i].name,stu[i].id,stu[i].cs,stu[i].gs,stu[i].ys,stu[i].sum);}printf("是否继续(Y/N)\n");
 if(getche()=='Y') Output();
 else Menu(); 	 ;break;
		case '2':system("cls");for(i=1;i<=k;i++){if(stu[i].cs<60)printf("%s   %s   %d   \n",stu[i].name,stu[i].id,stu[i].cs);}printf("是否继续(Y/N)\n");
 if(getche()=='Y') Output();
 else Menu(); 	;break;
		case '3':system("cls");for(i=1;i<=k;i++){if(stu[i].cs>=60)printf("%s   %s   %d   \n",stu[i].name,stu[i].id,stu[i].cs);}printf("是否继续(Y/N)\n");
 if(getche()=='Y') Output();
 else Menu(); ;break;
		case '4':system("cls");for(i=1;i<=k;i++){if(stu[i].gs<60)printf("%s   %s   %d   \n",stu[i].name,stu[i].id,stu[i].gs);}printf("是否继续(Y/N)\n");
 if(getche()=='Y') Output();
 else Menu(); ;break;
		case '5':system("cls");for(i=1;i<=k;i++){if(stu[i].gs>=60)printf("%s   %s   %d   \n",stu[i].name,stu[i].id,stu[i].gs);}printf("是否继续(Y/N)\n");
 if(getche()=='Y') Output();
 else Menu(); ;break;
		case '6':system("cls");for(i=1;i<=k;i++){if(stu[i].ys<60)printf("%s   %s   %d   \n",stu[i].name,stu[i].id,stu[i].ys);}printf("是否继续(Y/N)\n");
 if(getche()=='Y') Output();
 else Menu(); ;break;
		case '7':system("cls");for(i=1;i<=k;i++){if(stu[i].ys>=60)printf("%s   %s   %d   \n",stu[i].name,stu[i].id,stu[i].ys);}printf("是否继续(Y/N)\n");
 if(getche()=='Y') Output();
 else Menu(); ;break;
		case '8':system("cls");Menu();break;
		default:printf("\n呀，少侠，你输入的不对，应该输入1到8之间的数\n");Output();break;
	 
	 }
   } 

//主函数 
int main()
{   
    system("title 程序设计课程设计");
	system("color A4");
	Welcome();
	Password();
	return  0;
} 

