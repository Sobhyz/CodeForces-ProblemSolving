#include <iostream>

using namespace std;

long long int x1,y1,x2,y2;
int dx[] = {2,2,-2,-2,1,1,-1,-1},dy[]={1,-1,1,-1,2,-2,2,-2}; 


bool onWhite(long long int x,long long int y){
    return ((abs(x)%2==0 && abs(y)%2==0) || (abs(x)%2==1 && abs(y)%2==0) );
}

bool sameD(long long int x,long long int y,long long int xx,long long int yy){
    return ((abs(x-y)==abs(xx-yy) || (abs(x+y) == abs(xx+yy))));
}

int main(){
    cin>>x1>>y1>>x2>>y2;

    int ans;
    long long int tmpx=0,tmpy=0;
    if((onWhite(x1,y1) && onWhite(x2,y2)) || (!onWhite(x1,y1) && !onWhite(x2,y2))){
        cout<<2<<endl;
        if (sameD(x1,y1,x2,y2))
        {
            cout<<1;
            return 0;
        }
        else{
            for(int i=0;i<8;i++){
                long long int new_x = x1+dx[i],new_y = y1+dy[i];
                if(new_x == x2 && new_y == y2){
                    cout<<1;
                    return 0;
                }
            }
        }
        
    }
    else{
        cout<<1<<endl;
        for(int i=0;i<8;i++){
                long long int new_x = x1+dx[i],new_y = y1+dy[i];
                if(new_x == x2 && new_y == y2){
                    cout<<1;
                    return 0;
                }
                cout<<tmpx<<' '<<tmpy<<endl;
                if(sameD(new_x,new_y,x2,y2)){tmpx=new_x;tmpy=new_y;}
        }
        if (sameD(tmpx,tmpy,x2,y2))
        {
            cout<<2;
            return 0;
        }
        else{
            cout<<3;
        }
    }


}