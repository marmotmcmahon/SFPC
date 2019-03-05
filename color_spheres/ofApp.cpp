#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    ofSetBackgroundAuto(false);
    ofBackground(0);
    
    for (int i = 0; i < numberOfShelves; i++) {
        walkerXs[i] = ofRandom(ofGetWidth());
        walkerYs[i] = ofRandom(ofGetWidth());
        
        walkerRs[i] = 200;
        walkerGs[i] = 200;
        walkerBs[i] = 200;
        
        walkerRadii[i] = 5;
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < numberOfShelves; i++) {
        walkerXs[i] += ofRandom(-1, 1) * 0.1;
        walkerYs[i] += ofRandom(-1, 1) * 0.1;
        
        walkerRs[i] += ofRandom(-1, 1);
        walkerGs[i] += ofRandom(-1, 1);
        walkerBs[i] += ofRandom(-1, 1);
        
        walkerRadii[i] += ofRandom(-1, 1) * 0.5;
    }
    
    for (int i = 0; i < numberOfShelves; i++) {
        float xPosition = walkerXs[i];
        float yPosition = walkerYs[i];
        
        float rValue = walkerRs[i];
        float gValue = walkerGs[i];
        float bValue = walkerBs[i];
        
        ofSetColor(rValue, gValue, bValue, 80);
        float radius = ofMap(ofRandom(1), 0, 1, 5, 10);
        ofDrawCircle(xPosition, yPosition, walkerRadii[i]);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
