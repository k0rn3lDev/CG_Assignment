#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);




    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();  
    glTranslatef(-0.5f, 0.5f, 0.0f);
    glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);  
        glVertex2f(-0.3, -0.3);
        glVertex2f(0.3, -0.3);
        glVertex2f(0.3, 0.3);
        glVertex2f(-0.3, 0.3);
    glEnd();




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




    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(-0.7f, -0.4f, 0.0f);
    glBegin(GL_QUADS);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(-0.15 * 1.2, 0.15 * 1.2);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(0.15 * 1.2, 0.15 * 1.2);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(0.15 * 1.2, -0.15 * 1.2);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.15 * 1.2, -0.15 * 1.2);
    glEnd();




    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.5f, 0.5f, 0.0f);
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 0.0);
        glVertex2f( 0.50f * 0.40,  0.00f * 0.40);
        glVertex2f( 0.25f * 0.40,  0.433f * 0.40);
        glVertex2f(-0.25f * 0.40,  0.433f * 0.40);
        glVertex2f(-0.50f * 0.40,  0.00f * 0.40);
        glVertex2f(-0.25f * 0.40, -0.443f * 0.40);
        glVertex2f( 0.25f * 0.40, -0.443f * 0.40);
    glEnd();




    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.4f, -0.32f, 0.0f);
    glBegin(GL_TRIANGLES);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.3 * 0.9, -0.1732f * 0.9);
        glVertex2f(0.3 * 0.9, -0.1732f * 0.9);
        glVertex2f(0.0 * 0.9, 0.3464f * 0.9);
    glEnd();




    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.6f, -0.4f, 0.0f);
    glRotatef(180.0f, 0.0f, 0.0f, 1.0f);
    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.3 * 0.9, -0.1732f * 0.9);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.3 * 0.9, -0.1732f * 0.9);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.0 * 0.9, 0.3464f * 0.9);
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