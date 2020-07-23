#include<bits/stdc++.h>//头文件
#include<windows.h>//头文件
#include <conio.h>
void xiaozhen();
void  wuqidian();//武器店
void  yaopindian();//药品店
void maoxian();//冒险
void daguai();//大怪
void xiaoguai();//小怪
void BOOS(); //boos
void zhuangtai();//状态
void ziliao();//资料
void jiangli();//奖励
void tanbao();//探宝
void ronglu();//熔炉
void gongjiangtai();//工匠台
void fenjiecailiao();//奖励分解材料
void jijia(); //制作机甲
void cailiaoshangren();//材料商人
void wuqizhizuo();//武器制作
char  a[14][100]= {"|  R资源 X大怪 F小大怪 O入口 0你的位置  H分解材料       |",
                   "|                                                       |",
                   "|            |-X--FH-X---X-F-H-F-H--|      |-F|-F--H?   |",
                   "|            |       |              |-F|FH-|  |         |",
                   "|            |-H--X--|FF-R|     |-F-|  |      |-F--H?   |",
                   "|      |--R--|       |    |--H-X|      |-F|-H-|         |",
                   "|   O0-|             |R-FF|     |-F-|     |   |-F-H-?   |",
                   "|      F---|--F-H-F--|              |     |   |         |",
                   "|      |   |      |                 |FH|-F|-H-|-F--H-?  |",
                   "|      H   |-X--R-|-X--F-R-|--F-F--H|  |                |",
                   "|          |               R           F                |",
                   "|          |X---H---X--F-R-|-X-F-HF-RHF|                |",
                   "|                                                       |"
                  };
int x=6,y=5,z=6,l=4;
int baoci=0;
int bao=0;
int shengming=1000,shanghai=40,fangyu=10,jinbi=200,jingyan=100,shengmingf=999999;//主角资料
int xhp,xsh,xjb,xdj,xfy;//小怪
int dhp,dsh,djb,ddj,dfy;//大怪
int boosHP=30000,boosSH,boosfy;//BOOS
int huo=0,jijiubao=5;//药品
int tiekuai=30;//材料
int fenjie=5;//材料
int jingkuai=20;//材料
int yuansujingkuai=20;//材料
int Xzj=0;//机甲
int Zzj=0;//机甲
int bykj=0;
using namespace std;
int main() 
{
	xiaozhen();
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
		if(Zzj==2) 
		{
			shanghai-=500;
			Zzj=1;
		}
		if(shengming>shengmingf) 
		{
			shengming=shengmingf;
			cout<<"机甲增幅已解除"<<endl;
			Sleep(750);
		}
		if(shengming<shengmingf) 
		{
			shengmingf=99999999; 
			cout<<"机甲增幅已解除"<<endl;
			Sleep(750);
		} 
		if(shengming<=0) 
		{
			cout<<"你死了"<<endl;
			return xiaozhen();
		}
		system("cls");
		cout<<"				  [小镇4.1<机甲纪元>]\n";
		cout<<"-------------------------------------------------------------------------------\n" ;
		cout<<"输入 1 冒险"<<endl;
		cout<<"输入 2 武器店"<<endl;
		cout<<"输入 3 药品店"<<endl;
		cout<<"输入 4 自己状态"<<endl;
		cout<<"输入 5 查看游戏资料"<<endl;
		cout<<"输入 6 使用熔炉"<<endl;
		cout<<"输入 7 工匠台"<<endl;
		cout<<"输入 8 材料商人"<<endl;
		cout<<"输入 0 结束游戏"<<endl;
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
				if(Zzj==2) 
				{
					shanghai-=500;
					Zzj=1;
				}
				if(shengming>shengmingf) 
				{
					shengming=shengmingf;
					cout<<"机甲增幅已解除"<<endl;
					Sleep(750);
				}
				if(shengming<shengmingf) 
				{
					shengmingf=99999999; 
					cout<<"机甲增幅已解除"<<endl;
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
				cout<<"不要乱输入"<<endl;
		}
	}
}

void maoxian() 
{
	//
	int i=0,n=0,l=1,jijiapanduan=1;
	if(Zzj==1||Xzj==1) 
	{
		while(jijiapanduan==1) 
		{
			cout<<"请选择作战机甲"<<endl;
			cout<<"输入 1 选择X原型机"<<endl;
			cout<<"输入 2 选择Z原型机"<<endl;
			cin>>n;
			if(n==1&&Xzj==1) 
			{
				Xzj=2;
				cout<<"你已选择X原型机"<<endl;
				shengmingf=shengming;
				shengming+=500;
				shanghai+=200;
				jijiapanduan++; 
				Sleep(750);
			} 
			else if(n==2&&Zzj==1) 
			{
				Zzj=2;
				cout<<"你已选择Z原型机"<<endl;
				shengmingf=shengming;
				shengming+=300;
				shanghai+=500;
				jijiapanduan++; 
				Sleep(750);
			} 
			else 
			{
				cout<<"请选择有效机甲"<<endl;
			}
		}
	}
	while(l) 
	{
		system("cls");
		cout<<"-------------------------------------------------------------------------------\n" ;
		if(baoci>10||jingyan/100>7) 
		{
			cout<<"*小怪已增强*"<<endl;
		}
		if(baoci>20 ||jingyan/100>10) 
		{                 
			cout<<"*大怪已增强*"<<endl;
		}
		cout<<"输入 1 打小怪(1~5级)"<<endl;
		cout<<"输入 2 打大怪(5~10级)"<<endl;
		cout<<"输入 3 打BOOS(15级)"<<endl;
		cout<<"输入 4 探宝"<<endl;
		cout<<"*冒险打怪不能逃跑*"<<endl;
		cout<<"输入 0 返回小镇"<<endl;
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
					cout<<"等级过低,还差"<<300-jingyan<<endl;
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
					cout<<"等级过低,还差"<<3000-jingyan<<endl;
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
				cout<<"不要乱输入"<<endl;
				Sleep(750);
				cout<<"-------------------------------------------------------------------------------\n" ;
		}

	}


}
void zhuangtai() 
{
	system("cls");
	cout<<"你的生命为:"<<shengming<<endl;
	cout<<"你的金币为:"<<"$"<<jinbi<<endl;
	cout<<"你的防御为:"<<fangyu<<endl;
	cout<<"你的伤害为:"<<shanghai<<endl;
	cout<<"你的经验为(100经验=1级):"<<jingyan<<endl;
	cout<<"你的等级为:"<<jingyan/100<<endl;
	cout<<"你拥有的急救包数"<<jijiubao<<endl;
	cout<<"技能MAX斩(无敌,造成2*伤害,boos*3) "<<endl;
	cout<<"分解材料:"<<fenjie<<endl;
	cout<<"铁块:"<<tiekuai<<" 晶块:"<<jingkuai<<" 元素晶块"<<yuansujingkuai<<endl;
	int f=1 ;
	cout<<"机甲仓库:"<<endl;
	if(Xzj==1) 
	{
		cout<<"X原型机"<<endl;
		f=0;
	}
	if(Zzj==1) 
	{
		cout<<"Z原型机"<<endl;
		f=0;
	}
	if(f) 
	{
		cout<<"暂无机甲"<<endl;
	}
	cout<<endl;
	cout<<"返回小镇";
	system("pause");
}
void xiaoguai() 
{
	//
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
	if(jingyan/100>14) 
	{
		cout<<"已增强(******),小心!!!!"<<endl;
		xhp+=1000;
		xsh+=400;
		xfy+=400;
	}
	if(jingyan/100>=14&&jingyan/100>7) 
	{
		cout<<"已增强(****),小心!!!!"<<endl;
		xhp+=500;
		xsh+=200;
		xfy+=100;
	}
	if(Xzj==2||Zzj==2) 
	{
		cout<<"你已得到机甲增幅!!"<<endl;
	}

	cout<<"你面对的是"<<xdj<<"级小怪,伤害"<<xsh<<"生命:"<<xhp<<"防御:"<<xfy<<",是否迎战,迎战 1,逃跑 0"<<endl;
	if(bao==1) 
	{
		cout<<"探宝情况下不能逃跑!!!!"<<endl;
	}
	cin>>r;
	if(r==1||bao==1) 
	{
		int f=0;
		while(shengming>0&&xhp>0&&l!=123&&i<=15) 
		{

			system("cls");
			cout<<"-------------------------------------------------------------------------------\n" ;
			cout<<"第"<<i<<"回合"<<endl;
			cout<<"你的生命:"<<shengming<<"伤害"<<shanghai<<"防御"<<fangyu<<endl;
			cout<<"小怪生命:"<<xhp<<"伤害"<<xsh<<"防御:"<<xfy<<endl;
			cout<<"输入1攻击(造成攻击(你的伤害-怪的防御),防御减半)"<<endl;
			cout<<"输入2防御(不造成攻击,防御*2)"<<endl;
			cout<<"输入3使用技能(无敌,造成 2*伤害,BOOS*3点伤害)"<<endl;
			cout<<"输入4逃跑(20%几率,逃跑失败也要减少血(无视防御),实在打不过撑过15回合自动结束)"<<endl;
			cout<<"输入5使用战斗急救包!!!"<<endl;
			if((shanghai-xfy)<=0) {
				cout<<"目前你对此怪造成不了伤害,请逃跑!!!!!!"<<endl;
			}
			cin>>l;
			if(lengque>0&&f==1) 
			{
				lengque--;
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
					if(huo>=1) 
					{
						xhp-=100;
					}
					i++;
					f=1;
					break;
				case 2:
					if(fangyu*2<xsh) 
					{
						shengming-=xsh-fangyu*2;
					}
					if(huo>=1) 
					{
						xhp-=100;
					}
					i++;
					f=1;
					break;
				case 3:
					if(lengque==0) 
					{
						xhp-=shanghai*2;
						lengque=5;
						i++;
						f=0;
						break;
					}
					cout<<"冷却中剩余"<<lengque<<"回合"<<endl;
					Sleep(750);
					f=0;

					break;
				case 4:
					if(bao==1) 
					{
						cout<<"探宝时不能逃跑!!!"<<endl;
						Sleep(750);
						break;
					}
					if(taopao=1) 
					{
						cout<<"逃跑成功!!!"<<endl;
						Sleep(750);
						l=123;
					}
					f=1;

					break;
				case 5:
					if(jijiubao>0) 
					{
						cout<<"使用成功!!!"<<endl;
						jijiubao--;
						if(huo>=1) 
						{
							xhp-=100;
						}
						shengming+=50;
						i++;
						Sleep(750);
					}
					f=1;

					break;
			}

		}
		if(shengming<=0) 
		{
			cout<<"你死了"<<endl;
			Sleep(1000);
			return xiaoguai();
		}

		if(xhp<=0)
		{
			cout<<"你打败了"<<xdj<<"级小怪"<<endl;
			cout<<"奖励金币"<<xjb*2<<"$"<<endl;
			jinbi+=xjb*2;
			cout<<"奖励经验"<<xdj*10<<endl;
			jingyan+=xdj*10;
			Sleep(1000);
		}

	}

	else if(r==0) 
	{
		cout<<"逃跑成功!!!"<<endl;
		Sleep(750);

	} else 
	{
		cout<<"输入有误"<<endl;
		Sleep(750);
	}

}
void daguai() 
{
	//



	if(shengming<=0) 
	{
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
	if(jingyan/100>25) 
	{
		cout<<"已增强(******),小心!!!!"<<endl;
		dhp+=1000;
		dsh+=600;
		dfy+=400;
	}
	if(jingyan/100<=25&&jingyan/100>14) 
	{
		cout<<"已增强(*),小心!!!!"<<endl;
		dhp+=600;
		dsh+=300;
		dfy+=300;
	}
	cout<<"你面对的是"<<ddj<<"级大怪,伤害"<<dsh<<"生命:"<<dhp<<"防御:"<<dfy<<"是否迎战,迎战 1,逃跑 0"<<endl;
	if(bao==1) 
	{
		cout<<"探宝情况下不能逃跑!!!!"<<endl;
	}
	cin>>r;
	int f=0;
	if(r==1||bao==1)
	{
		while(shengming>0&&dhp>0&&l!=123&&i<=20) 
		{

			system("cls");
			cout<<"-------------------------------------------------------------------------------\n" ;
			
			system("cls");
			cout<<"第"<<i<<"回合"<<endl;
			cout<<"你的生命:"<<shengming<<"伤害"<<shanghai<<"防御"<<fangyu<<endl;
			cout<<"大怪生命:"<<dhp<<"伤害"<<dsh<<"防御:"<<dfy<<endl;
			cout<<"输入1攻击(造成攻击(你的伤害-怪的伤害),防御减半)"<<endl;
			cout<<"输入2防御(不造成攻击,防御*2)"<<endl;
			cout<<"输入3使用技能(无敌,造成 2*伤害,BOOS*3)"<<endl;
			cout<<"输入4逃跑(20%几率,逃跑失败也要减少血(无视防御),实在打不过撑过20回合自动结束)"<<endl;
			cout<<"输入5使用战斗急救包!!!"<<endl;
			if((shanghai-dfy)<=0) 
			{
				cout<<"目前你对此怪造成不了伤害,请逃跑!!!!!!"<<endl;
			}
			cin>>l;

			if(lengque>0&&f==1) 
			{
				lengque--;
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
					if(huo>=1) 
					{
						
						dhp-=100;
					}
					i++;
					f=1;
					break;
				case 2:
					if(fangyu*2<dsh) 
					{
						shengming-=dsh-fangyu*2;
					}
					if(huo>=1) 
					{
						dhp-=100;
					}
					i++;
					f=1;
					break;
				case 3:
					if(lengque==0) 
					{
						dhp-=shanghai*2;
						lengque=5;
						f=0;
						i++;
						break;
					}
					cout<<"冷却中剩余"<<lengque<<"回合"<<endl;
					Sleep(750);
					f=0;
					break;
				case 4:
					if(bao==1) 
					{
						cout<<"探宝时不能逃跑!!!"<<endl;
						Sleep(750);
						break;
					}
					cout<<"逃跑成功!!!"<<endl;
					Sleep(750);
					l=123;
					f=1;
					break;
				case 5:
					f=1;
					if(jijiubao>0) 
					{
						cout<<"使用成功!!!"<<endl;
						jijiubao--;
						shengming+=50;
						if(huo>=1) 
						{
							dhp-=100;
						}
						i++;
						Sleep(750);
					}

					break;
			}

		}
		if(shengming<=0) 
		{
			cout<<"你死了"<<endl;
			Sleep(1000);
			return daguai();
		}
		if(dhp<=0) 
		{
			cout<<"你打败了"<<ddj<<"级大怪"<<endl;
			cout<<"奖励金币"<<djb*2<<"$"<<endl;
			cout<<"奖励经验"<<ddj*10<<endl;
			jinbi+=djb*2;
			jingyan+=ddj*10;
			Sleep(1000);

		}
	} 
	else 
	if(r==0) 
	{
		cout<<"逃跑成功!!!"<<endl;
		Sleep(750);
	} 
	else 
	{
		cout<<"输入有误"<<endl;
		Sleep(750);
	}


}
void BOOS() 
{
	system("cls");
	cout<<"-------------------------------------------------------------------------------\n" ;
	Sleep(750);
	if(boosHP==0) 
	{
		cout<<"你已击败BOOS"<<endl;
		xiaozhen();
	}
	int i=1,n=0,l=1;
	int lengque=0;
	int taopao;
	srand(static_cast<unsigned  int >(time(0))) ;
	int randomNumber=rand();
	boosHP=50000;
	boosSH=4000;
	boosfy=1500;

	cout<<"你面对的是"<<"BOOS,伤害"<<boosSH<<"生命:"<<boosHP<<"防御:"<<boosfy<<endl;
	system("pause");
	int f=0;
	while(shengming>0&&boosHP>0&&l!=123&&i<=100)
	 {

		system("cls");
		cout<<"第"<<i<<"回合"<<endl;
		cout<<"你的生命:"<<shengming<<"伤害"<<shanghai<<"防御"<<fangyu<<endl;
		cout<<"BOOS生命:"<<boosHP<<"伤害"<<boosSH<<"防御:"<<boosfy<<endl;
		cout<<"输入1攻击(造成攻击(你的伤害-怪的伤害),防御减半)"<<endl;
		cout<<"输入2防御(不造成攻击,防御*2)"<<endl;
		cout<<"输入3使用技能(无敌,造成 伤害*3)"<<endl;
		cout<<"输入4逃跑"<<endl;
		cout<<"输入5使用战斗急救包!!!"<<endl;
		if((shanghai-boosfy)<=0) 
		{
			cout<<"目前你对BOOS造成不了伤害,请逃跑!!!!!!"<<endl;
		}
		cin>>l;
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
				if(huo>=1) 
				{
					boosHP-=100;
				}
				i++;
				break;
			case 2:
				f=1;
				if(fangyu*2<boosSH) 
				{
					shengming-=boosSH-fangyu*2;
				}
				if(huo>=1) 
				{
					boosHP-=100;
				}
				i++;
				break;
			case 3:
				f=1;
				if(lengque==0) 
				{
					boosHP-=shanghai*3;
					lengque=5;
					i++;
					break;
				}
				cout<<"冷却中剩余"<<lengque<<"回合"<<endl;
				Sleep(500);
				f=0;
				break;
			case 4:
				f=1;
				if(taopao=1) 
				{
					cout<<"逃跑成功!!!"<<endl;
					Sleep(500);
					l=123;
				}

				break;
			case 5:
				f=1;
				if(jijiubao>0) 
				{
					cout<<"使用成功!!!"<<endl;
					Sleep(500);
					if(huo>=1) 
					{
						boosHP-=100;
					}
					jijiubao--;
					shengming+=50;
					i++;
				}

				break;
		}

	}
	if(shengming<=0) 
	{
		cout<<"你死了"<<endl;
		Sleep(1000);
		return BOOS();

	}
	
	if(boosHP<=0) 
	{
		cout<<"你打败了BOOS"<<endl;
		boosHP=0;
		jinbi+=5000;
		Sleep(750);
	}


}
void wuqidian() 
{
	//更新
	int i=1,n=0,l=1;
	char w,r;
	while(l) 
	{

		system("cls");
		cout<<"武器店规则:伤害不能叠加!!!\n例如:假如你目前伤害50 ,购买匕首后,伤害不会+20,而是替换成20"<<endl;
		cout<<"你目前伤害:"<<shanghai<<"目前防御:"<<fangyu<<"你的金币为:"<<"$"<<jinbi<<endl;
		cout<<"欢迎来到 武器店！"<<endl;
		cout<<"1.铁块(材料)   ($20*1)"<<endl;
		cout<<"2.金剑    ($100加150攻击力)"<<endl;
		cout<<"3.光刃    ($120加180攻击力)"<<endl;
		cout<<"4.X光刃   ($150加200攻击力)"<<endl;
		cout<<"5.木质铠甲($300加100防御力)"<<endl;
		cout<<"6.青铜铠甲($400加200防御力)"<<endl;
		cout<<"7.白银铠甲($500加300防御力)"<<endl;
		cout<<"8.光刃    ($500加300攻击力)"<<endl;
		cout<<"9.战斗头盔($500加50防御,必须有白银铠甲+50)"<<endl;
		cout<<"0、离开武器店"<<endl;
		cin>>l;
		switch(l) 
		{
			case 1 :
				if(jinbi<20) 
				{
					cout<<"你的钱不够"<<endl;
					break;
				} 
				else 
				{
					cout<<"购买成功！"<<endl;//钱足够时返回True
					tiekuai+=1;
					jinbi-=20;
					cout<<"你现在有铁块:"<<tiekuai<<"块"<<endl;
					Sleep(1000);
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 2 :
				if(jinbi<100) 
				{
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase
					break;
				} else {
					shanghai=150;
					jinbi-=100;
					cout<<"你的攻击现在为"<<shanghai<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 3 :
				if(jinbi<120) {
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase
					break;
				} else

				{
					cout<<"购买成功！"<<endl;
					shanghai=180;
					jinbi-=120;
					cout<<"你的伤害现在为"<<shanghai<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 4 :
				if(jinbi<150) {
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase
					break;
				} else {
					cout<<"购买成功！"<<endl;
					shanghai=200;
					jinbi-=150;
					cout<<"你的伤害现在为"<<shanghai<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 5 :

				if(jinbi<300) {
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase
					break;
				} else {
					cout<<"购买成功！"<<endl;
					fangyu=100;
					jinbi-=300;
					cout<<"你的防御现在为"<<fangyu<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 6:
				if(jinbi<400) {
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase
					break;
				} else {
					fangyu=200;
					jinbi-=400;
					cout<<"你的防御现在为"<<fangyu<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 7:
				if(jinbi<500) {
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase
					break;
				} else {
					fangyu=300;
					jinbi-=500;
					bykj=1;
					cout<<"你的防御现在为"<<fangyu<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 8:
				if(jinbi<500) {
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase
					break;
				} else {
					shanghai=300;
					jinbi-=500;
					cout<<"你的攻击现在为"<<shanghai<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 9:
				if(jinbi<500) {
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase
					break;
				} else {
					if(bykj==0) {
						cout<<"没有购买白银铠甲不能购买此装备!!!"<<endl;
						break;
					} else {
						fangyu+=50;
						jinbi-=500;
						cout<<"你的防御现在为"<<fangyu<<endl;
						cout<<"-------------------------------------------------------------------------------\n" ;
						break;
					}

				}
			case 0:
				system("cls");
				xiaozhen();
			default:
				cout<<"看清楚."<<endl;
				break;
		}
		Sleep(750);
	}

}
void yaopindian() {

	int i=1,n=0,l=0;
	char w,r;

	do {
		system("cls");
		cout<<"-------------------------------------------------------------------------------\n" ;
		cout<<"欢迎来到 药品店！"<<endl;
		cout<<"你的金币为:"<<"$"<<jinbi<<endl;
		cout<<"1.坏药水(小) ($50加50血)"<<endl;
		cout<<"2.一般的药水 ($100加100血)"<<endl;
		cout<<"3.正常的药水 ($150加200血)"<<endl;
		cout<<"4.好药水     ($200加300血)"<<endl;
		cout<<"5.优质药水   ($500加500血,50点防御)"<<endl;
		cout<<"6.神圣药水   ($700加300血,50点防御,100点攻击(+100))"<<endl;
		cout<<"7.急救包     ($50加50血 战斗时使用)"<<endl;
		cout<<"8.*火之水*   ($700,敌方每回合减少100血)"<<endl;
		cout<<"0.离开药品店"<<endl;
		cin>>l;
		switch(l) {
			case 1 :
				if(jinbi<50) {
					cout<<"你的钱不够"<<endl;
					Sleep(1000);
					break;
				} else {
					cout<<"购买成功！"<<endl;
					Sleep(1000);
					shengming+=50;
					jinbi-=50;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 2 :
				if(jinbi<100) {
					cout<<"你的钱不够"<<endl;
					Sleep(1000); //钱不够时返回Flase
					break;
				} else {
					cout<<"购买成功！"<<endl;
					Sleep(1000);
					shengming+=100;
					jinbi-=100;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 3 :
				if(jinbi<150) {
					cout<<"你的钱不够"<<endl;
					Sleep(1000); //钱不够时返回Flase
					break;
				} else

				{
					cout<<"购买成功！"<<endl;
					Sleep(1000);
					shengming+=200;
					jinbi-=150;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 4 :
				if(jinbi<200) {
					cout<<"你的钱不够"<<endl;
					Sleep(1000); //钱不够时返回Flase
					break;
				} else {
					cout<<"购买成功！"<<endl;
					Sleep(1000);
					shengming+=300;
					jinbi-=200;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 5 :
				if(jinbi<500) {
					cout<<"你的钱不够"<<endl;
					Sleep(1000); //钱不够时返回Flase
					break;
				} else {
					cout<<"购买成功！"<<endl;
					Sleep(1000);
					shengming+=500;
					fangyu+=50;
					jinbi-=500;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 6:
				if(jinbi<700) {
					cout<<"你的钱不够"<<endl;
					Sleep(1000); //钱不够时返回Flase
					break;
				} else {
					cout<<"购买成功！"<<endl;
					shengming+=300;
					fangyu+=50;
					shanghai+=100;
					jinbi-=700;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 7:
				if(jinbi<50) {
					cout<<"你的钱不够"<<endl;
					Sleep(1000); //钱不够时返回Flase
					break;
				}
				jinbi-=50;
				jijiubao++;
				cout<<"购买成功！"<<endl;
				Sleep(1000);
				cout<<"-------------------------------------------------------------------------------\n" ;

				break;
			case 8:
				if(jinbi<700) {
					cout<<"你的钱不够"<<endl;
					Sleep(1000);
					break;
				}
				jinbi-=700;
				huo=1;
				cout<<"购买成功！"<<endl;
				Sleep(1000);
				cout<<"-------------------------------------------------------------------------------\n" ;

				break;
			case 0:
				system("cls");
				xiaozhen();
				break;

			default:
				cout<<"看清楚"<<endl;
				Sleep(1000);
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;
		}

	} while(l);






}
void ziliao() {
	cout<<"小镇4.0欢迎你!!!"<<endl;
	Sleep(1000);
}




void tanbao() 
{
	//更新
	system("cls");
	baoci++;
	bao=1;
	a[6][4]=='O';

	int i=0;
	for(i=0; i<=12; i++)
		cout<<a[i]<<endl;
	char ch;
	while(1) 
	{
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

			if(a[x][y+1]=='-'||a[x][y+1]=='|'||a[x][y+1]=='R'||a[x][y+1]=='F'||a[x][y+1]=='X'||a[x][y+1]=='o'||a[x][y+1]=='H') {
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
				if(a[x+1][y]!=' '||a[x-1][y]!=' ') {
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

	cout<<"奖励 $200";
	jinbi+=200;
	Sleep(750);
}


void ronglu() { //熔炉
	int l=1,h;
	while(l) {

		system("cls");
		cout<<"-------------------------------------------------------------------------------\n" ;

		cout<<"输入 1 分解成普通铁块"<<endl;
		cout<<"输入 2 分解成普通晶块"<<endl;
		cout<<"输入 3 分解成元素晶块"<<endl;
		cout<<"输入 0 返回小镇"<<endl;
		cin>>l;
		switch(l) {
			case 1:
				cout<<"输入你分解的分解材料数(分解材料1个=2块铁块)"<<endl;
				cout<<"目前拥有"<<fenjie<<"个分解材料"<<endl;
				cout<<"输入 0 离开"<<endl;
				cin>>l;
				if(l>fenjie) {
					cout<<"分解材料不足!!!!"<<endl;
					break;
				} else if(l==0) {
					xiaozhen();

				} else {
					fenjie-=l;
					tiekuai+=l*2;
					cout<<"分解成功,"<<"目前剩余普通铁块"<<tiekuai<<endl;
				}


				break;
			case 2:
				cout<<"输入你分解的分解材料数(分解材料1个=2块晶块)"<<endl;
				cout<<"目前拥有"<<fenjie<<"个分解材料"<<endl;
				cout<<"输入 0 离开"<<endl;
				cin>>l;
				if(l>fenjie) {
					cout<<"分解材料不足!!!!"<<endl;
					break;
				} else if(l==0) {
					xiaozhen();

				} else {
					fenjie-=l;
					jingkuai+=l*2;
					cout<<"分解成功,"<<"目前剩余普通晶块"<<jingkuai<<endl;
				}

				break;
			case 3:
				cout<<"输入你分解的分解材料数(分解材料2个=1块元素晶块)"<<endl;
				cout<<"目前拥有"<<fenjie<<"个分解材料"<<endl;
				cout<<"输入 0 离开"<<endl;
				cin>>l;
				if(l>fenjie) {
					cout<<"分解材料不足!!!!"<<endl;
					break;
				} else if(l==0) {
					xiaozhen();
				} else {
					fenjie-=l;
					yuansujingkuai+=(l/2);
					cout<<"分解成功,"<<"目前剩余元素晶块"<<yuansujingkuai<<endl;
				}

				break;
			case 0:
				xiaozhen();
				Sleep(740);
				system("cls");
				cout<<"-------------------------------------------------------------------------------\n" ;

			default:
				cout<<"输入有误"<<endl;

		}
		Sleep(740);
		system("cls");
		cout<<"-------------------------------------------------------------------------------\n" ;

	}

}

void gongjiangtai() {
	//工匠台
	int l=1,h,r;

	while(l) {

		system("cls");
		cout<<"-------------------------------------------------------------------------------\n" ;

		cout<<"输入 1 制作机甲"<<endl;
		cout<<"输入 2 制作武器"<<endl;
		cout<<"输入 0 返回小镇"<<endl;
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
				cout<<"输入有误"<<endl;

		}

		Sleep(750);
	}
}

void fenjiecailiao() {
	int cl;
	srand(static_cast<unsigned  int >(time(0))) ;
	int randomNumber=rand();
	cl=(randomNumber% 5)+5;
	cout<<"分解材料*"<<cl<<endl;
	Sleep(750);
	fenjie+=cl;
}
void jijia() {
	//制作机甲
	int l=1,h=1,k=0;
	while(l) {

		system("cls");
		cout<<"-------------------------------------------------------------------------------\n" ;

		cout<<"输入 1 制作 X原型机(生命+500,攻击+200)\n"<<endl;
		cout<<"输入 2 制作 Z原型机(生命+300,攻击+500)"<<endl;
		cout<<"此机甲只有一种制作方式\n铁块*100  晶块*30  元素晶块*20\n\n";
		cout<<"输入 3 制作 X射线机甲"<<endl;

		cout<<"输入 0 返回小镇"<<endl;
		cin>>l;
		switch(l) {
			case 1://X
				if(Xzj==0) {
					cout<<"方案一:铁块100个 元素晶块 10个(输入 1)\n";
					cout<<"方案二:铁块150个 晶块30个(输入 2)\n";

					cout<<"输入 0 返回\n";
					cin>> h;
					switch(h) {
						case 1:
							if(tiekuai>=100&&yuansujingkuai>=10) {
								tiekuai-=100;
								yuansujingkuai-=10;
								Xzj=1;
								cout<<"你已成功制作 X原型机"<<endl;
								Sleep(1000);
								cout<<"-------------------------------------------------------------------------------\n" ;
							} else {
								cout<<"材料不足!!!!"<<endl;
								Sleep(1000);
								cout<<"-------------------------------------------------------------------------------\n" ;
							}
							break;
						case 2:
							if ( tiekuai>=150&&jingkuai>=5  ) {
								tiekuai-=150;
								jingkuai-=30;
								Xzj=1;
								cout<<"你已成功制作 X原型机"<<endl;
								Sleep(1000);
								cout<<"-------------------------------------------------------------------------------\n" ;
							} else {
								cout<<"材料不足!!!!"<<endl;
								Sleep(1000);
								cout<<"-------------------------------------------------------------------------------\n" ;
							}
							break;

						case 0:
							cout<<"-------------------------------------------------------------------------------\n" ;
							break;
						default:
							cout<<"没有找到你输入的方案编号"<<endl;
							break;
					}

				} else {
					cout<<"你已经制作过此机甲"<<endl;
				}

				break;


			case 2://	z
				if(Zzj==0) 
				{
					cout<<"此机甲只有一种制作方式\n铁块*100  晶块*30  元素晶块*20\n";
					if(tiekuai>=100&&jingkuai>=30&&yuansujingkuai>=20 ) 
					{
						Zzj=1;
						tiekuai-=100;
						jingkuai-=30;
						yuansujingkuai-=20;
						cout<<"你已成功制作 Z原型机"<<endl;
						Sleep(1000);
					} 
					else 
					{
						cout<<"材料不足!!!!"<<endl;
						Sleep(1000);
					}
				} else {
					cout<<"你已制作此机甲"<<endl;
					Sleep(1000);

				}

				break;

			case 3:
				cout<<"小镇5.0见"<<endl;
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;
			case 0:
				xiaozhen();
			default://xz
				cout<<"没有找到你输入的机甲编号"<<endl;
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
		cout<<"这里只卖分解材料和元素晶块!!!!!"<<endl;
		cout<<"输入 1 购买分解材料*9 ($299)"<<endl;
		cout<<"输入 2 购买元素晶块*5  ($99)"<<endl;
		cout<<"输入 0 返回小镇"<<endl;
		cin>>l;
		switch(l) {
			case 1:
				if(jinbi<299) 
				{
					cout<<"金币不够"<<endl;
				} 
				else 
				{
					cout<<"购买成功"<<endl;
					jinbi-=299;
					fenjie+=9;
				}
				break;

			case 2:
				if(jinbi<99) 
				{
					cout<<"金币不够"<<endl;
				} 
				else 
				{
					cout<<"购买成功"<<endl;
					jinbi-=99;
					yuansujingkuai+=5;
				}
				break;
			case 0:
				system("cls");
				xiaozhen();
				break;
			default:
				cout<<"没有找到你购买的物品编号"<<endl;
		}
		Sleep(750);
		cout<<"-------------------------------------------------------------------------------\n" ;

	}
}
void wuqizhizuo() 
{
	int l=1,h,n;
	int tj=0,dj=0;
	int xtf=0,xxf=0;
	int xxgj=0;
	while(l) 
	{
		system("cls");
		cout<<"制作 苍穹剑(伤害600) 输入 1 "<<endl;
		cout<<"铁块*200,晶块*10"<<endl<<endl;
		cout<<"制作 大地剑(伤害800) 输入 2 "<<endl;
		cout<<"铁块*350"<<endl<<endl;
		cout<<"制作 X头盔(防御300)  输入 3 "<<endl;
		cout<<"铁块*300,元素晶块*10"<<endl<<endl;
		cout<<"制作 X胸甲(防御400)  输入 4 "<<endl;
		cout<<"铁块*350,元素晶块*20"<<endl<<endl;
		cout<<"制作 XX光剑(伤害400) 输入 5 "<<endl;
		cout<<"铁块*150,元素晶块*20"<<endl<<endl;
		cout<<"返回小镇    输入 0 "<<endl;
		cin>>l;
		switch(l) 
		{
			case 1:
				if(tiekuai>=200&&jingkuai>=10) 
				{
					tj=1;
					cout<<"制作成功"<<endl;
					tiekuai-=200;
					jingkuai-=10;
					shanghai=600;
					cout<<"铁块剩余:"<<tiekuai<<"晶块剩余:"<<jingkuai<<endl;
					cout<<"伤害:"<<shanghai<<endl;
					Sleep(500);
				} 
				else 
				{
					cout<<"材料不足!!!\n";
				}
				break;
			case 2:
				if(tiekuai>=350) 
				{
					dj=1;
					cout<<"制作成功"<<endl;
					tiekuai-=350;
					shanghai=800;
					cout<<"铁块剩余:"<<tiekuai<<endl;
					cout<<"伤害:"<<shanghai<<endl;
					Sleep(500);
				} 
				else 
				{
					cout<<"材料不足!!!\n";
				}
				break;
			case 3:
				if(tiekuai>=300&&yuansujingkuai>=10) 
				{
					xtf=1;
					cout<<"制作成功"<<endl;
					tiekuai-=300;
					yuansujingkuai-=10;
					fangyu=300;
					cout<<"铁块剩余:"<<tiekuai<<"元素晶块剩余:"<<yuansujingkuai<<endl;
					cout<<"防御:"<<fangyu<<endl;
					Sleep(500);
				} 
				else 
				{
					cout<<"材料不足!!!\n";
				}
				break;
			case 4:
				if(tiekuai>=350&&yuansujingkuai>=20) 
				{
					xxf=1;
					cout<<"制作成功"<<endl;
					tiekuai-=350;
					yuansujingkuai-=20;
					fangyu=400;
					cout<<"铁块剩余:"<<tiekuai<<"元素晶块剩余:"<<yuansujingkuai<<endl;
					cout<<"防御:"<<fangyu<<endl;
					Sleep(500);
				} 
				else 
				{
					cout<<"材料不足!!!\n";
				}
				break;
			case 5:
				if(tiekuai>=150&&yuansujingkuai>=20) 
				{
					xxgj=1;
					cout<<"制作成功"<<endl;
					tiekuai-=150;
					yuansujingkuai-=20;
					shanghai=400;
					cout<<"铁块剩余:"<<tiekuai<<"元素晶块剩余:"<<yuansujingkuai<<endl;
					cout<<"伤害:"<<shanghai<<endl;
					Sleep(500);
				} 
				else 
				{
					cout<<"材料不足!!!\n";
				}
				break;
			case 0:
				xiaozhen();
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;

			default:
				cout<<"没有找到你制作的武器编号"<<endl;
		}
		Sleep(750);
	}
}
