#pragma once

#include "ofMain.h"

class Arrow {
public:
	
	Arrow(){}
	~Arrow(){}
	
	void update(ofVec3f target);
	void draw();
	
	ofVec3f pos;
	ofVec3f offset;
	
	float angle;		// angle in degrees
	
	float size = 10.;
	float lerp = 1.;		// speed, 0-1
	
	ofColor color = ofColor::white;
		
};

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
	
	vector<Arrow> arrows;
		
};
