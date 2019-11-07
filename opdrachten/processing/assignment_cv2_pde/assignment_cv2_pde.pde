import gab.opencv.*;
import processing.video.*;
import java.awt.*;

Capture video;
OpenCV opencv;

void setup() {
  size(640, 480);
  video = new Capture(this, 640/2, 480/2);
  opencv = new OpenCV(this, 640/2, 480/2);
  opencv.loadCascade(OpenCV.CASCADE_EYE);  

  video.start();
}

void draw() {
  scale(2);
  opencv.loadImage(video);

  image(video, 0, 0 );

  noFill();
  stroke(0, 255, 0);
  strokeWeight(3);
  Rectangle[] eye = opencv.detect();
  println(eye.length);

  for (int i = 0; i < eye.length; i++) {
    println(eye[i].x + "," + eye[i].y);
    ellipseMode(CORNER);
    ellipse(eye[i].x, eye[i].y, eye[i].width, eye[i].height);
  }
}

void captureEvent(Capture c) {
  c.read();
}
