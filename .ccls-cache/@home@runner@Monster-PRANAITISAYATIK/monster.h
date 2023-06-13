#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:

void operator++();
void operator--();
void operator+=(int); // += hp

void Attack(monster &); // A attack B  A.hp--; B.hp/=2 
void heal(); // your idea to help revive hp
void print(); // to print all data
bool not_dead() { return hp>0;  }
void dead();
monster(string="gobbo", int=20,int=5);
//monster();
~monster();

};



void monster::print(){
  cout<<"Monster "<<name;
  cout<<" hp:"<<hp<<" potion:   "<<potion<<endl;
  
}
void monster::Attack(monster & b){// x.Attack(y)
     cout<<name<<" ATTACK!!!!! "<<b.name<<endl;
    if(b.hp>10) b.hp-=10, cout<<b.name<<" took 10 damage!"<<endl;
else{
  b.hp=0;
  cout<<b.name<<" is dead"<<endl;
}
};

monster::~monster(){
  cout<<"monster "<<name<<" is gone"<<endl;
  //indicate which monster is gone
}
//monster::monster(){}
monster::monster(string n ,int p,int h){
cout<<"what is the monster name? ";
  cin>>n;
cout<<"what is the monster hp? ";
  cin>>h;
cout<<"what is the monster potion count? ";
  cin>>p;
  //set var
  name=n;
  hp=h ;
  potion=p;
  cout<<"monster "<<name <<" is here HAHAHA"<<endl;
  
}

void monster::dead(){
  hp=0;
  cout<<"monster "<<name<<" is dead"<<endl;
}
#endif

void monster::heal(){
  if(potion>0){
  cout<<name<<" used a potion!"<<endl;
  cout<<name<<" healed by 5 points! "<<endl;
  potion--;
  hp+=5;
  }else cout<<name<<" ran out of potions!"<<endl;
}