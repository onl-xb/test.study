/*����204-��Ѻ�-202012902428-ѧ���ɼ���Ϣ����ϵͳ*/ 
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
    printf("\t\t|        ��������ơ��γ����            |\n");
    printf("\t\t|          ѧ���ɼ�����ϵͳ              |\n");
    printf("\t\t|----------------------------------------|\n");
    printf("\t\t|----------------------------------------|\n");
    printf("\n\n\t\t������ƣ��¹��Ʋ�ҵѧԺ\n");
    printf("\t\t  רҵ������������\n");
    printf("\t\t  �༶������204\n");
    printf("\t\t  ��������Ѻ�\n");
    printf("\t\t  ѧ�ţ�202012902428\n");
    printf("\t\t   2020��3��4��\n"); 
    printf("\n");printf("\n");
}
void Password()
{
	char key[]="28";
	char shuru[20];
	printf("�������¼���루ѧ�ŵĺ���λ����");
	scanf("%s",shuru);
	if(strcmp(key,shuru)==0)
	  {printf("���ϣ�����Ŷ������������ȷ��\n\t���������˵���");getche();Menu();
	 
	   } 
	else {
	printf("��ѽ�������ϣ�����һ�ΰɣ�\n");
	Password();
	}
}
void Menu()
{
	system("cls");
	printf("\t----------------------------------------\n");
	printf("\t|          1.ѧ���ɼ���Ϣ¼��          |\n");
	printf("\t|          2.ѧ���ɼ���Ϣ��ѯ          |\n");
	printf("\t|          3.ѧ���ɼ���Ϣ�༭          |\n");
	printf("\t|          4.ѧ���ɼ���Ϣͳ��          |\n");
	printf("\t|          5.ѧ��ɼ���Ϣ��ʾ          |\n");
	printf("\t|          6.�˳�����                  |\n");
	printf("\t----------------------------------------\n");
	printf("\t������˵�ѡ��1-6��");
	switch(getchar()) 
	{
		case '1':system("cls");Input();break;
		case '2':system("cls");Query();break;
	    case '3':system("cls");Edit();break;
	    case '4':system("cls");Statistic();break;
        case '5':system("cls");Output();break; 
        case '6':exit(0);
		default:printf("\nѽ��������������Ĳ��ԣ�Ӧ������1��6֮�����\n");Menu();
	}
	}
	
void Input()
{    int i,x=1,geshu;
     char m;
     
	printf("ע�������ѧ�Ų����ظ���\n");
	printf("������Ҫ¼��ѧ����������");
	scanf("%d",&geshu);
	printf("\n");
	for(i=1;i<=geshu;i++)
	{
		printf("�������%d��ѧ����ѧ��: ",i);
		scanf("%s",stu[i].id);
		printf("\n");
		if(i>=2)	
		{for(x=1;x<i;x++)
		{
    	if(strcmp(stu[i].id,stu[x].id)==0)
    	{
	printf("����ģ����ظ�������ѧ�ţ�����������ɣ�\n");x=99;break;
		}
			}
		
		}	if(x==99){i--;	continue;
		}
	
		printf("�������%d��ѧ��������: ",i);
		scanf("%s",stu[i].name);
		printf("\n");
		printf("�������%d��ѧ���ĸ����ɼ�: ",i);
		scanf("%d",&stu[i].gs);
		printf("\n");
		printf("�������%d��ѧ����Ӣ��ɼ�: ",i);
		scanf("%d",&stu[i].ys);
		printf("\n");
		printf("�������%d��ѧ����c���Գɼ�: ",i);
		scanf("%d",&stu[i].cs);
		printf("\n");
	}printf("ѧ���ɼ�¼��ɹ�!\n�Ƿ����¼��ѧ����Ϣ(Y/N):\n");int j;
for(j=1;j<=99;j++)
{
	stu[j].sum=stu[j].cs+stu[j].gs+stu[j].ys;
}
	if(getche()=='Y')  Input();
	else Menu();
	 
}
	   //������ѯ��ʽ 
 void Xingming()
 {     
	 	char n,a[20];int i,c=1;
	 	printf("����������");
	 	scanf("%s",a);
	 	for(i=1;i<=100;i++)
	 	{
            if(strcmp(a,stu[i].name)==0)
	 		{
			 printf("\t������%s   ѧ�ţ�%s   c���ԣ�%d   ������%d   Ӣ�%d   �ܷ֣�%d\n",stu[i].name,stu[i].id,stu[i].cs,stu[i].gs,stu[i].ys,stu[i].sum);c=99;break;}
	 		}
		if(c==1) printf("�Բ��𣬲��޴��ˣ�\n"); 
		 printf("�Ƿ������ѯ(Y/N)\n");
		 if(getche()=='Y')  Query();
	else Menu();
		
 }
 
       //ѧ�Ų�ѯ��ʽ
void Xuehao()
{    
	char n,b[20];int i,c=1;
	printf("������ѧ��");
	scanf("%s",b);
	for(i=1;i<=100;i++)
	{
		if(strcmp(b,stu[i].id)==0)
	 		{
			 
			printf("\t������%s   ѧ�ţ�%s   c���ԣ�%d   ������%d   Ӣ�%d   �ܷ֣�%d",stu[i].name,stu[i].id,stu[i].cs,stu[i].gs,stu[i].ys,stu[i].sum);c=99;break;}
       	
	}
	if(c==1)
	 printf("�Բ��𣬲��޴��ˣ�\n");
	 printf("�Ƿ������ѯ(Y/N)\n");
	 if(getche()=='Y')  Query();
	else Menu();

 } 
//ѧ���ɼ��Ĳ�ѯ
void Query()
{
	printf("\t1.����������ѯѧ��\n");
	printf("\t2.����ѧ�Ų�ѯѧ��\n");
	printf("\t3.���ز˵�\n");
	printf("��������ѡ��Ĳ�ѯ��ʽ:"); 
	switch(getche())
	{
		case '1':system("cls");Xingming();break;
		case '2':system("cls");Xuehao();break;
		case '3':system("cls");Menu();break;
		default:printf("\nѽ��������������Ĳ��ԣ�Ӧ������1��3֮�����\n");Query();break;
	}
 } 
  //ѧ���ɼ���Ϣ�޸�
 void Xiugai()
 {
char n,b[20];int i,c=1;
	printf("������Ҫ�޸�ѧ����ѧ��");
	scanf("%s",b);
	for(i=1;i<=100;i++)
	{
		if(strcmp(b,stu[i].id)==0)
		{	printf("��Ҫ�޸�ѧ������ϢΪ��%s  %s  c���ԣ�%d  ������%d  Ӣ�%d  �ܷ֣�%d  ",stu[i].name,stu[i].id,stu[i].cs,stu[i].gs,stu[i].ys,stu[i].sum);
		    printf("�������µĳɼ���˳��Ҫ����Ŷ��\n");
		    printf("����");
			scanf("%s",stu[i].name);
			printf("ѧ��");
			scanf("%s",stu[i].id);
			printf("c����");
			scanf("%d",&stu[i].cs);
			printf("����");
			scanf("%d",&stu[i].gs);
			printf("Ӣ��");
			scanf("%d",&stu[i].ys);
			printf("%s����Ϣ��Ϊ��%s  %s  %d  %d  %d  %d",stu[i].name,stu[i].name,stu[i].id,stu[i].cs,stu[i].gs,stu[i].ys,stu[i].sum);c=99;break;
		} 
	 	
   }if(c==1)printf("�����������ѧ���������û���ҵ������");
 printf("�Ƿ������ѯ(Y/N)\n");
	 if(getche()=='Y') Edit();
	else Menu();
}
           //ѧ���ɼ�ɾ��
void Shanchu()
{
	char n,b[20];int i,c=1,j;
	printf("������Ҫɾ��ѧ����ѧ��");
	scanf("%s",b);
	for(i=1;i<=100;i++)
	{
		if(strcmp(b,stu[i].id)==0)
		{ printf("��Ҫɾ��ѧ������ϢΪ��%s  %s  c���ԣ�%d  ������%d  Ӣ�%d  �ܷ֣�%d  ",stu[i].name,stu[i].id,stu[i].cs,stu[i].gs,stu[i].ys,stu[i].sum);c=99;
		  printf("�Ƿ����Ҫɾ��(Y/N)");
		  if(getchar()=='Y')
		  {
		  	for(j=i;j<=99;j++);
		  	stu[i]=stu[i+1];printf("ɾ���ɹ���");break;
		   } 
		 } 
 }if(c==1)
 printf("û���ҵ�����Ҫ��ѧ��ѧ����Ϣ");
 printf("�Ƿ����ɾ��ѧ����Ϣ");
 if(getche()=='Y') Edit();
 else Menu(); 
  }

//ѧ���ɼ���Ϣ�༭
void Edit()
{
	printf("\t1.ѧ���ɼ���Ϣ�޸�\n");
	printf("\t2.ѧ����Ϣɾ��\n");
	printf("\t3.���ز˵�\n");
	printf("��������ѡ��Ĳ�ѯ��ʽ"); 
	switch(getche())
	{
		case '1':system("cls");Xiugai();break;
		case '2':system("cls");Shanchu();break;
		case '3':system("cls");Menu();break;
		default:printf("\nѽ��������������Ĳ��ԣ�Ӧ������1��3֮�����\n");Edit();break;

 } }
    

 //���ֵ
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
	   printf("c�������ֵ%d   �������ֵ%d   Ӣ�����ֵ%d",maxc,maxg,maxy); 

	printf("�Ƿ����(Y/N)\n");
 if(getche()=='Y') Statistic(); 
 else Menu(); 
  }
 

//��Сֵ
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
	   printf("c������Сֵ%d   ������Сֵ%d   Ӣ����Сֵ%d",minc,ming,miny); 
printf("�Ƿ����(Y/N)\n");
 if(getche()=='Y') Statistic();
 else Menu(); 
  }  
  
  //ƽ��ֵ 
  void Avg()
  {int i,sum=0,c=0,g=0,y=0,k=0,cavg,gavg,yavg,sumavg;
  	for(i=1;i<=99;i++)
  	{
  		if(stu[i].sum==0)  continue;
  		k++;
  		c+=stu[i].cs;g+=stu[i].gs;y+=stu[i].ys,sum=stu[i].sum;
  		cavg=c/k;gavg=g/k;yavg=y/k;sumavg=sum/k;
  		
  		
	  }printf("c���Ե�ƽ��ֵ��%d   ������ƽ��ֵ��%d   Ӣ���ƽ��ֵ��%d   �ܷ�ƽ��ֵ��%d\n",cavg,gavg,yavg,sumavg);
	  printf("�Ƿ����(Y/N)\n");
 if(getche()=='Y') Statistic();
 else Menu(); 
  }
  //����
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
	}	}for(i=1;i<=k;i++){printf("%s   %s   c���ԣ�%d   ������%d   Ӣ�%d\n",stu[i].name,stu[i].id,stu[i].cs,stu[i].gs,stu[i].ys,stu[i].sum);
	}
	printf("�Ƿ����(Y/N)\n");
 if(getche()=='Y') Statistic();
 else Menu(); 
 } 







  //ѧ���ɼ���Ϣͳ�� 
void Statistic()
{
	printf("\t1.���ֵ\n");
	printf("\t2.��Сֵ\n");
	printf("\t3.ƽ��ֵ\n");
	printf("\t4.����\n");
	printf("\t5.���ز˵�\n");
	printf("�����������ѯ��ѡ��:");
	switch(getche())
	{
		case '1':system("cls");Max();break;
		case '2':system("cls");Min();break;
		case '3':system("cls");Avg();break;
		case '4':system("cls");Sort();break;
		case '5':printf("\t��ô���Ҫ�뿪����\n�ðɣ��´�����Ŷ��\n");Menu();break;
		default:printf("\nѽ��������������Ĳ��ԣ�Ӧ������1��6֮�����\n");Statistic();break;
		
	 } 
}
 
 //ѧ���ɼ���ʾ
  void Output()
  {  int i,j,k=0;
  for(j=1;j<=99;j++){
		if(stu[j].sum==0) continue;
		k++;}
    printf("\t1.ȫ����ʾ\n");
	printf("\t2.c����60������\n");
	printf("\t3.c����60�ּ�60������\n");
	printf("\t4.����60������\n");
	printf("\t5.����60�ּ�60������\n");
	printf("\t6.Ӣ��60������\n"); 
	printf("\t7.Ӣ��60�ּ�60������\n");
	printf("\t8.���ز˵�\n");
	 switch(getche())
	 {
	 	case '1':system("cls");for(i=1;i<=k;i++){printf("%s   %s   c���ԣ�%d   ������%d   Ӣ�%d   �ܷ֣�%d\n",stu[i].name,stu[i].id,stu[i].cs,stu[i].gs,stu[i].ys,stu[i].sum);}printf("�Ƿ����(Y/N)\n");
 if(getche()=='Y') Output();
 else Menu(); 	 ;break;
		case '2':system("cls");for(i=1;i<=k;i++){if(stu[i].cs<60)printf("%s   %s   %d   \n",stu[i].name,stu[i].id,stu[i].cs);}printf("�Ƿ����(Y/N)\n");
 if(getche()=='Y') Output();
 else Menu(); 	;break;
		case '3':system("cls");for(i=1;i<=k;i++){if(stu[i].cs>=60)printf("%s   %s   %d   \n",stu[i].name,stu[i].id,stu[i].cs);}printf("�Ƿ����(Y/N)\n");
 if(getche()=='Y') Output();
 else Menu(); ;break;
		case '4':system("cls");for(i=1;i<=k;i++){if(stu[i].gs<60)printf("%s   %s   %d   \n",stu[i].name,stu[i].id,stu[i].gs);}printf("�Ƿ����(Y/N)\n");
 if(getche()=='Y') Output();
 else Menu(); ;break;
		case '5':system("cls");for(i=1;i<=k;i++){if(stu[i].gs>=60)printf("%s   %s   %d   \n",stu[i].name,stu[i].id,stu[i].gs);}printf("�Ƿ����(Y/N)\n");
 if(getche()=='Y') Output();
 else Menu(); ;break;
		case '6':system("cls");for(i=1;i<=k;i++){if(stu[i].ys<60)printf("%s   %s   %d   \n",stu[i].name,stu[i].id,stu[i].ys);}printf("�Ƿ����(Y/N)\n");
 if(getche()=='Y') Output();
 else Menu(); ;break;
		case '7':system("cls");for(i=1;i<=k;i++){if(stu[i].ys>=60)printf("%s   %s   %d   \n",stu[i].name,stu[i].id,stu[i].ys);}printf("�Ƿ����(Y/N)\n");
 if(getche()=='Y') Output();
 else Menu(); ;break;
		case '8':system("cls");Menu();break;
		default:printf("\nѽ��������������Ĳ��ԣ�Ӧ������1��8֮�����\n");Output();break;
	 
	 }
   } 

//������ 
int main()
{   
    system("title ������ƿγ����");
	system("color A4");
	Welcome();
	Password();
	return  0;
} 

