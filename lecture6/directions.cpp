#include<iostream>
using namespace std;
int main(){

	char ch;
	int x=0,y=0;
	ch=cin.get();
	while(ch!='\n'){
		if(ch=='N'){
			y++;

		}
		else if(ch=='E'){
			x++;
		}
		else if(ch=='S'){
			y--;
		}
		else{
			x--;

		}

		ch=cin.get();

	}
	//1st quadrant
	if(x>=0&&y>=0){
		//printing east
		for(int i=0;i<x;i++){
			cout<<'E';
		}
		//print 
		for (int i = 0; i < y; ++i)
		{
			cout<<'N';
			/* code */
		}


	}
	//2nd quadrant
	else if(y>=0&&x<=0){
		

	}
	//3rd quadrant
	else if(x<=0&&y<=0){

	}
	//4th quadrant
	else{

	}



}