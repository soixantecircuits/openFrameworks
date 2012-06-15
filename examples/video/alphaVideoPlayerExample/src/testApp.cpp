#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
  ofEnableAlphaBlending();
  movie.setPixelFormat(OF_PIXELS_BGRA);
  movie.loadMovie("backgroundlogo_dashboard.mov");
  movie.play();
  movie.setLoopState(OF_LOOP_NORMAL);
}

//--------------------------------------------------------------
void testApp::update(){
  movie.update();
}

//--------------------------------------------------------------
void testApp::draw(){
  movie.draw(0, 0);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
