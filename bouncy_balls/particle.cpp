//
//  particle.cpp
//  particles
//
//  Created by Robby Kraft on 3/6/19.
//

#include "particle.hpp"


void Particle::setup(){
    vel.x = ofRandom(-1, 1);
    vel.y = ofRandom(-1, 1);
}

void Particle::update(){
    vel.y += 0.01;
    pos += vel;
    if (pos.x > ofGetWidth()) {
        vel.x = -vel.x;
        pos.x = ofGetWidth();
    }
    if (pos.y > ofGetHeight()) {
        vel.y = -vel.y * 0.7;
        pos.y = ofGetHeight();
    }
    if (pos.x < 0) {
        vel.x = -vel.x;
        pos.x = 0;
    }
    if (pos.y < 0) {
        vel.y = -vel.y;
        pos.y = 0;
    }
}

void Particle::draw(){
    ofDrawCircle(pos, 5);
}
