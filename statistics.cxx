#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void random(int N,double *p){
	
	for(int i=0;i<N;i++)
	{
		p[i]=(double)(rand() * 1.0) / RAND_MAX; 
		
	}
	
	
	

}
void stat(double &mean, double &var,int N,double *p){
	double x_i=0.0;
	for(int i=0;i<N-1;i++)
		{
			
		mean=mean+p[i];
		}

	mean =  mean * (1/double(N));
	for(int i=0;i<N-1;i++)
	{
	
		var=((var+p[i])-mean)*((var+p[i])-mean);
	}
	var = var*(1/double(N));
	

}


int main(){
	const int N = 100;
	double p[N];
	double mean, var;
	
	
	srand(time(NULL));

   	random(N,p);
	//for(int i=0;i<N;i++){
	//cout <<p[i]<<endl;
	
	//}
	stat(mean,var,N,p);
	cout << "Mean = " << mean << endl;
	cout << "Variance = " << var << endl;
	

   return 0;
}
