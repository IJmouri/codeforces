
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>

const int MAX = 5;
const double PI = 3.14;

void GetCords(float mat1[][MAX], float mat2[][MAX], int n){
    int i, j;
    for(i=0; i<n; i++){
        printf("\n Enter Coordinate no %d:- \n", i+1);
        for(j=0; j<2; j++){
            scanf("%f", &mat1[j][i]);
            }
        }

    for(i=0; i<n; i++){
        mat2[0][i] = mat1[0][i];
        mat1[0][i] = 320 + mat1[0][i];
        mat2[1][i] = mat1[1][i];
        mat1[1][i] = 240 - mat1[1][i];
        }

    setcolor(GREEN);
    line(0, 240, 640, 240);
    outtextxy(630, 245, "x");
    line(320, 0, 320, 480);
    outtextxy(310, 0, "y");
    outtextxy(280, 245, "(0,0)");

    setcolor(YELLOW);
    moveto(mat1[0][0], mat1[1][0]);
    for(i=0; i<n; i++){
            lineto(mat1[0][i], mat1[1][i]);
            moveto(mat1[0][i], mat1[1][i]);
            }
    lineto(mat1[0][0], mat1[1][0]);

    }

void Scale(float mat2[][MAX], int n){
    int sx, sy, i, j, k;
    float tmat[MAX][MAX], tot[MAX][MAX];
    printf("\n Enter the Scale value of x: ");
    scanf("%d", &sx);
    printf("\n Enter the Scale value of y: ");
    scanf("%d", &sy);

    tmat[0][0] = sx;
    tmat[0][1] = 0;
    tmat[1][0] = 0;
    tmat[1][1] = sy;

    for(i=0; i<2; i++){
        for(j=0; j<n; j++){
            tot[i][j] = 0;
            for(k=0; k<2; k++){
                tot[i][j] = tot[i][j] + (tmat[i][k] * mat2[k][j]);
                }
            }
        }

    for(i=0; i<n; i++){
        tot[0][i] = 320 + tot[0][i];
        tot[1][i] = 240 - tot[1][i];
        }

    setcolor(LIGHTRED);
    moveto(tot[0][0], tot[1][0]);
    for(i=0; i<n; i++){
            lineto(tot[0][i], tot[1][i]);
            moveto(tot[0][i], tot[1][i]);
            }
    lineto(tot[0][0], tot[1][0]);
    }

void main(){
    int gd=DETECT, gm;
    initgraph(&gd, &gm,"\\tc");
    float mat1[MAX][MAX], mat2[MAX][MAX];
    int ch, n;
    while(1){
        clrscr();
        cleardevice();
        printf("\n SCALING ");
        printf("\n ~~~~~~~\n");
        printf("\n 1 -> LINE.");
        printf("\n 2 -> TRIANGLE.");
        printf("\n 3 -> RECTANGLE");
        printf("\n 4 -> Exit.");
        printf("\n Enter your choice: ");
        scanf("%d", &ch);
        clrscr();
        cleardevice();
        switch(ch){
            case 1:     // LINE.
                n=2;
                break;
            case 2:     // TRIANGLE.
                n=3;
                break;
            case 3:     // RECTANGLE.
                n=4;
                break;
            default:
                gotoxy(10, 10);
                printf(" Dev. By: Manoj Pandey.");
                gotoxy(15, 15);
                printf("MCA 3d Sem.");
                getch();
                closegraph();
                exit(1);
            } // end of switch.
        GetCords(mat1, mat2, n); // Input of Coordinates.
        Scale(mat2, n); // Scaling and Displaying.
        getch();
        } // end of while.
    } // end of main.
