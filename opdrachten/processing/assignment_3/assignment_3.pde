
void setup() {
 size(600,600);
}

void draw() {
   background(255);
   //FACE,EARS
   noStroke();
   fill(0,0,0);                           //BLACK
   ellipseMode(CENTER);
   ellipse(300, 300, 300, 300);           // x horizontaal, y verticaal, width, height
   ellipse(150, 125, 200, 200);
   ellipse(450, 125, 200, 200);
   //FACE
   fill(255,229,204);                     //BEIGE
   ellipse(300, 360, 300, 180);
   ellipse(300, 400, 150, 150);
   ellipse(250, 280, 140, 200);
   ellipse(350, 280, 140, 200);
   //EYES
   fill(255,255,255);                     //WHITE
   ellipse(260, 280, 70, 120);
   ellipse(340, 280, 70, 120);
   //EYES,NOSE
   fill(0,0,0);
   float mx = constrain(mouseX, 245, 285);
   ellipse(mx, 315, 30, 50);
   ellipse(mx+65, 315, 30, 50);
   ellipse(300, 380, 80, 50);
   fill(250,0,0);
   ellipse(300, 440, 30, 30);
   triangle(225, 175, 250, 35, 365, 200); // x1 horizontaal, y1 verticaal, x2, y2, x3, y3
   triangle(225, 175, 200, 310, 90, 150); // x1 horizontaal, y1 verticaal, x2, y2, x3, y3
   //BOW DECORATION
   fill(255,255,255);                     //WHITE
   noStroke();
   arc(225, 175, 80, 80, 4.87, 6.5, PIE); // float x, float y, float width, float hight, float start radius, float stop radius,
   arc(225, 175, 80, 80, 1.74, 3.33, PIE);// float x, float y, float width, float hight, float start radius, float stop radius,
   fill(255,200,150);                     //PEACH
   arc(225, 175, 80, 80, 3.30, 4.9, PIE);
   arc(225, 175, 80, 80, 6.4, 8, PIE);
   stroke(255,255,255);
   strokeWeight(3);
   line(205, 143, 246, 208);
   stroke(255,200,150);
   strokeWeight(3);
   line(195, 198, 255, 153);
   fill(255,0,0);          //RED
   rect(210, 160, 30, 30);   
}
