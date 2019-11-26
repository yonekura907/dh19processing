#pragma once

#include "ofMain.h"

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
    
    
//    static const int NUM = 1000;
//    ofVec2f pos[NUM];
    
    //動的配列
//    vector <int> vecNum{1,2,3};
    
    
    //動的配列の座標
    vector <ofVec3f> position;
    // 動的配列スピード
    vector <ofVec3f> speed;
		
};