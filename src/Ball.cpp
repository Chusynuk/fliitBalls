#include "Ball.hpp"
Ball::Ball(){
}

void Ball::setup(float _x,float _y, int _dim){

    x = _x;      // give some random positioning
    y = _y;
    dim = _dim;
    
    speedX = ofRandom(-5, 5);           // and random speed and direction
    speedY = ofRandom(-5, 5);
    
    color.set(ofRandom(255),ofRandom(255),ofRandom(255));
}

void Ball::update(){
    if(x < -1 ){
        x = 0;
        speedX *= -1;
    } else if(x > ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    }
    
    if(y < -1 ){
        y = 0;
        speedY *= -1;
    } else if(y > ofGetHeight()){
        y = ofGetHeight();
        speedY *= -1;
    }
    
    x+=speedX;
    y+=speedY;
}

void Ball::draw(){
    ofSetColor(color);
    ofDrawCircle(x, y, dim);
}
