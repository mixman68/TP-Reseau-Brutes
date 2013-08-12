/*
#include "glut.h"

void affichage()
{
	//effacement de limg ac ouleur fond
		glClear(GL_COLOR_BUFFER_BIT);
	//dessin du polynome
		glBegin(GL_POLYGON);
			glColor3f(1.0,0.0,0.0);
			glVertex2f(-0.5,-0.5);
			glColor3f(0.0,1.0,0.0);
			glVertex2f(0.5,-0.5);
			glColor3f(0.0,0.0,1.0);
			glVertex2f(0.5,0.5);
			glColor3f(1.0,1.0,1.0);
			glVertex2f(-0.5,0.5);
		glEnd();
		glFlush();
}

int main(int argc,char **argv)
{
    //initilaisation de glut et creation de la fenetre
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowPosition(200,200);
    glutInitWindowSize(250,250);
    glutCreateWindow("Bonjour");
    //Initialisation d'open gl
    glClearColor(0.0,0.0,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
    //enregistrement des fonctions de rappel 
    glutDisplayFunc(affichage);
    //Entree dans la boucle principale glut
    glutMainLoop();
    return 0;
}*/

//================================================================
// File: exemple01.c
// Date: 18.01.2005
// Auth: Mounir Elbaz <Mounir.ELbaz@uha.fr>
//
// Simple program to test the installation of OpenGL and GLUT.
//================================================================

/*
#include "glut.h"

#define WINDOW_WIDTH	300
#define WINDOW_HEIGHT	300

void Display(void){

	GLdouble i;
	GLdouble MAX = 1.0;

	glClear(GL_COLOR_BUFFER_BIT);

	glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
	glColor3f( 1.0, 1.0, 0.23);
	glBegin(GL_POLYGON);
		glVertex2f(0.25*MAX, MAX);
		glVertex2f(0.75*MAX, MAX);
		glVertex2f(MAX, 0);
		glVertex2f(0,0);
	glEnd();

	glColor3f( 1.0, 0.01, 0.23);

	for( i=0.0; i<=MAX; i += 0.1){
		glBegin(GL_LINES);
			glVertex2f(0.25*MAX+0.5*i, MAX);
			glVertex2f(i, 0);
		glEnd();

	}
	for( i=0.0; i<=MAX; i += 0.1){
		glBegin(GL_LINES);
			glVertex2f(0.25*(MAX-i), MAX-i);
			glVertex2f(0.75*MAX+0.25*i, MAX-i);
		glEnd();

	}
    
	glFlush();
	
}

int main(int argc, char* argv[]){

	glutInit(&argc, argv);

	glutInitWindowSize( WINDOW_WIDTH, WINDOW_HEIGHT );
	glutInitWindowPosition( 100, 100 );
	glutCreateWindow("Test d'OpenGL et GLUT");

	glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
	glOrtho( 0.0, 1.0 , 0.0, 1.0, -1.0, 1.0 );

	glClearColor(0.0, 0.0, 0.0, 0.0);

	glutDisplayFunc(Display);
	glutMainLoop();

	return 0;
}
*/

/*
//================================================================
// File: tp02.c
// Date: 18.01.2005
// Auth: Mounir Elbaz <Mounir.ELbaz@uha.fr>
//
// Objectif : afficher a l'ecran un polygone en couleur 
//================================================================

// inclusion des fichiers d'en-tete Glut				

#include <iostream>
using namespace std;

#include "glut.h"

const int LARG=500;
const int HAUT=500;

double i = 0.0;


void affichage()
{
// effacement de l'image avec la couleur de fond 
glClear(GL_COLOR_BUFFER_BIT);
// Dessin du polygone 
glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(i,-0.75);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(0.5,-0.5);
	glColor3f(0.0,1.0,1.0);
	glVertex2f(0.75,0.0);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(0.5,0.5);
	glColor3f(1.0,0.0,1.0);
	glVertex2f(0.0,0.75);
	glColor3f(1.0,1.0,1.0);
	glVertex2f(-0.5,0.5);
	glColor3f(0.0,0.0,0.0);
	glVertex2f(-0.75,0.0);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(-0.5,-0.5);
glEnd();
// on force l'affichage du resultat 
glFlush();
}

void clavier(unsigned char touche,int x,int y)
{
switch (touche)
{
	case 'p': // affichage du carre plein 
	glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
	glutPostRedisplay();
	break;
	case 'f': // affichage en mode fil de fer 
	glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
	glutPostRedisplay();
	break;
	case 's' : // Affichage en mode sommets seuls 
	glPolygonMode(GL_FRONT_AND_BACK,GL_POINT);
	glutPostRedisplay();
	break;
	case 'd':
		i=i+0.1;
		glutPostRedisplay();
	break;
	case 'g':
		i=i-0.1;
		glutPostRedisplay();
	break;
	case 'q' : exit (0); //la touche 'q' permet de quitter le programme 
}
}
int main(int argc,char **argv)
{

	cout << "        p: affichage du polygone plein " << endl;
	cout <<"        f: affichage en mode fil de fer " << endl;
	cout <<"        s: affichage en mode sommets seuls " << endl;
	cout <<"        q: quitter le programme " << endl;

// initialisation de glut et creation de la fenetre 

glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGB);
glutInitWindowPosition(400,200);
glutInitWindowSize(LARG,HAUT);
glutCreateWindow("Test des touche du clavier");

// Initialisation d'OpenGL 

glClearColor(0.0,0.0,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glPointSize(2.0);

// enregistrement des fonctions de rappel 

glutDisplayFunc(affichage);
glutKeyboardFunc(clavier);

// Entree dans la boucle principale glut 

glutMainLoop();
return 0;
}
*/

/*
//===================================================================
// File: tp03.c
// Date: 18.01.2005
// Auth: Mounir Elbaz <Mounir.ELbaz@uha.fr>
//
// Objets de GLUT et utilisation du clavier et des touches sp�ciales.
//===================================================================

#include <stdlib.h>
#include "glut.h"

#include <iostream>
using namespace std;

static float anglex = 0.0F ;
static float angley = 0.0F ;
static float tx = 0.0F ;
static float zz = 0.0F ;
static int obj = 2 ;

void display(void) {
  glClearColor(1.0,1.0,1.0,1.0);
  glClear(GL_COLOR_BUFFER_BIT);
  glPushMatrix();
  glRotatef(angley,0.0F,1.0F,0.0F) ;
  glRotatef(anglex,1.0F,0.0F,0.0F) ;
  glTranslatef(tx,0,0);
  glColor3f(0.0F,0.0F,0.0F);
  switch ( obj ) {
    case 0 : glutWireSphere(7.0,20,20) ;
             break ;
    case 1 : glutWireCube(11.0) ;
             break ;
    case 2 : glutWireCone(6.0,9.0,20,20) ;
             break ;
    case 3 : glutWireTorus(2.0,6.0,20,20) ;
             break ;
    case 4 : glScalef(zz,zz,zz) ;
             glutWireTetrahedron() ;
             break ;
    case 5 : glScalef(7.0F,7.0F,7.0F) ;
             glutWireOctahedron() ;
             break ;
    case 6 : glScalef(5.0F,5.0F,5.0F) ;
             glutWireDodecahedron() ;
             break ;
    case 7 : glScalef(7.0F,7.0F,7.0F) ;
             glutWireIcosahedron() ;
             break ;
    case 8 : glutWireTeapot(7.0) ; 
  }
  glPopMatrix();
 // glFlush();
  glutSwapBuffers();
}



void myReshape(int w, int h) {
  glViewport(0,0,w,h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  if (h>w)
	glOrtho(-10.0,10.0,-10.0*h/w,10.0*h/w,-10.0,10.0);
  else
	glOrtho(-10.0*w/h,10.0*w/h,-10.0,10.0,-10.0,10.0);

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
}

void key(unsigned char key,int x,int y) {
  switch(key) {
    case 27  : exit(0); 
               break;
    case ' ' : obj = (obj+1)%9; 
               break;     
	case 's' : obj = 0; 
               break; 
    case 'b' : obj = 1; 
               break;     
	case 'c' : obj = 2; 
               break; 
    case 'r' : obj = 3; 
               break;     
	case 't' : obj = 4; 
               break;     
	case 'o' : obj = 5; 
               break;     
	case 'd' : obj = 6; 
               break;     
	case 'i' : obj = 7; 
               break;     
	case 'p' : obj = 8; 
               break; 
  }
  glutPostRedisplay();

}

void continu()
{
	anglex++;
	glutPostRedisplay();
}

void special(int key,int x,int y) {
  switch(key) {
    case GLUT_KEY_UP    : anglex++; 
                          break;
    case GLUT_KEY_DOWN  : anglex--; 
                          break;
    case GLUT_KEY_LEFT  : angley++; 
                          break;
    case GLUT_KEY_RIGHT : angley--; 
                          break; 
    case GLUT_KEY_PAGE_UP : tx++; 
                          break; 
     case GLUT_KEY_PAGE_DOWN : tx--; 
                          break; 
    case GLUT_KEY_F1 : zz++; 
                          break; 
     case GLUT_KEY_F2 : zz--; 
                          break; }
 glutPostRedisplay() ;
}

int main(int argc,char **argv) {
	cout <<" Tapez :"<<endl<<
"          s : Sphere"<<endl<<
"          b : Cube"<<endl<<
"          c : Cone"<<endl<<
"          r : Tore"<<endl<<
"          t : Tetrahedre"<<endl<<
"          o : Octahedre"<<endl<<
"          d : Dodecahedre"<<endl<<
"          i : Icosahedr"<<endl<<
"          p : theiere"<<endl<<endl<<" Utlisez les fleches pour tourner l'objet"<<endl; 

  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE);
  glutInitWindowSize(200,200);
  glutInitWindowPosition(600,200);
  glutCreateWindow("Objets de GLUT") ;
  glutReshapeFunc(myReshape) ;
  glutKeyboardFunc(key) ;
  glutSpecialFunc(special) ;
  glutDisplayFunc(display) ;
  glutIdleFunc(continu);
  glutMainLoop() ;
  return(0);
}*/

//================================================================
// File: tp04.c
// Date: 18.01.2005
// Auth: Mounir Elbaz <Mounir.ELbaz@uha.fr>
//
// Cube (sommets, cotes et faces) Utilisation de la souris.
//================================================================

#include <iostream>
using namespace std;

// inclusion des fichiers d'en-tete Glut 

#include "glut.h"

const int LARG=500;
const int HAUT=500;

// Notre structure point 
typedef struct
{
	float x;
	float y;
	float z;
	float r;
	float g;
	float b;
} point;
point p[8]={
	{-0.5,-0.5, 0.5,1.0,0.0,0.0},
	{-0.5, 0.5, 0.5,0.0,1.0,0.0},
	{ 0.5, 0.5, 0.5,0.0,0.0,1.0},
	{ 0.5,-0.5, 0.5,1.0,1.0,1.0},
	{-0.5,-0.5,-0.5,1.0,0.0,0.0},
	{-0.5, 0.5,-0.5,0.0,1.0,0.0},
	{ 0.5, 0.5,-0.5,0.0,0.0,1.0},
	{ 0.5,-0.5,-0.5,1.0,1.0,1.0}
};
int f[6][4]={
	{0,1,2,3},
	{3,2,6,7},
	{4,5,6,7},
	{0,1,5,4},
	{1,5,6,2},
	{0,4,7,3}
};
char presse,pressed,tooglem;
int anglex,angley,x,y,xold,yold;
float tx,ty;
// Prototype des fonctions 


void affichage()
{
int i,j;
// effacement de l'image avec la couleur de fond 
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glRotatef(-anglex,1.0,0.0,0.0);
	glRotatef(-angley,0.0,1.0,0.0);
	glTranslatef(tx/500,ty/500,0.0f);
// Dessin du cube 
	for (i=0;i<6;i++)
	{
	glBegin(GL_POLYGON);
	for (j=0;j<4;j++)
	{
	glColor3f(p[f[i][j]].r,p[f[i][j]].g,p[f[i][j]].b);
	glVertex3f(p[f[i][j]].x,p[f[i][j]].y,p[f[i][j]].z);
	}
	glEnd();
	}
//	glFlush();
// On echange les buffers 
	glutSwapBuffers();
}

void continu()
{
	anglex++;
	glutPostRedisplay();
}

void clavier(unsigned char touche,int x,int y)
{
switch (touche)
{
	case 'p': // affichage du carre plein 
	glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
	glutPostRedisplay();
	break;
	case 'f': // affichage en mode fil de fer 
	glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
	glutPostRedisplay();
	break;
	case 's' : // Affichage en mode sommets seuls 
	glPolygonMode(GL_FRONT_AND_BACK,GL_POINT);
	glutPostRedisplay();
	break;
	case 'd':
	glEnable(GL_DEPTH_TEST);
	glutPostRedisplay();
	break;
	case 'D':
	glDisable(GL_DEPTH_TEST);
	glutPostRedisplay();
	break;
	case 'q' : // la touche 'q' permet de quitter le programme 
	exit(0);
}
}
void reshape(int x,int y)
{
	if (x<y)
	glViewport(0,(y-x)/2,x,x);
	else
	glViewport((x-y)/2,0,y,y);
}
void mouse(int button, int state,int x,int y)
{
// si on appuie sur le bouton gauche 
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
	presse = 1; // le booleen presse passe a 1 (vrai) 
	xold = x; // on sauvegarde la position de la souris 
	yold=y;
}
// si on relache le bouton gauche 
	if (button == GLUT_LEFT_BUTTON && state == GLUT_UP)
	presse=0; // le booleen presse passe a 0 (faux) 

// si on appuie sur le bouton gauche 
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
	pressed = 1; // le booleen presse passe a 1 (vrai) 
	xold = x; // on sauvegarde la position de la souris 
	yold=y;
}
	if (button == GLUT_MIDDLE_BUTTON && state == GLUT_DOWN)
	{
		glutIdleFunc(continu);
}

if (button == GLUT_MIDDLE_BUTTON && state == GLUT_UP)
	{
		glutIdleFunc(NULL);
}
// si on relache le bouton gauche 
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_UP)
	pressed=0; // le booleen presse passe a 0 (faux) 
}
void mousemotion(int x,int y)
{
	if (presse) // si le bouton gauche est presse 
	{
// on modifie les angles de rotation de l'objet
//en fonction de la position actuelle de la souris et de la derniere
//position sauvegardee 
	anglex=anglex+(y-yold);
	angley=angley+(x-xold);
	glutPostRedisplay(); // on demande un rafraichissement de l'affichage 
	}
	if (pressed) // si le bouton gauche est presse 
	{
// on modifie les angles de rotation de l'objet
//en fonction de la position actuelle de la souris et de la derniere
//position sauvegardee 
	tx=tx+x-xold;
	ty=ty-y+yold;
	glutPostRedisplay(); // on demande un rafraichissement de l'affichage 
	}
	xold=x; // sauvegarde des valeurs courante de le position de la souris 
	yold=y;
}
int main(int argc,char **argv)
{
		cout <<	" Tapez :"<<endl<<
				"          s : Sommets"<<endl<<
				"          f : fil de fer"<<endl<<
				"          p : plein"<<endl<<endl<<
				" Utlisez la souris pour tourner l'objet"<<endl; 
// initialisation de glut et creation de la fenetre 
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowPosition(200,250);
	glutInitWindowSize(LARG,HAUT);
	glutCreateWindow("cube");
// Initialisation d'OpenGL 
	glClearColor(0.0,0.0,0.0,0.0);
	glColor3f(1.0,1.0,1.0);
	glPointSize(2.0);
	glEnable(GL_DEPTH_TEST);
// enregistrement des fonctions de rappel 
	glutDisplayFunc(affichage);
	glutKeyboardFunc(clavier);
	glutReshapeFunc(reshape);
	glutMouseFunc(mouse);
	glutMotionFunc(mousemotion);
// Entree dans la boucle principale glut 
	glutMainLoop();
	return 0;
}



