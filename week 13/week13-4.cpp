void setup(){//�u���@��
  size(300,300);
  fill(#C92222);
  textSize(50);
  textAlign(CENTER,CENTER);//�ƹ���й�䥿����
}
void draw(){//�C��60��
  background(#82C5E5);
  text("Dinner 1",150,50);
  text("Dinner 2",150,150);
  text("Dinner 3",150,250);
  int choice=mouseX % 3;//0,1,2
  if(choice==0)rect(0,25,50,50);
  if(choice==1)rect(0,125,50,50);
  if(choice==2)rect(0,225,50,50);
}
