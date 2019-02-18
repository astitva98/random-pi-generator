#include<iostream>
#include<cstdlib>
#include<ctime>
#include<math.h>
using namespace std;

# define PI 3.141592653589793

int main(){
	int r;
	scanf("%d",&r);
	cout<<r<<endl;
	long double pi=0;
	srand(time(NULL));
	int x,y;
	int count_c= 0;
	int count_s= 0;
	//long double pi;
	long double diff= 10000;
	
	while(1){
		x = rand() % (2*r);
		y = rand() % (2*r);
		x -= r;
		y -= r;

		if(x * x + y * y < r * r){
			count_c++;
		}
		
		count_s++;
		//cout<<count_s<<endl;
		//cout<<pi_ap - PI<<endl<<endl;
		long double pi_ap=4*(long double)((long double)(count_c)/(long double)(count_s));
		if( fabs(pi_ap - PI) < diff){
			pi=pi_ap;
			cout<<pi<<"\t"<<PI<<endl;
			diff=fabs(pi_ap - PI);
		}

	}
}