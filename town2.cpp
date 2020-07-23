#include<bits/stdc++.h>//头文件
#include<windows.h>//头文件
void xiaozhen();
void  wuqidian();//武器店 
void  yaopindian();//药品店 
// { 
	void maoxian();//冒险 
	void daguai();//大怪
	void xiaoguai();//小怪
	void BOOS(); //boos 
// }
	void zhuangtai();//状态 
	void ziliao();//资料
	void xiuxi();  
//}
int shengming=1000,shanghai=50,fangyu=10,jinbi=200,jijiubao=1,jingyan=100;//主角资料
int xhp,xsh,xjb,xdj,xfy;//小怪 
int dhp,dsh,djb,ddj,dfy;//大怪
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
		
		cout<<"				  [小镇2.0<超能技>]\n";
		cout<<"-------------------------------------------------------------------------------\n" ; 
		cout<<"当前第"<<day/2<<"天(10天之内)  ";
		if(day%2==0)
		{
			cout<<"白天"<<endl; 
		} 
		else if(day%2!=0)
		{
			cout<<"黑夜(野怪能力增强)"<<endl; 
		} 
		cout<<"输入 1 冒险"<<endl;
		cout<<"输入 2 武器店"<<endl;
		cout<<"输入 3 药品店"<<endl; 
		cout<<"输入 4 自己状态"<<endl; 
		cout<<"输入 5 查看游戏资料"<<endl;
		cout<<"输入 6 休息(满血)"<<endl; 
		cout<<"输入 0 结束游戏"<<endl; 
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
			cout<<"不要乱输入"<<endl;
		} 
	}
}

void maoxian()
{
	int i=0,n=0,l=1;
	while(l)
	{
		
		cout<<"输入 1 打小怪(1~5级)"<<endl;
		cout<<"输入 2 打大怪(5~10级)"<<endl;
		cout<<"输入 3 打BOOS(15级)"<<endl;  
		cout<<"输入 0 返回小镇"<<endl; 
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
					cout<<"等级过低"<<endl;
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
					cout<<"等级过低"<<endl;
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
			cout<<"不要乱输入"<<endl;	
			cout<<"-------------------------------------------------------------------------------\n" ; 
		} 
	
	} 


} 
void zhuangtai()
{
	cout<<"你的生命为:"<<shengming<<endl;
	cout<<"你的金币为:"<<"$"<<jinbi<<endl;
	cout<<"你的防御为:"<<fangyu<<endl;
	cout<<"你的伤害为:"<<shanghai<<endl;
	cout<<"你的经验为(100经验=1级):"<<jingyan<<endl;
	cout<<"你的等级为:"<<jingyan/100<<endl;
	cout<<"你拥有的急救包数"<<jijiubao<<endl;
	cout<<"技能MAX斩(无敌,造成敌方等级*20伤害,BOOS:500点伤害) "<<endl; 
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
	cout<<"你面对的是"<<xdj<<"级小怪,是否迎战(y/n)"<<endl;
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
			cout<<"第"<<i<<"回合"<<endl;
			cout<<"你的生命:"<<shengming<<endl;
			cout<<"小怪生命:"<<xhp<<endl;
			cout<<"输入1攻击(造成攻击(你的伤害-怪的伤害),防御减半)"<<endl;
			cout<<"输入2防御(不造成攻击,防御*2)"<<endl; 
			cout<<"输入3使用技能(无敌,造成敌方等级*20伤害,BOOS:500点伤害)"<<endl;  
			cout<<"输入4逃跑(20%几率,逃跑失败也要减少血(无视防御),实在打不过撑过15回合自动结束)"<<endl; 
			cout<<"输入5使用战斗急救包!!!"<<endl; 
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
					cout<<"冷却中剩余"<<lengque<<"回合"<<endl; 
					f=0;
					 
				break;
				case 4:
					if(taopao=1)
					{
						cout<<"逃跑成功!!!"<<endl; 
						l=123;
					} 
					f=1; 
				
				break; 
				case 5:
					if(jijiubao>0)
					{
						cout<<"使用成功!!!"<<endl; 
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
			cout<<"你死了"<<endl;
			Sleep(1000);
			return xiaoguai(); 
		}
		if(xhp<=0)
		{
			cout<<"你打败了"<<xdj<<"级小怪"<<endl;
			cout<<"奖励金币"<<xjb<<"$"<<endl;
			jinbi+=xjb; 
			cout<<"奖励经验"<<xdj*10<<endl;
			jingyan+=xdj*10; 
		}
	
	}
	else
	{
		cout<<"你已逃跑"<<endl; 
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
	cout<<"你面对的是"<<ddj<<"级大怪,是否迎战(y/n)"<<endl;
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
			
			cout<<"第"<<i<<"回合"<<endl;
			cout<<"你的生命:"<<shengming<<endl;
			cout<<"大怪生命:"<<dhp<<endl;
			cout<<"输入1攻击(造成攻击(你的伤害-怪的伤害),防御减半)"<<endl;
			cout<<"输入2防御(不造成攻击,防御*2)"<<endl; 
			cout<<"输入3使用技能(无敌,造成敌方等级*20伤害,BOOS:500点伤害)"<<endl;
			cout<<"输入4逃跑(20%几率,逃跑失败也要减少血(无视防御),实在打不过撑过20回合自动结束)"<<endl; 
			cout<<"输入5使用战斗急救包!!!"<<endl; 
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
					cout<<"冷却中剩余"<<lengque<<"回合"<<endl; 
					f=0;
				break;
				case 4:
					if(taopao=3)
					{
						cout<<"逃跑成功!!!"<<endl; 
						l=123;
					} 
					f=1;
					
				break;
				case 5:
					f=1;
					if(jijiubao>0)
					{
						cout<<"使用成功!!!"<<endl; 
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
			return daguai(); 
			 
		}
		if(dhp<=0)
		{
			cout<<"你打败了"<<ddj<<"级大怪"<<endl;
			cout<<"奖励金币"<<djb<<"$"<<endl;
			cout<<"奖励经验"<<ddj*10<<endl;
			jinbi+=djb; 
			jingyan+=ddj*10; 
		}
	}
	else
	{
		cout<<"你已逃跑"<<endl; 
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
	cout<<"你面对的是"<<"BOOS"<<endl;
	int f=0;
	while(shengming>0&&boosHP>0&&l!=123)
	{
		cout<<"第"<<i<<"回合"<<endl;
		cout<<"你的生命:"<<shengming<<endl;
		cout<<"BOOS生命:"<<boosHP<<endl;
		cout<<"输入1攻击(造成攻击(你的伤害-怪的伤害),防御减半)"<<endl;
		cout<<"输入2防御(不造成攻击,防御*2)"<<endl; 
		cout<<"输入3使用技能(无敌,造成敌方等级*20伤害,BOOS:500点伤害)"<<endl;
		cout<<"输入4逃跑(10%几率,逃跑失败也要减少血(无视防御),实在打不过撑过30回合自动结束)"<<endl; 
		cout<<"输入5使用战斗急救包!!!"<<endl; 
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
				cout<<"冷却中剩余"<<lengque<<"回合"<<endl; 
				f=0;
			break;
			case 4:
				f=1;
				if(taopao=1)
				{
					cout<<"逃跑成功!!!"<<endl; 
					l=123;
				} 
				
			break; 
			case 5:
				f=1;
				if(jijiubao>0)
				{
					cout<<"使用成功!!!"<<endl; 
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
	}
		
	
} 
void wuqidian()
{
	int i=1,n=0,l=1;
	char w,r; 
	while(l) 
	{ 	cout<<"武器店规则:伤害不能叠加!!!,例如:假如你目前伤害50 ,购买匕首后,伤害不会+20,而是替换成20"<<endl;
		cout<<"你目前伤害:"<<shanghai<<"目前防御:"<<fangyu<<endl; 
		Sleep(250); 
		cout<<"欢迎来到 武器店！"<<endl; 
		cout<<"1、买匕首（$10加40攻击力）"<<endl; 
		cout<<"2、买巨剑（$50加60攻击力）"<<endl; 
		cout<<"3、买光刃（$100加120攻击力)"<<endl; 
		cout<<"4、买X光刃（$150加180攻击力）"<<endl; 
		cout<<"5、买木盾（$200加100防御力）"<<endl; 
		cout<<"6、买铁盾（$500加200防御力）"<<endl; 
		cout<<"0、离开武器店"<<endl; 
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
					cout<<"你的钱不够"<<endl; 
					break;
				} 
				else
				{
					cout<<"购买成功！"<<endl;//钱足够时返回True 
					shanghai=40; 
					jinbi-=10; 
					cout<<"你的伤害现在为"<<shanghai;
					cout<<"-------------------------------------------------------------------------------\n" ;  
					break;
				}  
			case 2 : 
				if(jinbi<50) 
				{ 
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase 
					break;
				} 
				else  
				{
					cout<<"购买成功！"<<endl; 
					shanghai=60; 
					jinbi-=50; 
					cout<<"你的伤害现在为"<<shanghai; 
					cout<<"-------------------------------------------------------------------------------\n" ; 
					break; 
				} 
				
			case 3 : 
				if(jinbi<100) 
				{
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase 
					 break;
				}
				else 
				
				{
					cout<<"购买成功！"<<endl; 
					shanghai=120; 
					jinbi-=100; 
					cout<<"你的伤害现在为"<<shanghai;
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
					shanghai=180; 
					jinbi-=150; 
					cout<<"你的伤害现在为"<<shanghai; 
					cout<<"-------------------------------------------------------------------------------\n" ; 
					break; 
				}  
				
			case 5 : 
				if(jinbi<200) 
				{
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase 
					 break;
				}
				else
				{
					cout<<"购买成功！"<<endl; 
					fangyu=100; 
					jinbi-=200; 
					cout<<"你的防御现在为"<<fangyu<<endl; 
					cout<<"-------------------------------------------------------------------------------\n" ;  
					break; 
				}  
				
			case 6: 
				if(jinbi<500) 
				{
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase 
					break;
				}
				else 
				{
					fangyu=200; 
					jinbi-=500; 
					cout<<"你的防御现在为"<<fangyu<<endl; 
					cout<<"-------------------------------------------------------------------------------\n" ;  
					break; 
				} 
			case 0:
				break;
				 
			default: 
				cout<<"看清楚"<<endl; 
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
		cout<<"欢迎来到 药品店！"<<endl; 
		cout<<"1、坏药水(小)（$50加50血)"<<endl; 
		cout<<"2、一般的药水（$100加100血)"<<endl; 
		cout<<"3、正常的药水（$150加200血)"<<endl; 
		cout<<"4、好药水     ($200加300血)"<<endl; 
		cout<<"5、优质药水   ($500加300血,50点防御)"<<endl; 
		cout<<"6、神圣药水	（$700加400血,50点防御,100点攻击(+100))"<<endl;
		cout<<"7、急救包     ($50加50血 战斗时使用)"<<endl;  
		cout<<"0、离开药品店"<<endl; 
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
					cout<<"你的钱不够"<<endl; 
					break;
				} 
				else
				{
					cout<<"购买成功！"<<endl; 
					shengming+=50; 
					jinbi-=50; 
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
					cout<<"购买成功！"<<endl; 
					shengming+=100; 
					jinbi-=100; 
					cout<<"-------------------------------------------------------------------------------\n" ;
					break; 
				} 
			case 3 : 
				if(jinbi<150) 
				{
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase 
					 break;
				}
				else 
				{
					cout<<"购买成功！"<<endl; 
					shengming+=200; 
					jinbi-=150; 
					cout<<"-------------------------------------------------------------------------------\n" ;
					break; 
				} 
				
			case 4 :
				if(jinbi<200) 
				{
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase 
					break;
				}
				else
				{
					cout<<"购买成功！"<<endl; 
					shengming+=300; 
					jinbi-=200; 
					cout<<"-------------------------------------------------------------------------------\n" ;
					break; 
				} 
			case 5 : 
				if(jinbi<500) 
				{
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase 
					 break;
				}
				else
				{
					cout<<"购买成功！"<<endl; 
					shengming+=300; 
					fangyu+=50; 
					jinbi-=500; 
					cout<<"-------------------------------------------------------------------------------\n" ;
					
					 
					break; 
				}  
				
			case 6: 
				if(jinbi<700) 
				{
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase 
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
					cout<<"你的钱不够"<<endl;//钱不够时返回Flase 
					break;
				}
				jinbi-=50; 
				jijiubao++;
				cout<<"购买成功！"<<endl;
				cout<<"-------------------------------------------------------------------------------\n" ;
				break; 
			case 0:
				break;
			default: 
				cout<<"看清楚"<<endl; 
				cout<<"-------------------------------------------------------------------------------\n" ;
				break; 
		}  
	}
} 
void ziliao()
{


	cout<<"小镇2.0欢迎你!!!"<<endl<<"关于游戏:\n因本游戏是作者用不到2小时做出的,bug可能很多,请原谅"<<endl;
	cout<<"游戏讲述的是一个小镇有一天被一群怪包围了,作为镇中唯一的一名战士,你勇敢的站在了小镇的一线,目标:击败BOOS"<<endl;
	cout<<"小镇上有许多物资可供你用,小镇2.0版白天黑夜(黑夜,怪能力增强),人物技能,限定天数,急救包,休息等"<<endl; 
	
	
	
}
void xiuxi()
{
	int i=1;
	while(i<=100) 
	{
		cout<<"				进度";
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
