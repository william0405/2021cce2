void setup(){//�u���@��
  size(300,300);
  fill(#C92222);
  textSize(50);
  textAlign(CENTER,CENTER);//�ƹ���й�䥿����
}
int choice =-1;
void draw(){//�C��60��
  background(#82C5E5);
  text("Dinner 1",150,50);
  text("Dinner 2",150,150);
  text("Dinner 3",150,250);
  //int choice=mouseX % 3;//0,1,2
  if(choice==0)ellipse(30,50,50,50);
  if(choice==1)ellipse(30,150,50,50);
  if(choice==2)ellipse(30,250,50,50);
}
void mousePressed(){
  choice = int(random(3));
}
