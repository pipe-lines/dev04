#include <iostream>
#include <cstdio>

using namespace std;

class SystemCoordinate{
    virtual string getLocation(){
        //Code that show the location of the player
    }
};

class Player:SystemCoordinate{
private:
    string name;
    int level;
    int hp;
    int sp;
    float exp = 0;
    string location = "Home City";
    string gender = "null";

public:

    void player(string name, int level, int hp, int sp, float exp){
        this->name = name;
        this->level=level;
        this->hp=hp;
        this->sp=sp;
        this->exp += exp;
    }

    void setName(string name){
        this->name = name;
    }

    string getName(){
        return this->name;

    }

    void setLevel(int level){
        this->level=level;
    }

    int getLevel(){
        return this->level;
    }

    void setHp(int hp){
        this->hp=hp;
    }

    int getHp(){
        return this->hp;
    }

    void setSp(int sp){
        this->sp=sp;
    }

    int getSp(){
        return this->sp;
    }

    void addExp(float exp){
        this->exp += exp;
    }

    float getExp(){
        return this->exp;
    }

    void setLocation(string location){
        this->location=location;
    }

    string getLocation() override{
        return this->location;
    }

    void setGender(string gender){
        this->gender=gender;
    }

    string getGender(){
        return this->gender;
    }

    void toString(){
        printf("=========User Info.==========\n");
        cout<<"Username: "<<name<<endl;
        cout<<"Lv: "<<level<<endl;
        cout<<"HP: "<<hp<<endl;
        cout<<"SP: "<<sp<<endl;
        cout<<"EXP: "<<exp<<endl;
        cout<<"Location: "<<getLocation()<<endl;
        cout<<"Gender: "<<getGender()<<endl;
        printf("=============================\n");
    }

};


namespace U{
    void showUserNextLevel(int level){
        cout<<"Next Level: "<<level+1<<endl;
    }
}

int main() {
    Player user;

    user.player("Toma",5,400,300,0);
    user.setGender("Male");

    user.toString();

    U::showUserNextLevel(user.getLevel());


    return 0;
}
