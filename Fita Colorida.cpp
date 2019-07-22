#include<bits/stdc++.h>
using namespace std;

#define MAX 10000

int N ,fita[MAX+2];

int main(){
    int i,x, N;
    
    	cin >> N;

    	for (i=1; i <= N; i++){
    		cin >> fita[i];
    	}

      fita[0] = -1;
      fita[N+1] = -1;

    	for (x = 0; x < 9; x++) 
    	  for (i = 1; i <= N; i++)
  	     	if (fita[i] == -1)
      			if (fita[i-1] == x || fita[i+1] == x)
  	     			fita[i] = x+1;

  	  for (i = 1; i <= N; i++)
    	 	if (fita[i] == -1)
       		fita[i] = 9;

      for (i = 1; i < N; i++)
      	cout << fita[i] << " ";
    

    	cout << fita[N] << endl;

    return 0;
}
