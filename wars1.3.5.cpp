#include<windows.h>
#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;
int g=50,o1=3000,o2,e1=3000,e2,s,l,sl,pj,dd,i,ts,k,tk,tke,tkk,xx,bt,gs,fj,fje,fk;
char d;
void xs(){
    cout<<"金币数："<<g<<endl;
    cout<<"我方人数："<<o2<<endl;
    cout<<"敌方人数："<<e2<<endl;
    cout<<"我方血量："<<o1<<endl;
    cout<<"敌方血量："<<e1<<endl;
    return ;
}
void bg();
int main(){
    if(e1<1000) bg();
    cout<<"战争 1.3.5\n"; 
    cout<<"开始！";
    getch();
    system("cls");
    cout<<"加载中...\n";
    srand(time(0));
    xx=rand()%5;
    switch(xx){
        case 0:cout<<"高射炮不仅可以打飞机，把它压下来也可以打地面敌人！";break;
        case 1:cout<<"迫击炮不仅可以打小兵，还能打敌方基地！";break;
        case 2:cout<<"小兵打敌方基地的伤害十分可观。";break;
        case 3:cout<<"导弹可以直接打对方的基地！";break;
        case 4:cout<<"千万别让小兵接近你的基地，你的建筑十分危险！";break;
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
            cout<<sl<<"个小兵出现了\n";
            e2+=sl;
        }
        if(l>=2&&l<=3){
            o1-=100;
            cout<<"一颗导弹在空中画出了一道完美的弧线\n"; 
        }
        if(l>=4&&l<=5){
            if(o2==0)
                if(tk!=0){
                    cout<<"迫击炮轰然发射出一颗炮弹，炸毁一辆坦克\n";
                    tk--;
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
            else if(ts!=0){
                cout<<"一门投石机炸了\n";
                ts--;
            }
            else if(bt!=0){
                cout<<"一座哨兵塔炸了\n";
                bt--;
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
        if(l>=11&&l<=12){
            cout<<"这轮什么也没出现\n"; 
        }
        if(l>=13&&l<=14){
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
        if(l>=15&&l<=15){
            cout<<"一架飞机出现了\n";
            fje++;
        }
        if(l>=16&&l<=17){
            cout<<"瘟疫发生了\n";
            o2/=2; 
        }
        dd=rand()%30+1;
        cout<<"你得到了"<<dd<<"个金币\n";
        g+=dd;
        Sleep(3000);
        system("cls");
        while(d!='0'){
            xs(); 
            cout<<"1 派出小兵 3 $/1\n";
            cout<<"2 导弹 50$ /1\n";
            cout<<"3 迫击炮 120 $/1\n";
            cout<<"4 投石机 100$ /1\n"; 
            cout<<"5 坦克 60 $/1\n";
            cout<<"6 哨兵塔 100$ /1\n";
            cout<<"7 高射炮 120 $/1\n";
            cout<<"8 飞机 80$ /1\n";
            cout<<"9 瘟疫 50$/1\n"; 
            cout<<"0 退出\n";
            d=getch();
            if(d=='1'){
                system("cls");
                xs();
                cout<<"数量:";
                cin>>s;
                while(s*3>g){
                    system("cls");
                    xs();
                    cout<<"数量:";
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
                    cout<<"迫击炮轰然发射出一颗炮弹，炸毁一辆坦克\n";
                    tke--; 
                }
                else{
                    cout<<"迫击炮轰然发射出一颗炮弹，向敌方飞去\n";
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
        if(fj!=0&&fje!=0){
            fk=fj<fje?fj:fje;
            fj-=fk;fje-=fk;
            cout<<"双方都有"<<fk<<"架飞机从空中落下来了\n"; 
        }
        for(i=1;i<=fj;i++){
            cout<<"我方俯冲轰炸！\n";
            e1-=150;
        }
        for(i=1;i<=fje;i++){
            cout<<"敌方俯冲轰炸！\n";
            o1-=150;
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
        for(i=1;i<=tke;i++){
            if(pj!=0){
                pj--;
                cout<<"1门迫击炮损坏了\n"; 
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
        Sleep(2000);
        system("cls");
    }
    if(g>10000||o1>10000) bg();
    if(o1<=0) cout<<"你死了！";
    else cout<<"敌方死了！"; 
    return 0;
}
void bg(){
    cout<<"小朋友提前改代码是不好的\n";
    Sleep(3000);
    xs();
    for(i=1;i<=100000000;i++)
         cout<<"迫击炮轰然发射出一颗炮弹，向你方飞来\n";
    cout<<"你死了！";
}
