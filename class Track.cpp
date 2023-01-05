//
//  class Track.cpp
//  class Track
//
//  Created by Павел on 05.01.2023.
//
#include "Class RacingCar.hpp"
#include "Class RacingMotorcycle.hpp"
#include "class Track.hpp"
#include <iostream>
#include <string>

Track::Track (std::string trackQuality, std::string nameTrack): _trackQuality(trackQuality),_nameTrack(nameTrack){}


std::string Track:: getTrack(){
    
    return _trackQuality;
}
std::string Track:: getNameTrack(){
    return _nameTrack;
}


void  Race( RacingCar  car,  RacingMotorcycle  motorcycle, int   N){
    int A1,S1,P1,A2,S2,P2, rating1=0, rating2=0;
    A1=car.getCarAcceleration();
    S1=car.getCarSpeed();
    P1=car.getCarPatency();
    A2=motorcycle.getMotoAcceleration();
    S2=motorcycle.getMotoSpeed();
    P2=motorcycle.getMotoPatency();
    switch (N) {
        case 1:{
         std::cout<<"\nYou have chosen  : \nSpecial stage No. 1: Forest  Mountain Trail in San Remo"<<std::endl;
            if(A1>A2){
                rating1=5;
                rating2=3;
            }else{
             rating2=5;
             rating1=3;
            }
            if(S1>S2){
                rating1+=3;
                rating2+=3;
            }else{
             rating2+=3;
             rating1+=3;
            }
            if(P1>P2){
                rating1+=5;
                rating2+=1;
            }else{
             rating2+=5;
             rating1+=1;
            }
        std::cout<<"\nRatings of the current race."<<std::endl;
        std::cout<<"Championship points of Car : "<<rating1<<std::endl;
        std::cout<<"Championship points of Motorcycle : "<<rating2<<std::endl;
         if(rating1 > rating2){
             std::cout<<"\nTHE WINNER IS a CAR !"<<std::endl;
             }else{
             std::cout<<"\nTHE WINNER IS  a MOTORCYCLE !"<<std::endl;
             }
         }
            break;
    
    case 2:{
        std::cout<<"\nYou have chosen  : \nSpecial stage No. 2: Snow Track in Finland"<<std::endl;
        if(A1>A2){
            rating1=5;
            rating2=3;
        }else{
         rating2=5;
         rating1=3;
        }
        if(S1>S2){
            rating1+=4;
            rating2+=3;
        }else{
         rating2+=4;
         rating1+=3;
        }
        if(P1>P2){
            rating1+=3;
            rating2+=2;
        }else{
         rating2+=3;
         rating1+=2;
        }
    std::cout<<"\nRatings of the current race."<<std::endl;
    std::cout<<"Championship points of Car : "<<rating1<<std::endl;
    std::cout<<"Championship points of Motorcycle : "<<rating2<<std::endl;
     if(rating1 > rating2){
         std::cout<<"\nTHE WINNER IS a CAR !"<<std::endl;
         }else{
         std::cout<<"\nTHE WINNER IS  a MOTORCYCLE !"<<std::endl;
         }
}
        break;

    case 3:{
    std::cout<<"\nYou have chosen  : \nSpecial stage No. 3: Ring Race Track in Monte Carlo"<<std::endl;
    if(A1>A2){
        rating1=5;
        rating2=3;
    }else{
     rating2=5;
     rating1=3;
    }
    if(S1>S2){
        rating1+=5;
        rating2+=3;
    }else{
     rating2+=5;
     rating1+=3;
    }
    if(P1>P2){
        rating1+=0;
        rating2+=0;
    }else{
     rating2+=0;
     rating1+=0;
    }
std::cout<<"\nRatings of the current race."<<std::endl;
std::cout<<"Championship points of Car : "<<rating1<<std::endl;
std::cout<<"Championship points of Motorcycle : "<<rating2<<std::endl;
 if(rating1 > rating2){
 std::cout<<"\nTHE WINNER IS a CAR !"<<std::endl;
 }else{
 std::cout<<"\nTHE WINNER IS  a MOTORCYCLE !"<<std::endl;
 }
    }
            break;

        default:
            break;
    
    }}

    

