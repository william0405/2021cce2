PImage img;
void setup()//設定
{
  size(700,700);
  img = loadImage("阿尼亞亞.jpg");
}
void draw()//每秒60次畫圖
{
  image(img,mouseX,mouseY);
}
