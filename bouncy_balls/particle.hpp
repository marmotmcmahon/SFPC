//
//  particle.hpp
//  particles
//
//  Created by Robby Kraft on 3/6/19.
//

#ifndef particle_hpp
#define particle_hpp

#include <stdio.h>
#include "ofMain.h"


class Particle {
    
public:
    
    ofPoint pos;
    ofPoint vel;
    
    void setup();
    void update();
    void draw();
    
};

#endif /* particle_hpp */

