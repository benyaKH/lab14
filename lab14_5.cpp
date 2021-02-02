#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
    int x[4]={*a,*b,*c,*d};
    int y[4]={0,0,0,0} ;
    do{
        for(int i = 0 ;i<4;i++) y[i]=x[rand()%4] ;
    }while(y[0]==y[1]||y[0]==y[2]||y[0]==y[3]||y[1]==y[2]||y[1]==y[3]||y[2]==y[3]);
    *a=y[0] ;
    *b=y[1] ;
    *c=y[2] ;
    *d=y[3] ;
}