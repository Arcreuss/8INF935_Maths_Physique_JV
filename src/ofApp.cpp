#include "ofApp.h"
#include "iostream"
#include "../Vector3D.h"

//--------------------------------------------------------------
void ofApp::setup(){
	Box.set(BoxHeight, BoxWidth, BoxDepth);
}

//--------------------------------------------------------------
void ofApp::update(){
	Vector3D vectorD(1, 1, 0, 0);
	Vector3D vectorIni(Box.getPosition());
	Vector3D test(vectorD + vectorIni);
	std::cout << test.getVectorX() << endl;
	Box.setPosition(Vector3D::ConvertVect(test));
}

//--------------------------------------------------------------
void ofApp::draw(){
	Box.setSideColor(3, ofColor::aqua);

	Box.draw();
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
