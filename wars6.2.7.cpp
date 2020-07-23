#include<windows.h>
#include<iomanip>
#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;
int e,g=50,o1=3000,o2,e1=3000,e2;
int s,l,sl,pj,dd,i,ts,k,tk,tke,tkk,xx,bt,gs,fj,fje;
int fk,jg,jk,hd,hde,jd,jde,zx,iii,pz,lzpz,pze,lzpze;
int dl,dle,jkl,jkl_kc,tt,zd,water;
char d,ch;
string ssss;
void xs(char ccc){
	cout<<"金币数($)："<<g<<endl;
	cout<<"晶坷垃(G)："<<jkl<<endl;
	cout<<"我方人数："<<o2+jde<<endl;
	cout<<"敌方人数："<<e2+jd<<endl;
	cout<<"我方血量："<<o1<<endl;
	cout<<"敌方血量："<<e1<<endl;
	if(ccc=='3') cout<<"已生存天数："<<iii<<endl;
	if(zx!=0) cout<<"已处于诈降状态"<<endl; 
	return ;
}
void bg();
void aa(string sssss){
	if(e1<1000) bg();
	if(ssss=="16391639"){
		g=50000;
		e1=1000000;
		hd=10;
		o1=5000;
	}
	if(ssss!="test"&&ssss!="16391639"){
		cout<<"在千年以前，有一群人类被感染成了异种\n";
		Sleep(2000);
		cout<<"它们变得与常人不同,拥有更强大的力量与更强大的身体\n";
		Sleep(3000);
		cout<<"正常人类带着排斥接受着它们\n";
		Sleep(2000);
		cout<<"不知过了多久，人类异种窃取了正常人类的技术，但仍然没能继承人类的人性\n";
		Sleep(3500);
		cout<<"人类异种DYZ带着他的亲卫队，妄图与创世主ZYD抗衡，夺取世界能量的来源——定界石\n";
		Sleep(4000);
		cout<<"那次人类使出了全力对抗异种\n";
		Sleep(1500);
		cout<<"双方死伤惨重,人类花了200年才恢复过来\n";
		cout<<"而人类异种从此销声匿迹\n";
		Sleep(3000);
		system("cls");
		cout<<"但现在，他们卷土重来了！！！";
		Sleep(2000);
		system("cls");
		cout<<"作为人类守护联盟的盟主，你能否担起重任，像千年以前的ZYD一样拯救世界？";
		Sleep(3000);
	}
	while(true){
		system("cls");
		cout<<"战争 6.2.7\n";
		cout<<"0 开始\n";
		cout<<"1 攻略\n";
		cout<<"2 造物主模式\n";
		cout<<"3 生存模式\n";
		cout<<"4 衰竭模式\n";
		ch=getch();
		if(ch=='1'){
			cout<<char(7);
			cout<<"首先，你可以一直按0大约10次，攒到大约200\n";
			cout<<"然后，你可以建一层护盾和一个哨兵塔，用来进攻\n";
			cout<<"接着，继续攒钱，建高射炮来防御坦克及飞机\n";
			cout<<"最后，只需要在建筑有破损时重建就行了\n";
			getch();
		}
		else if(ch=='2'){
			system("cls");
			g=10000;
			jkl=500;
			e1=100000;
			hd=10;
			o1=5000;
			break;
		}
		else if(ch=='3'){
			system("cls");
			g=1000;
			e1=100000;
			hd=5;
			o1=5000;
			break;
		}
		else if(ch=='4'){
			system("cls");
			e=100;
			break;
		}
		else if(ch=='@'){
			cout<<char(7)<<char(7)<<char(7)<<char(7);
			cout<<"此版本已上传至conio_h\n张晏栋真帅!";
			Sleep(1500);
		} 
		else if(ch=='0') break;
		else cout<<"不要乱输\n";
	}
	system("cls");
	if(ssss!="test"){
		cout<<"加载中...";
		cout<<endl;
		srand(time(0));
		xx=rand()%11;
		switch(xx){
			case 0:cout<<"高射炮不仅可以打飞机，把它压下来也可以打地面敌人！";break;
			case 1:cout<<"迫击炮不仅可以打小兵，还能打敌方基地！";break;
			case 2:cout<<"小兵打敌方基地的伤害十分可观。";break;
			case 3:cout<<"导弹可以直接打对方的基地！";break;
			case 4:cout<<"千万别让小兵接近你的基地，你的建筑十分危险！";break;
			case 5:cout<<"激光炮可以攻击小兵、坦克、飞机或直接进攻敌方，十分强大！";break;
			case 6:cout<<"护盾可以抵挡敌方的一次远程进攻哦！";break;
			case 7:cout<<"克隆法术可以将小兵数量变成原来的两倍，在关键时刻能起到意想不到的作用";break;
			case 8:cout<<"岩石地雷可以在五回合后炸死敌方所有小兵哦！";break;
			case 9:cout<<"晶坷垃是一种新型货币，不可与金币互换。";break;
			case 10:cout<<"头铁少年破盾，钻地少年清兵。但需要耗费晶坷垃，且没有动静。";break; 
		}
		cout<<'\n';
		for(i=0;i<=12;i++) cout<<'<',Sleep(100);
		Beep(1500,200);
		for(i=0;i<=12;i++) cout<<'<',Sleep(100);
		Beep(1500,200);
		for(i=0;i<=12;i++) cout<<'<',Sleep(100);
		Beep(1500,200);
		for(i=0;i<=14;i++) cout<<'<',Sleep(100);
		Beep(2000,1000);
		cout<<" 100%";
		Sleep(1500);
		system("cls");
	}else
	{
		cout<<"ji guang pao (ji fang):";
		cin>>jg;
		cout<<"di fang gong ji li:";
		cin>>e;
	}
	while(o1>0&&e1>0&&(sssss=="16391639"||ch=='3'||ch=='2'||g<=100000&&o1<=300000)){
		int ttt=o2;
		int fff=e2;
		o1-=e;
		int last_hp=o1;
		int last_hpe=e1;
		jkl++;
		jkl+=jkl_kc;
		water++;
		xs(ch);
		d=' ';
		srand(time(NULL));
		l=rand()%30+1;
		if(zx!=0){
			zx--;
			l=12;
		}
		if(l>=0&&l<=1){
			sl=rand()%20+1;
			cout<<sl<<"个小兵出现了\n";
			e2+=sl;
		}
		if(l>=2&&l<=3){
			if(hd==0){
				o1-=100;
				cout<<"一颗导弹在空中画出了一道完美的弧线\n";
			}
			else{
				hd--;
				cout<<"一颗导弹炸毁了一层护盾\n";
			}
		}
		if(l>=4&&l<=5){
			if(o2==0)
				if(tk!=0){
					cout<<"迫击炮轰然发射出一颗炮弹，炸毁一辆坦克\n";
					tk--;
				}
				else if(hd!=0){
					cout<<"迫击炮轰然发射出一颗炮弹，炸毁了一层护盾\n";
					hd--;
				} 
				else{
					cout<<"迫击炮轰然发射出一颗炮弹，向你方飞来\n";
					o1-=80;
				}
			else{
				o2-=40;
				if(o2<0) o2=0;
				cout<<"迫击炮轰然发射出一颗炮弹，炸死一批小兵\n";
			}
		}
		if(l>=6&&l<=7){
			cout<<"一块巨石忽忽悠悠地飞来\n";
			o2-=35;
			if(o2<0) o2=0;
		}
		if(l>=8&&l<=9){
			cout<<"一颗狙击枪子弹射来，";
			if(pj!=0){
				cout<<"一门迫击炮炸了\n";
				pj--;
			}
			else if(jg!=0){
				cout<<"一门激光炮炸了\n";
				jg--;
			} 
			else if(ts!=0){
				cout<<"一门投石机炸了\n";
				ts--;
			}
			else if(bt!=0){
				cout<<"一座哨兵塔炸了\n";
				bt--;
			}
			else if(hd!=0){
				cout<<"一层护盾炸了\n";
				hd--;
			}
			else{
				cout<<"扣血150点\n";
				o1-=150;
			}
		}
		if(l>=10&&l<=10){
			srand(time(NULL));
			sl=rand()%3+1;
			if(sl==3) sl=2;
			else sl=1;
			cout<<sl<<"辆坦克轰然出现\n";
			tke+=sl;
		}
		if(l>=13&&l<=13){
			cout<<"敌方建造了一个护盾\n";
			hde++;
		}
		if(l>=14&&l<=15){
			if(fj!=0){
				cout<<"高射炮向天空扫去，一架飞机掉了下来\n";
				fj--;
			}
			else{
				if(tk!=0){
					cout<<"高射炮向地面扫去，炸毁一辆坦克\n";
					tk--;
				}
				else{
					if(o2!=0){
						cout<<"高射炮向地面扫去，炸死一个小兵\n";
						o2--;
					}
					else cout<<"高射炮没有目标\n";
				}
			}
		}
		if(l>=16&&l<=16){
			cout<<"一架飞机出现了\n";
			fje++;
		}
		if(l>=17&&l<=18){
			cout<<"瘟疫发生了\n";
			o2/=2;
		}
		if(l>=19&&l<=19){
			if(fj>=2){
				cout<<"一束激光射向天空，两架飞机掉了下来\n";
				fj-=2;
			}
			else{
				if(fj==1){
					cout<<"一束激光射向天空，一架飞机掉了下来\n";
					fj--;
				}
				else if(tk!=0&&o2!=0){
					cout<<"一束激光平射而来，击毁了"<<min(3,tk)<<"辆坦克，炸死"<<min(20,o2)<<"个小兵\n";
					tk-=min(3,tk);
					o2-=min(20,o2); 
				}
				else{
					if(tk!=0){
						cout<<"一束激光平射而来，击毁了"<<min(3,tk)<<"辆坦克\n";
						tk-=min(3,tk);
					}
					else{
						if(o2!=0){
							cout<<"一束激光平射而来，炸死"<<min(20,o2)<<"个小兵\n";
							o2-=min(20,o2);
						}
						else if(hd!=0){
							cout<<"一束激光平射而来，一层护盾炸了\n"; 
							hd--;
						}
						else{
							cout<<"一束激光向你方平射而来\n";
							o1-=100;
						}
					}
				}
			}
		}
		if(l<=20&&l>=20){
			cout<<"对方使用了神秘的法术，小兵数量变成了两倍\n";
			e2*=2;
		}
		if(l<=21&&l>=21){
			cout<<"这轮什么也没出现\n";
			jde++;
		}
		if(l>=11&&l<=12||l>=22&&l<=23||l>=28&&l<=30){
			cout<<"这轮什么也没出现\n";
		}
		if(l>=24&&l<=25){
			cout<<"敌方建造了一个屏障\n";
			pze++;
		}
		if(l>=26&&l<=26){
			cout<<"敌方建造了一个量子屏障\n";
			lzpze++;
		}
		if(l>=27&&l<=27){
			cout<<"这轮什么也没出现\n";
			dle++;
		}
		dd=rand()%30+1+jk*5;
		cout<<"你得到了"<<dd<<"个金币\n";
		g+=dd;
		Sleep(2000);
		system("cls");
		while(d!='0'){
			xs(ch);
			cout<<left<<setw(20)<<"1 派出小兵 3$/1";
			cout<<left<<setw(20)<<"2 导弹 50$/1"<<"\n";
			cout<<left<<setw(20)<<"3 迫击炮 120$/1";
			cout<<left<<setw(20)<<"4 投石机 100$/1"<<"\n";
			cout<<left<<setw(20)<<"5 坦克 60$/1";
			cout<<left<<setw(20)<<"6 哨兵塔 100$/1"<<"\n";
			cout<<left<<setw(20)<<"7 高射炮 120$/1";
			cout<<left<<setw(20)<<"8 飞机 80$/1"<<"\n";
			cout<<left<<setw(20)<<"9 瘟疫 50$/1";
			cout<<left<<setw(20)<<"a 激光炮 180$/1"<<"\n";
			cout<<left<<setw(20)<<"b 护盾 80$/1";
			cout<<left<<setw(20)<<"c 克隆法术 80$/1";
			if(ch=='3') cout<<"禁用\n";
			else cout<<"\n";
			cout<<left<<setw(20)<<"d 金矿开采机 50$/1";
			cout<<left<<setw(20)<<"e 间谍 80$/1"<<"\n";
			cout<<left<<setw(20)<<"f 诈降书 150$/1";
			if(zx!=0) cout<<"禁用";
			else cout<<"";
			cout<<left<<setw(20)<<"g 屏障 2$/1"<<"\n";
			cout<<left<<setw(20)<<"h 量子屏障 10$/1";
			cout<<left<<setw(20)<<"i 岩石地雷 50$/1"<<"\n";
			cout<<left<<setw(20)<<"j 晶坷垃开采器 5G/1";
			cout<<left<<setw(20)<<"k 头铁少年 5G/1"<<"\n";
			cout<<left<<setw(20)<<"l 钻地少年 5G/1";
			 
			cout<<"\\ 关闭\n";
			cout<<"# 礼包码(hehe为官方礼包码)\n";
			cout<<"0 继续";
			d=getch();
			if(d=='#'){
				system("cls");
				cout<<"请输入礼包码形如 ***_love_*** 或 **-**-** 及你名字的缩写的小写形式\n";
				cout<<"请输入:";
				string str;
				cin>>str;
				if(str=="hehe")
				{
					cout<<"shadiao";
					Sleep(1000);
					return;
				} 
				if(str=="zyd_love_yzy"||str=="ZYD_love_YZY")
				  g+=1000,jkl+=100,e1-=1000;
				if(str=="07-10-13"||str=="08-04-23")
				  g+=1000,jkl+=50,e1-=500;
				if(str=="wyr"||str=="yzy"||str=="jky"||str=="xh")
				  g+=1000,jkl+=50;
				if(str=="ZYD")
				  g+=10000,jkl+=1000;
				cout<<"正在处理...";
				Sleep(1500);
				system("cls");
				continue;
			} 
			if(d=='\\'){
				system("cls");
				return;
			}
			if(d=='1'){
				system("cls");
				xs(ch);
				cout<<"数量:";
				cin>>s;
				while(s*3>g){
					system("cls");
					xs(ch);
					cout<<"数量:";
					cin>>s;
				}
				o2+=s;
				g-=s*3;
				system("cls");
			}
			if(d=='2'){
				if(g>=50){
					g-=50;
					if(hde!=0){
						e1-=100;
					}
					else{
						hde--;
					}
				}
			}
			if(d=='3'){
				if(g>=120){
					g-=120;
					pj++;
				}
			}
			if(d=='4'){
				if(g>=100){
					g-=100;
					ts++;
				}
			}
			if(d=='5'){
				if(g>=60){
					g-=60;
					tk++;
				}
			}
			if(d=='6'){
				if(g>=100){
					g-=100;
					bt++;
				}
			}
			if(d=='7'){
				if(g>=120){
					g-=120;
					gs++;
				}
			}
			if(d=='8'){
				if(g>=80){
					g-=80;
					fj++;
				}
			}
			if(d=='9'){
				if(g>=50){
					g-=50;
					e2/=2;
				}
			}
			if(d=='a'){
				if(g>=180){
					g-=180;
					jg++;
				}
			} 
			if(d=='b'){
				if(g>=80){
					g-=80;
					hd++;
				}
			}
			if(d=='c'){
				if(g>=80&&ch!='3'){
					g-=80;
//					system("cls");
//					cout<<"一抹神秘的光辉映在天空中，小兵变成了原来的两倍\n";
//					Sleep(2500);
					o2*=2; 
				}
			}
			if(d=='d'){
				if(g>=50){
					g-=50;
					jk++;
				}
			}
			if(d=='e'){
				if(g>=80){
					g-=80;
					jd++;
				}
			} 
			if(d=='f'){
				if(g>=150&&zx==0){
					g-=150;
					zx+=5;
				}
			}
			if(d=='g'){
				system("cls");
				xs(ch);
				cout<<"数量:";
				cin>>s;
				while(s*2>g){
					system("cls");
					xs(ch);
					cout<<"数量:";
					cin>>s;
				}
				pz+=s;
				g-=s*2;
				system("cls");
			}
			if(d=='h'){
				system("cls");
				xs(ch);
				cout<<"数量:";
				cin>>s;
				while(s*10>g){
					system("cls");
					xs(ch);
					cout<<"数量:";
					cin>>s;
				}
				lzpz+=s;
				g-=s*10;
				system("cls");
			}
			if(d=='i'){
				if(g>=50){
					g-=50;
					dl+=5;
				}
			}
			if(d=='j'){
				if(jkl>=5){
					jkl-=5;
					jkl_kc++;
				}
			}
			if(d=='k'){
				if(jkl>=5){
					jkl-=5;
					tt++;
				}
			}
			if(d=='l'){
				if(jkl>=5){
					jkl-=5;
					zd++;
				}
			}
			system("cls");
		}
		if(dl!=0){
			if(dl%5!=0)
			  dl-=(dl/5+1);else
			  dl-=dl/5;
			if(dl%5==0){
				cout<<"一声惊天巨响，敌方小兵化为骨灰\n";
				e2=0;
			}
		}
		if(dle!=0){
			if(dle%5!=0)
			  dle-=(dle/5+1);else
			  dle-=dle/5;
			if(dle%5==0){
				cout<<"一声惊天巨响，我方小兵化为骨灰\n";
				o2=0;
			}
		}
		if(jd!=0){
			if(e2!=0){
				cout<<"我方间谍使敌方"<<min(jd,e2)<<"个小兵叛变了\n";
				e2-=min(jd,e2);
				o2+=min(jd,e2);
			}
			else{
				cout<<"我方间谍被发现！\n";
				jd=0; 
			} 
		}
		if(jde!=0){
			if(o2!=0){
				o2-=min(jde,o2);
				e2+=min(jde,o2);
			}
			else{
				cout<<"敌方间谍被发现！\n";
				jde=0; 
			} 
		}
		if(tt!=0){
			if(hde!=0){
				hde-=min(min(tt,hde),jkl);
				jkl-=min(min(tt,hde),jkl);
			}
			if(hde<=0) hde=0;
		}
		if(zd!=0){
			if(e2!=0){
				e2-=min(min(e2/10,zd),jkl);
				jkl-=min(min(e2/10,zd),jkl);
			}
			if(e2<=0) e2=0;
		}
		for(i=1;i<=pj;i++)
			if(e2==0)
				if(tke!=0){
					cout<<"迫击炮轰然发射出一颗炮弹，炸毁一辆坦克\n";
					tke--;
				}
				else{
					if(hde!=0){
						cout<<"迫击炮轰然发射出一颗炮弹，击毁一层护盾\n";
						hde--; 
					}
					else{
						cout<<"迫击炮轰然发射出一颗炮弹，向敌方飞去\n";
						e1-=80;
					} 
				}
			else{
				if(e2>=40){
					g+=80;
					e2-=40;
				}
				else{
					g+=e2*2;
					e2=0;
				}
				if(e2<0) e2=0;
				cout<<"迫击炮轰然发射出一颗炮弹，炸死一批小兵\n";
			}
		for(i=1;i<=ts;i++){
			if(e2>=35){
				e2-=35;
				g+=70;
			}
			else{
				g+=e2*2;
				e2=0;
			}
			cout<<"一块巨石忽忽悠悠地飞去\n";
		}
		for(i=1;i<=bt;i++){
			cout<<"5个小兵慢悠悠地从哨兵塔里走出来\n";
			o2+=5;
		}
		for(i=1;i<=gs;i++){
			if(fje!=0){
				cout<<"高射炮向天空扫去，一架飞机掉了下来\n";
				fje--;
			}
			else{
				if(tke!=0){
					cout<<"高射炮向地面扫去，炸毁一辆坦克\n";
					tke--;
				}
				else{
					if(e2!=0){
						cout<<"高射炮向地面扫去，炸死一个小兵\n";
						e2--;
					}
					else cout<<"高射炮没有目标\n";
				}
			}
		}
		for(i=1;i<=jg;i++)
			if(fje>=2){
				cout<<"一束激光射向天空，两架飞机掉了下来\n";
				fje-=2;
			}
			else{
				if(fje==1){
					cout<<"一束激光射向天空，一架飞机掉了下来\n";
					fje--;
				}
				else if(tke!=0&&e2!=0){
					cout<<"一束激光平射出去，击毁了"<<min(3,tke)<<"辆坦克，炸死"<<min(15,e2)<<"个小兵\n";
					tke-=min(3,tke);
					e2-=min(15,e2); 
				}
				else{
					if(tke!=0){
						cout<<"一束激光平射出去，击毁了"<<min(3,tke)<<"辆坦克\n";
						tke-=min(3,tke);
					}
					else{
						if(e2!=0){
							cout<<"一束激光平射出去，炸死"<<min(15,e2)<<"个小兵\n";
							e2-=min(15,e2);
						}
						else{
							if(hde!=0){
								cout<<"一束激光平射出去，击毁一层护盾\n";
								hde--; 
							}
							else{
								cout<<"一束激光向敌方平射出去\n";
								e1-=150;
							} 
							
						}
					}
				}
			}
		if(fj!=0&&fje!=0){
			fk=fj<fje?fj:fje;
			fj-=fk;fje-=fk;
			cout<<"双方都有"<<fk<<"架飞机从空中落下来了\n";
		}
		for(i=1;i<=fj;i++){
			if(hde!=0){
				cout<<"我方飞机击毁一层护盾\n";
				hde--;
			}
			else{
				cout<<"我方俯冲轰炸！\n";
				e1-=150;
			}
		}
		for(i=1;i<=fje;i++){
			if(hd!=0){
				cout<<"敌方飞机击毁我方一层护盾\n";
				hd--;
			}
			else{
				cout<<"敌方俯冲轰炸！\n";
				o1-=150;
			}
		}
		if(tk!=0&&tke!=0){
			tkk=tk<tke?tk:tke;
			cout<<"坦克开炮了，双方都有"<<tkk<<"门坦克损毁了\n";
			tk-=tkk;tke-=tkk;
		}
		if(o2!=0&&tke*20>o2){
			cout<<"坦克开炮了，"<<o2<<"个小兵死去了\n";
			if(o2/20!=0)
				cout<<o2/20<<"门坦克损毁了\n";
			o2=0;tke-=o2/20;
		}
		if(tke!=0&&o2>=tke*20){
			cout<<"坦克开炮了，"<<tke*20<<"个小兵死去了\n";
			g+=tke*60;
			cout<<tke<<"门坦克损毁了\n";
			o2-=tke*20;tke=0;
		}
		if(o2!=0&&e2!=0)
			cout<<"有小兵倒下去了\n";
		else cout<<"没有小兵倒下\n";
		if(e2!=0&&tk*20>e2){
			cout<<"坦克开炮了，"<<e2<<"个小兵死去了\n";
			g+=tk*60;
			if(e2/20!=0)
				cout<<e2/20<<"门坦克损毁了\n";
			e2=0;tk-=e2/20;
		}
		if(tk!=0&&e2>=tk*20){
			cout<<"坦克开炮了，"<<tk*20<<"个小兵死去了\n";
			g+=tk*60;
			cout<<tk<<"门坦克损毁了\n";
			e2-=tk*20;tk=0;
		}
		if(ttt-o2>50){
			o2-=(ttt-o2)/10;
			cout<<"我方有"<<(ttt-o2)/10<<"个小兵逃走了"; 
		}
		if(fff-e2>50){
			e2-=(fff-e2)/10;
			cout<<"敌方有"<<(fff-e2)/10<<"个小兵逃走了"; 
		}
		if(o2>e2){
			g+=e2*2;
			o2-=e2;
			e2=0;
		}
		else{
			g+=o2*2;
			e2-=o2;
			o2=0;
		}
		if(o2!=0){
			e1-=o2*5;
			cout<<"我方小兵围殴敌方，扣血"<<o2*5<<"点\n";
		}
		if(tk!=0){
			e1-=tk*20;
			cout<<"我方坦克围殴敌方，扣血"<<tk*20<<"点\n";
		}
		if(e2!=0){
			k=e2;
			if(pj*30>k){
				if(k/30!=0)
					cout<<k/30<<"门迫击炮损坏了\n";
				pj-=k/30;
			}
			else{
				if(pj!=0)
					cout<<pj<<"门迫击炮损坏了\n";
				k-=pj*30;pj=0;
				if(ts*25>k){
					if(k/25!=0)
						cout<<k/25<<"门投石机损坏了\n";
					ts-=k/25;
				}
				else{
					if(ts!=0)
						cout<<ts<<"门投石机损坏了\n";
					k-=ts*25;ts=0;
					if(jg*35>k){
						if(k/35!=0)
							cout<<k/35<<"架激光炮损坏了\n";
						jg-=k/35;
					}
					else{
						if(jg!=0)
							cout<<jg<<"架激光炮损坏了\n";
						k-=jg*35;jg=0;
						if(bt*20>k){
							if(k/20!=0)
								cout<<k/20<<"座哨兵塔损坏了\n";
							bt-=k/20;
						}
						else{
							if(bt!=0)
								cout<<bt<<"座哨兵塔损坏了\n";
							k-=bt*20;bt=0;
							if(k!=0){
								cout<<"敌方小兵围殴我方，扣血"<<k*5<<"点\n";
								o1-=k*5;
							}
						}
					}
				}
			}
		}
		for(i=1;i<=tke;i++){
			if(pj!=0){
				pj--;
				cout<<"1门迫击炮损坏了\n";
			}
			else if(jg!=0){
				jg--;
				cout<<"1架激光炮损坏了\n";
			}
			else if(ts!=0){
				ts--;
				cout<<"1门投石机损坏了\n"; 
			}
			else if(bt!=0){
				bt--;
				cout<<"1座哨兵塔损坏了\n";
			}
			else{
				o1-=(tke-i+1)*100;
				cout<<"敌方坦克围殴我方，扣血"<<(tke-i+1)*100<<"点\n";
				i=tke;
			}
		}
		if(o1<last_hp) o1+=min(lzpz,last_hp-o1);
		if(o1<last_hp){
			o1+=min(pz,last_hp-o1);
			pz-=min(pz,last_hp-o1);
		}
		if(e1<last_hpe) e1+=min(lzpze,last_hpe-e1);
		if(e1<last_hpe){
			e1+=min(pze,last_hpe-e1);
			pze-=min(pze,last_hpe-e1);
		}
		Sleep(3000);
		system("cls");
		if(ch=='3') ++iii;
	}
//	if(g>10000||o1>10000) bg();
	if(o1<=0){
		if(e1>500&&e1<1500) cout<<"城池被攻破，人类的最后一道防线破碎，人类沦为了宇宙中的一片尘埃。\n";
		if(e1>=1500) cout<<"你已经很努力了，但敌方太强，你无法抗衡\n人类不堪的淹没在了历史的长河中。\n";
		if(e1<=500) cout<<"你的各个方面都很强，但在最后无法力挽狂澜，才使人类文明灭亡。\n"; 
	}
	else{
		if(o1>500&&o1<1500) cout<<"你靠自己的顽强决心守住了城池，救回了人类文明。\n";
		if(o1<=500) cout<<"你在最后的紧要关头击退了人类异种，挽救了人类文明。\n";
		if(o1>=1500) cout<<"你以自己的高超指挥能力击退了人类异种，拯救了整个人类！！！\n\n";
	}
	Sleep(3000);
	system("cls");
	cout<<"conio_h工作组:ZYD,WYR,TJC,CJX,WQY,JKY,YZY,ZXY\n";
	Sleep(2500);
	system("cls");
	cout<<"制作:ZYD,YZY\n";
	Sleep(1500);
	system("cls");
	cout<<"优化:ZYD,WYR,TJC\n";
	Sleep(1500);
	system("cls");
	cout<<"后期维修:ZYD,YZY\n";
	Sleep(1500);
	system("cls");
	cout<<"定时更新:ZYD,CJX\n";
	Sleep(1500);
	system("cls");
	cout<<"构思:ZYD,JKY,WQY\n";
	Sleep(1500);
	system("cls");
	cout<<"小说创作:JKY,ZYD,WYR,ZXY\n";
	Sleep(2000);
	system("cls");
	cout<<"财务管理:ZYD,XH\n";
	Sleep(1500);
	system("cls");
	cout<<"友情客串:TJC,CJX,WQY,ZXY\n";
	Sleep(2000);
	system("cls");
	cout<<"赞助商:XH,SX,ZYH\n";
	Sleep(1500);
	system("cls");
	cout<<"若有bug,加入需求及新想法,请发电子邮件至conio_h@163.com\n";
	cout<<"Goodbye!\n";
	system("pause"); 
	return;
}
void bg(){
	cout<<"小朋友想走不正当途径是不好的\n";
	Sleep(3000);
	xs(ch);
	for(i=1;i<=100000000;i++)
		 cout<<"迫击炮轰然发射出一颗炮弹，向你方飞来\n";
	cout<<"你死了！";
}
int main()
{
	cout<<"                                                                        ##\n";
	cout<<"       ########                               ##                        ##\n";
	cout<<"      ##                                                                ##\n";
	cout<<"     ##    #####    #####   #####    #####    ##    #####               #####\n";
	cout<<"     ##   ##   ##  ##      ##   ##  ##   ##   ##   ##   ##              ##  ##\n";
	cout<<"      ##  ##   ##  ##      ##   ##  ##   ##   ##   ##   ##              ##  ##\n";
	cout<<"       #########    #####   #####   ##   ##   ##    #####  made_by_zyd  ##  ##\n";
	cout<<"          ##\n";
	cout<<"          ##\n";
	cout<<"          ##\n";
	cout<<"          ##\n";
	cout<<"          ##\n";
	cout<<"           #\n";
	cout<<"                                  conio_h出品\n";
	Sleep(5000);
	system("cls"); 
	cout<<"请输入姓名\n";
	cin>>ssss;
	if(ssss=="16391639"||ssss=="40"||ssss=="conio"||ssss=="test")
	  system("cls"),aa(ssss);else
	  cout<<"Goodbye!",Sleep(10000),bg();
	return 0;
}
