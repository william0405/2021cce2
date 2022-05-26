//來個主角img，按滑鼠會發射子彈img2
PImage img,img2;
void setup()
{
  size(750,800);
  img=loadImage("主角.jpg");
  img2=loadImage("子彈.jpg");
}
int dy=0;
void draw()
{
  background(255);
  imageMode(CENTER);
  image(img,mouseX,mouseY);
  if(mousePressed)
  {
    image(img2,mouseX,mouseY-dy);
    dy++;
    
  }
  else dy=0;
}
