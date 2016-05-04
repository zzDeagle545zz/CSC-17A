/* 
 * File:   Creature.h
 * Author: rcc
 *
 * Created on April 25, 2016, 11:26 AM
 */

#ifndef CREATURE_H
#define	CREATURE_H
class Creature{ 
private:
    //Stats
    int health;
    int attack;
    int magic;
    int defense;
    
public:
//Constructor
    Creature();
    
//Accessors
    int gethealth(){
        return health;
    }
    int getattack(){
        return attack;
    }
    int getmagic(){
        return magic;
    }
    int getdefense(){
        return defense;
    }
//Manipulators
    void sethealth(int a){
        health=a;
    }
    void setattack(int a){
        attack=a;
    }
    void setmagic(int a){
        magic=a;
    }
    void setdefense(int a){
        defense=a;
    }
    
    void takAdmg(int);
    void takMdmg(int);
    
    
    
};

#endif	/* CREATURE_H */

