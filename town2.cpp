#include<bits/stdc++.h>//ͷ�ļ�
#include<windows.h>//ͷ�ļ�
void xiaozhen();
void  wuqidian();//������ 
void  yaopindian();//ҩƷ�� 
// { 
	void maoxian();//ð�� 
	void daguai();//���
	void xiaoguai();//С��
	void BOOS(); //boos 
// }
	void zhuangtai();//״̬ 
	void ziliao();//����
	void xiuxi();  
//}
int shengming=1000,shanghai=50,fangyu=10,jinbi=200,jijiubao=1,jingyan=100;//��������
int xhp,xsh,xjb,xdj,xfy;//С�� 
int dhp,dsh,djb,ddj,dfy;//���
int boosHP,boosSH,boosfy;//BOOS 
int day=2,cinc=0;
using namespace std;
int main()
{
	xiaozhen(); 
}  
void xiaozhen()
{
//	system("color fc");
	int i=0,n=0,l=1; 
	while (l) 
	{
		
		cout<<"				  [С��2.0<���ܼ�>]\n";
		cout<<"-------------------------------------------------------------------------------\n" ; 
		cout<<"��ǰ��"<<day/2<<"��(10��֮��)  ";
		if(day%2==0)
		{
			cout<<"����"<<endl; 
		} 
		else if(day%2!=0)
		{
			cout<<"��ҹ(Ұ��������ǿ)"<<endl; 
		} 
		cout<<"���� 1 ð��"<<endl;
		cout<<"���� 2 ������"<<endl;
		cout<<"���� 3 ҩƷ��"<<endl; 
		cout<<"���� 4 �Լ�״̬"<<endl; 
		cout<<"���� 5 �鿴��Ϸ����"<<endl;
		cout<<"���� 6 ��Ϣ(��Ѫ)"<<endl; 
		cout<<"���� 0 ������Ϸ"<<endl; 
		cin>>l;
		cinc++;
		if(cinc==30&&day<21)
		{
			day++;
		}
		switch(l) 
		{
			case 1:
				cout<<"-------------------------------------------------------------------------------\n" ; 
				maoxian();
				cout<<"-------------------------------------------------------------------------------\n" ; 
			break; 
			case 2:
				cout<<"-------------------------------------------------------------------------------\n" ; 
				wuqidian();
				cout<<"-------------------------------------------------------------------------------\n" ;  
			break;
			case 3:
				cout<<"-------------------------------------------------------------------------------\n" ; 
				yaopindian();
				cout<<"-------------------------------------------------------------------------------\n" ;  
			break;
			case 4:
				cout<<"-------------------------------------------------------------------------------\n" ;  
				zhuangtai();
				cout<<"-------------------------------------------------------------------------------\n" ;  
			break;
			case 5:
				cout<<"-------------------------------------------------------------------------------\n" ;  
				ziliao();
				cout<<"-------------------------------------------------------------------------------\n" ; 
			break;
			case 6:
				xiuxi();
			case 0:
			break;	
			default:
			cout<<"��Ҫ������"<<endl;
		} 
	}
}

void maoxian()
{
	int i=0,n=0,l=1;
	while(l)
	{
		
		cout<<"���� 1 ��С��(1~5��)"<<endl;
		cout<<"���� 2 ����(5~10��)"<<endl;
		cout<<"���� 3 ��BOOS(15��)"<<endl;  
		cout<<"���� 0 ����С��"<<endl; 
		cin>>l; 
		cinc++;
		if(cinc==30&&day<21)
		{
			day++;
		}
		switch(l)
		{
			case 1:
				cout<<"-------------------------------------------------------------------------------\n" ;
				xiaoguai();
				if(shengming<=0)
				{
					break;
				}
				cout<<"-------------------------------------------------------------------------------\n" ;
			break;
			case 2:
				cout<<"-------------------------------------------------------------------------------\n" ;
				if(jingyan/100<3)
				{
					cout<<"�ȼ�����"<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ; 
					break;
				} 
				daguai();
				if(shengming<=0)
				{
					break;
					
				}
				cout<<"-------------------------------------------------------------------------------\n" ;
			break;
			case 3:
				cout<<"-------------------------------------------------------------------------------\n" ;
				if(jingyan/100<5)
				{
					cout<<"�ȼ�����"<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ; 
					break;
				} 
				cout<<"-------------------------------------------------------------------------------\n" ;
				BOOS();
				if(shengming<=0)
				{
					Sleep(1000);
					break;
				}
				if(boosHP==0)
				{
					break;				
				}
				 
				cout<<"-------------------------------------------------------------------------------\n" ;
			case 0:
				break; 
			default:
			cout<<"��Ҫ������"<<endl;	
			cout<<"-------------------------------------------------------------------------------\n" ; 
		} 
	
	} 


} 
void zhuangtai()
{
	cout<<"�������Ϊ:"<<shengming<<endl;
	cout<<"��Ľ��Ϊ:"<<"$"<<jinbi<<endl;
	cout<<"��ķ���Ϊ:"<<fangyu<<endl;
	cout<<"����˺�Ϊ:"<<shanghai<<endl;
	cout<<"��ľ���Ϊ(100����=1��):"<<jingyan<<endl;
	cout<<"��ĵȼ�Ϊ:"<<jingyan/100<<endl;
	cout<<"��ӵ�еļ��Ȱ���"<<jijiubao<<endl;
	cout<<"����MAXն(�޵�,��ɵз��ȼ�*20�˺�,BOOS:500���˺�) "<<endl; 
} 
void xiaoguai()
{
	if(shengming<=0)
	{
		return xiaoguai();
	}
	int i=1,n=0,l=1,taopao,cg,lengque=0;
	char r,w; 
	srand(static_cast<unsigned  int >(time(0))) ; 
	int randomNumber=rand(); 
	xdj=(randomNumber% 5)+1;
	cg=(randomNumber% 5)+1;
	xhp=xdj*100;
	xsh=xdj*20;
	xjb=xdj*10;
	xfy=xdj*5; 
	if(day%2!=0)
	{
		xsh+=20; 
		
	} 
	cout<<"����Ե���"<<xdj<<"��С��,�Ƿ�ӭս(y/n)"<<endl;
	cin>>r;
	cinc++;
	if(cinc==30&&day<21)
	{
		day++;
	}
	if(r=='y')
	{
		int f=0; 
		while(shengming>0&&xhp>0&&l!=123&&i<=15)
		{
			cout<<"��"<<i<<"�غ�"<<endl;
			cout<<"�������:"<<shengming<<endl;
			cout<<"С������:"<<xhp<<endl;
			cout<<"����1����(��ɹ���(����˺�-�ֵ��˺�),��������)"<<endl;
			cout<<"����2����(����ɹ���,����*2)"<<endl; 
			cout<<"����3ʹ�ü���(�޵�,��ɵз��ȼ�*20�˺�,BOOS:500���˺�)"<<endl;  
			cout<<"����4����(20%����,����ʧ��ҲҪ����Ѫ(���ӷ���),ʵ�ڴ򲻹��Ź�15�غ��Զ�����)"<<endl; 
			cout<<"����5ʹ��ս�����Ȱ�!!!"<<endl; 
			cin>>l;
			 
			if(lengque>0&&f==1)
			{
				lengque--; 
			} 
			cinc++;
			if(cinc==30&&day<21)
			{
				day++;
			}
			switch(l)
			{
				case 1:
					if((fangyu/2)<xsh)
					{
						shengming-=xsh-fangyu/2; 
					} 
					if(shanghai>xfy ) 
					{
						xhp-=shanghai-xfy; 
					} 
					i++; 
					f=1; 
				break; 
				case 2: 
					if(fangyu*2<xsh)
					{
						shengming-=xsh-fangyu*2; 
					} 
					i++; 
					f=1; 
				break;
				case 3:
					if(lengque==0)
					{
						xhp-=xdj*20;
						lengque=5;
						i++; 
						break; 
					} 
					cout<<"��ȴ��ʣ��"<<lengque<<"�غ�"<<endl; 
					f=0;
					 
				break;
				case 4:
					if(taopao=1)
					{
						cout<<"���ܳɹ�!!!"<<endl; 
						l=123;
					} 
					f=1; 
				
				break; 
				case 5:
					if(jijiubao>0)
					{
						cout<<"ʹ�óɹ�!!!"<<endl; 
						jijiubao--;
						shengming+=50;
						i++; 
					} 
					f=1; 
				
				break; 
			} 
			
		}
		if(shengming<=0)
		{
			cout<<"������"<<endl;
			Sleep(1000);
			return xiaoguai(); 
		}
		if(xhp<=0)
		{
			cout<<"������"<<xdj<<"��С��"<<endl;
			cout<<"�������"<<xjb<<"$"<<endl;
			jinbi+=xjb; 
			cout<<"��������"<<xdj*10<<endl;
			jingyan+=xdj*10; 
		}
	
	}
	else
	{
		cout<<"��������"<<endl; 
	} 
	
}
void daguai()
{
	if(shengming<=0)
	{
		return daguai();
	}
	int i=1,n=0,l=1,taopao,cg;
	int lengque=0; 
	char r,w; 
	srand(static_cast<unsigned  int >(time(0))) ; 
	int randomNumber=rand(); 
	ddj=(randomNumber% 5)+6;
	dhp=ddj*100;
	dsh=ddj*20;
	djb=ddj*10;
	dfy=ddj*5; 
	if(day%2!=0)
	{
		dsh+=30; 
	} 
	cout<<"����Ե���"<<ddj<<"�����,�Ƿ�ӭս(y/n)"<<endl;
	cin>>r;
	cinc++;
	if(cinc==30&&day<21)
	{
		day++;
	}
	if(r=='y')
	{
		int f=0;
		while(shengming>0&&dhp>0&&l!=123&&i<=20)
		{
			
			cout<<"��"<<i<<"�غ�"<<endl;
			cout<<"�������:"<<shengming<<endl;
			cout<<"�������:"<<dhp<<endl;
			cout<<"����1����(��ɹ���(����˺�-�ֵ��˺�),��������)"<<endl;
			cout<<"����2����(����ɹ���,����*2)"<<endl; 
			cout<<"����3ʹ�ü���(�޵�,��ɵз��ȼ�*20�˺�,BOOS:500���˺�)"<<endl;
			cout<<"����4����(20%����,����ʧ��ҲҪ����Ѫ(���ӷ���),ʵ�ڴ򲻹��Ź�20�غ��Զ�����)"<<endl; 
			cout<<"����5ʹ��ս�����Ȱ�!!!"<<endl; 
			taopao=(randomNumber% 5)+1;
			cin>>l;
			cinc++;
			if(lengque>0&&f==1)
			{
				lengque--; 
			} 
			if(cinc==30&&day<21)
			{
				day++;
			}
			switch(l)
			{
				case 1:
					if((fangyu/2)<dsh)
					{
						shengming-=dsh-fangyu/2; 
					} 
					if(shanghai>dfy ) 
					{
						dhp-=shanghai-xfy; 
					} 
					i++; 
					f=1;
				break; 
				case 2: 
					if(fangyu*2<dsh)
					{
						shengming-=dsh-fangyu*2; 
					} 
					i++; 
					f=1;
				break;
				case 3:
					if(lengque==0)
					{
						dhp-=ddj*20;
						lengque=5;
						i++; 
						break; 
					} 
					cout<<"��ȴ��ʣ��"<<lengque<<"�غ�"<<endl; 
					f=0;
				break;
				case 4:
					if(taopao=3)
					{
						cout<<"���ܳɹ�!!!"<<endl; 
						l=123;
					} 
					f=1;
					
				break;
				case 5:
					f=1;
					if(jijiubao>0)
					{
						cout<<"ʹ�óɹ�!!!"<<endl; 
						jijiubao--;
						shengming+=50;
						i++; 
					} 
				
				break; 
			} 
			
		}
		if(shengming<=0)
		{
			cout<<"������"<<endl;
			Sleep(1000);
			return daguai(); 
			 
		}
		if(dhp<=0)
		{
			cout<<"������"<<ddj<<"�����"<<endl;
			cout<<"�������"<<djb<<"$"<<endl;
			cout<<"��������"<<ddj*10<<endl;
			jinbi+=djb; 
			jingyan+=ddj*10; 
		}
	}
	else
	{
		cout<<"��������"<<endl; 
	} 	


} 
void BOOS()
{

	int i=1,n=0,l=1,taopao,cg;
	int lengque=0;
	srand(static_cast<unsigned  int >(time(0))) ; 
	int randomNumber=rand(); 
	boosHP=5000;
	boosSH=700;
	boosfy=500;
	if(day%2!=0)
	{
		boosSH+=100;
		boosHP+=500;
	} 
	cout<<"����Ե���"<<"BOOS"<<endl;
	int f=0;
	while(shengming>0&&boosHP>0&&l!=123)
	{
		cout<<"��"<<i<<"�غ�"<<endl;
		cout<<"�������:"<<shengming<<endl;
		cout<<"BOOS����:"<<boosHP<<endl;
		cout<<"����1����(��ɹ���(����˺�-�ֵ��˺�),��������)"<<endl;
		cout<<"����2����(����ɹ���,����*2)"<<endl; 
		cout<<"����3ʹ�ü���(�޵�,��ɵз��ȼ�*20�˺�,BOOS:500���˺�)"<<endl;
		cout<<"����4����(10%����,����ʧ��ҲҪ����Ѫ(���ӷ���),ʵ�ڴ򲻹��Ź�30�غ��Զ�����)"<<endl; 
		cout<<"����5ʹ��ս�����Ȱ�!!!"<<endl; 
		taopao=(randomNumber%10)+1;
		cin>>l;
		cinc++;
		if(cinc==30&&day<21)
		{
			day++;
		}
		if(lengque>0&&f==1)
		{
			lengque--; 
		} 
		switch(l)
		{
			case 1:
				f=1; 
				if((fangyu/2)<boosSH)
				{
					shengming-=boosSH-fangyu/2; 
				} 
				if(shanghai>boosfy ) 
				{
					boosHP-=shanghai-boosfy; 
				} 
				i++; 
			break; 
			case 2: 
				f=1;
				if(fangyu*2<boosSH)
				{
					shengming-=boosSH-fangyu*2; 
				} 
				i++; 
			break;
			case 3:
				f=1;
				if(lengque==0)
				{
					boosHP-=500;
					lengque=5;
					i++; 
					break; 
				} 
				cout<<"��ȴ��ʣ��"<<lengque<<"�غ�"<<endl; 
				f=0;
			break;
			case 4:
				f=1;
				if(taopao=1)
				{
					cout<<"���ܳɹ�!!!"<<endl; 
					l=123;
				} 
				
			break; 
			case 5:
				f=1;
				if(jijiubao>0)
				{
					cout<<"ʹ�óɹ�!!!"<<endl; 
					jijiubao--;
					shengming+=50;
					i++; 
				} 
			
			break;
		} 
		
	}
	if(shengming<=0)
	{
		cout<<"������"<<endl;
		Sleep(1000);
		return BOOS(); 
		 
	}
	if(boosHP<=0)
	{
		cout<<"������BOOS"<<endl;
		boosHP=0; 
	}
		
	
} 
void wuqidian()
{
	int i=1,n=0,l=1;
	char w,r; 
	while(l) 
	{ 	cout<<"���������:�˺����ܵ���!!!,����:������Ŀǰ�˺�50 ,����ذ�׺�,�˺�����+20,�����滻��20"<<endl;
		cout<<"��Ŀǰ�˺�:"<<shanghai<<"Ŀǰ����:"<<fangyu<<endl; 
		Sleep(250); 
		cout<<"��ӭ���� �����꣡"<<endl; 
		cout<<"1����ذ�ף�$10��40��������"<<endl; 
		cout<<"2����޽���$50��60��������"<<endl; 
		cout<<"3������У�$100��120������)"<<endl; 
		cout<<"4����X���У�$150��180��������"<<endl; 
		cout<<"5����ľ�ܣ�$200��100��������"<<endl; 
		cout<<"6�������ܣ�$500��200��������"<<endl; 
		cout<<"0���뿪������"<<endl; 
		cin>> l; 
		cinc++;
		if(cinc==30&&day<21)
		{
			day++;
		}
		switch(l) 
		{ 
			case 1 : 
				if(jinbi<10) 
				{
					cout<<"���Ǯ����"<<endl; 
					break;
				} 
				else
				{
					cout<<"����ɹ���"<<endl;//Ǯ�㹻ʱ����True 
					shanghai=40; 
					jinbi-=10; 
					cout<<"����˺�����Ϊ"<<shanghai;
					cout<<"-------------------------------------------------------------------------------\n" ;  
					break;
				}  
			case 2 : 
				if(jinbi<50) 
				{ 
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase 
					break;
				} 
				else  
				{
					cout<<"����ɹ���"<<endl; 
					shanghai=60; 
					jinbi-=50; 
					cout<<"����˺�����Ϊ"<<shanghai; 
					cout<<"-------------------------------------------------------------------------------\n" ; 
					break; 
				} 
				
			case 3 : 
				if(jinbi<100) 
				{
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase 
					 break;
				}
				else 
				
				{
					cout<<"����ɹ���"<<endl; 
					shanghai=120; 
					jinbi-=100; 
					cout<<"����˺�����Ϊ"<<shanghai;
					cout<<"-------------------------------------------------------------------------------\n" ;  
					break; 
				} 
			case 4 :
				if(jinbi<150) 
				{
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase 
					break;
				}
				else
				{
					cout<<"����ɹ���"<<endl; 
					shanghai=180; 
					jinbi-=150; 
					cout<<"����˺�����Ϊ"<<shanghai; 
					cout<<"-------------------------------------------------------------------------------\n" ; 
					break; 
				}  
				
			case 5 : 
				if(jinbi<200) 
				{
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase 
					 break;
				}
				else
				{
					cout<<"����ɹ���"<<endl; 
					fangyu=100; 
					jinbi-=200; 
					cout<<"��ķ�������Ϊ"<<fangyu<<endl; 
					cout<<"-------------------------------------------------------------------------------\n" ;  
					break; 
				}  
				
			case 6: 
				if(jinbi<500) 
				{
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase 
					break;
				}
				else 
				{
					fangyu=200; 
					jinbi-=500; 
					cout<<"��ķ�������Ϊ"<<fangyu<<endl; 
					cout<<"-------------------------------------------------------------------------------\n" ;  
					break; 
				} 
			case 0:
				break;
				 
			default: 
				cout<<"�����"<<endl; 
				break; 
		}  
	}
} 
void yaopindian()
{
	int i=1,n=0,l=1;
	char w,r; 
	while(l)
	{ 
		cout<<"-------------------------------------------------------------------------------\n" ;
		cout<<"��ӭ���� ҩƷ�꣡"<<endl; 
		cout<<"1����ҩˮ(С)��$50��50Ѫ)"<<endl; 
		cout<<"2��һ���ҩˮ��$100��100Ѫ)"<<endl; 
		cout<<"3��������ҩˮ��$150��200Ѫ)"<<endl; 
		cout<<"4����ҩˮ     ($200��300Ѫ)"<<endl; 
		cout<<"5������ҩˮ   ($500��300Ѫ,50�����)"<<endl; 
		cout<<"6����ʥҩˮ	��$700��400Ѫ,50�����,100�㹥��(+100))"<<endl;
		cout<<"7�����Ȱ�     ($50��50Ѫ ս��ʱʹ��)"<<endl;  
		cout<<"0���뿪ҩƷ��"<<endl; 
		cin>> l; 
		cinc++;
		if(cinc==30&&day<21)
		{
			day++;
		}
		switch(l) 
		{ 
			case 1 : 
				if(jinbi<50) 
				{
					cout<<"���Ǯ����"<<endl; 
					break;
				} 
				else
				{
					cout<<"����ɹ���"<<endl; 
					shengming+=50; 
					jinbi-=50; 
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}  
			case 2 : 
				if(jinbi<100) 
				{ 
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase 
					break;
				} 
				else  
				{
					cout<<"����ɹ���"<<endl; 
					shengming+=100; 
					jinbi-=100; 
					cout<<"-------------------------------------------------------------------------------\n" ;
					break; 
				} 
			case 3 : 
				if(jinbi<150) 
				{
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase 
					 break;
				}
				else 
				{
					cout<<"����ɹ���"<<endl; 
					shengming+=200; 
					jinbi-=150; 
					cout<<"-------------------------------------------------------------------------------\n" ;
					break; 
				} 
				
			case 4 :
				if(jinbi<200) 
				{
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase 
					break;
				}
				else
				{
					cout<<"����ɹ���"<<endl; 
					shengming+=300; 
					jinbi-=200; 
					cout<<"-------------------------------------------------------------------------------\n" ;
					break; 
				} 
			case 5 : 
				if(jinbi<500) 
				{
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase 
					 break;
				}
				else
				{
					cout<<"����ɹ���"<<endl; 
					shengming+=300; 
					fangyu+=50; 
					jinbi-=500; 
					cout<<"-------------------------------------------------------------------------------\n" ;
					
					 
					break; 
				}  
				
			case 6: 
				if(jinbi<700) 
				{
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase 
					break;
				}
				else 
				{
					shengming+=400; 
					fangyu+=50; 
					jinbi-=700; 
					cout<<"-------------------------------------------------------------------------------\n" ;
					
					 
					break; 
				} 
			case 7:
				if(jinbi<50) 
				{
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase 
					break;
				}
				jinbi-=50; 
				jijiubao++;
				cout<<"����ɹ���"<<endl;
				cout<<"-------------------------------------------------------------------------------\n" ;
				break; 
			case 0:
				break;
			default: 
				cout<<"�����"<<endl; 
				cout<<"-------------------------------------------------------------------------------\n" ;
				break; 
		}  
	}
} 
void ziliao()
{


	cout<<"С��2.0��ӭ��!!!"<<endl<<"������Ϸ:\n����Ϸ�������ò���2Сʱ������,bug���ܺܶ�,��ԭ��"<<endl;
	cout<<"��Ϸ��������һ��С����һ�챻һȺ�ְ�Χ��,��Ϊ����Ψһ��һ��սʿ,���¸ҵ�վ����С���һ��,Ŀ��:����BOOS"<<endl;
	cout<<"С������������ʿɹ�����,С��2.0������ҹ(��ҹ,��������ǿ),���＼��,�޶�����,���Ȱ�,��Ϣ��"<<endl; 
	
	
	
}
void xiuxi()
{
	int i=1;
	while(i<=100) 
	{
		cout<<"				����";
		cout<<i<<"%"<<endl;
	 	if(i>10)
	 	{
	 		cout<<"-";cout<<"-";cout<<"-";cout<<"-";
		}
		if(i>20)
	 	{
	 		cout<<"-";
	 		Sleep(50);cout<<"-";
	 		Sleep(50);cout<<"-";
	 		Sleep(50);cout<<"-";
	 		Sleep(50);
		}
		if(i>30)
	 	{
	 		cout<<"-"; 
	 		Sleep(100); cout<<"-";
	 		Sleep(100);cout<<"-";
	 		Sleep(100);cout<<"-";
	 		Sleep(100);
		}
		if(i>40)
	 	{
	 		cout<<"-";
	 		Sleep(100); cout<<"-";
	 		Sleep(100);cout<<"-";
	 		Sleep(100);cout<<"-";
	 		Sleep(100);
		}
		if(i>50)
	 	{
	 		cout<<"-";
	 		Sleep(100);cout<<"-";
	 		Sleep(100);cout<<"-";
	 		Sleep(100);cout<<"-";
	 		Sleep(100); 
		}
		if(i>60)
	 	{
	 		cout<<"-";
	 		Sleep(100); cout<<"-";
	 		Sleep(100);cout<<"-";
	 		Sleep(100);cout<<"-";
	 		Sleep(100);
		}
		if(i>70)
	 	{
	 		cout<<"-";
	 		Sleep(100);cout<<"-";
	 		Sleep(100);cout<<"-";
	 		Sleep(100);cout<<"-";
	 		Sleep(100);cout<<"-";
	 		Sleep(100); 
	 		
		}
		if(i>80)
	 	{
	 		cout<<"-";
	 		Sleep(100);
			cout<<"-";
	 		Sleep(100);
			cout<<"-";
	 		Sleep(100);
			cout<<"-";
	 		Sleep(100);
			 
		}
		if(i>90)
	 	{
	 		cout<<"-";
	 		Sleep(200); 
	 		cout<<"-";
	 		Sleep(200);
			cout<<"-";
	 		Sleep(200);
			cout<<"-";
	 		Sleep(200);
			cout<<"-";
	 		Sleep(200);
		}
		if(i>=98)
	 	{
	 		cout<<"-";
	 		Sleep(500);cout<<"-";
	 		Sleep(500);cout<<"-";
	 		Sleep(500);cout<<"-";
	 		Sleep(500); 
		}
		
	 		
		if(i==100)
	 	{
	 		
			break; 
		}
	 		
		
		
		Sleep(100); 
		system("cls") ; 
		
		i++;
		
		
	}
	system("cls");
	shengming=1000;
	if(day%2==0)
	{
		day+=2;
	}
	else if(day%2!=0)
	{
		day++;
	}
}
