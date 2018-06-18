//
//  BallRed.cpp
//  fliitBalls
//
//  Created by Eloi on 6/17/18.
//

#include "BallRed.hpp"

void BallRed::draw(){
    ofSetColor(ofColor::red);
    ofDrawCircle(x, y, dim);
}
