#include<bits/stdc++.h>//ͷ�ļ�
#include<windows.h>//ͷ�ļ�
#include <conio.h>
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
void jiangli();//����
void tanbao();//̽��
void ronglu();//��¯
void gongjiangtai();//����̨
void fenjiecailiao();//�����ֽ����
void jijia(); //��������
void cailiaoshangren();//��������
void wuqizhizuo();//��������
void juntuanzhaomu();
void start();//��ʼ����
//}


char  a[14][100]= {"| R��Դ X��� FС��� O��� 0���λ��  H�ֽ���� @������ |",
                   "|                                                        |",
                   "|      |X-R-F|-X--FH-X---X-F-H-F-H--|      |-F|-F--H-|   |",
                   "|      H     |       |              |-F|FH-|  |      |   |",
                   "|      X     |-H--X--|FF-R|     |-F-|  |      |-F--H-|   |",
                   "|      |--R--|       |    |--H-X|      |-F|-H-|      |--@|",
                   "|   O0-|             |R-FF|     |-F-|-F|  |   |-F-H--|   |",
                   "|      F--F|--F-H-F--|     |-F-H|   |     |   |      |   |",
                   "|      X   |      |  |     |        |FH|-F|-H-|-F--H-|   |",
                   "|      H   |-X--R-|-X--F-R-|--F-F--H|  |             |   |",
                   "|      F   |               R           F    HHFFFHFF-|   |",
                   "|      RFRF|X---H---X--F-R-|-X-F-HF-RHF|-FHFH            |",
                   "|                                                        |"};

char  b[14][100]= {"| R��Դ   XС���   F-BOOS    O���   0���λ��   H����  |",
                   "|                                                        |",
                   "|      |--------------------- ---------------------------|",
                   "|      |--------------------- -------------H-------------|",
                   "|      |--------------------- ---------------------------|",
                   "|      |----------H---------- ---------------------------|",
                   "|   O0-|--------------------- ------H--------------------|",
                   "|      |------X-------------- ---------------------------|",
                   "|      |-------------------H- ---------------------------|",
                   "|      |----------H---------- ---------------------------|",
                   "|      |--------------------- ---------------------------|",
                   "|      |--------------------- -------H-------------------|",
                   "|                                                        |"};


int x=6,y=5,z=6,l=4;
int baoci=0;
int bao=0;


int tj=0,dj=0;
int xtk=0,xxj=0;
int xxgj=0,xgj=0,xtz=0,xhs=0;

int shengming=4000,shanghai=1234,fangyu=11111,jinbi=999900,jingyan=100,shengmingf=999999999;//��������

int xhp,xsh,xjb,xdj,xfy;//С��

int dhp,dsh,djb,ddj,dfy;//���

int boosHP=30000,boosSH,boosfy;//BOOS

int huo=0,jijiubao=5;//ҩƷ

int tiekuai=30;//����
int fenjie=5;//����
int jingkuai=20;//����
int yuansujingkuai=20;//����
int tdjh=0;
int spzx=0;

int Xzj=0;//����
int Zzj=0;
int Xsj=0;
int bykj=0;

int sy=0,yy=0;

int zhiye=0;

using namespace std;

int main()
{
    start();
    system("cls");
    cout<<"ǧ����������ĸ���������,̽��WASD�ƶ�"<<endl;
    Sleep(1000);
    system("cls");
	xiaozhen();
}
void start()
{
    cout<<"				  [С��5.0��ʽ��]\n";
    cout<<"-------------------------------------------------------------------------------\n" ;
    cout<<"��ѡ��ְҵ(С��5.0��������)"<<endl;
    cout<<"1.սʿ(����:1000  �˺�:50  ����:20  "<<endl<<"����:�Թ���� �˺�*2�� �˺����ӷ���  ע:��BOOS������Ч  ����� �˺�*3 ���˺�)"<<endl;
    cout<<"2.���ȵ�Ѫսʿ(����:400 �˺�:120 ����:0 ����:�޵����غ�)"<<endl;
    int l;
    cin>>l;
    if(l==1)
    {
        shengming=1000,shanghai=50,fangyu=20,jinbi=0,jingyan=100,shengmingf=999999999;//��������
        zhiye=1;
    }
    else if(l==2)
    {
        shengming=400,shanghai=120,fangyu=0,jinbi=0,jingyan=0,shengmingf=999999999;//��������
        zhiye=2;
    }
    else if(l==99)
    {
        shengming=1000,shanghai=0,fangyu=0,jinbi=999900,jingyan=99999,shengmingf=999999999;//��������
        zhiye=1;
        tiekuai=99999;//����
        fenjie=5;//����
        jingkuai=99999;//����
        yuansujingkuai=99999;//����
        tdjh=0;
        spzx=0;
    }
    else
    {
    	shengming=1000,shanghai=50,fangyu=20,jinbi=0,jingyan=100,shengmingf=999999999;//��������
        zhiye=1;
    }
}
void xiaozhen()
{
	int i=0,n=0,l=1;
	while (l)
	{
		if(Xzj==2)
		{
			shanghai-=300;
			Xzj=1;
		}
		else if(Zzj==2)
		{
			shanghai-=500;
			Zzj=1;
		}
		else if(Xsj==2)
        {
            shanghai-=500;
            Xsj=1;
        }
		if(shengming>shengmingf)
		{
			shengming=shengmingf;
			cout<<"���������ѽ��"<<endl;
			Sleep(750);
		}
		if(shengming<=0)
		{
			cout<<"������"<<endl;
			return xiaozhen();
		}
		system("cls");
		cout<<"				  [С��5.1<����񻶼�>]\n";
		cout<<"-------------------------------------------------------------------------------\n" ;
		cout<<"���� 1 ð��"<<endl;
		cout<<"���� 2 ������"<<endl;
		cout<<"���� 3 ҩƷ��"<<endl;
		cout<<"���� 4 �Լ�״̬"<<endl;
		cout<<"���� 5 �鿴��Ϸ����"<<endl;
		cout<<"���� 6 ʹ����¯"<<endl;
		cout<<"���� 7 ����̨"<<endl;
		cout<<"���� 8 �����̵�"<<endl;
		cout<<"���� 9 ������ļ(6.0����)"<<endl;
		cout<<"���� 0 ������Ϸ"<<endl;
		cin>>l;
		switch(l)
		{
			case 1:
				cout<<"-------------------------------------------------------------------------------\n" ;
				maoxian();
				if(Xzj==2)
				{

					shanghai-=300;
					Xzj=1;
				}
				else if(Zzj==2)
				{
					shanghai-=500;
					Zzj=1;
				}
                else if(Xsj==2)
                {
                    shanghai-=500;
                    Xsj=1;
                }
				if(shengming>shengmingf)
				{
					shengming=shengmingf;
					cout<<"���������ѽ��"<<endl;
					Sleep(750);
				}
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
				cout<<"-------------------------------------------------------------------------------\n" ;
				ronglu();
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;
			case 7:
				cout<<"-------------------------------------------------------------------------------\n" ;

				gongjiangtai();
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;
			case 8:
				cailiaoshangren();
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;
			case 0:
				break;
			default:
				cout<<"��Ҫ������"<<endl;
		}
	}
}

void maoxian()
{
	//
	int i=0,n=0,l=1;
	if(Zzj==1||Xzj==1||Xsj==1)
	{
		while(n!=1&&n!=2&&n!=3)
		{
			cout<<"��ѡ����ս����"<<endl;
			cout<<"���� 1 ѡ��Xԭ�ͻ�"<<endl;
			cout<<"���� 2 ѡ��Zԭ�ͻ�"<<endl;
			cout<<"���� 3 ѡ��X���߻�"<<endl;
			cin>>n;
			if(n==1&&Xzj==1)
			{
				Xzj=2;
				cout<<"����ѡ��Xԭ�ͻ�"<<endl;
				shengmingf=shengming;
				shengming+=500;
				shanghai+=200;
				Sleep(750);
			}
			else if(n==2&&Zzj==1)
			{
				Zzj=2;
				cout<<"����ѡ��Zԭ�ͻ�"<<endl;
				shengmingf=shengming;
				shengming+=300;
				shanghai+=500;
				Sleep(750);
			}
			else if(n==3&&Xsj==1)
			{
				Xsj=2;
				cout<<"����ѡ��X���߻�"<<endl;
				shengmingf=shengming;
				shengming+=500;
				shanghai+=700;
				Sleep(750);
			}
			else
			{
				cout<<"��ѡ����Ч����"<<endl;
			}
		}
	}
	while(l)
	{
		system("cls");
		cout<<"-------------------------------------------------------------------------------\n" ;
		if(baoci>10||jingyan/100>7)
		{
			cout<<"*С������ǿ*"<<endl;
		}
		if(baoci>20||jingyan/100>10)
		{
			cout<<"*�������ǿ*"<<endl;
		}
		cout<<"���� 1 ��С��(1~5��)"<<endl;
		cout<<"���� 2 ����(5~10��)"<<endl;
		cout<<"���� 3 ��BOOS(15��)"<<endl;
		cout<<"���� 4 ̽��"<<endl;
		cout<<"*ð�մ�ֲ�������*"<<endl;
		cout<<"���� 0 ����С��"<<endl;
		cin>>l;
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
					cout<<"�ȼ�����,����"<<300-jingyan<<endl;
					Sleep(750);
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
				if(jingyan/100<30)
				{
					cout<<"�ȼ�����,����"<<3000-jingyan<<endl;
					Sleep(750);
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
				cout<<"-------------------------------------------------------------------------------\n" ;
				BOOS();
				if(boosHP==0) {
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
				Sleep(750);
				cout<<"-------------------------------------------------------------------------------\n" ;
		} 
	} 
} 
void zhuangtai(  )
{
	system("cls");
	cout<<"�������Ϊ:"<<shengming<<endl;
	cout<<"��Ľ��Ϊ:"<<"$"<<jinbi<<endl;
	cout<<"��ķ���Ϊ:"<<fangyu<<endl;
	cout<<"����˺�Ϊ:"<<shanghai<<endl;
	cout<<"��ľ���Ϊ(100����=1��):"<<jingyan<<endl;
	cout<<"��ĵȼ�Ϊ:"<<jingyan/100<<endl;
	cout<<"��ӵ�еļ��Ȱ���"<<jijiubao<<endl;
	cout<<"����MAXն(�޵�,���2*�˺�,boos*3) "<<endl;
	cout<<"�ֽ����:"<<fenjie<<endl;
	cout<<"����:"<<tiekuai<<" ����:"<<jingkuai<<" Ԫ�ؾ���"<<yuansujingkuai<<endl;
	cout<<"��ؾ���:"<<tdjh<<"   ����֮��:"<<spzx<<endl;
	int f=1 ;
	cout<<"���ײֿ�:"<<endl;
	if(Xzj==1)
    {
		cout<<"Xԭ�ͻ�"<<endl;

		f=0;
	}
	if(Zzj==1)
	{
		cout<<"Zԭ�ͻ�"<<endl;
		f=0;
	}
	if(Xsj==1)
	{
		cout<<"x���߻�"<<endl;
		f=0;
	}
	if(f)
	{
		cout<<"���޻���"<<endl;
	}
	cout<<endl;
	cout<<"����С��";
	system("pause");
}
void xiaoguai() {
	//
	int wudi=0;
	if(shengming<=0)
	{
		return xiaoguai();
	}
	int i=1,n=0,l=1,taopao,cg,lengque=0;
	int flag=9999;
	int r,w;
	srand(static_cast<unsigned  int >(time(0))) ;
	int randomNumber=rand();
	xdj=(randomNumber% 5)+1;
	cg=(randomNumber% 5)+1;
	xhp=xdj*100;
	xsh=xdj*20;
	xjb=xdj*10;
	xfy=xdj*5;
	if(jingyan/100>14)
	{
		cout<<"����ǿ(******),С��!!!!"<<endl;
		xhp+=1000;
		xsh+=400;
		xfy+=400;
		flag=(randomNumber% 100)+1;
		if(flag<=20&&xdj==5)
		{
			cout<<"�˹�ΪBUGС��!!!!�ѳ�����"<<endl;
			xhp+=1000;
			xsh+=900;
			xfy+=1000;
		}
	}
	if(jingyan/100<=14&&jingyan/100>7)
	{
		cout<<"����ǿ(***),С��!!!!"<<endl;
		xhp+=500;
		xsh+=200;
		xfy+=100;
	}
	if(Xzj==2||Zzj==2||Xsj==2)
	{
		cout<<"���ѵõ���������!!"<<endl;
	}
	cout<<"����Ե���"<<xdj<<"��С��,�˺�"<<xsh<<"����:"<<xhp<<"����:"<<xfy<<",�Ƿ�ӭս,ӭս 1,���� 0"<<endl;
	if(bao==1)
	{
		cout<<"̽������²�������!!!!"<<endl;
	}
	cin>>r;
	if(r==1||bao==1)
	{
		int f=0;
		while(shengming>0&&xhp>0&&l!=123&&(bao==1||i<=15))
		{

			system("cls");
			cout<<"-------------------------------------------------------------------------------\n" ;
			cout<<"��"<<i<<"�غ�"<<endl;
			if(flag<=20&&xdj==5)
				cout<<"BUGС��100%���������֮��"<<endl;
			cout<<"�������:"<<shengming<<"�˺�"<<shanghai<<"����"<<fangyu<<endl;
			cout<<"С������:"<<xhp<<"�˺�"<<xsh<<"����:"<<xfy<<endl;
			cout<<"����1����(��ɹ���(����˺�-�ֵķ���),��������)"<<endl;
			cout<<"����2����(����ɹ���,����*2)"<<endl;
			if(zhiye==1)
                cout<<"����3ʹ�ü���(�޵в���� 2*�˺�,BOOS*3���˺�)"<<endl;
            if(zhiye==2)
                cout<<"����3ʹ�ü���(�޵����غ�,�ɽ��й���)"<<endl;
			cout<<"����4����(20%����,����ʧ��ҲҪ����Ѫ(���ӷ���),ʵ�ڴ򲻹��Ź�15�غ��Զ�����)"<<endl;
			cout<<"����5ʹ��ս�����Ȱ�!!!"<<endl;
			if((shanghai-xfy)<=0)
			{
				cout<<"Ŀǰ��Դ˹���ɲ����˺�,������!!!!!!"<<endl;
			}
			cin>>l;
			if(huo>=1)
			{
				xhp-=100;
			}
			if(lengque>0&&f==1)
			{
				lengque--;
			}
			switch(l)
			{
				case 1:
				    if(wudi>0)
                    {
                        wudi--;
                        i++;
                        f=1;
                        xhp-=shanghai-xfy;
                        break;
                    }
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
                        if(zhiye==1)
                        {
                            xhp-=shanghai*2;
                            lengque=5;
                        }
                        if(zhiye==2)
                        {
                            wudi=3;
                            lengque=8;
                        }
						i++;
						f=0;
						break;
					}
					cout<<"��ȴ��ʣ��"<<lengque<<"�غ�"<<endl;
					Sleep(750);
					f=0;
					break;
				case 4:
					if(bao==1)
                    {
						cout<<"̽��ʱ��������!!!"<<endl;
						Sleep(750);
						break;
					}
					if(taopao=1) {
						cout<<"���ܳɹ�!!!"<<endl;
						Sleep(750);
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
						Sleep(750);
						f=1; 
					}
					else
						f=0; 

					break;

			default:
				cout<<"��Ҫ������"<<endl;
            break;
			}

		}
		if(shengming<=0)
        {
			cout<<"������"<<endl;
			Sleep(1000);
			return xiaoguai();
		}
		if(xhp<=0) {
			cout<<"������"<<xdj<<"��С��"<<endl;
			cout<<"�������"<<xjb*2<<"$"<<endl;
			jinbi+=xjb*2;
			cout<<"��������"<<xdj*10<<endl;
			jingyan+=xdj*10;
			if(xdj==5&&flag<=20)
			{
				cout<<"��ϲ���>>����֮��<<"<<endl;
				spzx=1;
			}
			Sleep(1000);
		}
	}

	else if(r==0)
	{
		cout<<"���ܳɹ�!!!"<<endl;
		Sleep(750);

	} else {
		cout<<"��������"<<endl;
		Sleep(750);
	}

}
void daguai()
{
    int wudi=0;
	if(shengming<=0)
	{
		return;
	}
	int i=1,n=0,l=1,taopao,cg,flag=0;
	int lengque=0;
	int r,w;
	srand(static_cast<unsigned  int >(time(0))) ;
	int randomNumber=rand();
	ddj=(randomNumber% 5)+6;
	dhp=ddj*100;
	dsh=ddj*20;
	djb=ddj*10;
	dfy=ddj*5;
	if(jingyan/100>25) {
		cout<<"����ǿ(******),С��!!!!"<<endl;
		dhp+=1000;
		dsh+=600;
		dfy+=400;
		if(ddj==10&&tj==1&&dj==1)
		{
			dhp+=1000;
			dsh+=800;
			dfy+=900;
			flag=1;
		}

	}
	if(jingyan/100<=25&&jingyan/100>14)
	{
		cout<<"����ǿ(****),С��!!!!"<<endl;
		dhp+=600;
		dsh+=300;
		dfy+=300;
	}
	cout<<"����Ե���"<<ddj<<"�����,�˺�"<<dsh<<"����:"<<dhp<<"����:"<<dfy<<"�Ƿ�ӭս,ӭս 1,���� 0"<<endl;
	if(bao==1)
	{
		cout<<"̽������²�������!!!!"<<endl;
	}
	cin>>r;
	int f;
	if(r==1||bao==1)
	{
	    if(Xzj==2||Zzj==2||Xsj==2)
        {
            cout<<"���ѵõ���������!!"<<endl;
        }
		while(shengming>0&&dhp>0&&l!=123&&(bao==1||i<=15))
		{

			system("cls");
			cout<<"-------------------------------------------------------------------------------\n" ;
			system("cls");
			cout<<"��"<<i<<"�غ�"<<endl;
			if(flag==1)
				cout<<"�˹ֿ��ܻᱬ�� �ϳ���ؽ�����Ʒ>>��ؾ���,�Գ�����ǿ"<<endl;
			cout<<"�������:"<<shengming<<"�˺�"<<shanghai<<"����"<<fangyu<<endl;
			cout<<"�������:"<<dhp<<"�˺�"<<dsh<<"����:"<<dfy<<endl;
			cout<<"����1����(��ɹ���(����˺�-�ֵ��˺�),��������)"<<endl;
			cout<<"����2����(����ɹ���,����*2)"<<endl;
			if(zhiye==1)
                cout<<"����3ʹ�ü���(�޵в���� 2*�˺�,BOOS*3���˺�)"<<endl;
            if(zhiye==2)
                cout<<"����3ʹ�ü���(�޵����غ�,�ɽ��й���)"<<endl;
			cout<<"����4����(20%����,����ʧ��ҲҪ����Ѫ(���ӷ���),ʵ�ڴ򲻹��Ź�20�غ��Զ�����)"<<endl;
			cout<<"����5ʹ��ս�����Ȱ�!!!"<<endl;
			if((shanghai-dfy)<=0)
			{
				cout<<"Ŀǰ��Դ˹���ɲ����˺�,������!!!!!!"<<endl;
			}
			cin>>l;
			if(huo>=1)
			{
				dhp-=100;
			}
			if(lengque>0&&f==1)
			{
				lengque--;
			}

			switch(l)
			{
				case 1:
					if(wudi>0)
                    {
                        wudi--;
                        i++;
                        f=1;
                        dhp-=shanghai-dfy;
                        break;
                    }
					if((fangyu/2)<dsh)
					{
						shengming-=dsh-fangyu/2;
					}
					if(shanghai>dfy )
					{
						dhp-=shanghai-dfy;
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
						if(zhiye==1)
                        {
                            dhp-=shanghai*2;
                            lengque=5;
                        }
                        if(zhiye==2)
                        {
                            wudi=3;
                            lengque=8;
                        }
						i++;
						f=0;
						break;
					}
					cout<<"��ȴ��ʣ��"<<lengque<<"�غ�"<<endl;
					Sleep(750);
					f=0;
					break;
				case 4:
					if(bao==1) {
						cout<<"̽��ʱ��������!!!"<<endl;
						Sleep(750);
						break;
					}
					cout<<"���ܳɹ�!!!"<<endl;
					Sleep(750);
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
						Sleep(750);
					}

					break;

			default:
				cout<<"��Ҫ������"<<endl;
			}

		}
		if(shengming<=0) {
			cout<<"������"<<endl;
			Sleep(1000);
			return daguai();
		}
		if(dhp<=0)
		{
			cout<<"������"<<ddj<<"�����"<<endl;
			cout<<"�������"<<djb*2<<"$"<<endl;
			cout<<"��������"<<ddj*10<<endl;
			if(flag==1&&tj==1&&dj==1)
			{
				srand(static_cast<unsigned  int >(time(0))) ;
				int randomNumber=rand();

				if((randomNumber% 100)+1<=10)
				{
					cout<<"����Ʒ�������>>��ؾ���<<"<<endl;
					tdjh++;
				}
				else
				{
					cout<<"�ٽ�����,û��ˢ��"<<endl;
				}
			}
			jinbi+=djb*2;
			jingyan+=ddj*10;
			Sleep(1000);

		}


	} else if(r==0) {
		cout<<"���ܳɹ�!!!"<<endl;
		Sleep(750);
	} else {
		cout<<"��������"<<endl;
		Sleep(750);
	}


}
void BOOS() {
    int wudi=0;
	system("cls");
	cout<<"-------------------------------------------------------------------------------\n" ;
	Sleep(750);
	if(boosHP==0) {
		cout<<"���ѻ���BOOS"<<endl;
		xiaozhen();
	}
	int i=1,n=0,l=1;
	int lengque=0;
	int taopao;
	srand(static_cast<unsigned  int >(time(0))) ;
	int randomNumber=rand();
	boosHP=50000;
	boosSH=4000;
	boosfy=2000;

	cout<<"����Ե���"<<"BOOS,�˺�"<<boosSH<<"����:"<<boosHP<<"����:"<<boosfy<<endl;
	system("pause");
	int f=0;
	while(shengming>0&&boosHP>0&&l!=123&&i<=100)
    {
		system("cls");
		cout<<"��"<<i<<"�غ�"<<endl;
		cout<<"�������:"<<shengming<<"�˺�"<<shanghai<<"����"<<fangyu<<endl;
		cout<<"BOOS����:"<<boosHP<<"�˺�"<<boosSH<<"����:"<<boosfy<<endl;
		cout<<"����1����(��ɹ���(����˺�-�ֵ��˺�),�Լ���������)"<<endl;
		cout<<"����2����(����ɹ���,����*2)"<<endl;
		if(zhiye==1)
            cout<<"����3ʹ�ü���(�޵в�����˺�*3-BOOS�ķ���)"<<endl;
        if(zhiye==2)
            cout<<"����3ʹ�ü���(�޵����غ�,�ɽ��й���)"<<endl;
		cout<<"����4����"<<endl;
		cout<<"����5ʹ��ս�����Ȱ�!!!"<<endl;
		if((shanghai-boosfy)<=0) {
			cout<<"Ŀǰ���BOOS��ɲ����˺�,������!!!!!!"<<endl;
		}
		cin>>l;
		if(huo>=1) {
			boosHP-=100;
		}

		if(lengque>0&&f==1) {
			lengque--;
		}
		switch(l) {
			case 1:
				if(wudi>0)
                {
                    wudi--;
                    i++;
                    f=1;
                    boosHP-=shanghai-boosfy;
                    break;
                }
                if((fangyu/2)<boosSH)
                {
                    shengming-=boosSH-fangyu/2;
                }
                if(shanghai>boosfy )
                {
                    boosHP-=shanghai-boosfy;
                }
                i++;
                f=1;
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
				if(lengque==0)
                {
					if(zhiye==1)
                    {
                        xhp=xhp-shanghai*3+boosfy;
                        lengque=5;
                    }
                    if(zhiye==2)
                    {
                        wudi=3;
                        lengque=8;
                    }
                    i++;
                    f=0;
                    break;
				}
				cout<<"��ȴ��ʣ��"<<lengque<<"�غ�"<<endl;
				Sleep(500);
				f=0;
				break;
			case 4:
				f=1;
				if(taopao=1) {
					cout<<"���ܳɹ�!!!"<<endl;
					Sleep(500);
					l=123;
				}

				break;
			case 5:
				f=1;
				if(jijiubao>0) {
					cout<<"ʹ�óɹ�!!!"<<endl;
					Sleep(500);
					jijiubao--;
					shengming+=50;
					i++;
				}
				break;

			default:
				cout<<"��Ҫ������"<<endl;
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
		jinbi+=5000;
		Sleep(750);
	}


}
void wuqidian() {
	//����
	int i=1,n=0,l=1;
	char w,r;
	while(l) {

		system("cls");
		cout<<"���������:�˺����ܵ���!!!\n����:������Ŀǰ�˺�50 ,����ذ�׺�,�˺�����+20,�����滻��20"<<endl;
		cout<<"��Ŀǰ�˺�:"<<shanghai<<"Ŀǰ����:"<<fangyu<<"��Ľ��Ϊ:"<<"$"<<jinbi<<endl;
		cout<<"��ӭ���� �����꣡"<<endl;
		cout<<"1.����(����)   ($20*1)"<<endl;
		cout<<"2.��    ($100��150������)"<<endl;
		cout<<"3.����    ($120��180������)"<<endl;
		cout<<"4.X����   ($150��200������)"<<endl;
		cout<<"5.ľ������($300��100������)"<<endl;
		cout<<"6.��ͭ����($400��200������)"<<endl;
		cout<<"7.��������($500��300������)"<<endl;
		cout<<"8.����    ($500��300������)"<<endl;
		cout<<"9.ս��ͷ��($500��50����,�����а�������+50)"<<endl;
		cout<<"0���뿪������"<<endl;
		cin>>l;
		switch(l)
		{
			case 1 :
				if(jinbi<20) {
					cout<<"���Ǯ����"<<endl;
					break;
				} else {
					cout<<"����ɹ���"<<endl;//Ǯ�㹻ʱ����True
					tiekuai+=1;
					jinbi-=20;
					cout<<"������������:"<<tiekuai<<"��"<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 2 :
				if(jinbi<100) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else {
					shanghai=150;
					jinbi-=100;
					cout<<"��Ĺ�������Ϊ"<<shanghai<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 3 :
				if(jinbi<120) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else

				{
					cout<<"����ɹ���"<<endl;
					shanghai=180;
					jinbi-=120;
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
					xgj=1;
					shanghai=200;
					jinbi-=150;
					cout<<"����˺�����Ϊ"<<shanghai<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 5 :

				if(jinbi<300) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else {
					cout<<"����ɹ���"<<endl;
					fangyu=100;
					jinbi-=300;
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
					jinbi-=400;
					cout<<"��ķ�������Ϊ"<<fangyu<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 7:
				if(jinbi<500) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else {
					fangyu=300;
					jinbi-=500;
					bykj=1;
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
				if(jinbi<500) {
					cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase
					break;
				} else {
					if(bykj==0) {
						cout<<"û�й���������ײ��ܹ����װ��!!!"<<endl;
						break;
					} else {
						fangyu+=50;
						jinbi-=500;
						cout<<"��ķ�������Ϊ"<<fangyu<<endl;
						cout<<"-------------------------------------------------------------------------------\n" ;
						break;
					}

				}
			case 0:
				system("cls");
				xiaozhen();
			default:
				cout<<"�����"<<endl;
				break;
		}
		Sleep(100);
	}

}
void yaopindian() {

	int i=1,n=0,l=0;
	char w,r;

	do {
		system("cls");
		cout<<"-------------------------------------------------------------------------------\n" ;
		cout<<"��ӭ���� ҩƷ�꣡"<<endl;
		cout<<"��Ľ��Ϊ:"<<"$"<<jinbi<<endl;
		cout<<"1.��ҩˮ(С) ($50��50Ѫ)"<<endl;
		cout<<"2.һ���ҩˮ ($100��100Ѫ)"<<endl;
		cout<<"3.������ҩˮ ($150��200Ѫ)"<<endl;
		cout<<"4.��ҩˮ     ($200��300Ѫ)"<<endl;
		cout<<"5.����ҩˮ   ($5000��500Ѫ,50�����,�޹�10ƿ)"<<endl;
		cout<<"6.��ʥҩˮ   ($7000��300Ѫ,50�����,100�㹥��(+100),�޹�10ƿ)"<<endl;
		cout<<"7.���Ȱ�     ($50��50Ѫ ս��ʱʹ��)"<<endl;
		cout<<"8.*��֮ˮ*   ($7000,�з�ÿ�غϼ���100Ѫ)"<<endl;
		cout<<"0.�뿪ҩƷ��"<<endl;
		cin>>l;
		switch(l) {
			case 1 :
				if(jinbi<50)
                {
					cout<<"���Ǯ����"<<endl;
					Sleep(1000);
					break;
				} else {
					cout<<"����ɹ���"<<endl;
					shengming+=50;
                    shengmingf=shengming;
					jinbi-=50;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 2 :
				if(jinbi<100) {
					cout<<"���Ǯ����"<<endl;
					Sleep(1000); //Ǯ����ʱ����Flase
					break;
				} else {
					cout<<"����ɹ���"<<endl;
					shengming+=100;
					shengmingf=shengming;
					jinbi-=100;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 3 :
				if(jinbi<150) {
					cout<<"���Ǯ����"<<endl;
					Sleep(1000); //Ǯ����ʱ����Flase
					break;
				} else

				{
					cout<<"����ɹ���"<<endl;
					shengming+=200;
					shengmingf=shengming;
					jinbi-=150;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 4 :
				if(jinbi<200) {
					cout<<"���Ǯ����"<<endl;
					Sleep(1000); //Ǯ����ʱ����Flase
					break;
				} else {
					cout<<"����ɹ���"<<endl;
					shengming+=300;
					shengmingf=shengming;
					jinbi-=200;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 5 :
			    if(yy==10)
                {
                    cout<<"�ѹ���10ƿ"<<endl;
                    break;
                }
				else if(jinbi<5000)
                {
					cout<<"���Ǯ����"<<endl;
					Sleep(1000); //Ǯ����ʱ����Flase
					break;
				}
				else if(jinbi>=5000&&yy<10)
                {
					cout<<"����ɹ���"<<endl;
                    yy++;
					shengming+=500;
					shengmingf=shengming;
					fangyu+=50;
					jinbi-=500;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 6:
			    if(sy==10)
                {
                    cout<<"�ѹ���10ƿ"<<endl;
                    break;
                }
				else if(jinbi<7000) {
					cout<<"���Ǯ����"<<endl;
					break;
				}
				else
                {
					cout<<"����ɹ���"<<endl;
					shengming+=300;
					fangyu+=50;
					sy++;
					shanghai+=100;
					shengmingf=shengming;
					jinbi-=700;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 7:
				if(jinbi<50) {
					cout<<"���Ǯ����"<<endl;
					Sleep(1000); //Ǯ����ʱ����Flase
					break;
				}
				jinbi-=50;
				jijiubao++;
				cout<<"����ɹ���"<<endl;
				cout<<"-------------------------------------------------------------------------------\n" ;

				break;
			case 8:
				if(jinbi<7000) {
					cout<<"���Ǯ����"<<endl;
					Sleep(1000);
					break;
				}
				jinbi-=700;
				huo=1;
				cout<<"����ɹ���"<<endl;
				cout<<"-------------------------------------------------------------------------------\n" ;

				break;
			case 0:
				system("cls");
				xiaozhen();
				break;

			default:
				cout<<"�����"<<endl;
				Sleep(1000);
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;
		}

	} while(l);






}
void ziliao()
{
	cout<<"BUGС��:�˹��ڴ�С��ʱ�п��ܻ���ֲ�����Ϊ������ǿ״̬�µ�5��С��,���ҳ�����"<<endl<<endl;
	if(zhiye==1)
        cout<<"����һλ��ͨ����Ҳ��������ͨ��սʿ,�������ı����˴�,�̿���ϰѧ����>>����ն<<,����Ϊ'ʥ��ʿ' "<<endl;
    else
        cout<<"���Ǿ����ĸ����Ӷӳ�,��ս����ɱ������,ӵ�� Ѫ��� ���ܣ�����Ϊ>>��Զ�������ĸ����Ӷӳ�<<"<<endl;
	cout<<"С��5.0��ӭ��!!!"<<endl;
	system("pause");
}
void tanbao()
{
	//����
	system("cls");
	baoci++;
	bao=1;
	a[6][4]=='O';

	int i=0;
	for(i=0; i<=12; i++)
		cout<<a[i]<<endl;
	char ch;
	while(1) {
		if(shengming<=0)
		{
			xiaozhen();
		}
		ch=getch();
		if(ch=='w')
		{
			if(a[x-1][y]=='-'||a[x-1][y]=='|'||a[x-1][y]=='R'||a[x-1][y]=='F'||a[x-1][y]=='X'||a[x-1][y]=='H') {

				if(a[x-1][y]=='H')
				{
					system("cls");
					fenjiecailiao();
					system("cls");
				}
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
				}
				else
				{
					a[x][y]='-';
				}
				x--;
				a[x][y]='0';
				system("cls");
				i=0;
				for(i=0; i<=13; i++)
					cout<<a[i]<<endl;

			}
		}
		else if(ch=='s')
		{
			if(a[x+1][y]=='-'||a[x+1][y]=='|'||a[x+1][y]=='R'||a[x+1][y]=='F'||a[x+1][y]=='X'||a[x+1][y]=='H') {
				if(a[x+1][y]=='H')
				{
					system("cls");
					fenjiecailiao();
					system("cls");
				}
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
				}
				else
				{
					a[x][y]='-';
				}
				x++;
				a[x][y]='0';
				system("cls");
				i=0;
				for(i=0; i<=13; i++)
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
			if(a[x][y-1]=='-'||a[x][y-1]=='|'||a[x][y-1]=='R'||a[x][y-1]=='F'||a[x][y-1]=='X'||a[x][y-1]=='o'||a[x][y-1]=='H')
			{
				if(a[x][y-1]=='H')
				{
					system("cls");
					fenjiecailiao();
					system("cls");
				}
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
				}
				else
				{
					a[x][y]='-';
				}
				y--;
				a[x][y]='0';
				system("cls");
				i=0;
				for(i=0; i<=13; i++)
					cout<<a[i]<<endl;

			}
		} else if(ch=='d') {

			if(a[x][y+1]=='-'||a[x][y+1]=='|'||a[x][y+1]=='R'||a[x][y+1]=='F'||a[x][y+1]=='X'||a[x][y+1]=='o'||a[x][y+1]=='H')
			{
				if(a[x][y+1]=='H') {
					system("cls");
					fenjiecailiao();
					system("cls");
				}
				if(a[x][y+1]=='R') {
					system("cls");
					jiangli();
					system("cls");
				}
				if(a[x][y+1]=='F') {

					system("cls");
					xiaoguai();
					system("cls");
					daguai();
					system("cls");
				}
				if(a[x][y+1]=='X') {
					system("cls");
					daguai();
					system("cls");
				}
				if(a[x][y+1]=='@')
				{
					system("cls");
					cout<<"5.1��ʽ�濪��ð�յڶ���"<<endl;
					Sleep(500);
					system("cls");
				}
				if(a[x+1][y]!=' '||a[x-1][y]!=' ')
				{
					a[x][y]='|';
				} else {
					a[x][y]='-';
				}
				y++;
				a[x][y]='0';
				system("cls");
				i=0;
				for(i=0; i<=13; i++)
					cout<<a[i]<<endl;

			}
		}
	}
}
void jiangli()

{

	cout<<"���� $200";
	jinbi+=200;
	Sleep(750);
}


void ronglu() { //��¯
	int l=1,h;
	while(l) {

		system("cls");
		cout<<"-------------------------------------------------------------------------------\n" ;

		cout<<"���� 1 �ֽ����ͨ����"<<endl;
		cout<<"���� 2 �ֽ����ͨ����"<<endl;
		cout<<"���� 3 �ֽ��Ԫ�ؾ���"<<endl;
		cout<<"���� 0 ����С��"<<endl;
		cin>>l;
		switch(l) {
			case 1:
				cout<<"������ֽ�ķֽ������(�ֽ����1��=2������)"<<endl;
				cout<<"Ŀǰӵ��"<<fenjie<<"���ֽ����"<<endl;
				cout<<"���� 0 �뿪"<<endl;
				cin>>l;
				if(l>fenjie) {
					cout<<"�ֽ���ϲ���!!!!"<<endl;
					break;
				} else if(l==0) {
					xiaozhen();

				} else {
					fenjie-=l;
					tiekuai+=l*2;
					cout<<"�ֽ�ɹ�,"<<"Ŀǰʣ����ͨ����"<<tiekuai<<endl;
				}


				break;
			case 2:
				cout<<"������ֽ�ķֽ������(�ֽ����1��=2�龧��)"<<endl;
				cout<<"Ŀǰӵ��"<<fenjie<<"���ֽ����"<<endl;
				cout<<"���� 0 �뿪"<<endl;
				cin>>l;
				if(l>fenjie) {
					cout<<"�ֽ���ϲ���!!!!"<<endl;
					break;
				} else if(l==0) {
					xiaozhen();

				} else {
					fenjie-=l;
					jingkuai+=l*2;
					cout<<"�ֽ�ɹ�,"<<"Ŀǰʣ����ͨ����"<<jingkuai<<endl;
				}

				break;
			case 3:
				cout<<"������ֽ�ķֽ������(�ֽ����2��=1��Ԫ�ؾ���)"<<endl;
				cout<<"Ŀǰӵ��"<<fenjie<<"���ֽ����"<<endl;
				cout<<"���� 0 �뿪"<<endl;
				cin>>l;
				if(l>fenjie) {
					cout<<"�ֽ���ϲ���!!!!"<<endl;
					break;
				} else if(l==0) {
					xiaozhen();
				} else {
					fenjie-=l;
					yuansujingkuai+=(l/2);
					cout<<"�ֽ�ɹ�,"<<"Ŀǰʣ��Ԫ�ؾ���"<<yuansujingkuai<<endl;
				}

				break;
			case 0:
				xiaozhen();
				Sleep(740);
				system("cls");
				cout<<"-------------------------------------------------------------------------------\n" ;

			default:
				cout<<"��������"<<endl;

		}
		Sleep(740);
		system("cls");
		cout<<"-------------------------------------------------------------------------------\n" ;

	}

}

void gongjiangtai() {
	//����̨
	int l=1,h,r;

	while(l) {

		system("cls");
		cout<<"-------------------------------------------------------------------------------\n" ;

		cout<<"���� 1 ��������"<<endl;
		cout<<"���� 2 ��������"<<endl;
		cout<<"���� 0 ����С��"<<endl;
		cin>>l;
		switch(l) {
			case 1:
				cout<<"-------------------------------------------------------------------------------\n" ;
				jijia();
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;
			case 2:
				cout<<"-------------------------------------------------------------------------------\n" ;
				wuqizhizuo();
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;
			case 0:
				xiaozhen();


			default:
				cout<<"��������"<<endl;

		}

		Sleep(750);
	}
}

void fenjiecailiao() {
	int cl;
	srand(static_cast<unsigned  int >(time(0))) ;
	int randomNumber=rand();
	cl=(randomNumber% 5)+5;
	cout<<"�ֽ����*"<<cl<<endl;
	Sleep(750);
	fenjie+=cl;
}
void jijia() {
	//��������
	int l=1,h=1,k=0;
	while(l) {

		system("cls");
		cout<<"-------------------------------------------------------------------------------\n" ;

		cout<<"���� 1 ���� Xԭ�ͻ�(����+500,����+200)\n"<<endl;
		cout<<"���� 2 ���� Zԭ�ͻ�(����+300,����+500)"<<endl;
		cout<<"�˻���ֻ��һ��������ʽ\n����*100  ����*30  Ԫ�ؾ���*20\n\n";
		cout<<"���� 3 ���� X���߻���(����+500,����+700)"<<endl;
        cout<<"�˻���ֻ��һ��������ʽ\n����*300  ����*300  Ԫ�ؾ���*300\n";
		cout<<"���� 0 ����С��"<<endl;
		cin>>l;
		switch(l)
		{
			case 1://X
				if(Xzj==0) {
					cout<<"����һ:����100�� Ԫ�ؾ��� 10��(���� 1)\n";
					cout<<"������:����150�� ����30��(���� 2)\n";

					cout<<"���� 0 ����\n";
					cin>> h;
					switch(h) {
						case 1:
							if(tiekuai>=100&&yuansujingkuai>=10) {
								tiekuai-=100;
								yuansujingkuai-=10;
								Xzj=1;
								cout<<"���ѳɹ����� Xԭ�ͻ�"<<endl;
								Sleep(1000);
								cout<<"-------------------------------------------------------------------------------\n" ;
							} else {
								cout<<"���ϲ���!!!!"<<endl;
								Sleep(1000);
								cout<<"-------------------------------------------------------------------------------\n" ;
							}
							break;
						case 2:
							if ( tiekuai>=150&&jingkuai>=5  ) {
								tiekuai-=150;
								jingkuai-=30;
								Xzj=1;
								cout<<"���ѳɹ����� Xԭ�ͻ�"<<endl;
								Sleep(1000);
								cout<<"-------------------------------------------------------------------------------\n" ;
							} else {
								cout<<"���ϲ���!!!!"<<endl;
								Sleep(1000);
								cout<<"-------------------------------------------------------------------------------\n" ;
							}
							break;

						case 0:
							cout<<"-------------------------------------------------------------------------------\n" ;
							break;
						default:
							cout<<"û���ҵ�������ķ������"<<endl;
							break;
					}

				} else {
					cout<<"���Ѿ��������˻���"<<endl;
				}

				break;


			case 2://	z
				if(Zzj==0)
				{
					cout<<"�˻���ֻ��һ��������ʽ\n����*100  ����*30  Ԫ�ؾ���*20\n";
					if(tiekuai>=100&&jingkuai>=30&&yuansujingkuai>=20 )
					{
						Zzj=1;
						tiekuai-=100;
						jingkuai-=30;
						yuansujingkuai-=20;
						cout<<"���ѳɹ����� Zԭ�ͻ�"<<endl;
						Sleep(1000);
					}
					else
					{
						cout<<"���ϲ���!!!!"<<endl;
						Sleep(1000);
					}
				} else {
					cout<<"���������˻���"<<endl;
					Sleep(1000);

				}

				break;

			case 3:
				if(Xsj==0)
				{
					cout<<"�˻���ֻ��һ��������ʽ\n����*300  ����*300  Ԫ�ؾ���*300\n";
					if(tiekuai>=300&&jingkuai>=100&&yuansujingkuai>=100 )
					{
						Xsj=1;
						tiekuai-=300;
						jingkuai-=300;
						yuansujingkuai-=300;
						cout<<"���ѳɹ����� X���߻���"<<endl;
						Sleep(1000);
					}
					else
					{
						cout<<"���ϲ���!!!!"<<endl;
						Sleep(1000);
					}
				}
				else
				{
					cout<<"���������˻���"<<endl;
					Sleep(1000);

				}

				break;
			case 0:
				xiaozhen();
			default://xz
				cout<<"û���ҵ�������Ļ��ױ��"<<endl;
				break;
		}
		Sleep(750);
	}
}
void cailiaoshangren() {
	int l=1,n;
	while (l) {
		system("cls");
		cout<<"-------------------------------------------------------------------------------\n" ;
		cout<<"�����̵�"<<endl;
		cout<<"���� 1 ����ֽ����*100 ($1000)"<<endl;
		cout<<"���� 2 ����Ԫ�ؾ���*100 ($2000)"<<endl;
		cout<<"���� 0 ����С��"<<endl;
		cin>>l;
		switch(l) {
			case 1:
				if(jinbi<1000)
				{
					cout<<"��Ҳ���"<<endl;
				}
				else
				{
					cout<<"����ɹ�"<<endl;
					jinbi-=1000;
					fenjie+=100;
				}
				break;

			case 2:
				if(jinbi<2000)
				{
					cout<<"��Ҳ���"<<endl;
				}
				else
				{
					cout<<"����ɹ�"<<endl;
					jinbi-=1000;
					yuansujingkuai+=1000;
				}
				break;
			case 0:
				system("cls");
				xiaozhen();
				break;
			default:
				cout<<"û���ҵ��㹺�����Ʒ���"<<endl;
				Sleep(750);
		}
		Sleep(100);
		cout<<"-------------------------------------------------------------------------------\n" ;

	}
}
void wuqizhizuo()
{
	int l=1,h,n;
	while(l)
	{
		system("cls");
		cout<<"���� ��񷽣(�˺�600) ���� 1 "<<endl;
		cout<<"����*200,����*10"<<endl<<endl;
		cout<<"���� ��ؽ�(�˺�800) ���� 2 "<<endl;
		cout<<"����*350"<<endl<<endl;
		cout<<"���� Xͷ��(����300)  ���� 3 "<<endl;
		cout<<"����*300,Ԫ�ؾ���*10"<<endl<<endl;
		cout<<"���� X�ؼ�(����400)  ���� 4 "<<endl;
		cout<<"����*350,Ԫ�ؾ���*20"<<endl<<endl;
		cout<<"���� XX�⽣(�˺�400) ���� 5 "<<endl;
		cout<<"����*150,Ԫ�ؾ���*20"<<endl<<endl;
		cout<<"���� x����(����400) ���� 6 "<<endl;
		cout<<"����*300,����*30,Ԫ�ؾ���*10"<<endl;
		cout<<"���� ��ؽ�(�˺�1000)���� 7 "<<endl;
		cout<<"������"<<endl;
		cout<<"���� x��������װ(����800) ���� 8 "<<endl;
		cout<<"������"<<endl<<endl;
		cout<<"����С��    ���� 0 "<<endl;

		cin>>l;
		switch(l)
		{
			case 1:
				if(tiekuai>=200&&jingkuai>=10)
				{
					tj=1;
					cout<<"�����ɹ�"<<endl;
					tiekuai-=200;
					jingkuai-=10;
					shanghai=600;
					cout<<"����ʣ��:"<<tiekuai<<"����ʣ��:"<<jingkuai<<endl;
					cout<<"�˺�:"<<shanghai<<endl;
					Sleep(500);
				}
				else
				{
					cout<<"���ϲ���!!!\n";
				}
				break;
			case 2:
				if(tiekuai>=350)
				{
					dj=1;
					cout<<"�����ɹ�"<<endl;
					tiekuai-=350;
					shanghai=800;
					cout<<"����ʣ��:"<<tiekuai<<endl;
					cout<<"�˺�:"<<shanghai<<endl;
					Sleep(500);
				}
				else
				{
					cout<<"���ϲ���!!!\n";
				}
				break;
			case 3:
				if(tiekuai>=300&&yuansujingkuai>=10)
				{
					xtk=1;
					cout<<"�����ɹ�"<<endl;
					tiekuai-=300;
					yuansujingkuai-=10;
					fangyu=300;
					cout<<"����ʣ��:"<<tiekuai<<"Ԫ�ؾ���ʣ��:"<<yuansujingkuai<<endl;
					cout<<"����:"<<fangyu<<endl;
					Sleep(500);
				}
				else
				{
					cout<<"���ϲ���!!!\n";
				}
				break;
			case 4:
				if(tiekuai>=350&&yuansujingkuai>=20)
				{
					xxj=1;
					cout<<"�����ɹ�"<<endl;
					tiekuai-=350;
					yuansujingkuai-=20;
					fangyu=400;
					cout<<"����ʣ��:"<<tiekuai<<"Ԫ�ؾ���ʣ��:"<<yuansujingkuai<<endl;
					cout<<"����:"<<fangyu<<endl;
					Sleep(500);
				}
				else
				{
					cout<<"���ϲ���!!!\n";
				}
				break;
			case 5:
				if(tiekuai>=150&&yuansujingkuai>=20&&xgj==1)
				{
					xxgj=1;
					cout<<"�����ɹ�"<<endl;
					tiekuai-=150;
					yuansujingkuai-=20;
					shanghai=400;
					cout<<"����ʣ��:"<<tiekuai<<"Ԫ�ؾ���ʣ��:"<<yuansujingkuai<<endl;
					cout<<"�˺�:"<<shanghai<<endl;
					Sleep(500);
				}
				else
				{
					cout<<"���ϲ���!!!��δ����⽣\n";
				}
				break;
			case 6:
				if(tiekuai>=300&&yuansujingkuai>=10&&jingkuai>=30)
				{
					xhs=1;
					cout<<"�����ɹ�"<<endl;
					tiekuai-=300;
					yuansujingkuai-=10;
					fangyu=400;
					cout<<"����ʣ��:"<<tiekuai<<"Ԫ�ؾ���ʣ��:"<<yuansujingkuai<<"����ʣ��:"<<jingkuai<<endl;
					cout<<"����:"<<fangyu<<endl;
					Sleep(500);
				}
				else
				{
					cout<<"���ϲ���!!!\n";
				}
				break;
			case 7:
				if(tj==1&&dj==1&&tdjh>0)
				{
					cout<<"�����ɹ�"<<endl;
					shanghai=1000;
					cout<<"�˺�:"<<shanghai<<endl;
					Sleep(500);
				}
				else
				{
					cout<<"δ�����񷽣���ؽ���δӵ����ؾ���(ˢ���Ӵ��10����)\n";
				}
				break;
			case 8:
				if(xxgj==1&&xxj==1&&xhs==1&&xtk==1&&spzx>0)
				{
					cout<<"�����ɹ�"<<endl;
					fangyu=800;
					cout<<"����:"<<fangyu<<endl;
					Sleep(500);
				}
				else
				{
					cout<<"δ��������x����������δӵ������֮��(ˢBUGС��5����)\n";
				}
				break;
			case 0:
				xiaozhen();
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;

			default:
				cout<<"û���ҵ����������������"<<endl;
				Sleep(750);
		}
		Sleep(100);
	}
}
