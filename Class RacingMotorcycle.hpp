//
//  Class RacingMotorcycle.hpp
//  Races
//
//  Created by Павел on 04.01.2023.
//

#ifndef Class_RacingMotorcycle_hpp
#define Class_RacingMotorcycle_hpp

#include <stdio.h>

class RacingMotorcycle{
public:
    RacingMotorcycle();
    int getMotoSpeed();
    int getMotoAcceleration();
    int getMotoPatency();
    
private:
    int _maxSpeed=250;
    int _acceleration=2;
    int _vehiclePatency=5;
    
};


#endif /* Class_RacingMotorcycle_hpp */
