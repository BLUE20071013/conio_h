#include<bits/stdc++.h>//ͷ�ļ�
#include<windows.h>//ͷ�ļ�
#include <conio.h>
void xiaozhen();

void  wuqidian();//������s
void  yaopindian();//ҩƷ��
// {
void maoxian();//ð��
void daguai();//���
void xiaoguai();//С��
void BOOS(); //boos
// }

void zhuangtai();//״̬
void choujiang();//�齱
void ziliao();//����
void yunshi(); //��ʯ
void jiangli();
void tanbao();
//}

char  a[13][100]= {"|  R��Դ X��� FС��� O��� 0���λ�� |",
                   "|                                      |",
                   "|            |-X--R--X                 |",
                   "|            |       |                 |",
                   "|            |----X--|-F-R|            |",
                   "|      |--R--|       |    |---?        |",
                   "|   O0-|             |RF--|            |",
                   "|      |---|--F-X-R--|                 |",
                   "|          |      |                    |",
                   "|          |-X--R-|-X--F-R-|--F-R--?   |",
                   "|          |               R           |",
                   "|          |X---R---X--F-R-|           |",
                   "|                                      |"};

int x=6,y=5,z=6,l=4;


int bao=0;

int shengming=1000,shanghai=50,fangyu=10,jinbi=200,jijiubao=5,jingyan=100;//��������

int xhp,xsh,xjb,xdj,xfy;//С��

int dhp,dsh,djb,ddj,dfy;//���

int boosHP,boosSH,boosfy;//BOOS





using namespace std;
int main() {
	xiaozhen();
}
void xiaozhen() {


	int i=0,n=0,l=1;
	while (l) {
		system("cls");
		cout<<"				  [С��3.0<����ʱ��>]\n";
		cout<<"-------------------------------------------------------------------------------\n" ;
		cout<<"���� 1 ð��"<<endl;
		cout<<"���� 2 ������"<<endl;
		cout<<"���� 3 ҩƷ��"<<endl;
		cout<<"���� 4 �Լ�״̬"<<endl;
		cout<<"���� 5 �鿴��Ϸ����"<<endl;
		cout<<"���� 0 ������Ϸ"<<endl;
		cin>>l;
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


			case 0:
				break;
			default:
				cout<<"��Ҫ������"<<endl;

		}

	}



}

void maoxian() {
	int i=0,n=0,l=1;
	while(l) {

		cout<<"���� 1 ��С��(1~5��)"<<endl;
		cout<<"���� 2 ����(5~10��)"<<endl;
		cout<<"���� 3 ��BOOS(15��)"<<endl;
		cout<<"���� 4 ̽��"<<endl;
		cout<<"���� 0 ����С��"<<endl;
		cin>>l;
		switch(l) {
			case 1:
				cout<<"-------------------------------------------------------------------------------\n" ;
				if(jingyan/100>5) 
				{
					cout<<"�ȼ�����"<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
				xiaoguai();
				if(shengming<=0) 
				{
					break;
				}
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;
			case 2:
				cout<<"-------------------------------------------------------------------------------\n" ;
				if(jingyan/100>20) 
				{
					cout<<"�ȼ�����"<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
				if(jingyan/100<3) 
				{
					cout<<"�ȼ�����,����"<<300-jingyan<<endl;
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
				if(jingyan/100<7) 
				{
					cout<<"�ȼ�����,����"<<700-jingyan<<endl;

					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
				cout<<"-------------------------------------------------------------------------------\n" ;
				BOOS();

				if(boosHP==0) 
				{
					break;
				}
				break;
				cout<<"-------------------------------------------------------------------------------\n" ;
			case 4:
				cout<<"-------------------------------------------------------------------------------\n" ;
				tanbao();
				if(shengming<=0) 
				{
					Sleep(1000);
					break;
				}
				cout<<"-------------------------------------------------------------------------------\n";
				break;
			case 0:
				break;
			default:
				cout<<"��Ҫ������"<<endl;
				cout<<"-------------------------------------------------------------------------------\n" ;
		}

	}


}
void zhuangtai() {
	cout<<"�������Ϊ:"<<shengming<<endl;
	cout<<"��Ľ��Ϊ:"<<"$"<<jinbi<<endl;
	cout<<"��ķ���Ϊ:"<<fangyu<<endl;
	cout<<"����˺�Ϊ:"<<shanghai<<endl;
	cout<<"��ľ���Ϊ(100����=1��):"<<jingyan<<endl;
	cout<<"��ĵȼ�Ϊ:"<<jingyan/100<<endl;
	cout<<"��ӵ�еļ��Ȱ���"<<jijiubao<<endl;
	cout<<"����MAXն(�޵�,���2*�˺�,boos*3) "<<endl;
	cout<<"����С��";
	system("pause");
}
void xiaoguai() 
{
	if(shengming<=0) 
	{
		return xiaoguai();
	}
	int i=1,n=0,l=1,taopao,cg,lengque=0;
	int r,w;
	srand(static_cast<unsigned  int >(time(0))) ;
	int randomNumber=rand();
	xdj=(randomNumber% 5)+1;
	cg=(randomNumber% 5)+1;
	xhp=xdj*100;
	xsh=xdj*20;
	xjb=xdj*10;
	xfy=xdj*5;

	cout<<"����Ե���"<<xdj<<"��С��,�˺�"<<xsh<<"����:"<<xhp<<"����:"<<xfy<<",�Ƿ�ӭս,ӭս1"<<endl;
	cin>>r;
	if(r==1||bao==1) 
	{
		int f=0;
		while(shengming>0&&xhp>0&&l!=123&&i<=15) 
		{
			cout<<"��"<<i<<"�غ�"<<endl;
			cout<<"�������:"<<shengming<<endl;
			cout<<"С������:"<<xhp<<endl;
			cout<<"����1����(��ɹ���(����˺�-�ֵķ���),��������)"<<endl;
			cout<<"����2����(����ɹ���,����*2)"<<endl;
			cout<<"����3ʹ�ü���(�޵�,��� 2*�˺�,BOOS*3���˺�)"<<endl;
			cout<<"����4����(20%����,����ʧ��ҲҪ����Ѫ(���ӷ���),ʵ�ڴ򲻹��Ź�15�غ��Զ�����)"<<endl;
			cout<<"����5ʹ��ս�����Ȱ�!!!"<<endl;
			cin>>l;

			if(lengque>0&&f==1) 
			{
				lengque--;
			}

			switch(l) {
				case 1:
					if((fangyu/2)<xsh) {
						shengming-=xsh-fangyu/2;
					}
					if(shanghai>xfy ) {
						xhp-=shanghai-xfy;
					}
					i++;
					f=1;
					break;
				case 2:
					if(fangyu*2<xsh) {
						shengming-=xsh-fangyu*2;
					}
					i++;
					f=1;
					break;
				case 3:
					if(lengque==0) {
						xhp-=shanghai*2;
						lengque=5;
						i++;
						f=0;
						break;
					}
					cout<<"��ȴ��ʣ��"<<lengque<<"�غ�"<<endl;
					f=0;

					break;
				case 4:
					if(bao==1) {
						cout<<"̽��ʱ��������!!!"<<endl;
						break;
					}
					if(taopao=1) {
						cout<<"���ܳɹ�!!!"<<endl;
						l=123;
					}
					f=1;

					break;
				case 5:
					if(jijiubao>0) {
						cout<<"ʹ�óɹ�!!!"<<endl;
						jijiubao--;
						shengming+=50;
						i++;
					}
					f=1;

					break;
			}

		}
		if(shengming<=0) {
			cout<<"������"<<endl;
			Sleep(1000);
			return xiaoguai();
		}
		if(xhp<=0) {
			cout<<"������"<<xdj<<"��С��"<<endl;
			cout<<"�������"<<xjb<<"$"<<endl;
			jinbi+=xjb;
			cout<<"��������"<<xdj*10<<endl;
			jingyan+=xdj*10;
		}

	} else if(r=='n') {
		cout<<"��������"<<endl;
	} else {
		cout<<"��������"<<endl;
	}

}
void daguai() {
	if(shengming<=0) {
		return daguai();
	}
	int i=1,n=0,l=1,taopao,cg;
	int lengque=0;
	int r,w;
	srand(static_cast<unsigned  int >(time(0))) ;
	int randomNumber=rand();
	ddj=(randomNumber% 5)+6;
	dhp=ddj*100;
	dsh=ddj*20;
	djb=ddj*10;
	dfy=ddj*5;

	cout<<"����Ե���"<<ddj<<"�����,�˺�"<<dsh<<"����:"<<dhp<<"����:"<<dfy<<"�Ƿ�ӭս,ӭս 1"<<endl;
	cin>>r;
	int f=0;
	if(r==1||bao==1) {
		while(shengming>0&&dhp>0&&l!=123&&i<=20) {

			cout<<"��"<<i<<"�غ�"<<endl;
			cout<<"�������:"<<shengming<<endl;
			cout<<"�������:"<<dhp<<endl;
			cout<<"����1����(��ɹ���(����˺�-�ֵ��˺�),��������)"<<endl;
			cout<<"����2����(����ɹ���,����*2)"<<endl;
			cout<<"����3ʹ�ü���(�޵�,��� 2*�˺�,BOOS*3)"<<endl;
			cout<<"����4����(20%����,����ʧ��ҲҪ����Ѫ(���ӷ���),ʵ�ڴ򲻹��Ź�20�غ��Զ�����)"<<endl;
			cout<<"����5ʹ��ս�����Ȱ�!!!"<<endl;
			taopao=(randomNumber% 5)+1;
			cin>>l;

			if(lengque>0&&f==1) {
				lengque--;
			}

			switch(l) {
				case 1:
					if((fangyu/2)<dsh) {
						shengming-=dsh-fangyu/2;
					}
					if(shanghai>dfy ) {
						dhp-=shanghai-xfy;
					}
					i++;
					f=1;
					break;
				case 2:
					if(fangyu*2<dsh) {
						shengming-=dsh-fangyu*2;
					}
					i++;
					f=1;
					break;
				case 3:
					if(lengque==0) {
						dhp-=shanghai*2;
						lengque=5;
						f=0;
						i++;
						break;
					}
					cout<<"��ȴ��ʣ��"<<lengque<<"�غ�"<<endl;
					f=0;
					break;
				case 4:
					if(bao==1) {
						cout<<"̽��ʱ��������!!!"<<endl;
						break;
					}

					cout<<"���ܳɹ�!!!"<<endl;
					l=123;

					f=1;

					break;
				case 5:
					f=1;
					if(jijiubao>0) {
						cout<<"ʹ�óɹ�!!!"<<endl;
						jijiubao--;
						shengming+=50;
						i++;
					}

					break;
			}

		}
		if(shengming<=0) {
			cout<<"������"<<endl;
			Sleep(1000);
			return daguai();

		}
		if(dhp<=0) {
			cout<<"������"<<ddj<<"�����"<<endl;
			cout<<"�������"<<djb<<"$"<<endl;
			cout<<"��������"<<ddj*10<<endl;
			jinbi+=djb;
			jingyan+=ddj*10;


		}


	} else {
		cout<<"��������"<<endl;
	}


}
void BOOS() {

	int i=1,n=0,l=1,taopao,cg;
	int lengque=0;

	srand(static_cast<unsigned  int >(time(0))) ;
	int randomNumber=rand();
	boosHP=30000;
	boosSH=1500;
	boosfy=1000;

	cout<<"����Ե���"<<"BOOS,�˺�"<<boosSH<<"����:"<<boosHP<<"����:"<<boosfy<<",�Ƿ�ӭս(y/n)"<<endl;
	int f=0;
	while(shengming>0&&boosHP>0&&l!=123) {

		cout<<"��"<<i<<"�غ�"<<endl;
		cout<<"�������:"<<shengming<<endl;
		cout<<"BOOS����:"<<boosHP<<endl;
		cout<<"����1����(��ɹ���(����˺�-�ֵ��˺�),��������)"<<endl;
		cout<<"����2����(����ɹ���,����*2)"<<endl;
		cout<<"����3ʹ�ü���(�޵�,��� �˺�*3)"<<endl;
		cout<<"����4����(10%����,����ʧ��ҲҪ����Ѫ(���ӷ���),ʵ�ڴ򲻹��Ź�30�غ��Զ�����)"<<endl;
		cout<<"����5ʹ��ս�����Ȱ�!!!"<<endl;
		taopao=(randomNumber%10)+1;
		cin>>l;

		if(lengque>0&&f==1) {
			lengque--;
		}
		switch(l) {
			case 1:
				f=1;
				if((fangyu/2)<boosSH) {
					shengming-=boosSH-fangyu/2;
				}
				if(shanghai>boosfy ) {
					boosHP-=shanghai-boosfy;
				}
				i++;
				break;
			case 2:
				f=1;
				if(fangyu*2<boosSH) {
					shengming-=boosSH-fangyu*2;
				}
				i++;
				break;
			case 3:
				f=1;
				if(lengque==0) {
					boosHP-=shanghai*3;
					lengque=5;
					i++;
					break;
				}
				cout<<"��ȴ��ʣ��"<<lengque<<"�غ�"<<endl;
				f=0;
				break;
			case 4:
				f=1;
				if(taopao=1) {
					cout<<"���ܳɹ�!!!"<<endl;
					l=123;
				}

				break;
			case 5:
				f=1;
				if(jijiubao>0) {
					cout<<"ʹ�óɹ�!!!"<<endl;
					jijiubao--;
					shengming+=50;
					i++;
				}

				break;
		}

	}
	if(shengming<=0) {
		cout<<"������"<<endl;
		Sleep(1000);
		return BOOS();

	}
	if(boosHP<=0) {
		cout<<"������BOOS"<<endl;
		boosHP=0;
	}


}
void wuqidian() {
	int i=1,n=0,l=1;
	char w,r;
	while(l) {
		cout<<"���������:�˺����ܵ���!!!\n����:������Ŀǰ�˺�50 ,����ذ�׺�,�˺�����+20,�����滻��20"<<endl;
		cout<<"��Ŀǰ�˺�:"<<shanghai<<"Ŀǰ����:"<<fangyu<<"��Ľ��Ϊ:"<<"$"<<jinbi<<endl;
		Sleep(250);
		cout<<"��ӭ���� �����꣡"<<endl;
		cout<<"1����ذ�ף�$10��40��������"<<endl;
		cout<<"2����޽���$50��60��������"<<endl;
		cout<<"3������У�$100��120������)"<<endl;
		cout<<"4����X���У�$150��180��������"<<endl;
		cout<<"5����ľ�ܣ�$200��100��������"<<endl;
		cout<<"6�������ܣ�$400��200��������"<<endl;
		cout<<"7����ľ�����ף�$500��250��������"<<endl;
		cout<<"8����˫�У�$500��300��������"<<endl;
		cout<<"9����𽣣�$200��200��������"<<endl;
		cout<<"0���뿪������"<<endl;
		cin>>l;

		switch(l) {
			case 1 :
				if(jinbi<10) {
					cout<<"���Ǯ����"<<endl;
					break;
				} else {
					cout<<"����ɹ���"<<endl;//Ǯ�㹻ʱ����True
					shanghai=40;
					jinbi-=10;
					cout<<"����˺�����Ϊ"<<shanghai<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 2 :
				if(jinbi<50) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else {
					cout<<"����ɹ���"<<endl;
					shanghai=60;
					jinbi-=50;
					cout<<"����˺�����Ϊ"<<shanghai<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 3 :
				if(jinbi<100) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else

				{
					cout<<"����ɹ���"<<endl;
					shanghai=120;
					jinbi-=100;
					cout<<"����˺�����Ϊ"<<shanghai<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 4 :
				if(jinbi<150) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else {
					cout<<"����ɹ���"<<endl;
					shanghai=180;
					jinbi-=150;
					cout<<"����˺�����Ϊ"<<shanghai<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 5 :
				if(jinbi<200) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else {
					cout<<"����ɹ���"<<endl;
					fangyu=100;
					jinbi-=200;
					cout<<"��ķ�������Ϊ"<<fangyu<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 6:
				if(jinbi<400) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else {
					fangyu=200;
					jinbi-=500;
					cout<<"��ķ�������Ϊ"<<fangyu<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 7:
				if(jinbi<500) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else {
					fangyu=250;
					jinbi-=500;
					cout<<"��ķ�������Ϊ"<<fangyu<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 8:
				if(jinbi<500) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else {
					shanghai=300;
					jinbi-=500;
					cout<<"��Ĺ�������Ϊ"<<shanghai<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 9:
				if(jinbi<200) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else {
					shanghai=200;
					jinbi-=200;
					cout<<"��Ĺ�������Ϊ"<<shanghai<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 0:
				break;

			default:
				cout<<"�����."<<endl;
				break;
		}

	}

}
void yaopindian() {
	int i=1,n=0,l=1;
	char w,r;
	while(l) {
		cout<<"-------------------------------------------------------------------------------\n" ;
		cout<<"��ӭ���� ҩƷ�꣡"<<endl;
		cout<<"��Ľ��Ϊ:"<<"$"<<jinbi<<endl;
		cout<<"1����ҩˮ(С)��$50��50Ѫ)"<<endl;
		cout<<"2��һ���ҩˮ��$100��100Ѫ)"<<endl;
		cout<<"3��������ҩˮ��$150��200Ѫ)"<<endl;
		cout<<"4����ҩˮ     ($200��300Ѫ)"<<endl;
		cout<<"5������ҩˮ   ($500��300Ѫ,50�����)"<<endl;
		cout<<"6����ʥҩˮ	��$700��400Ѫ,50�����,100�㹥��(+100))"<<endl;
		cout<<"7�����Ȱ�     ($50��50Ѫ ս��ʱʹ��)"<<endl;
		cout<<"0���뿪ҩƷ��"<<endl;
		cin>>l;

		switch(l) {
			case 1 :
				if(jinbi<50) {
					cout<<"���Ǯ����"<<endl;
					break;
				} else {
					cout<<"����ɹ���"<<endl;
					shengming+=50;
					jinbi-=50;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 2 :
				if(jinbi<100) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else {
					cout<<"����ɹ���"<<endl;
					shengming+=100;
					jinbi-=100;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 3 :
				if(jinbi<150) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else

				{
					cout<<"����ɹ���"<<endl;
					shengming+=200;
					jinbi-=150;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 4 :
				if(jinbi<200) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else {
					cout<<"����ɹ���"<<endl;
					shengming+=300;
					jinbi-=200;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 5 :
				if(jinbi<500) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else {
					cout<<"����ɹ���"<<endl;
					shengming+=300;
					fangyu+=50;
					jinbi-=500;
					cout<<"-------------------------------------------------------------------------------\n" ;


					break;
				}

			case 6:
				if(jinbi<700) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else {
					shengming+=400;
					fangyu+=50;
					shanghai+=100;
					jinbi-=700;
					cout<<"-------------------------------------------------------------------------------\n" ;


					break;
				}
			case 7:
				if(jinbi<50) {
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
	cout<<"С��3.0��ӭ��!!!"<<endl;
	Sleep(1000);
}








void tanbao() 
{
	bao=1;
	a[6][4]=='O';

	int i=0;
	for(i=0; i<=12; i++)
		cout<<a[i]<<endl;
	char ch='w';
	while(1) 
	{
		ch=getch();
		if(ch=='w') 
		{
			if(a[x-1][y]=='-'||a[x-1][y]=='|'||a[x-1][y]=='R'||a[x-1][y]=='F'||a[x-1][y]=='X') {
				if(a[x-1][y]=='R') 
				{
					system("cls");
					jiangli();
					system("cls");
				}
				if(a[x-1][y]=='F') 
				{
					system("cls");
					xiaoguai();
					system("cls");
					daguai();
					system("cls");
				}
				if(a[x-1][y]=='X') 
				{
					system("cls");
					daguai();
					system("cls");
				}
				if(a[x+1][y]!=' '||a[x-1][y]!=' ') 
				{
					a[x][y]='|';
				} else {
					a[x][y]='-';
				}
				x--;
				a[x][y]='0';
				system("cls");
				i=0;
				for(i=0; i<=12; i++)
					cout<<a[i]<<endl;

			}
		} 
		else if(ch=='s') 
		{
			if(a[x+1][y]=='-'||a[x+1][y]=='|'||a[x+1][y]=='R'||a[x+1][y]=='F'||a[x+1][y]=='X')

			{
				if(a[x+1][y]=='R') 
				{
					system("cls");
					jiangli();
					system("cls");
				}
				if(a[x+1][y]=='F') 
				{

					system("cls");
					xiaoguai();
					system("cls");
					daguai();
					system("cls");
				}
				if(a[x+1][y]=='X') 
				{
					system("cls");
					daguai();
					system("cls");

				}
				if(a[x+1][y]!=' '||a[x-1][y]!=' ') 
				{
					a[x][y]='|';
				} else {
					a[x][y]='-';
				}
				x++;
				a[x][y]='0';
				system("cls");
				i=0;
				for(i=0; i<=12; i++)
					cout<<a[i]<<endl;

			}




		} 
		else if(ch=='a') 
		{
			if(a[x][y-1]=='O') 
			{
				bao=0;
				xiaozhen();
			}
			if(a[x][y-1]=='-'||a[x][y-1]=='|'||a[x][y-1]=='R'||a[x][y-1]=='F'||a[x][y-1]=='X'||a[x][y-1]=='o') 
			{
				if(a[x][y-1]=='R') 
				{
					system("cls");
					jiangli();
					system("cls");
				}
				if(a[x][y-1]=='F') 
				{

					system("cls");
					xiaoguai();
					system("cls");
					daguai();
					system("cls");
				}
				if(a[x][y-1]=='X') 
				{
					system("cls");
					daguai();
					system("cls");

				}
				if(a[x+1][y]!=' '||a[x-1][y]!=' ') 
				{
					a[x][y]='|';
				} else {
					a[x][y]='-';
				}
				y--;
				a[x][y]='0';
				system("cls");
				i=0;
				for(i=0; i<=12; i++)
					cout<<a[i]<<endl;

			}


		} 
		else if(ch=='d') 
		{
			if(a[x][y+1]=='R') 
			{
				system("cls");
				jiangli();
				system("cls");
			}
			if(a[x][y+1]=='F') 
			{

				system("cls");
				xiaoguai();
				system("cls");
				daguai();
				system("cls");
			}
			if(a[x][y+1]=='X') 
			{
				system("cls");
				daguai();
				system("cls");

			}
			if(a[x][y+1]=='-'||a[x][y+1]=='|'||a[x][y+1]=='R'||a[x][y+1]=='F'||a[x][y+1]=='X'||a[x][y+1]=='o') {
				if(a[x+1][y]!=' '||a[x-1][y]!=' ') 
				{
					a[x][y]='|';
				} 
				else 
				{
					a[x][y]='-';
				}
				y++;
				a[x][y]='0';
				system("cls");
				i=0;
				for(i=0; i<=12; i++)
					cout<<a[i]<<endl;

			}
		}


	}


}
void jiangli() {

	cout<<"���� $200,����100";
	jinbi+=200;
	jingyan+=100;
	Sleep(750);
}
