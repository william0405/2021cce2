void setup(){//只做一次
  size(300,300);
  fill(#C92222);
  textSize(50);
  textAlign(CENTER,CENTER);//滑鼠游標對其正中間
}
void draw(){//每秒60次
  background(#82C5E5);
  text("Dinner 1",150,50);
  text("Dinner 2",150,150);
  text("Dinner 3",150,250);
  //text("Yorushika",mouseX,mouseY);
}
