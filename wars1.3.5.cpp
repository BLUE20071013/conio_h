#include<windows.h>
#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;
int g=50,o1=3000,o2,e1=3000,e2,s,l,sl,pj,dd,i,ts,k,tk,tke,tkk,xx,bt,gs,fj,fje,fk;
char d;
void xs(){
    cout<<"�������"<<g<<endl;
    cout<<"�ҷ�������"<<o2<<endl;
    cout<<"�з�������"<<e2<<endl;
    cout<<"�ҷ�Ѫ����"<<o1<<endl;
    cout<<"�з�Ѫ����"<<e1<<endl;
    return ;
}
void bg();
int main(){
    if(e1<1000) bg();
    cout<<"ս�� 1.3.5\n"; 
    cout<<"��ʼ��";
    getch();
    system("cls");
    cout<<"������...\n";
    srand(time(0));
    xx=rand()%5;
    switch(xx){
        case 0:cout<<"�����ڲ������Դ�ɻ�������ѹ����Ҳ���Դ������ˣ�";break;
        case 1:cout<<"�Ȼ��ڲ������Դ�С�������ܴ�з����أ�";break;
        case 2:cout<<"С����з����ص��˺�ʮ�ֿɹۡ�";break;
        case 3:cout<<"��������ֱ�Ӵ�Է��Ļ��أ�";break;
        case 4:cout<<"ǧ�����С���ӽ���Ļ��أ���Ľ���ʮ��Σ�գ�";break;
    }
    Sleep(3000);
    system("cls");
    while(o1>0&&e1>0&&g<=1000&&o1<=3000){
        xs();
        d=' ';
        srand(time(NULL));
        l=rand()%18;
        if(l>=0&&l<=1){
            sl=rand()%20+1;
            cout<<sl<<"��С��������\n";
            e2+=sl;
        }
        if(l>=2&&l<=3){
            o1-=100;
            cout<<"һ�ŵ����ڿ��л�����һ�������Ļ���\n"; 
        }
        if(l>=4&&l<=5){
            if(o2==0)
                if(tk!=0){
                    cout<<"�Ȼ��ں�Ȼ�����һ���ڵ���ը��һ��̹��\n";
                    tk--;
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
            else if(ts!=0){
                cout<<"һ��Ͷʯ��ը��\n";
                ts--;
            }
            else if(bt!=0){
                cout<<"һ���ڱ���ը��\n";
                bt--;
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
        if(l>=11&&l<=12){
            cout<<"����ʲôҲû����\n"; 
        }
        if(l>=13&&l<=14){
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
        if(l>=15&&l<=15){
            cout<<"һ�ܷɻ�������\n";
            fje++;
        }
        if(l>=16&&l<=17){
            cout<<"���߷�����\n";
            o2/=2; 
        }
        dd=rand()%30+1;
        cout<<"��õ���"<<dd<<"�����\n";
        g+=dd;
        Sleep(3000);
        system("cls");
        while(d!='0'){
            xs(); 
            cout<<"1 �ɳ�С�� 3 $/1\n";
            cout<<"2 ���� 50$ /1\n";
            cout<<"3 �Ȼ��� 120 $/1\n";
            cout<<"4 Ͷʯ�� 100$ /1\n"; 
            cout<<"5 ̹�� 60 $/1\n";
            cout<<"6 �ڱ��� 100$ /1\n";
            cout<<"7 ������ 120 $/1\n";
            cout<<"8 �ɻ� 80$ /1\n";
            cout<<"9 ���� 50$/1\n"; 
            cout<<"0 �˳�\n";
            d=getch();
            if(d=='1'){
                system("cls");
                xs();
                cout<<"����:";
                cin>>s;
                while(s*3>g){
                    system("cls");
                    xs();
                    cout<<"����:";
                    cin>>s;
                }
                o2+=s;
                g-=s*3;
                system("cls");
            }
            if(d=='2')
                if(g>=50){
                    g-=50;
                    e1-=100;
                }
            if(d=='3')
                if(g>=120){
                    g-=120;
                    pj++;
                }
            if(d=='4')
                if(g>=100){
                    g-=100;
                    ts++;
                }
            if(d=='5')
                if(g>=60){
                    g-=60;
                    tk++;
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
            system("cls");
        }
        for(i=1;i<=pj;i++)
            if(e2==0)
                if(tke!=0){
                    cout<<"�Ȼ��ں�Ȼ�����һ���ڵ���ը��һ��̹��\n";
                    tke--; 
                }
                else{
                    cout<<"�Ȼ��ں�Ȼ�����һ���ڵ�����з���ȥ\n";
                    e1-=80;
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
        if(fj!=0&&fje!=0){
            fk=fj<fje?fj:fje;
            fj-=fk;fje-=fk;
            cout<<"˫������"<<fk<<"�ܷɻ��ӿ�����������\n"; 
        }
        for(i=1;i<=fj;i++){
            cout<<"�ҷ������ը��\n";
            e1-=150;
        }
        for(i=1;i<=fje;i++){
            cout<<"�з������ը��\n";
            o1-=150;
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
        for(i=1;i<=tke;i++){
            if(pj!=0){
                pj--;
                cout<<"1���Ȼ�������\n"; 
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
        Sleep(2000);
        system("cls");
    }
    if(g>10000||o1>10000) bg();
    if(o1<=0) cout<<"�����ˣ�";
    else cout<<"�з����ˣ�"; 
    return 0;
}
void bg(){
    cout<<"С������ǰ�Ĵ����ǲ��õ�\n";
    Sleep(3000);
    xs();
    for(i=1;i<=100000000;i++)
         cout<<"�Ȼ��ں�Ȼ�����һ���ڵ������㷽����\n";
    cout<<"�����ˣ�";
}
