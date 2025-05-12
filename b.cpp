#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);




    // Red Square
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();  
    glTranslatef(-0.5f, 0.5f, 0.0f);
    glRotatef(-40.0f, 0.0f, 0.0f, 1.0f);
    glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);  
        glVertex2f(-0.3, -0.3);
        glVertex2f(0.3, -0.3);
        glVertex2f(0.3, 0.3);
        glVertex2f(-0.3, 0.3);
    glEnd();




    // Green Square
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();  
    glTranslatef(-0.4f, -0.2f, 0.0f); 
    glBegin(GL_QUADS);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.3, -0.3);
        glVertex2f(0.3, -0.3);
        glVertex2f(0.3, 0.3);
        glVertex2f(-0.3, 0.3);
    glEnd();




    // White and Black Square
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(-0.7f, -0.4f, 0.0f);
    glScalef(1.2f, 1.2f, 1.0f);
    glBegin(GL_QUADS);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(-0.15, 0.15);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(0.15, 0.15);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(0.15, -0.15);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.15, -0.15);
    glEnd();




    // Yellow Hexagon
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.5f, 0.5f, 0.0f);
    glScalef(0.40f * 2.0, 0.40f * 2.0, 1.0f);
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 0.0);
        glVertex2f(0.50f, 0.00f);
        glVertex2f(0.25f, 0.433f);
        glVertex2f(-0.25f, 0.433f);
        glVertex2f(-0.50f, 0.00f);
        glVertex2f(-0.25f, -0.443f);
        glVertex2f(0.25f, -0.443f);
    glEnd();




    // Blue Triangle
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.4f, -0.32f, 0.0f);
    glScalef(0.9f, 0.9f, 1.0f);
    glBegin(GL_TRIANGLES);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.3, -0.1732f);
        glVertex2f(0.3, -0.1732f);
        glVertex2f(0.0, 0.3464f);
    glEnd();




    // RGB Triangle
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.6f, -0.4f, 0.0f);
    glRotatef(180.0f, 0.0f, 0.0f, 1.0f);
    glScalef(0.9f, 0.9f, 1.0f);
    glBegin(GL_TRIANGLES);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.3, -0.1732f);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.3, -0.1732f);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.0, 0.3464f);
    glEnd();

    glFlush();
}






int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Computer Graphics Assignment");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}