#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

class tpc
{
    public:
    char inp;
    int n;
    char def[20];
    
    int sc,sp;
    int score;
    tpc()
    {
        sc=0;
        sp=0;
        score=0;
        n=0;
        
    }

    // void defaulti() 
    // {
    // char temp[20] = {'t','p','c','p','c','p','t','t','p','c','t','p','c','c','t','p'};
    // for(int i = 0; i < 10; i++) 
    // {
    //     def[i] = temp[i];
    // }
    // int n = 10;
    // }


    void geti()
    {
        cout<<"enter your choice t,c,p:";
        cin>>inp;
    }

    

    void check()
    {
        char chars[3] = {'t','p','c'};
        def[20];
        for(int i=0;i<20 && sc<5 && sp<5;i++)
        {
            geti();
            def[i] = chars[rand() % 3];
            cout<<"Computer input:"<<def[i]<<endl;
            if(inp==def[i])
            {
                cout<<"Tie, no  points"<<endl;
            }
            else
            {
                if((inp=='t'&&def[i]=='p')||(inp=='p'&&def[i]=='c')||(inp=='c'&&def[i]=='t'))
                {
                    sc++;
                    cout<<"Computer: "<<sc<<endl;
                }
                else if((inp=='c'&&def[i]=='p')||(inp=='t'&&def[i]=='c')||(inp=='p'&&def[i]=='t'))
                {
                    sp++;
                    cout<<"You: "<<sp<<endl;
                }
            }
        
            if (sc==5)
            {
            cout<<"Computer wins!"<<endl;
            break;
            }
            else if(sp==5)
            {
            cout<<"You win!"<<endl;
            break;
            }
            
        }
        
    }
};

int main()
{
    tpc p1;
    
    // p1.defaulti();
    // p1.geti();
    // p1.defaulti();
    p1.check();
    return 0;
}