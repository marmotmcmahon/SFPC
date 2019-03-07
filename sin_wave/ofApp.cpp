#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float time = ofGetElapsedTimef();
    
    cout << time << endl;
    int numCircles = 1100;
    float test1 = ofMap(mouseX, 0, ofGetWidth(), 0, 4);
    float test2 = ofMap(mouseX, 0, ofGetWidth(), 0, 0.05);
    float test3 = ofMap(mouseY, 0, ofGetHeight(), 0, 0.005);
    int test4 = ofMap(mouseY, 0, ofGetHeight(), 1, 50);
    for (int i = 0; i < numCircles; i++) {
        
        float x = i;
        x = ofMap(x, 0, numCircles, 0, ofGetWidth() + 20 * cos(2 * time + (float)i / 200));
        float y = ofGetHeight() / 2 + ofMap(sin(test1 * time + (float)i  / 50), -1, 1, -50, 200);
         float radius = ofMap(sin(time + (float)i / 100), -1, 1, 10, 100);
        
        if (i % (int)test4 == 0) {
            ofSetColor(
                           127 + 127 * sin(i * (test2 + 0 * test3) + time),
                           127 + 127 * sin(i * (test2 + 1 * test3) + time),
                           127 + 127 * sin(i * (test2 + 2 * test3) + time)
                           );
            ofDrawCircle(x, y, radius);
        } else {
            ofSetColor(0);
            ofDrawCircle(x, y, radius);
        }
        
        
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
