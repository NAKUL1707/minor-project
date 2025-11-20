#include <stdio.h>
 #include <conio.h>
 #include <graphics.h> 
intmain() { 
int gd = DETECT, gm;
 initgraph(&gd, &gm, "C:\\TurboC3\\BGI"); // Update the path to your BGI files
 setbkcolor(GREEN);
 printf("\t\t\t\n\nLINE");
 // Draw LINE
 line(50, 40, 190, 40);
 printf("\t\t\n\n\n\nRECTANGLE");
 // Draw RECTANGLE
 rectangle(125, 115, 215, 165);
 printf("\t\t\t\n\n\n\n\n\n\nARC");
 // Draw ARC
 arc(120, 200, 180, 0, 30);
 printf("\t\n\n\n\nCIRCLE");
 // Draw CIRCLE
 circle(120, 270, 30);
 printf("\t\n\n\n\nECLIPSE");
 // Draw ELLIPSE
 ellipse(120, 350, 0, 360, 30, 20);
 getch();
 closegraph();
 return 0; 
}