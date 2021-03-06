#pragma once

#include "ofMain.h"
#include "Ball.hpp"
#include "BallBlue.hpp"
#include "BallRed.hpp"
#include "BallGreen.hpp"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
 
//    vector <Ball> groupOfBalls;
//
//    vector <BallBlue> groupOfBlueBalls;
//
//    vector <BallRed> groupOfRedBalls;
//
//    vector <BallGreen> groupOfGreenBalls;

    
    BallRed redBall;
    
    BallBlue blueBall;
    
    BallGreen greenBall;
};
