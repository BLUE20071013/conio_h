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
	cout<<"�����($)��"<<g<<endl;
	cout<<"������(G)��"<<jkl<<endl;
	cout<<"�ҷ�������"<<o2+jde<<endl;
	cout<<"�з�������"<<e2+jd<<endl;
	cout<<"�ҷ�Ѫ����"<<o1<<endl;
	cout<<"�з�Ѫ����"<<e1<<endl;
	if(ccc=='3') cout<<"������������"<<iii<<endl;
	if(zx!=0) cout<<"�Ѵ���թ��״̬"<<endl; 
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
		cout<<"��ǧ����ǰ����һȺ���౻��Ⱦ��������\n";
		Sleep(2000);
		cout<<"���Ǳ���볣�˲�ͬ,ӵ�и�ǿ����������ǿ�������\n";
		Sleep(3000);
		cout<<"������������ų����������\n";
		Sleep(2000);
		cout<<"��֪���˶�ã�����������ȡ����������ļ���������Ȼû�ܼ̳����������\n";
		Sleep(3500);
		cout<<"��������DYZ�������������ӣ���ͼ�봴����ZYD���⣬��ȡ������������Դ��������ʯ\n";
		Sleep(4000);
		cout<<"�Ǵ�����ʹ����ȫ���Կ�����\n";
		Sleep(1500);
		cout<<"˫�����˲���,���໨��200��Żָ�����\n";
		cout<<"���������ִӴ������伣\n";
		Sleep(3000);
		system("cls");
		cout<<"�����ڣ����Ǿ��������ˣ�����";
		Sleep(2000);
		system("cls");
		cout<<"��Ϊ�����ػ����˵����������ܷ������Σ���ǧ����ǰ��ZYDһ���������磿";
		Sleep(3000);
	}
	while(true){
		system("cls");
		cout<<"ս�� 6.2.7\n";
		cout<<"0 ��ʼ\n";
		cout<<"1 ����\n";
		cout<<"2 ������ģʽ\n";
		cout<<"3 ����ģʽ\n";
		cout<<"4 ˥��ģʽ\n";
		ch=getch();
		if(ch=='1'){
			cout<<char(7);
			cout<<"���ȣ������һֱ��0��Լ10�Σ��ܵ���Լ200\n";
			cout<<"Ȼ������Խ�һ�㻤�ܺ�һ���ڱ�������������\n";
			cout<<"���ţ�������Ǯ����������������̹�˼��ɻ�\n";
			cout<<"���ֻ��Ҫ�ڽ���������ʱ�ؽ�������\n";
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
			cout<<"�˰汾���ϴ���conio_h\n���̶���˧!";
			Sleep(1500);
		} 
		else if(ch=='0') break;
		else cout<<"��Ҫ����\n";
	}
	system("cls");
	if(ssss!="test"){
		cout<<"������...";
		cout<<endl;
		srand(time(0));
		xx=rand()%11;
		switch(xx){
			case 0:cout<<"�����ڲ������Դ�ɻ�������ѹ����Ҳ���Դ������ˣ�";break;
			case 1:cout<<"�Ȼ��ڲ������Դ�С�������ܴ�з����أ�";break;
			case 2:cout<<"С����з����ص��˺�ʮ�ֿɹۡ�";break;
			case 3:cout<<"��������ֱ�Ӵ�Է��Ļ��أ�";break;
			case 4:cout<<"ǧ�����С���ӽ���Ļ��أ���Ľ���ʮ��Σ�գ�";break;
			case 5:cout<<"�����ڿ��Թ���С����̹�ˡ��ɻ���ֱ�ӽ����з���ʮ��ǿ��";break;
			case 6:cout<<"���ܿ��Եֵ��з���һ��Զ�̽���Ŷ��";break;
			case 7:cout<<"��¡�������Խ�С���������ԭ�����������ڹؼ�ʱ���������벻��������";break;
			case 8:cout<<"��ʯ���׿�������غϺ�ը���з�����С��Ŷ��";break;
			case 9:cout<<"��������һ�����ͻ��ң��������һ�����";break;
			case 10:cout<<"ͷ�������ƶܣ�����������������Ҫ�ķѾ���������û�ж�����";break; 
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
			cout<<sl<<"��С��������\n";
			e2+=sl;
		}
		if(l>=2&&l<=3){
			if(hd==0){
				o1-=100;
				cout<<"һ�ŵ����ڿ��л�����һ�������Ļ���\n";
			}
			else{
				hd--;
				cout<<"һ�ŵ���ը����һ�㻤��\n";
			}
		}
		if(l>=4&&l<=5){
			if(o2==0)
				if(tk!=0){
					cout<<"�Ȼ��ں�Ȼ�����һ���ڵ���ը��һ��̹��\n";
					tk--;
				}
				else if(hd!=0){
					cout<<"�Ȼ��ں�Ȼ�����һ���ڵ���ը����һ�㻤��\n";
					hd--;
				} 
				else{
					cout<<"�Ȼ��ں�Ȼ�����һ���ڵ������㷽����\n";
					o1-=80;
				}
			else{
				o2-=40;
				if(o2<0) o2=0;
				cout<<"�Ȼ��ں�Ȼ�����һ���ڵ���ը��һ��С��\n";
			}
		}
		if(l>=6&&l<=7){
			cout<<"һ���ʯ�������Ƶط���\n";
			o2-=35;
			if(o2<0) o2=0;
		}
		if(l>=8&&l<=9){
			cout<<"һ�žѻ�ǹ�ӵ�������";
			if(pj!=0){
				cout<<"һ���Ȼ���ը��\n";
				pj--;
			}
			else if(jg!=0){
				cout<<"һ�ż�����ը��\n";
				jg--;
			} 
			else if(ts!=0){
				cout<<"һ��Ͷʯ��ը��\n";
				ts--;
			}
			else if(bt!=0){
				cout<<"һ���ڱ���ը��\n";
				bt--;
			}
			else if(hd!=0){
				cout<<"һ�㻤��ը��\n";
				hd--;
			}
			else{
				cout<<"��Ѫ150��\n";
				o1-=150;
			}
		}
		if(l>=10&&l<=10){
			srand(time(NULL));
			sl=rand()%3+1;
			if(sl==3) sl=2;
			else sl=1;
			cout<<sl<<"��̹�˺�Ȼ����\n";
			tke+=sl;
		}
		if(l>=13&&l<=13){
			cout<<"�з�������һ������\n";
			hde++;
		}
		if(l>=14&&l<=15){
			if(fj!=0){
				cout<<"�����������ɨȥ��һ�ܷɻ���������\n";
				fj--;
			}
			else{
				if(tk!=0){
					cout<<"�����������ɨȥ��ը��һ��̹��\n";
					tk--;
				}
				else{
					if(o2!=0){
						cout<<"�����������ɨȥ��ը��һ��С��\n";
						o2--;
					}
					else cout<<"������û��Ŀ��\n";
				}
			}
		}
		if(l>=16&&l<=16){
			cout<<"һ�ܷɻ�������\n";
			fje++;
		}
		if(l>=17&&l<=18){
			cout<<"���߷�����\n";
			o2/=2;
		}
		if(l>=19&&l<=19){
			if(fj>=2){
				cout<<"һ������������գ����ܷɻ���������\n";
				fj-=2;
			}
			else{
				if(fj==1){
					cout<<"һ������������գ�һ�ܷɻ���������\n";
					fj--;
				}
				else if(tk!=0&&o2!=0){
					cout<<"һ������ƽ�������������"<<min(3,tk)<<"��̹�ˣ�ը��"<<min(20,o2)<<"��С��\n";
					tk-=min(3,tk);
					o2-=min(20,o2); 
				}
				else{
					if(tk!=0){
						cout<<"һ������ƽ�������������"<<min(3,tk)<<"��̹��\n";
						tk-=min(3,tk);
					}
					else{
						if(o2!=0){
							cout<<"һ������ƽ�������ը��"<<min(20,o2)<<"��С��\n";
							o2-=min(20,o2);
						}
						else if(hd!=0){
							cout<<"һ������ƽ�������һ�㻤��ը��\n"; 
							hd--;
						}
						else{
							cout<<"һ���������㷽ƽ�����\n";
							o1-=100;
						}
					}
				}
			}
		}
		if(l<=20&&l>=20){
			cout<<"�Է�ʹ�������صķ�����С���������������\n";
			e2*=2;
		}
		if(l<=21&&l>=21){
			cout<<"����ʲôҲû����\n";
			jde++;
		}
		if(l>=11&&l<=12||l>=22&&l<=23||l>=28&&l<=30){
			cout<<"����ʲôҲû����\n";
		}
		if(l>=24&&l<=25){
			cout<<"�з�������һ������\n";
			pze++;
		}
		if(l>=26&&l<=26){
			cout<<"�з�������һ����������\n";
			lzpze++;
		}
		if(l>=27&&l<=27){
			cout<<"����ʲôҲû����\n";
			dle++;
		}
		dd=rand()%30+1+jk*5;
		cout<<"��õ���"<<dd<<"�����\n";
		g+=dd;
		Sleep(2000);
		system("cls");
		while(d!='0'){
			xs(ch);
			cout<<left<<setw(20)<<"1 �ɳ�С�� 3$/1";
			cout<<left<<setw(20)<<"2 ���� 50$/1"<<"\n";
			cout<<left<<setw(20)<<"3 �Ȼ��� 120$/1";
			cout<<left<<setw(20)<<"4 Ͷʯ�� 100$/1"<<"\n";
			cout<<left<<setw(20)<<"5 ̹�� 60$/1";
			cout<<left<<setw(20)<<"6 �ڱ��� 100$/1"<<"\n";
			cout<<left<<setw(20)<<"7 ������ 120$/1";
			cout<<left<<setw(20)<<"8 �ɻ� 80$/1"<<"\n";
			cout<<left<<setw(20)<<"9 ���� 50$/1";
			cout<<left<<setw(20)<<"a ������ 180$/1"<<"\n";
			cout<<left<<setw(20)<<"b ���� 80$/1";
			cout<<left<<setw(20)<<"c ��¡���� 80$/1";
			if(ch=='3') cout<<"����\n";
			else cout<<"\n";
			cout<<left<<setw(20)<<"d ��󿪲ɻ� 50$/1";
			cout<<left<<setw(20)<<"e ��� 80$/1"<<"\n";
			cout<<left<<setw(20)<<"f թ���� 150$/1";
			if(zx!=0) cout<<"����";
			else cout<<"";
			cout<<left<<setw(20)<<"g ���� 2$/1"<<"\n";
			cout<<left<<setw(20)<<"h �������� 10$/1";
			cout<<left<<setw(20)<<"i ��ʯ���� 50$/1"<<"\n";
			cout<<left<<setw(20)<<"j ������������ 5G/1";
			cout<<left<<setw(20)<<"k ͷ������ 5G/1"<<"\n";
			cout<<left<<setw(20)<<"l ������� 5G/1";
			 
			cout<<"\\ �ر�\n";
			cout<<"# �����(heheΪ�ٷ������)\n";
			cout<<"0 ����";
			d=getch();
			if(d=='#'){
				system("cls");
				cout<<"��������������� ***_love_*** �� **-**-** �������ֵ���д��Сд��ʽ\n";
				cout<<"������:";
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
				cout<<"���ڴ���...";
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
				cout<<"����:";
				cin>>s;
				while(s*3>g){
					system("cls");
					xs(ch);
					cout<<"����:";
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
//					cout<<"һĨ���صĹ��ӳ������У�С�������ԭ��������\n";
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
				cout<<"����:";
				cin>>s;
				while(s*2>g){
					system("cls");
					xs(ch);
					cout<<"����:";
					cin>>s;
				}
				pz+=s;
				g-=s*2;
				system("cls");
			}
			if(d=='h'){
				system("cls");
				xs(ch);
				cout<<"����:";
				cin>>s;
				while(s*10>g){
					system("cls");
					xs(ch);
					cout<<"����:";
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
				cout<<"һ��������죬�з�С����Ϊ�ǻ�\n";
				e2=0;
			}
		}
		if(dle!=0){
			if(dle%5!=0)
			  dle-=(dle/5+1);else
			  dle-=dle/5;
			if(dle%5==0){
				cout<<"һ��������죬�ҷ�С����Ϊ�ǻ�\n";
				o2=0;
			}
		}
		if(jd!=0){
			if(e2!=0){
				cout<<"�ҷ����ʹ�з�"<<min(jd,e2)<<"��С���ѱ���\n";
				e2-=min(jd,e2);
				o2+=min(jd,e2);
			}
			else{
				cout<<"�ҷ���������֣�\n";
				jd=0; 
			} 
		}
		if(jde!=0){
			if(o2!=0){
				o2-=min(jde,o2);
				e2+=min(jde,o2);
			}
			else{
				cout<<"�з���������֣�\n";
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
					cout<<"�Ȼ��ں�Ȼ�����һ���ڵ���ը��һ��̹��\n";
					tke--;
				}
				else{
					if(hde!=0){
						cout<<"�Ȼ��ں�Ȼ�����һ���ڵ�������һ�㻤��\n";
						hde--; 
					}
					else{
						cout<<"�Ȼ��ں�Ȼ�����һ���ڵ�����з���ȥ\n";
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
				cout<<"�Ȼ��ں�Ȼ�����һ���ڵ���ը��һ��С��\n";
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
			cout<<"һ���ʯ�������Ƶط�ȥ\n";
		}
		for(i=1;i<=bt;i++){
			cout<<"5��С�������Ƶش��ڱ������߳���\n";
			o2+=5;
		}
		for(i=1;i<=gs;i++){
			if(fje!=0){
				cout<<"�����������ɨȥ��һ�ܷɻ���������\n";
				fje--;
			}
			else{
				if(tke!=0){
					cout<<"�����������ɨȥ��ը��һ��̹��\n";
					tke--;
				}
				else{
					if(e2!=0){
						cout<<"�����������ɨȥ��ը��һ��С��\n";
						e2--;
					}
					else cout<<"������û��Ŀ��\n";
				}
			}
		}
		for(i=1;i<=jg;i++)
			if(fje>=2){
				cout<<"һ������������գ����ܷɻ���������\n";
				fje-=2;
			}
			else{
				if(fje==1){
					cout<<"һ������������գ�һ�ܷɻ���������\n";
					fje--;
				}
				else if(tke!=0&&e2!=0){
					cout<<"һ������ƽ���ȥ��������"<<min(3,tke)<<"��̹�ˣ�ը��"<<min(15,e2)<<"��С��\n";
					tke-=min(3,tke);
					e2-=min(15,e2); 
				}
				else{
					if(tke!=0){
						cout<<"һ������ƽ���ȥ��������"<<min(3,tke)<<"��̹��\n";
						tke-=min(3,tke);
					}
					else{
						if(e2!=0){
							cout<<"һ������ƽ���ȥ��ը��"<<min(15,e2)<<"��С��\n";
							e2-=min(15,e2);
						}
						else{
							if(hde!=0){
								cout<<"һ������ƽ���ȥ������һ�㻤��\n";
								hde--; 
							}
							else{
								cout<<"һ��������з�ƽ���ȥ\n";
								e1-=150;
							} 
							
						}
					}
				}
			}
		if(fj!=0&&fje!=0){
			fk=fj<fje?fj:fje;
			fj-=fk;fje-=fk;
			cout<<"˫������"<<fk<<"�ܷɻ��ӿ�����������\n";
		}
		for(i=1;i<=fj;i++){
			if(hde!=0){
				cout<<"�ҷ��ɻ�����һ�㻤��\n";
				hde--;
			}
			else{
				cout<<"�ҷ������ը��\n";
				e1-=150;
			}
		}
		for(i=1;i<=fje;i++){
			if(hd!=0){
				cout<<"�з��ɻ������ҷ�һ�㻤��\n";
				hd--;
			}
			else{
				cout<<"�з������ը��\n";
				o1-=150;
			}
		}
		if(tk!=0&&tke!=0){
			tkk=tk<tke?tk:tke;
			cout<<"̹�˿����ˣ�˫������"<<tkk<<"��̹�������\n";
			tk-=tkk;tke-=tkk;
		}
		if(o2!=0&&tke*20>o2){
			cout<<"̹�˿����ˣ�"<<o2<<"��С����ȥ��\n";
			if(o2/20!=0)
				cout<<o2/20<<"��̹�������\n";
			o2=0;tke-=o2/20;
		}
		if(tke!=0&&o2>=tke*20){
			cout<<"̹�˿����ˣ�"<<tke*20<<"��С����ȥ��\n";
			g+=tke*60;
			cout<<tke<<"��̹�������\n";
			o2-=tke*20;tke=0;
		}
		if(o2!=0&&e2!=0)
			cout<<"��С������ȥ��\n";
		else cout<<"û��С������\n";
		if(e2!=0&&tk*20>e2){
			cout<<"̹�˿����ˣ�"<<e2<<"��С����ȥ��\n";
			g+=tk*60;
			if(e2/20!=0)
				cout<<e2/20<<"��̹�������\n";
			e2=0;tk-=e2/20;
		}
		if(tk!=0&&e2>=tk*20){
			cout<<"̹�˿����ˣ�"<<tk*20<<"��С����ȥ��\n";
			g+=tk*60;
			cout<<tk<<"��̹�������\n";
			e2-=tk*20;tk=0;
		}
		if(ttt-o2>50){
			o2-=(ttt-o2)/10;
			cout<<"�ҷ���"<<(ttt-o2)/10<<"��С��������"; 
		}
		if(fff-e2>50){
			e2-=(fff-e2)/10;
			cout<<"�з���"<<(fff-e2)/10<<"��С��������"; 
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
			cout<<"�ҷ�С��ΧŹ�з�����Ѫ"<<o2*5<<"��\n";
		}
		if(tk!=0){
			e1-=tk*20;
			cout<<"�ҷ�̹��ΧŹ�з�����Ѫ"<<tk*20<<"��\n";
		}
		if(e2!=0){
			k=e2;
			if(pj*30>k){
				if(k/30!=0)
					cout<<k/30<<"���Ȼ�������\n";
				pj-=k/30;
			}
			else{
				if(pj!=0)
					cout<<pj<<"���Ȼ�������\n";
				k-=pj*30;pj=0;
				if(ts*25>k){
					if(k/25!=0)
						cout<<k/25<<"��Ͷʯ������\n";
					ts-=k/25;
				}
				else{
					if(ts!=0)
						cout<<ts<<"��Ͷʯ������\n";
					k-=ts*25;ts=0;
					if(jg*35>k){
						if(k/35!=0)
							cout<<k/35<<"�ܼ���������\n";
						jg-=k/35;
					}
					else{
						if(jg!=0)
							cout<<jg<<"�ܼ���������\n";
						k-=jg*35;jg=0;
						if(bt*20>k){
							if(k/20!=0)
								cout<<k/20<<"���ڱ�������\n";
							bt-=k/20;
						}
						else{
							if(bt!=0)
								cout<<bt<<"���ڱ�������\n";
							k-=bt*20;bt=0;
							if(k!=0){
								cout<<"�з�С��ΧŹ�ҷ�����Ѫ"<<k*5<<"��\n";
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
				cout<<"1���Ȼ�������\n";
			}
			else if(jg!=0){
				jg--;
				cout<<"1�ܼ���������\n";
			}
			else if(ts!=0){
				ts--;
				cout<<"1��Ͷʯ������\n"; 
			}
			else if(bt!=0){
				bt--;
				cout<<"1���ڱ�������\n";
			}
			else{
				o1-=(tke-i+1)*100;
				cout<<"�з�̹��ΧŹ�ҷ�����Ѫ"<<(tke-i+1)*100<<"��\n";
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
		if(e1>500&&e1<1500) cout<<"�ǳر����ƣ���������һ���������飬������Ϊ�������е�һƬ������\n";
		if(e1>=1500) cout<<"���Ѿ���Ŭ���ˣ����з�̫ǿ�����޷�����\n���಻������û������ʷ�ĳ����С�\n";
		if(e1<=500) cout<<"��ĸ������涼��ǿ����������޷������������ʹ��������������\n"; 
	}
	else{
		if(o1>500&&o1<1500) cout<<"�㿿�Լ�����ǿ������ס�˳ǳأ��Ȼ�������������\n";
		if(o1<=500) cout<<"�������Ľ�Ҫ��ͷ�������������֣����������������\n";
		if(o1>=1500) cout<<"�����Լ��ĸ߳�ָ�������������������֣��������������࣡����\n\n";
	}
	Sleep(3000);
	system("cls");
	cout<<"conio_h������:ZYD,WYR,TJC,CJX,WQY,JKY,YZY,ZXY\n";
	Sleep(2500);
	system("cls");
	cout<<"����:ZYD,YZY\n";
	Sleep(1500);
	system("cls");
	cout<<"�Ż�:ZYD,WYR,TJC\n";
	Sleep(1500);
	system("cls");
	cout<<"����ά��:ZYD,YZY\n";
	Sleep(1500);
	system("cls");
	cout<<"��ʱ����:ZYD,CJX\n";
	Sleep(1500);
	system("cls");
	cout<<"��˼:ZYD,JKY,WQY\n";
	Sleep(1500);
	system("cls");
	cout<<"С˵����:JKY,ZYD,WYR,ZXY\n";
	Sleep(2000);
	system("cls");
	cout<<"�������:ZYD,XH\n";
	Sleep(1500);
	system("cls");
	cout<<"����ʹ�:TJC,CJX,WQY,ZXY\n";
	Sleep(2000);
	system("cls");
	cout<<"������:XH,SX,ZYH\n";
	Sleep(1500);
	system("cls");
	cout<<"����bug,�����������뷨,�뷢�����ʼ���conio_h@163.com\n";
	cout<<"Goodbye!\n";
	system("pause"); 
	return;
}
void bg(){
	cout<<"С�������߲�����;���ǲ��õ�\n";
	Sleep(3000);
	xs(ch);
	for(i=1;i<=100000000;i++)
		 cout<<"�Ȼ��ں�Ȼ�����һ���ڵ������㷽����\n";
	cout<<"�����ˣ�";
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
	cout<<"                                  conio_h��Ʒ\n";
	Sleep(5000);
	system("cls"); 
	cout<<"����������\n";
	cin>>ssss;
	if(ssss=="16391639"||ssss=="40"||ssss=="conio"||ssss=="test")
	  system("cls"),aa(ssss);else
	  cout<<"Goodbye!",Sleep(10000),bg();
	return 0;
}
