//
//  BallBlue.cpp
//  fliitBalls
//
//  Created by Eloi on 6/17/18.
//

#include "BallBlue.hpp"

void BallBlue::draw(){
    ofSetColor(ofColor::blue);
    ofDrawCircle(x, y, dim);
}
