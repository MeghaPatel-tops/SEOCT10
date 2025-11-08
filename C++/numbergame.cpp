#include<iostream>
   #include <cstdlib>
#include <ctime>
using namespace std;
main(){
	
	srand(time(0));  
	int i,num,flag=0,choice,round;
	int min = 1;
    int max = 40;
    int randomNumber = (rand() % (max - min + 1)) + min;
    
    cout<<"\n Enter 1 for Init(10 round)\n 2 intermediate(5 round) \n 3 pro (round 3)";
    cout<<"\n Enter choice";
    cin>>choice;
    cout<<"\n GAME START\n\n\n";
    
    if(choice==1){
    	round =10;
	}
	else if(choice ==2){
		round=5;
	}
	else if(choice ==3){
		round=3;
	}
	else{
		cout<<"\n Wrong choice";
		round=0;
	}
    
	  //cout<<randomNumber;
	  for(i=1;i<=round;i++){
	  	  cout<<"\n enter num:";
	  	  cin>>num;
	  	if(num == randomNumber){
	  	  	  cout<<"\n You won";
	  	  	  flag=1;
	  	  	  break;
		}
		else if(num< randomNumber){
			cout<<"\n Num is To low";
		}
		else if(num> randomNumber){
			cout<<"\n Num is To high";
		}
			
	  }
	  (flag==0)?cout<<"\n You loss game":"";
}


