//
//  class Track.hpp
//  class Track
//
//  Created by Павел on 05.01.2023.
//

#ifndef class_Track_hpp
#define class_Track_hpp
#include <string>
#include <stdio.h>

class Track{
public:
    Track (std::string trackQuality, std::string nameTrack);
    
    void Race( RacingCar  car,  RacingMotorcycle  motorcycle, int  N);
    std::string getTrack();
    std::string getNameTrack();
    
private:
    std::string _nameTrack;
    std::string _trackQuality;
    
    
};


#endif /* class_Track_hpp */
