#include <iostream>
#include<string>
using namespace std;

class healthprofileclass{
private:
    string FN,LN,Gen;
    int D,M,Y;
    float height,weight;
    int yy=2019,age,hr,thr,we,he,wee;
public:
    healthprofileclass(string f,string l,string g,int d,int m,int y,float h,float w){
        FN=f;
        LN=l;
        Gen=g;
        D=d;
        M=m;
        Y=y;
        height=h;
        weight=w;
        }
    void getName(){
        cout<<"Name:"<<FN<<LN;
        }
    void setName(string a){
        a=FN;
        }
    void memfunc(){
            age=2019-Y;
            hr=220-age;
            thr=hr-70;
            he=6.2*12;
            we=(weight)*(1000/450);
        }
    void output(){
        cout<<"=========>Computerization of Health Records\n";
        memfunc();
        cout<<"Date of Birth:"<<age<<endl;
        cout<<"Your Heart rate:"<<hr<<endl;
        cout<<"Target Heart rate:"<<thr<<endl;
        cout<<"Your Heigth in Foot:6.2"<<"Height in Inches:"<<he<<"inches"<<endl;
        cout<<"Your Weight in KG:85  "<<"Weight in LB:"<<we<<"LB"<<endl;
        }
};
int main()
{
    healthprofileclass a("Jamal","Naqvi","Male",1,12,2000,6.2,85);
    a.output();
    return 0;
}
