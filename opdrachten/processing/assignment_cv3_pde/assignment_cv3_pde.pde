import gab.opencv.*;
import processing.video.*;
import java.awt.*;

Capture video;
OpenCV frontalfaceOpencv;
OpenCV noseOpencv;
OpenCV eyeOpencv;
OpenCV mouthOpencv;

void setup() {
  size(640, 480);
  video = new Capture(this, 640/2, 480/2);
  frontalfaceOpencv = new OpenCV(this, 640/2, 480/2);
  frontalfaceOpencv.loadCascade(OpenCV.CASCADE_FRONTALFACE);  
  eyeOpencv = new OpenCV(this, 640/2, 480/2);
  eyeOpencv.loadCascade(OpenCV.CASCADE_EYE);  
  noseOpencv = new OpenCV(this, 640/2, 480/2);
  noseOpencv.loadCascade(OpenCV.CASCADE_NOSE);
  mouthOpencv = new OpenCV(this, 640/2, 480/2);
  mouthOpencv.loadCascade(OpenCV.CASCADE_MOUTH);  
  video.start();
}

void draw() {
  scale(2);
  frontalfaceOpencv.loadImage(video);
  noseOpencv.loadImage(video);
  eyeOpencv.loadImage(video);
  mouthOpencv.loadImage(video);
  image(video, 0, 0 );

  fill(0,0,0);
  stroke(0, 0, 0);
  strokeWeight(3);
  Rectangle[] eye = eyeOpencv.detect();
  Rectangle[] face = frontalfaceOpencv.detect();
  Rectangle[] nose = noseOpencv.detect();
  Rectangle[] mouth = mouthOpencv.detect();
  println(face.length);
  println(nose.length);
  println(eye.length); 
  println(mouth.length);   
  //FACE
  for (int f = 0; f < face.length; f++) {
    println(face[f].x + "," + eye[f].y);
    rect(face[f].x, eye[f].y, face[f].width, eye[f].height);
  
for (int n = 0; n < nose.length; n++) { 
    println(nose[n].x + "," + nose[n].y);
    ellipseMode(CORNER);
    ellipse(nose[n].x, nose[n].y, nose[n].width, nose[n].height);
  }  
for (int m = 0; m < mouth.length; m++) { 
    println(mouth[m].x + "," + mouth[m].y);
    ellipseMode(CORNER);
    ellipse(mouth[m].x, mouth[m].y, mouth[m].width, mouth[m].height);
  }  
}
  
  //NOSE

}

void captureEvent(Capture c) {
  c.read();
}
