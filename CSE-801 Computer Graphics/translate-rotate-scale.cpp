
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <iostream>

using namespace std;

float xr = 0.0;
float yr = 0.0;
float xt = 0.0;
float yt = 0.0;
float xs = 1.0;
float ys = 1.0;

enum draw_mode_t { TRANSLATION, ROTATION, SCALING };

draw_mode_t draw_mode = TRANSLATION;

static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;
    
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);
    
    glMatrixMode(GL_MODELVIEW);
}

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    
    glTranslatef(0, 0, -50);
    glRotatef(xr, 1.0, 0.0, 0.0);
    glRotatef(yr, 0.0, 1.0,0.0);
    glTranslatef(xt, yt, 0);
    glScalef(xs, ys, 0);
    glColor3ub(45, 167, 129);
    glutSolidCube(10);
    glutSwapBuffers();
}

static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 27 :
        case 'q':
            exit(0);
            break;
        case 'w':
            if(draw_mode ==  TRANSLATION) xt += 1;
            else if(draw_mode ==  ROTATION) xr += 5;
            else if(draw_mode ==  SCALING) xs += 0.1;
            break;
        case 's':
            if(draw_mode ==  TRANSLATION) xt -= 1;
            else if(draw_mode ==  ROTATION) xr -= 5;
            else if(draw_mode ==  SCALING) xs -= 0.1;
            break;
        case 'a':
            if(draw_mode ==  TRANSLATION) yt += 1;
            else if(draw_mode ==  ROTATION) yr += 5;
            else if(draw_mode ==  SCALING) ys += 0.1;
            break;
        case 'd':
            if(draw_mode ==  TRANSLATION) yt -= 1;
            else if(draw_mode ==  ROTATION) yr -= 5;
            else if(draw_mode ==  SCALING) ys -= 0.1;
            break;
        case 't':
            draw_mode = TRANSLATION;
            break;
        case 'r':
            draw_mode = ROTATION;
            break;
        case 'e':
            draw_mode = SCALING;
            break;
    }
    
    glutPostRedisplay();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(400,300);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    
    glutCreateWindow("Lab - Scaling");
    
    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    
    glClearColor(1,1,1,1);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);
    
    glutMainLoop();
    
    return EXIT_SUCCESS;
}

