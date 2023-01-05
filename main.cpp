//
//  main.cpp
//  class Track
//
//  Created by Павел on 05.01.2023.
//
#include "Class RacingMotorcycle.hpp"
#include "Class RacingCar.hpp"
#include "class Track.hpp"
#include <iostream>
#include <string>

void  Race( RacingCar  car,  RacingMotorcycle  motorcycle, int   N);

int main(int argc, const char * argv[]) {
    RacingCar car;
    RacingMotorcycle motorcycle;
    
    Track track1 ("Description of track : Gravel","Forest  Mountain Trail in San Remo");
    Track track2 ("Description of track : Snow and Ice","Snow Track in Finland");
    Track track3 ("Description of track : Asphalt","Ring Race Track in Monte Carlo");
   
   
    std::cout<<"Welcome to the game World Rally Championship !"<<std::endl;
    std::cout<<"\nPorsche 935 and Suzuki GSX-R 600 motorcycle take part in these races."<<std::endl;
    std::cout<<"\nThe game offers a choice of three different special stages - variants of race tracks."<<std::endl;
    std::cout<<"\nRules: \nSpecial stages are sections of tracks where crews drive as fast as possible to show the best time. \nThe route can take place on roads with different surfaces: gravel, asphalt, snow or ice."<<std::endl;
    std::cout<<"\nSpecial stage No. 1: Forest  Mountain Trail in San Remo"<<std::endl;
    std::cout<<track1.getTrack()<<std::endl;
    std::cout<<"\nSpecial stage No. 2: Snow Track in Finland"<<std::endl;
    std::cout<<track2.getTrack()<<std::endl;
    std::cout<<"\nSpecial stage No. 3: Ring Race Track in Monte Carlo"<<std::endl;
    std::cout<<track3.getTrack()<<std::endl;
   
    std::cout<<"\nThe technical characteristics of the Car : "<<std::endl;
    std::cout<< "Сar brand  :  Porsche 935 "<<std::endl;
    std::cout<< "Acceleration : "<<car.getCarAcceleration()<<std::endl;
    std::cout<< "Max Speed : "<<car.getCarSpeed()<<std::endl;
    std::cout<< "Patency : "<<car.getCarPatency()<<std::endl;
    std::cout<<"\nThe technical characteristics of the Motocyrcle : "<<std::endl;
    std::cout<< "Motorcycle brand  :  Suzuki GSX-R 600"<<std::endl;
    std::cout<< "Acceleration : "<<motorcycle.getMotoAcceleration()<<std::endl;
    std::cout<< "Max Speed : "<<motorcycle.getMotoSpeed()<<std::endl;
    std::cout<< "Patency : "<<motorcycle.getMotoPatency()<<std::endl;
    
    
    
    int X,Y=0;
    do{
        std::cout<<"\nPlease, select the Track for racing: \n1 - Forest  Mountain Trail in San Remo \n2 - Snow Track in Finland \n3 - Ring Race Track in Monte Carlo  \n4 - To finish game\n->   ";
        std::cin>>X;
        switch (X) {
            case 1:
                
                Race(car, motorcycle, X);
                break;
            case 2:
                
                Race(car, motorcycle,X);
                break;
                
            case 3:
                
               Race(car, motorcycle, X);
                break;
                
            case 4:
                std::cout<<" The game is over "<<std::endl;
                exit(0);
                break;
                
            default:std::cout<<"Input Error, repeat the input"<<std::endl;
                break;
        }
    
    }while (Y!=5);
           
    
    
    return 0;
}
