#include <iostream>
/*
		*
	   * *
	  * * *
	  
*/
using namespace std;		//this is simplifi our work. don't write all time std;
int main(){
	int range;	// this user define how long it goes
	cout<<" Define the pramid how long to go:";
	cin>>range;
	
	for(int coloms = 1; coloms<=range; coloms++){			// this loop is uses define how long lines to make, I don't know ,
																//maybe the given name is possible to wrong
		
		for(int rows = range; rows >= coloms; rows--){			//this loop is print help the befor star 
			cout<<" ";
		}
		
		for(int pramid = 1; pramid <= coloms; pramid++){		//this loop is print the stars
			cout<<"*";
			cout<<" "; 										//this helps give the space in after star
		}
	   cout<<"\n";				//this  line help to print the next line	
	}
	
	
	
}
