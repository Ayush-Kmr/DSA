#include<bits/stdc++.h>
// #include "hero.cpp"

using namespace std;
class Hero{

    // Properties
    // Here is health is public
    public:
    int health;
    char level;
    char *name;

    void print(){
        cout<<"Health"<<this->health<<endl;
        cout<<"Level"<<this->level<<endl;
        cout<<"Name"<<this->name<<endl;

    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level =ch;
    }

    void setName(char name[]){
        stcpy(this->name,name);
    }

    Hero(){
        cout<<"I am a  default constructor"<<endl;
        name - new char[100];
    }


    // Parameterized Constructor
    Hero(int health,char level){
        cout<<"Parameterize constructor"<<endl;
        this->health=health;
        this->level=level;

        cout<<"Address of this "<<this<<endl;
    }


    // Copy constructor
    Hero(Hero& temp){
        cout<<"Copy constructor is called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
};

int main()
{

Hero hero1;

hero1.setHealth(12);
hero1.setLevel('D');
char name[8]= "Babbar";
hero1.setName(name);

 hero1.print();












//     Hero suresh;
//     suresh.setHealth(80,'C');
//     suresh.print();

// // Copy constructor
//     Hero ritesh(suresh);
//     ritesh.print();



    // //   Object created statcially
    // // Hero ramesh;

    // Hero ramesh (25);
    // cout<<"Address of ramesh "<< &ramesh << endl;

    // // Dynamically created
    // Hero *h = new Hero();


// 
//     // Static allocation
//     Hero a;
//     a.setHealth(80);
//     a.setLevel('A');
//     cout <<" Level is "<< a.level <<endl;
//     cout <<" Health is "<< a.getHealth() <<endl;

//     cout<<endl;


//     // Dynamic Allocation
//     Hero *b = new Hero;
//     b->setHealth(90);
//     b->setLevel('B');
//     cout <<" Level is "<< (*b).level <<endl;
//     cout <<" Health is "<< (*b).getHealth() <<endl;

//     cout<<endl;
// // Alternative way to print this
//     cout <<" Level is "<< b->level <<endl;
//     cout <<" Health is "<< b->getHealth() <<endl;


    // Creation of Object
    // Hero ramesh;
    // cout<<"Size : "<< sizeof(h1) <<endl;
    // cout<<"Ramesh health is: "<< ramesh.getHealth() <<endl;
    // cout<<"Ramesh level is: "<< ramesh.getLevel() <<endl;

    // ramesh.health =80;
    // ramesh.setHealth(75);
    // ramesh.level = 'A'; 

    // cout<<"Health is :"<< ramesh.health << endl;
    // cout<<"Level is :"<< ramesh.level << endl;
   return 0;
}