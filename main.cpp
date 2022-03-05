#include<GL/glu.h>
#include<GL/glut.h>


GLfloat L = 0;
GLfloat R = 0;
GLfloat flag = 0;

void MyInt()
{
   glClearColor(0,0,0,0); // add color to window

}

// function for animations
void IdelFunc()
{
    // stars and rocket

        R = R + 0.0008;
      if(R>0.5){
        R = 0;
    }

     L = L + 0.00005 ;
    if(L>0.8){
        L = 0;
    }
    glutPostRedisplay();
}

void UFO()
{

 glBegin(GL_POLYGON);
 glColor3f(1,1,0.8);//head
 glVertex2f(-0.17+L, 0.3);
 glVertex2f(0.0+L, 0.35);
 glVertex2f(0.17+L, 0.3);
 glVertex2f(0.2+L, 0.2);
 glVertex2f(-0.2+L, 0.2);
 glVertex2f(0.2+L, 0.2);
 glEnd();


glBegin(GL_POLYGON);
 glColor3f(0.2,0.2,0.2);//body
 glVertex2f(-0.2+L, 0.2);
 glVertex2f(0.2+L, 0.2);
 glVertex2f(0.6+L, 0.0);
 glVertex2f(0.1+L, -0.2);
 glVertex2f(-0.1+L, -0.2);
 glVertex2f(-0.6+L, 0.0);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(0.8,0.8,0.8);// light belt
 glVertex2f(-0.6+L, 0.01);
 glVertex2f(0.6+L, 0.01);
 glVertex2f(0.6+L, -0.01);
 glVertex2f(-0.6+L, -0.01);
  glEnd();


 glBegin(GL_POLYGON);
glColor3f(1,0,0.1);//red fire
 glVertex2f(0.1+L, -0.2);
 glVertex2f(0.2+L, -0.8);

 glVertex2f(-0.2+L, -0.8);
 glVertex2f(-0.1+L, -0.2);
 glEnd();


 glBegin(GL_POLYGON);
glColor3f(1,0.8,0.0);//red fire
 //glVertex2f(0.1, -0.2);
 glVertex2f(0.2+L, -0.8);
 glVertex2f(0.0+L, -0.9);
 glVertex2f(-0.2+L, -0.8);
 //glVertex2f(-0.1, -0.2);
 glEnd();

}



void Rocket()
{

glBegin(GL_POLYGON);
 glColor3f(0,0,1);//head tank
 glVertex2f(-0.1, 0.2);
 glVertex2f(0.1, 0.2);
 glVertex2f(0.1, -0.4);
 glVertex2f(-0.1, -0.4);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(0,0,1);//head
 glVertex2f(0.0, 0.4);
 glVertex2f(0.1, 0.2);
 glVertex2f(-0.1, 0.2);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(0.3,0.4,0.9);//middle
 glVertex2f(-0.1, 0.2);
 glVertex2f(0.1, 0.2);
 glVertex2f(0.1, -0.2);
 glVertex2f(-0.1, -0.2);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(0.2,0.2,0.3);//wing left
 glVertex2f(-0.1, 0.1);
 glVertex2f(-0.1, -0.36);
 glVertex2f(-0.2, -0.36);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(0.2,0.2,0.3);//wing right
 glVertex2f(0.1, 0.1);
 glVertex2f(0.1, -0.36);
 glVertex2f(0.2, -0.36);
 glEnd();



glBegin(GL_POLYGON);
 glColor3f(0.2,0.2,0.3);//tank
 glVertex2f(-0.05, -0.4);
 glVertex2f(0.05, -0.4);
 glVertex2f(0.08, -0.6);
 glVertex2f(-0.08, -0.6);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1,0,0.1);//redfire
 glVertex2f(0.08, -0.6);
 glVertex2f(0.1, -0.65);
 glVertex2f(0.0, -0.9);
 glVertex2f(-0.1, -0.65);
 glVertex2f(-0.08, -0.6);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1 ,0.9,0.0);//yellow fire
 glVertex2f(0.08, -0.6);
 glVertex2f(0.095, -0.65);
 glVertex2f(0.0, -0.80);
 glVertex2f(-0.095, -0.65);
 glVertex2f(-0.08, -0.6);
 glEnd();




}

void Stars ()
{
    glPointSize(5);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(-0.07, 0.73-R);
 glEnd();

 glPointSize(1);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(-0.05, 0.5-R);
 glEnd();

 glPointSize(2);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(-0.3, 0.3-R);
 glEnd();

 glPointSize(3);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(-0.4, 0.4-R);
 glEnd();

  glPointSize(10);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(-0.8, 0.8-R);
 glEnd();

 glPointSize(4);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(0.8, 0.7-R);
 glEnd();

  glPointSize(5);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(0.8, -0.8-R);
 glEnd();

 glPointSize(6);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(-0.8, -0.7-R);
 glEnd();


 glPointSize(5);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(0.5, 0.0-R);
 glEnd();

  glPointSize(3);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(0.5, 0.4-R);
 glEnd();


 glPointSize(5);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(-0.5, -0.5-R);
 glEnd();

 glPointSize(5);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(0.5, -0.5-R);
 glEnd();

 glPointSize(4);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(0.9, 0.2-R);
 glEnd();

  glPointSize(5);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(-0.9, 0.3-R);
 glEnd();

  glPointSize(2);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(0.9, -0.2-R);
 glEnd();

  glPointSize(5);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(-0.3, -0.9-R);
 glEnd();


 glPointSize(3);
glBegin(GL_POINTS);
 glColor3f(1,1,1);//star
 glVertex2f(- 0.5, 0.0-R);
 glEnd();

}

void Astroid ()
{
  glBegin(GL_POLYGON);
 glColor3f(0.2 ,0.2,0.2);// rock
 glVertex2f(0.2, 0.5);
 glVertex2f(0.32, 0.4);
 glVertex2f(0.3, 0.2);
 glVertex2f(0.4, 0.2);
 glVertex2f(0.3, -0.1);
 glVertex2f(0.1, -0.3);
 glVertex2f(0.0, -0.3);
 glVertex2f(0.1, -0.32);
 glVertex2f(-0.1, -0.3);
 glVertex2f(-0.2, -0.2);
 glVertex2f(-0.3, -0.1);
 glVertex2f(-0.33, -0.1);
 glVertex2f(-0.36, 0.2);
 glVertex2f(-0.32, 0.4);
 glVertex2f(-0.2, 0.5);
 glVertex2f(-0.1, 0.4);
 glVertex2f(0.0, 0.53);
 glVertex2f(-0.2, 0.4);

 glEnd();

 glPointSize(50);
 glBegin(GL_POINTS);
 glColor3f(0.3,0.3,0.3);
 glVertex2f(0.0, 0.0);
 glVertex2f(0.08, 0.07);
 glEnd();



}

void Display()
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );


Stars();

if(flag==1)
{
    UFO();
}

if(flag==0) {
    Rocket();
}
if(flag==2) {
    Astroid();
}


glutSwapBuffers();


}

// Menu method
void rightMenu(int id)
{
    if (id==1)
    {
        flag=1;
    }
    if(id==2)
    {
         flag=0;
    }
    if(id==3)
    {
         flag=2;
    }
    glutPostRedisplay();
}

int main(int C, char *V[])
// parameters count,array of string vector,
//it is empty because we don't know how many parameters will add.
{
    glutInit(&C, V);
    //initialization- which work on both CLI an GUI,Otherwise CLI program only run
    //& for call the address,v has already pointer,so no need address
    glutInitWindowPosition(300,30);
    glutInitWindowSize(800,600);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);//initialize the display mode
    // double buffer used in translations, in there need two
    //frames for show the two separate translations.
    // so changing between two frames it show the translation
    glutCreateWindow("Individual Project");//create the displaying window

    MyInt();
    glutDisplayFunc(Display);
    glutIdleFunc(IdelFunc);

    // Menu code
    glutCreateMenu(rightMenu);
    glutAddMenuEntry("UFO Fly", 1);
    glutAddMenuEntry("Rocket", 2);
    glutAddMenuEntry("Asteroid", 3);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    // End Menu code

    glutMainLoop();// start the execution in main

return 0;
}
