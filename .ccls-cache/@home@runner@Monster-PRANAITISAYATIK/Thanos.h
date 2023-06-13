#include"monster.h"

class Thanos {
private:
	int stones;
	int hp; //extra hp;
public:
	/* constructor and destructor */
Thanos( int=0, int=100000);
~Thanos();// cout something
	void snap_finger(monster[],int); 
/* show all hps
	/ clear half of monster hp, if stone =6*/
	void operator++(); // increase the stone;
  int get_stone();
};
  void Thanos::operator++()
{
  stones++;
}


  void Thanos::snap_finger(monster m[], int n){
int i,t;	
for(i=0;i<n;i++){
    m[i].print();
  }
  cout<<"Thanos snapped his fingers!!!"<<endl;
if (stones==6) 
  for(i=0;i<n/2;i++){
     m[i].dead();
  } else cout<<"he doesn't have enough stones, nothing happened :D"<<endl;
    
  }

Thanos::Thanos(int n, int a){
  stones=n;
  hp=a;
  cout<<"Thanos is here."<<endl;
}

Thanos::~Thanos(){
  cout<<"Thanos is gone"<<endl;
}

int Thanos::get_stone(){
  return stones;
}

 