#include<bits/stdc++.h>//头文件
#include<windows.h>//头文件
#include <conio.h>

void xiaozhen();
void  wuqidian();//武器店
void  yaopindian();//药品店
// {
void maoxian();//冒险
void daguai();//大怪
void xiaoguai();//小怪
void shixuepangzi();//嗜血胖子 
void BOOS(); //boos
// }
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
void juntuanzhaomu();
void start();//开始界面
void shangdian();//商店 
void gongzuoshi();// 
void chenjiu();
//}
char  a[14][100]= {"| R资源 X大怪 F小大怪 O入口 0你的位置  H分解材料 @传送门 |",
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
                      
char  b[14][100]= {"|R资源 X大怪 F小大怪 Q嗜血胖子 H分解材料 B boos 0你的位置|",
                   "|                                                        |",
                   "|      B--H------W|--|----------------------------  R|   |",
                   "|      |          |--|----------------------------  R|   |",
                   "|      Q-B-R      |施|----------------------------  R|   |",
                   "|      |   |      |--|---------------------------WQ R|   |",
                   "|   O0-R-Q-B--BHBW|工|-B----B-------B-------B     QBR|   |",
                   "|      |   |      |--|---------------------------WQ R|   |",
                   "|      Q-B-R      |线|-----------------------       R|   |",
                   "|      |          |--|----------------------------  R|   |",
                   "|      B  |-Q-|   |--|----------------------------  R|   |",
                   "|      |--H   |B-W|--|----------------------------  R|   |",
                   "|                                                        |"};
int x=6,y=5,z=6,l=4;
int baoci=0;
int bao=0;

int tj=0,dj=0;
int xtk=0,xxj=0;
bool xxgj=0,xgj=0,xtz=0,xhs=0;//int 

int shengming=4000,shanghai=1234124312,fangyu=11111,jinbi=999900,jingyan=100,shengmingf=999999999;//主角资料

int xhp,xsh,xjb,xdj,xfy;//小怪

int dhp,dsh,djb,ddj,dfy;//大怪

int boosHP=30000,boosSH,boosfy;//BOOS

int huo=0,jijiubao=5;//药品

int tiekuai=30;//材料
int fenjie=5;//材料
int jingkuai=20;//材料
int yuansujingkuai=20;//材料
int tdjh=0;//天地精华 
int spzx=0;//审判之心 

int Xzj=0;//机甲
int Zzj=0;
int Xsj=0;

int bykj=0;
int sy=0,yy=0;
int zhiye=0;
int boosdj=1;

using namespace std;
int main()
{
    start();
    system("cls");
    cout<<"千万不能输入字母或特殊符号,探宝WASD移动"<<endl;
    Sleep(1000);
    system("cls");
    system("pause");
    cout<<"                           [小镇5.1.1<怪物狂欢季>]"<<endl;
    Sleep(1000);
    system("cls");
	xiaozhen();
}
void start()
{
    cout<<"                           [小镇5.1.1<怪物狂欢季>]\n";
    cout<<"-------------------------------------------------------------------------------\n" ;
    cout<<"                               请选择职业"<<endl;
    cout<<"                                 1.战士"<<endl
		<<"                        生命:5000  伤害:50  防御:20  "<<endl
		<<"                    技能:MAX斩,对怪造成 伤害*2的 伤害无视防御"<<endl 
		<<"                    注:对BOOS防御有效  但造成 伤害*3 的伤害"<<endl<<endl;
    cout<<"                              2.狂热的血战士"<<endl
		<<"                        生命:4000 伤害:100 防御:10 "<<endl
		<<"                            技能:血神盾,无敌三回合 "<<endl<<endl;
	cout<<"                                  3.天使"<<endl
		<<"                         生命:6000 伤害:60 防御:50"<<endl
		<<"      技能:天使救赎与惩戒,恢复500血,并造成 100*怪物等级 伤害,冷却10回合"<<endl;
    int l;
    cin>>l;
    if(l==1)
    {
        shengming=5000,shanghai=50,fangyu=20,jinbi=150,jingyan=100,shengmingf=999999999;//主角资料
        zhiye=1;
    }
    else if(l==99)
    {
        shengming=900000000,shanghai=2000,fangyu=2000,jinbi=999900,jingyan=99999,shengmingf=999999999;//主角资料
        zhiye=1;
        jijiubao=100;
        Xsj=1;
        tiekuai=99999;//材料
        fenjie=5;//材料
        jingkuai=99999;//材料
        yuansujingkuai=99999;//材料
        tdjh=1;
        spzx=1;
        tj=1;
        dj=1;
    }
    else if(l==2) 
    {
        shengming=4000,shanghai=100,fangyu=10,jinbi=150,jingyan=0,shengmingf=999999999;//主角资料
        zhiye=2;
    }
    else if(l==3)
    {
    	shengming=6000,shanghai=60,fangyu=50,jinbi=100,jingyan=0,shengmingf=999999999;//主角资料
        zhiye=3;
    	
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
			cout<<"机甲增幅已解除"<<endl;
			Sleep(750);
		}
		if(shengming<=0)
		{
			cout<<"你死了"<<endl;
			return xiaozhen();
		}
		system("cls");
		cout<<"                           [小镇5.1.1<怪物狂欢季>]\n";
		cout<<"-------------------------------------------------------------------------------\n" ;
		cout<<"输入 1 冒险"<<endl;
		cout<<"输入 2 探宝"<<endl;
		cout<<"输入 3 商店"<<endl;
		cout<<"输入 4 工作室"<<endl;
		cout<<"输入 5 查看自己状态"<<endl;
		cout<<"输入 6 查看游戏资料"<<endl;
		cout<<"输入 7 查看成就"<<endl;
		cout<<"输入 8 军团招募(6.0开放)"<<endl;
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
					cout<<"机甲增幅已解除"<<endl;
					Sleep(750);
				}
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;
			case 2:
				cout<<"-------------------------------------------------------------------------------\n" ;
				tanbao();
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;
			case 3:
				cout<<"-------------------------------------------------------------------------------\n" ;
				shangdian(); 
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;
			case 4:
				cout<<"-------------------------------------------------------------------------------\n" ;
				gongzuoshi();
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;
			case 5:
				cout<<"-------------------------------------------------------------------------------\n" ;
				zhuangtai();
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;
			case 6:
				cout<<"-------------------------------------------------------------------------------\n" ;
				ziliao();
				cout<<"-------------------------------------------------------------------------------\n" ;
				break; 
			case 7:
				cout<<"-------------------------------------------------------------------------------\n" ;
				chenjiu();
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
	int i=0,n=0,l=1;
	if(Zzj==1||Xzj==1||Xsj==1)
	{
		while(n!=1&&n!=2&&n!=3)
		{
			cout<<"请选择作战机甲"<<endl;
			cout<<"输入 1 选择X原型机"<<endl;
			cout<<"输入 2 选择Z原型机"<<endl;
			cout<<"输入 3 选择X射线机"<<endl;
			cin>>n;
			if(n==1&&Xzj==1)
			{
				Xzj=2;
				cout<<"你已选择X原型机"<<endl;
				shengmingf=shengming;
				shengming+=500;
				shanghai+=200;
				Sleep(750);
			}
			else if(n==2&&Zzj==1)
			{
				Zzj=2;
				cout<<"你已选择Z原型机"<<endl;
				shengmingf=shengming;
				shengming+=300;
				shanghai+=500;
				Sleep(750);
			}
			else if(n==3&&Xsj==1)
			{
				Xsj=2;
				cout<<"你已选择X射线机"<<endl;
				shengmingf=shengming;
				shengming+=500;
				shanghai+=700;
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
		if(baoci>20||jingyan/100>10)
		{
			cout<<"*大怪已增强*"<<endl;
		}
		cout<<"输入 1 打小怪"<<endl;
		cout<<"输入 2 打大怪"<<endl;
		cout<<"输入 3 打嗜血胖子"<<endl; 
		cout<<"输入 4 打BOOS"<<endl;
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

				if(jingyan/100<5)
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
				shixuepangzi();
				cout<<"-------------------------------------------------------------------------------\n" ;
				break; 
			case 4:
				if(jingyan/100<30)
				{
					cout<<"等级过低,还差"<<3000-jingyan<<endl;
					Sleep(750);
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
				cout<<"-------------------------------------------------------------------------------\n" ;
				BOOS();
				cout<<"-------------------------------------------------------------------------------\n" ;
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
	cout<<"天地精华:"<<tdjh<<"   审判之心:"<<spzx<<endl;
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
	if(Xsj==1)
	{
		cout<<"x射线机"<<endl;
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
	int wudi=0;
	if(shengming<=0)
	{
		return xiaoguai();
	}
	int i=1,n=0,l=1,lengque=0,xsp=0,xbj=0;
	int flag=9999;
	int r,w;
	int bj=2;
	srand(static_cast<unsigned  int >(time(0))) ;
	int randomNumber=rand();
	xdj=(randomNumber% 5)+1;
	
	xhp=xdj*100+200;
	xsh=xdj*100;
	xfy=xdj*40;
	xsp=xdj*5;
	xbj=10;
	if(jingyan/100>=20)
	{
		cout<<"<超级>小怪,小心!!!!"<<endl;
		xhp+=700;
		xsh+=400;
		xfy+=200;
		xhp+=400;
		xsh+=200;
		xfy+=100;
		xsp+=10;
		bj=3;
		flag=(randomNumber% 100)+1;
		if(flag<=20&&xdj==5)
		{
			cout<<"此怪为BUG小怪!!!!已超进化"<<endl;
			xhp+=1000;
			xsh+=500;
			xfy+=400;
			xbj=20; 
		}
	}
	else if(jingyan/100<20&&jingyan/100>=10)
	{
		cout<<"<精英>小怪,小心!!!!"<<endl;
		xhp+=400;
		xsh+=200;
		xfy+=100;
		xsp+=5;
		bj=2;
	}
	if(Xzj==2||Zzj==2||Xsj==2)
	{
		cout<<"你已得到机甲增幅!!"<<endl;
	}
	cout<<"你面对的是"<<xdj<<"级小怪,伤害"<<xsh<<"生命:"<<xhp<<"防御:"<<xfy<<endl
		<<"闪避几率:"<<xsp<<endl// 
		<<"暴击几率:"<<xbj<<endl 
		<<"是否迎战,迎战 1,逃跑 0"<<endl;
	if(bao==1)
	{
		cout<<"探宝情况下不能逃跑!!!!"<<endl;
	}
	cin>>r;
	if(r==1||bao==1)
	{
		int f=0;
		while(shengming>0&&xhp>0&&l!=123&&(bao==1||i>0))
		{
			system("cls");
			cout<<"-------------------------------------------------------------------------------\n" ;
			cout<<"第"<<i<<"回合"<<endl;
			if(flag<=20&&xdj==5)
				cout<<"BUG小怪100%会掉落审判之心"<<endl;
			cout<<"你的生命:"<<shengming<<"伤害"<<shanghai<<"防御"<<fangyu<<endl;
			cout<<"小怪生命:"<<xhp<<"伤害"<<xsh<<"防御:"<<xfy<<endl;
			cout<<"输入1攻击(造成攻击(你的伤害-怪的防御),防御减半)"<<endl;
			cout<<"输入2防御(不造成攻击,防御*2)"<<endl;
			if(zhiye==1)
                cout<<"输入3使用技能(无敌并造成 2*伤害,BOOS*3点伤害)"<<endl;
            if(zhiye==2)
                cout<<"输入3使用技能(无敌三回合,可进行攻击)"<<endl;
            if(zhiye==3)
                cout<<"输入3使用技能(恢复500血,并造成 100*怪物等级 伤害,冷却10回合)"<<endl;
			cout<<"输入4使用战斗急救包!!!"<<endl;
			cin>>l;
			if(huo>=1)
			{
				xhp-=100;
			}
			if(lengque>0&&f==1)
			{
				lengque--;
			}
			int a; 
			int b;
			switch(l)
			{
				case 1:
					srand(static_cast<unsigned  int >(time(0))) ;
					randomNumber=rand();
					a=(randomNumber% 100)+1;
					srand(static_cast<unsigned  int >(time(0))) ;
					randomNumber=rand();
					b=(randomNumber% 100)+1;
				    if(wudi>0)
                    {
                        wudi--;
                        i++;
                        f=1;
						if(a<=xsp)
						{
							cout<<"怪成功闪避"<<endl;
							Sleep(1000);
						}
						else 
                        	xhp-=shanghai-xfy;
                        break;
                    }
					if((fangyu/2)<xsh)
					{
						if(b>xbj)
							shengming-=xsh-fangyu/2;
						else
						{
							cout<<"怪成功暴击"<<xsh*bj-fangyu/2<<"伤害"<<endl; 
							shengming-=xsh*bj-fangyu/2;
							Sleep(500);
						}	
					}
					if(shanghai>xfy )
					{
						if(a<=xsp)
						{
							cout<<"怪成功闪避"<<endl;
							Sleep(1000);
						}
						else 
							xhp-=shanghai-xfy;
					}
					i++;
					f=1;
					break;
				case 2:
					srand(static_cast<unsigned  int >(time(0))) ;
					randomNumber=rand();
					b=(randomNumber% 100)+1;
					if(fangyu*2<xsh||(b<xbj&&xsh*bj>fangyu*2))
					{
						if(b>xbj)
							shengming-=xsh-fangyu*2;
						else
						{
							cout<<"怪成功暴击"<<xsh*bj-fangyu*2<<"伤害"<<endl; 
							shengming-=xsh*bj-fangyu/2;
							Sleep(500);
						}
					}
					i++;
					f=1;
					break;
				case 3:
					srand(static_cast<unsigned  int >(time(0))) ;
					randomNumber=rand();
					a=(randomNumber% 100)+1;
					if(lengque==0)
                    {
                        if(zhiye==1)
                        {
                        	if(a<=xsp)
							{
								cout<<"怪成功闪避"<<endl;
								Sleep(1000);
							}
							else 
                            	xhp-=shanghai*2;
                            lengque=5;
                        }
                        if(zhiye==2)
                        {
                            wudi=3;
                            lengque=8;
                        }
                        if(zhiye==3)
                        {
                        	if(a<=xsp)
							{
								cout<<"怪成功闪避"<<endl;
								Sleep(1000);
							}
							else 
                            	xhp-=xdj*100;
                        	shengming+=500;
                        	lengque=10;
						}
						i++;
						f=0;
						break;
					}
					cout<<"冷却中剩余"<<lengque<<"回合"<<endl;
					Sleep(750);
					f=0;
					break;
				case 4:
					if(jijiubao>0) 
					{
						cout<<"使用成功!!!"<<endl;
						jijiubao--;
						shengming+=50;
						Sleep(750);
					} 
					break;

			default:
				cout<<"不要乱输入"<<endl;
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
			cout<<"你打败了"<<xdj<<"级";
			if(jingyan/100>=20)
			{
				cout<<"<超级>小怪"<<endl;
				cout<<"奖励金币"<<xdj*15<<"$"<<endl;
				cout<<"奖励经验"<<xdj*10<<endl;
				jinbi+=xdj*15;
				jingyan+=xdj*10;
			}
			else if(jingyan/100<20&&jingyan/100>=10)
			{
				cout<<"<精英>小怪"<<endl;
				cout<<"奖励金币"<<xdj*12<<"$"<<endl;
				cout<<"奖励经验"<<xdj*10<<endl;
				jinbi+=xdj*12;
				jingyan+=xdj*10;
			}
			else
			{
				cout<<"小怪"<<endl;
				cout<<"奖励金币"<<xdj*10<<"$"<<endl;
				cout<<"奖励经验"<<xdj*10<<endl;
				jinbi+=xdj*10;
				jingyan+=xdj*10;
			}
			if(xdj==5&&flag<=20)
			{
				cout<<"恭喜获得>>审判之心*1<<"<<endl;
				spzx++;
			}
			Sleep(1000);
		}
	}
}
void daguai()
{
    int wudi=0;
	if(shengming<=0)
	{
		return;
	}
	int i=1,n=0,l=1,flag=0,dsp=0,dbj=0,bj;
	int lengque=0;
	int r,w;
	srand(static_cast<unsigned  int >(time(0))) ;
	int randomNumber=rand();
	ddj=(randomNumber% 6)+7;
	
	dsp = (ddj-5)*6;
	dhp = ddj*100+200;
	dsh = dhp-200;
	dfy = (ddj-3)*100;
	dbj = 20;
	bj = 2;
	if(jingyan/100>=30) 
	{
		cout<<"<超级>大怪,小心!!!!"<<endl;
		dhp+=700;
		dsh+=400;
		dfy+=200;
		
		dhp+=400;
		dsh+=200;
		dfy+=100;
		
		dsp+=10;
		bj = 3;
		if(ddj==12&&tj==1&&dj==1)
		{
			dhp+=1000;
			dsh+=500;
			dfy+=500;
			flag=1;
			dbj=25;
		}

	}
	else if(jingyan/100<=30&&jingyan/100>=20)
	{
		cout<<"<精英>大怪,小心!!!!"<<endl;
		dhp+=400;
		dsh+=200;
		dfy+=100;
		bj=2;
		dsp+=5;
		
	}
	cout<<"你面对的是"<<ddj<<"级大怪,伤害"<<dsh<<"生命:"<<dhp<<"防御:"<<dfy<<"是否迎战,迎战 1,逃跑 0"<<endl
		<<"闪避几率:"<<dsp<<endl
		<<"暴击几率:"<<dbj<<endl
		<<"是否迎战,迎战 1,逃跑 0"<<endl;
	if(bao==1)
	{
		cout<<"探宝情况下不能逃跑!!!!"<<endl;
	}
	cin>>r;
	int f;
	if(r==1||bao==1)
	{
	    if(Xzj==2||Zzj==2||Xsj==2)
        {
            cout<<"你已得到机甲增幅!!"<<endl;
        }
		while(shengming>0&&dhp>0&&l!=123&&(bao==1||i>0))
		{
			system("cls");
			cout<<"第"<<i<<"回合"<<endl;
			if(flag==1)
				cout<<"此怪可能会爆出 合成天地剑必须品>>天地精华,以超级增强"<<endl;
			cout<<"你的生命:"<<shengming<<"伤害"<<shanghai<<"防御"<<fangyu<<endl;
			cout<<"大怪生命:"<<dhp<<"伤害"<<dsh<<"防御:"<<dfy<<endl;
			cout<<"输入1攻击(造成攻击(你的伤害-怪的伤害),防御减半)"<<endl;
			cout<<"输入2防御(不造成攻击,防御*2)"<<endl;
			if(zhiye==1)
                cout<<"输入3使用技能(无敌并造成 2*伤害,BOOS*3点伤害)"<<endl;
            if(zhiye==2)
                cout<<"输入3使用技能(无敌三回合,可进行攻击)"<<endl;
            if(zhiye==3)
                cout<<"输入3使用技能(恢复500血,并造成 100*怪物等级 伤害,冷却10回合)"<<endl;
			cout<<"输入4使用战斗急救包!!!"<<endl;
			cin>>l;
			if(huo>=1)
			{
				dhp-=100;
			}
			if(lengque>0&&f==1)
			{
				lengque--;
			}
			int a; 
			int b;
			switch(l)
			{
				case 1:
					srand(static_cast<unsigned  int >(time(0))) ;
					randomNumber=rand();
					a=(randomNumber% 100)+1;
					srand(static_cast<unsigned  int >(time(0))) ;
					randomNumber=rand();
					b=(randomNumber% 100)+1;
					if(wudi>0)
                    {
                        wudi--;
                        i++;
                        f=1;
                        if(a<=dsp)
						{
							cout<<"怪成功闪避"<<endl;
							Sleep(1000);
						}
						else
                        	dhp-=shanghai-dfy;
                        break;
                    }
					if((fangyu/2)<dsh)
					{
						if(b>dbj)
							shengming-=dsh-fangyu/2;
						else
						{
							shengming-=dsh*bj-fangyu/2;
							cout<<"怪成功暴击"<< dsh*bj-fangyu/2<<"伤害"<<endl;
							Sleep(500); 
						}
					}
					if(shanghai>dfy )
					{
						if(a<=dsp)
						{
							cout<<"怪成功闪避"<<endl;
							Sleep(1000);
						}
						else
							dhp-=shanghai-dfy;
					}
					i++;
					f=1;
					break;
				case 2:
					srand(static_cast<unsigned  int >(time(0))) ;
					randomNumber=rand();
					b=(randomNumber% 100)+1;
					if((fangyu*2<dsh)||(b<dbj&&fangyu*2<dsh*bj))
					{
						if(b>dbj)
							shengming-=dsh-fangyu*2;
						else
						{
							shengming-=dsh*bj-fangyu/2;
							cout<<"怪成功暴击"<< dsh*bj-fangyu*2<<"伤害"<<endl;
							Sleep(500); 
						}
					}
					i++;
					f=1;
					break;
				case 3:
					srand(static_cast<unsigned  int >(time(0))) ;
					randomNumber=rand();
					a=(randomNumber% 100)+1;
					if(lengque==0)
					{
						if(zhiye==1)
                        {
                        	if(a<=dsp)
							{
								cout<<"怪成功闪避"<<endl;
								Sleep(1000);
							}
							else
                            	dhp-=shanghai*2;
                            lengque=5;
                        }
                        if(zhiye==2)
                        {
                            wudi=3;
                            lengque=8;
                        }
                        if(zhiye==3)
                        {
                        	if(a<=dsp)
							{
								cout<<"怪成功闪避"<<endl;
								Sleep(1000);
							}
							else
                            	dhp-=ddj*100;
                            shengming+=500;
                            lengque=10;
						}
						i++;
						f=0;
						break;
					}
					cout<<"冷却中剩余"<<lengque<<"回合"<<endl;
					Sleep(750);
					f=0;
					break;
				case 4:
					if(jijiubao>0) 
					{
						cout<<"使用成功!!!"<<endl;
						jijiubao--;
						shengming+=100;
						Sleep(750);
					}

					break;

			default:
				cout<<"不要乱输入"<<endl;
			}

		}
		if(shengming<=0) 
		{
			cout<<"你死了"<<endl;
			Sleep(1000);
			return ;
		}
		if(dhp<=0)
		{
			cout<<"你打败了"<<ddj<<"级";
			if(jingyan/100>=30) 
			{
				cout<<"<超级>大怪"<<endl;
				cout<<"奖励金币"<<ddj*15<<"$"<<endl;
				cout<<"奖励经验"<<(ddj-5)*10<<endl;
				jinbi+=ddj*15;
				jingyan+=(ddj-5)*10;
			}
			else if(jingyan/100<=30&&jingyan/100>=20)
			{
				cout<<"<精英>大怪"<<endl;
				cout<<"奖励金币"<<ddj*12<<"$"<<endl;
				cout<<"奖励经验"<<(ddj-5)*10<<endl;
				jinbi+=ddj*12;
				jingyan+=(ddj-5)*10;
			}
			else
			{
				cout<<"大怪"<<endl;
				cout<<"奖励金币"<<ddj*10<<"$"<<endl;
				cout<<"奖励经验"<<(ddj-5)*10<<endl;
				jinbi+=ddj*10;
				jingyan+=(ddj-5)*10;
			} 
			if(flag==1&&tj==1&&dj==1)
			{
				srand(static_cast<unsigned  int >(time(0))) ;
				int randomNumber=rand();

				if((randomNumber% 100)+1<=10)
				{
					cout<<"你人品爆发获得>>天地精华<<"<<endl;
					tdjh++;
				}
				else
				{
					cout<<"再接再厉,没有刷出"<<endl;
				}
			}
			Sleep(1000);
		}
	}


}
void BOOS() 
{
    int wudi=0;
	system("cls");
	cout<<"-------------------------------------------------------------------------------\n" ;
	Sleep(750);
	int i=1,n=0,l=1,bsp=0,bbj=0,bj=2;
	int lengque=0;
	int taopao;
	srand(static_cast<unsigned  int >(time(0))) ;
	int randomNumber=rand();
	
	cout<<"你面对的是";
		if(boosdj==1)
		{
			cout<<"普通";
			boosHP=40000;
			boosSH=2000;
			boosfy=1000;
			bsp=10;
			bbj=10;
		}
		else if( boosdj==2 )
		{
			cout<<"精英";
			boosHP=50000;
			boosSH=4000;
			boosfy=2000;
			bsp=12;
			bbj=10;
			bj=3;
		}
		else if(boosdj==3)
		{
			cout<<"超级";
			boosHP=100000;
			boosSH=5000;
			boosfy=3000;
			bsp=18;
			bbj=10;
			bj=3;
		}	
		else
		{
			cout<<"SSS";
			boosHP=100000;
			boosSH=7000;
			boosfy=5000;
			bsp=20;
			bbj=10;
			bj=4;
		}
		cout<<"BOOS,伤害"<<boosSH<<"生命:"<<boosHP<<"防御:"<<boosfy<<endl;
	system("pause");
	int f=0;
	while(shengming>0&&boosHP>0&&l!=123&&i<=100)
    {
		system("cls");
		cout<<"第"<<i<<"回合"<<endl;
		cout<<"你的生命:"<<shengming<<"伤害"<<shanghai<<"防御"<<fangyu<<endl;
		cout<<"BOOS生命:"<<boosHP<<"伤害"<<boosSH<<"防御:"<<boosfy<<endl;
		cout<<"输入1攻击(造成攻击(你的伤害-怪的伤害),自己防御减半)"<<endl;
		cout<<"输入2防御(不造成攻击,防御*2)"<<endl;
		if(zhiye==1)
            cout<<"输入3使用技能(无敌并造成伤害*3-BOOS的防御)"<<endl;
        if(zhiye==2)
            cout<<"输入3使用技能(无敌三回合,可进行攻击)"<<endl;
        if(zhiye==3)
                cout<<"输入3使用技能(恢复500血,并造成 1000*BOOS等级 伤害,冷却10回合)"<<endl;
		cout<<"输入4逃跑"<<endl;
		cout<<"输入5使用战斗急救包!!!"<<endl;
		if((shanghai-boosfy)<=0) 
			cout<<"目前你对BOOS造成不了伤害,请逃跑!!!!!!"<<endl;
		cin>>l;
		if(huo>=1) 
			boosHP-=100;
		if(lengque>0&&f==1) 
			lengque--;
		int a;
		int b;
		switch(l) 
		{
			case 1:
				srand(static_cast<unsigned  int >(time(0))) ;
				randomNumber=rand();
				a=(randomNumber% 100)+1;
				srand(static_cast<unsigned  int >(time(0))) ;
				randomNumber=rand();
				b=(randomNumber% 100)+1;
				if(wudi>0)
                {
                    wudi--;
                    i++;
                    f=1;
                    if(bsp>=a)
                    	cout<<"BOOS成功闪避"<<endl;
                    else
                    	boosHP-=shanghai-boosfy;
                    Sleep(500);
                    break;
                }
                if((fangyu/2)<boosSH)
                {
                	if(bbj>=b)
                	{
                		shengming-=boosSH*bj-fangyu/2;	
                		cout<<"BOOS成功暴击"<< boosSH*bj-fangyu/2<<"伤害"<<endl; 
					}
                    else
                    	shengming-=boosSH-fangyu/2;
                }
                if(shanghai>boosfy )
                {
                	if(bsp>=a)
                    	cout<<"BOOS成功闪避"<<endl;
                    else
                    	boosHP-=shanghai-boosfy;
                    	Sleep(500); 
				}
                i++;
                f=1;
                break;
			case 2:
				f=1;
				
				srand(static_cast<unsigned  int >(time(0))) ;
				randomNumber=rand();
				b=(randomNumber% 100)+1;
				
				if((fangyu*2<boosSH)||(b<bbj&&fangyu*2<boosSH*bj))
				{
					if(bbj>=b)
                	{
                		shengming-=boosSH*bj-fangyu*2;	
                		cout<<"BOOS成功暴击"<< boosSH*bj-fangyu*2<<"伤害"<<endl; 
					}
                    else
                    	shengming-=boosSH-fangyu*2;
				}
				i++;
				break;
			case 3:
				srand(static_cast<unsigned  int >(time(0))) ;
				randomNumber=rand();
				a=(randomNumber% 100)+1;
				f=1;
				if(lengque==0)
                {
					if(zhiye==1)
                    {
                    	if(bsp>=a)
                    		cout<<"BOOS成功闪避"<<endl;
                   		else
                        	boosHP-=shanghai*3-boosfy;
                        lengque=5;
                    }
                    if(zhiye==2)
                    {
                        wudi=3;
                        lengque=8;
                    }
                    if(zhiye==3)
                    {
                    	if(bsp>=a-10)
                    		cout<<"BOOS成功闪避"<<endl;
	                    else
	                    	boosHP-=boosdj*1000;
	                    shengming+=500;
	                    Sleep(500); 
					}
                    i++;
                    f=0;
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
				if(jijiubao>0) 
				{
					cout<<"使用成功!!!"<<endl;
					Sleep(500);
					jijiubao--;
					shengming+=100;
					
				}
				break;

			default:
				cout<<"不要乱输入"<<endl;
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
		boosdj++;
		jinbi+=5000;
		Sleep(750);
	}


}
void wuqidian() 
{
	int i=1,n=0,l=1;
	char w,r;
	while(l) {

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
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 2 :
				if(jinbi<100) 
				{
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase
					break;
				} 
				else 
				{
					shanghai=150;
					jinbi-=100;
					cout<<"你的攻击现在为"<<shanghai<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 3 :
				if(jinbi<120) 
				{
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase
					break;
				} 
				else
				{
					cout<<"购买成功！"<<endl;
					shanghai=180;
					jinbi-=120;
					cout<<"你的伤害现在为"<<shanghai<<endl;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 4 :
				if(jinbi<150) 
				{
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase
					break;
				} 
				else 
				{
					cout<<"购买成功！"<<endl;
					xgj=1;
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
				cout<<"看清楚"<<endl;
				break;
		}
		Sleep(100);
	}

}
void yaopindian() 
{

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
		cout<<"5.优质药水   ($5000加500血,50点防御,限购10瓶)"<<endl;
		cout<<"6.神圣药水   ($7000加300血,50点防御,100点攻击(+100),限购10瓶)"<<endl;
		cout<<"7.急救包     ($50加50血 战斗时使用)"<<endl;
		cout<<"8.*火之水*   ($7000,敌方每回合减少100血)"<<endl;
		cout<<"0.离开药品店"<<endl;
		cin>>l;
		switch(l) {
			case 1 :
				if(jinbi<50)
                {
					cout<<"你的钱不够"<<endl;
					Sleep(1000);
					break;
				} 
				else 
				{
					cout<<"购买成功！"<<endl;
					shengming+=50;
                    shengmingf=shengming;
					jinbi-=50;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}
			case 2 :
				if(jinbi<100) 
				{
					cout<<"你的钱不够"<<endl;
					Sleep(1000); //钱不够时返回Flase
					break;
				} 
				else 
				{
					cout<<"购买成功！"<<endl;
					shengming+=100;
					shengmingf=shengming;
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
					shengming+=200;
					shengmingf=shengming;
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
					shengming+=300;
					shengmingf=shengming;
					jinbi-=200;
					cout<<"-------------------------------------------------------------------------------\n" ;
					break;
				}

			case 5 :
			    if(yy==10)
                {
                    cout<<"已购买10瓶"<<endl;
                    break;
                }
				else if(jinbi<5000)
                {
					cout<<"你的钱不够"<<endl;
					Sleep(1000); //钱不够时返回Flase
					break;
				}
				else if(jinbi>=5000&&yy<10)
                {
					cout<<"购买成功！"<<endl;
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
                    cout<<"已购买10瓶"<<endl;
                    break;
                }
				else if(jinbi<7000) {
					cout<<"你的钱不够"<<endl;
					break;
				}
				else
                {
					cout<<"购买成功！"<<endl;
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
					cout<<"你的钱不够"<<endl;
					Sleep(1000); //钱不够时返回Flase
					break;
				}
				jinbi-=50;
				jijiubao++;
				cout<<"购买成功！"<<endl;
				cout<<"-------------------------------------------------------------------------------\n" ;

				break;
			case 8:
				if(jinbi<7000) {
					cout<<"你的钱不够"<<endl;
					Sleep(1000);
					break;
				}
				jinbi-=700;
				huo=1;
				cout<<"购买成功！"<<endl;
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
void ziliao()
{
	cout<<"BUG小怪:此怪在打小怪时有可能会出现并化身为5级超级小怪,并且超进化,加强"<<endl<<endl;
	if(zhiye==1)
        cout<<"你是一位普通的再也不能再普通的战士,但不甘心被命运打到,刻苦练习学会了>>奥义斩<<,被誉为'圣剑士' "<<endl;
    else
        cout<<"你是军方的敢死队队长,在战场上杀敌无数,拥有 血神盾 技能，被誉为>>永远不会死的敢死队队长<<"<<endl;
	cout<<"小镇5.1.0[怪物狂欢季]欢迎你!!!"<<endl;
	system("pause");
}
void tanbao()
{
	//更新
	system("cls");
	int n=0,l=1;
	if(Zzj==1||Xzj==1||Xsj==1)
	{
		while(n!=1&&n!=2&&n!=3)
		{
			cout<<"请选择作战机甲"<<endl;
			cout<<"输入 1 选择X原型机"<<endl;
			cout<<"输入 2 选择Z原型机"<<endl;
			cout<<"输入 3 选择X射线机"<<endl;
			cin>>n;
			if(n==1&&Xzj==1)
			{
				Xzj=2;
				cout<<"你已选择X原型机"<<endl;
				shengmingf=shengming;
				shengming+=500;
				shanghai+=200;
				Sleep(750);
			}
			else if(n==2&&Zzj==1)
			{
				Zzj=2;
				cout<<"你已选择Z原型机"<<endl;
				shengmingf=shengming;
				shengming+=300;
				shanghai+=500;
				Sleep(750);
			}
			else if(n==3&&Xsj==1)
			{
				Xsj=2;
				cout<<"你已选择X射线机"<<endl;
				shengmingf=shengming;
				shengming+=500;
				shanghai+=700;
				Sleep(750);
			}
			else
			{
				cout<<"请选择有效机甲"<<endl;
			}
		}
	}
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
			if(a[x-1][y]=='-'||a[x-1][y]=='|'||a[x-1][y]=='R'||a[x-1][y]=='F'||a[x-1][y]=='X'||a[x-1][y]=='H'||a[x-1][y]=='Q'||a[x-1][y]=='B') 
			{

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
				if(a[x-1][y]=='Q')
				{
					system("cls");
					shixuepangzi();
					system("cls");
				}
				if(a[x-1][y]=='B')
				{
					system("cls");
					BOOS();
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
			if(a[x+1][y]=='-'||a[x+1][y]=='|'||a[x+1][y]=='R'||a[x+1][y]=='F'||a[x+1][y]=='X'||a[x+1][y]=='H'||a[x+1][y]=='Q'||a[x+1][y]=='B') 
			{
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
				if(a[x+1][y]=='Q')
				{
					system("cls");
					shixuepangzi();
					system("cls");
				}
				if(a[x+1][y]=='B')
				{
					system("cls");
					BOOS();
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
			if(a[x][y-1]=='-'||a[x][y-1]=='|'||a[x][y-1]=='R'||a[x][y-1]=='F'||a[x][y-1]=='X'||a[x][y-1]=='o'||a[x][y-1]=='H'||a[x][y-1]=='Q'||a[x][y-1]=='B')
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
				if(a[x][y-1]=='Q')
				{
					system("cls");
					shixuepangzi();
					system("cls");
				}
				if(a[x][y-1]=='B')
				{
					system("cls");
					BOOS();
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
		} 
		else if(ch=='d') 
		{

			if(a[x][y+1]=='-'||a[x][y+1]=='|'||a[x][y+1]=='R'||a[x][y+1]=='F'||a[x][y+1]=='X'||a[x][y+1]=='o'||a[x][y+1]=='H'||a[x][y+1]=='@'||a[x][y+1]=='Q'||a[x][y+1]=='B')
			{
				if(a[x][y+1]=='H') 
				{
					system("cls");
					fenjiecailiao();
					system("cls");
				}
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
				if(a[x][y+1]=='Q') 
				{
					system("cls");
					shixuepangzi();
					system("cls");
				}
				if(a[x][y+1]=='B') 
				{
					system("cls");
					BOOS();
					system("cls");
				}
				if(a[x][y+1]=='@')
				{
					system("cls");
	  		   		for(int i=0;i<13;i++)
	  		   			for(int j=0;j<58;j++)
	  		   				a[i][j]=b[i][j];
	  		   		
	  		   		x=6;y=5;
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

	cout<<"奖励 $200";
	jinbi+=200;
	Sleep(750);
}
void ronglu() 
{ 
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
void gongjiangtai() 
{
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
void fenjiecailiao() 
{
	int cl;
	srand(static_cast<unsigned  int >(time(0))) ;
	int randomNumber=rand();
	cl=(randomNumber% 5)+5;
	cout<<"分解材料*"<<cl<<endl;
	Sleep(750);
	fenjie+=cl;
}
void jijia() 
{
	//制作机甲
	int l=1,h=1,k=0;
	while(l) {

		system("cls");
		cout<<"-------------------------------------------------------------------------------\n" ;

		cout<<"输入 1 制作 X原型机(生命+500,攻击+200)\n"<<endl;
		cout<<"输入 2 制作 Z原型机(生命+300,攻击+500)"<<endl;
		cout<<"此机甲只有一种制作方式\n铁块*100  晶块*30  元素晶块*20\n\n";
		cout<<"输入 3 制作 X射线机甲(生命+500,攻击+700)"<<endl;
        cout<<"此机甲只有一种制作方式\n铁块*300  晶块*300  元素晶块*300\n";
		cout<<"输入 0 返回小镇"<<endl;
		cin>>l;
		switch(l)
		{
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
				if(Xsj==0)
				{
					cout<<"此机甲只有一种制作方式\n铁块*300  晶块*300  元素晶块*300\n";
					if(tiekuai>=300&&jingkuai>=100&&yuansujingkuai>=100 )
					{
						Xsj=1;
						tiekuai-=300;
						jingkuai-=300;
						yuansujingkuai-=300;
						cout<<"你已成功制作 X射线机甲"<<endl;
						Sleep(1000);
					}
					else
					{
						cout<<"材料不足!!!!"<<endl;
						Sleep(1000);
					}
				}
				else
				{
					cout<<"你已制作此机甲"<<endl;
					Sleep(1000);

				}

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
void cailiaoshangren() 
{
	int l=1,n;
	while (l) {
		system("cls");
		cout<<"-------------------------------------------------------------------------------\n" ;
		cout<<"材料商店"<<endl;
		cout<<"输入 1 购买分解材料*100 ($1000)"<<endl;
		cout<<"输入 2 购买元素晶块*100 ($2000)"<<endl;
		cout<<"输入 0 返回小镇"<<endl;
		cin>>l;
		switch(l) {
			case 1:
				if(jinbi<1000)
				{
					cout<<"金币不够"<<endl;
				}
				else
				{
					cout<<"购买成功"<<endl;
					jinbi-=1000;
					fenjie+=100;
				}
				break;

			case 2:
				if(jinbi<2000)
				{
					cout<<"金币不够"<<endl;
				}
				else
				{
					cout<<"购买成功"<<endl;
					jinbi-=1000;
					yuansujingkuai+=1000;
				}
				break;
			case 0:
				system("cls");
				xiaozhen();
				break;
			default:
				cout<<"没有找到你购买的物品编号"<<endl;
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
		cout<<"制作 x护手(防御400) 输入 6 "<<endl;
		cout<<"铁块*300,晶块*30,元素晶块*10"<<endl;
		cout<<"制作 天地剑(伤害1000)输入 7 "<<endl;
		cout<<"无消耗"<<endl;
		cout<<"制作 x审判者套装(防御800) 输入 8 "<<endl;
		cout<<"无消耗"<<endl<<endl;
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
					xtk=1;
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
					xxj=1;
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
				if(tiekuai>=150&&yuansujingkuai>=20&&xgj==1)
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
					cout<<"材料不足!!!或未购买光剑\n";
				}
				break;
			case 6:
				if(tiekuai>=300&&yuansujingkuai>=10&&jingkuai>=30)
				{
					xhs=1;
					cout<<"制作成功"<<endl;
					tiekuai-=300;
					yuansujingkuai-=10;
					fangyu=400;
					cout<<"铁块剩余:"<<tiekuai<<"元素晶块剩余:"<<yuansujingkuai<<"晶块剩余:"<<jingkuai<<endl;
					cout<<"防御:"<<fangyu<<endl;
					Sleep(500);
				}
				else
				{
					cout<<"材料不足!!!\n";
				}
				break;
			case 7:
				if(tj==1&&dj==1&&tdjh>0)
				{
					cout<<"制作成功"<<endl;
					shanghai=1000;
					cout<<"伤害:"<<shanghai<<endl;
					Sleep(500);
				}
				else
				{
					cout<<"未购买苍穹剑或大地剑或未拥有天地精华(刷增加大怪12级得)\n";
				}
				break;
			case 8:
				if(xxgj==1&&xxj==1&&xhs==1&&xtk==1&&spzx>0)
				{
					cout<<"制作成功"<<endl;
					fangyu=800;
					cout<<"防御:"<<fangyu<<endl;
					Sleep(500);
				}
				else
				{
					cout<<"未购买其余x类型武器或未拥有审判之心(刷BUG小怪5级得)\n";
				}
				break;
			case 0:
				xiaozhen();
				cout<<"-------------------------------------------------------------------------------\n" ;
				break;

			default:
				cout<<"没有找到你制作的武器编号"<<endl;
				Sleep(750);
		}
		Sleep(100);
	}
}
void shixuepangzi()
{
	int wudi=0;
	if(shengming<=0)
	{
		return xiaoguai();
	}
	int i=1,n=0,l=1,lengque=0,xsp=0;
	int flag=9999;
	int r,w;
	int xhp,xsh,xjb,xdj,xfy;
	srand(static_cast<unsigned  int >(time(0))) ;
	int randomNumber=rand();
	xdj=(randomNumber% 5)+1;
	
	xhp=xdj*100+200;
	xsh=xdj*20;
	xfy=400;
	xsp=xdj*5;
	if(jingyan/100>=20)
	{
		cout<<"<超级>嗜血胖子,小心!!!!"<<endl;
		xhp+=700;
		xsh+=200;
		xfy+=400;
		xhp+=500;
		xsh+=100;
		xfy+=600;
		xsp+=10;
	}
	else if(jingyan/100<20&&jingyan/100>=10)
	{
		cout<<"<精英>嗜血胖子,小心!!!!"<<endl;
		xhp+=500;
		xsh+=100;
		xfy+=400;
		xsp+=5;
	}
	if(Xzj==2||Zzj==2||Xsj==2)
	{
		cout<<"你已得到机甲增幅!!"<<endl;
	}
	cout<<"你面对的是"<<xdj<<"级嗜血胖子,伤害"<<xsh<<"生命:"<<xhp<<"防御:"<<xfy<<endl
		<<"无视防御攻击" <<endl 
		<<"闪避几率:"<<xsp<<endl//
		<<"天使技能可被防御"<<endl;
		if((xdj*100-xfy)<=0&&zhiye==3)
			cout<<"技能无法造成伤害"<<endl;
	cout<<"每7回合恢复500血"<<endl 
		<<"是否迎战,迎战 1,逃跑 0"<<endl;
	if(bao==1)
	{
		cout<<"探宝情况下不能逃跑!!!!"<<endl;
	}
	cin>>r;
	if(r==1||bao==1)
	{
		int f=0;
		while(shengming>0&&xhp>0&&l!=123&&(bao==1||i>0))
		{
			system("cls");
			cout<<"-------------------------------------------------------------------------------\n" ;
			cout<<"第"<<i<<"回合"<<endl;
			cout<<"你   的 生命:"<<shengming<<"伤害"<<shanghai<<"防御"<<fangyu<<endl;
			cout<<"嗜血胖子生命:"<<xhp<<"伤害"<<xsh<<"防御:"<<xfy<<endl;
			cout<<"输入1攻击(造成攻击(你的伤害-怪的防御),防御减半,会受到怪的攻击)"<<endl;
			cout<<"输入2防御(不造成攻击,防御*2,若防御*2 小于 伤害, >无视防御<)"<<endl;
			if(zhiye==1)
                cout<<"输入3使用技能(无敌并造成 2*伤害,BOOS*3点伤害,嗜血胖子需减去防御)"<<endl;
            if(zhiye==2)
                cout<<"输入3使用技能(无敌三回合,可进行攻击)"<<endl;
            if(zhiye==3)
                cout<<"输入3使用技能(恢复500血,并造成 100*怪物等级,胖子可防御 伤害,冷却10回合)"<<endl;
			cout<<"输入4使用战斗急救包!!!"<<endl;
			cin>>l;
			if(huo>=1)
				xhp-=30;
			if(lengque>0&&f==1)
				lengque--;
			if(i%7==0) 
				xhp+=500;
			int a; 
			switch(l)
			{
				case 1:
					srand(static_cast<unsigned int>(time(0))) ;
					randomNumber=rand();
					a=(randomNumber% 100)+1;
				    if(wudi>0)
                    {
                        wudi--;
                        i++;
                        f=1;
                        
						if(a<=xsp)
							cout<<"怪成功闪避"<<endl;
						else 
                        	xhp-=shanghai-xfy;
                        break;
                    }
					shengming-=xsh;
					if(shanghai>xfy )
					{
						if(a<=xsp)
							cout<<"怪成功闪避"<<endl;
						else 
							xhp-=shanghai-xfy;
					}
					i++;
					f=1;
					break;
				case 2:
					shengming-=xsh;
					i++;
					f=1;
					break;
				case 3:
					if(lengque==0)
                    {
                        if(zhiye==1)
                        {
                            xhp-=shanghai*2-dfy;
                            lengque=5;
                        }
                        if(zhiye==2)
                        {
                            wudi=3;
                            lengque=8;
                        }
                        if(zhiye==3)
                        {
                        	shengming+=500;
                        	if((xdj*100-xfy)>0)
                        		dhp-=xdj*100-xfy;
                        	else
                        	{
                        		cout<<"技能无伤"<<endl;	
                        		Sleep(500);
							}	
							lengque=10;
						}
						i++;
						f=0;
						break;
					}
					cout<<"冷却中剩余"<<lengque<<"回合"<<endl;
					Sleep(750);
					f=0;
					break;
				case 4:
					if(jijiubao>0) 
					{
						cout<<"使用成功!!!"<<endl;
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
				cout<<"不要乱输入"<<endl;
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
			cout<<"你打败了"<<xdj<<"级";
			if(jingyan/100>=20)
			{
				cout<<"<超级>嗜血胖子"<<endl;
				cout<<"奖励金币300$"<<endl;
				cout<<"奖励经验"<<xdj*10<<endl;
				jinbi+=300;
				jingyan+=xdj*10;
			}
			else if(jingyan/100<20&&jingyan/100>=10)
			{
				cout<<"<精英>嗜血胖子"<<endl;
				cout<<"奖励金币200$"<<endl;
				cout<<"奖励经验"<<xdj*10<<endl;
				jinbi+=200;
				jingyan+=xdj*10;
			}
			else
			{
				cout<<"嗜血胖子"<<endl;
				cout<<"奖励金币100$"<<endl;
				cout<<"奖励经验"<<xdj*10<<endl;
				jinbi+=100;
				jingyan+=xdj*10;
			}
			Sleep(1000);
		}
	}
	else 
	{
		cout<<"输入有误"<<endl;
		Sleep(750);
	}
} 
void shangdian()
{
	while(1)
	{
		system("cls");
		cout<<"输入 1 武器店"<<endl;
		cout<<"输入 2 药品店"<<endl;
		cout<<"输入 3 材料商店"<<endl; 
		cout<<"输入 0 返回小镇"<<endl;
		int l;
		cin>>l;
		if(l==1)
		{
			wuqidian();
			break; 
		}	
		else if(l==2)
		{
			yaopindian(); 
			break;
		}
		else if(l==3)
		{
			cailiaoshangren();
			break;
		}
		else if(l==0)
			break;
		else
			cout<<"输入有误"<<endl;
	}	
}
void gongzuoshi() 
{
	
	while(1)
	{
		system("cls");
		cout<<"输入 1 使用熔炉"<<endl;
		cout<<"输入 2 使用工匠台"<<endl;
		cout<<"输入 0 返回小镇"<<endl;
		int l;
		cin>>l;
		if(l==1)
		{
			ronglu();
			break;
		}
		else if(l==2)
		{
			gongjiangtai();
			break;
		}
		else if(l==0)
			break;
		else
			cout<<"输入有误"<<endl; 
	}
}
void chenjiu()
{
	bool f=0;
	if(spzx>0)
	{
		cout<<">>审判天使<<"<<endl;
		f=1;
	}
	else
		cout<<"获得审判之心可获得成就>>审判天使<<"<<endl;	
	if(tdjh>0)
	{
		cout<<">>苍穹与大地<<"<<endl;
		f=1;
	}
	else
		cout<<"获得天地精华可获得成就>>苍穹与大地<<"<<endl;
	if(f)
	{
		cout<<"暂无成就"<<endl;
	}
	system("pause");
	return ;	
}
