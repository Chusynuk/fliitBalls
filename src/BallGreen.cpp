//
//  BallGreen.cpp
//  fliitBalls
//
//  Created by Eloi on 6/17/18.
//

#include "BallGreen.hpp"


void BallGreen::draw(){
    ofSetColor(ofColor::green);
    ofDrawCircle(x, y, dim);
}
