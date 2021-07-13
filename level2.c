#include <stdio.h>
#include <stdlib.h>
#include <process.h>
#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#include"Üst Bilgi.h"

typedef struct C {
int x1;
int y1;
int x2;
int y2;
int renk1;
int renk2;
int renk3;
struct C *next;


}coordinates;
typedef struct W {
int renk1;
int renk2;
int renk3;
struct W *next;
}windowscolour;


int main()

{

al_init();

al_init_primitives_addon();
int puan2 = 250;
int i, j, x1 = 10, x2 = 130, y1 = 150, y2 = 270;
int xa = 10, xb = 130, ya = 150, yb = 270;
int count2_1 = 0, count2_2 = 0, count2_3 = 0, count2_4 = 0;

int countT2_1 = 0, countT2_2 = 0, countT2_3 = 0,countT2_4=0,countT2_5=0,countT2_6=0;
int countL2_2 = 0, countL2_1= 0, countL2_3 = 0, countL2_4 = 0, countL2_5 = 0;
int counth2_1 = 0, counth2_2 = 0, counth2_3 = 0, counth2_4 = 0, counth2_5 = 0,counth2_6=0,counth2_7=0,counth2_8=0, count2p = 0;

ALLEGRO_DISPLAY *display = al_create_display(620, 1000);
ALLEGRO_EVENT_QUEUE *queue = al_create_event_queue();
al_install_keyboard();
al_install_mouse();
al_register_event_source(queue, al_get_display_event_source(display));
al_register_event_source(queue, al_get_keyboard_event_source());
al_register_event_source(queue, al_get_mouse_event_source());

ALLEGRO_EVENT event;
al_show_mouse_cursor;
al_wait_for_event(queue, &event);
al_clear_to_color(al_map_rgb(50, 60, 175));
for (i = 0; i < 5; i++) {
for (j = 0; j < 5; j++) {
if ((i == 0 || i % 2 == 0) && (j == 0 || j % 2 == 0)) {
al_draw_filled_rectangle(x1, y1, x2, y2, al_map_rgb(139, 142, 192));
x1 += 120;
x2 += 120;
}
else if (((i == 0 || i % 2 == 0) && (j != 0 || j % 2 != 0)) || ((i != 0 || i % 2 != 0) && (j == 0 || j % 2 == 0))) {
al_draw_filled_rectangle(x1, y1, x2, y2, al_map_rgb(92, 97, 167));
x1 += 120;
x2 += 120;
}
else if ((i != 0 || i % 2 != 0) && (j != 0 || j % 2 != 0)) {
al_draw_filled_rectangle(x1, y1, x2, y2, al_map_rgb(68, 71, 125));
x1 += 120;
x2 += 120;
}
if (j == 4) {
x1 = xa;
x2 = xb;
}
}
y1 += 120;
y2 += 120;
}

coordinates Lb2h1, Lb2h2, La2h3, Lb2h4, Lb2h5,Lb2h6,La2h7,La2h8, stick2p;
Lb2h1 = {-47,150,73,270,255,255,255};
Lb2h2 = { 250,150,370,270,255,255,255 };
La2h3 = { 490,93,610,213,255,255,255 };
Lb2h4 = { 130,390,250,510,255,255,255 };
Lb2h5 = { 193,390,313,510,255,255,255 };
Lb2h6 = { 490,390,610,510,255,255,255 };
La2h7 = { 370,453,490,573,255,255,255 };
La2h8 = { 490,510,610,630,255,255,255 };
stick2p = { 187,573,193,807,255,255,0 };

windowscolour windows2h1, windows2h2, windows2h3, windows2h4, windows2h5,windows2h6,windows2h7,windows2h8;

windows2h1.renk1 = 100;
windows2h1.renk2 = 100;
windows2h1.renk3 = 100;
windows2h2.renk1 = 100;
windows2h2.renk2 = 100;
windows2h2.renk3 = 100;
windows2h3.renk1 = 100;
windows2h3.renk2 = 100;
windows2h3.renk3 = 100;
windows2h4.renk1 = 100;
windows2h4.renk2 = 100;
windows2h4.renk3 = 100;
windows2h5.renk1 = 100;
windows2h5.renk2 = 100;
windows2h5.renk3 = 100;
windows2h6.renk1 = 100;
windows2h6.renk2 = 100;
windows2h6.renk3 = 100;
windows2h7.renk1 = 100;
windows2h7.renk2 = 100;
windows2h7.renk3 = 100;
windows2h8.renk1 = 100;
windows2h8.renk2 = 100;
windows2h8.renk3 = 100;

La(La2h3.x1, La2h3.y1, La2h3.x2, La2h3.y2, La2h3.renk1, La2h3.renk2, La2h3.renk3);
house(490, 150, 610, 270);
windows(490, 150, 610, 270, windows2h3.renk1, windows2h3.renk2, windows2h3.renk3);
La(La2h7.x1, La2h7.y1, La2h7.x2, La2h7.y2, La2h7.renk1, La2h7.renk2, La2h7.renk3);
house(370, 510, 490, 630);
windows(370, 510, 490, 630, windows2h7.renk1, windows2h7.renk2, windows2h7.renk3);
La(La2h8.x1, La2h8.y1, La2h8.x2, La2h8.y2, La2h8.renk1, La2h8.renk2, La2h8.renk3);
house(490, 510, 610, 630);
windows(490, 510, 610, 630, windows2h8.renk1, windows2h8.renk2, windows2h8.renk3);
Lb(Lb2h1.x1, Lb2h1.y1, Lb2h1.x2, Lb2h1.y2, Lb2h1.renk1, Lb2h1.renk2, Lb2h1.renk3);
house(10, 150, 130, 270);
windows(10, 150, 130, 270, windows2h1.renk1, windows2h1.renk2, windows2h1.renk3);
Lb(Lb2h2.x1, Lb2h2.y1, Lb2h2.x2, Lb2h2.y2, Lb2h2.renk1, Lb2h2.renk2, Lb2h2.renk3);
house(250, 150, 370, 270);
windows(250, 150, 370, 270, windows2h2.renk1, windows2h2.renk2, windows2h2.renk3);
Lb(Lb2h4.x1, Lb2h4.y1, Lb2h4.x2, Lb2h4.y2, Lb2h4.renk1, Lb2h4.renk2, Lb2h4.renk3);
house(130, 390, 250, 510);
windows(130, 390, 250, 510, windows2h4.renk1, windows2h4.renk2, windows2h4.renk3);
Lb(Lb2h5.x1, Lb2h5.y1, Lb2h5.x2, Lb2h5.y2, Lb2h5.renk1, Lb2h5.renk2, Lb2h5.renk3);
house(250, 390, 370, 510);
windows(250, 390, 370, 510, windows2h5.renk1, windows2h5.renk2, windows2h5.renk3);
Lb(Lb2h6.x1, Lb2h6.y1, Lb2h6.x2, Lb2h6.y2, Lb2h6.renk1, Lb2h6.renk2, Lb2h6.renk3);
house(490, 390, 610, 510);
windows(490, 390, 610, 510, windows2h6.renk1, windows2h6.renk2, windows2h6.renk3);
stick(stick2p.x1, stick2p.y1, stick2p.x2, stick2p.y2, stick2p.renk1, stick2p.renk2, stick2p.renk3);
powersource(130, 630, 250, 750);

coordinates stick2_1, stick2_2, stick2_3, stick2_4, Tstick2_1, TLa2_1, Tstick2_2, TLa2_2;
coordinates Tstick2_3, TLa2_3, Tstick2_4, TLb2_4, Tstick2_5, TLb2_5, Tstick2_6, TLb2_6;
coordinates La2_1, Lb2_1, La2_2, Lb2_2, La2_3, Lb2_3, La2_4, Lb2_4;
stick2_1 = { 250,270,370,390,255,255,255 };
stick2_2 = { 370,270,490,390,255,255,255 };
stick2_3 = {67,333,73,567,255,255,255};
stick2_4 = { 370,630,490,750,255,255,255 };
Tstick2_1 = { 130,150,250,270,255,255,255 };
TLa2_1 = { 130,150,250,270,255,255,255 };
Tstick2_2 = { 130,270,250,390,255,255,255 };
TLa2_2 = { 130,270,250,390,255,255,255 };
Tstick2_3 = { 490,270,610,390,255,255,255 };
TLa2_3 = { 490,213,610,333,255,255,255 };
Tstick2_4 = { 67,453,73,687,255,255,255 };
TLb2_4 = { 10,510,130,630,255,255,255 };
Tstick2_5 = { 307,453,313,687,255,255,255 };
TLb2_5 = { 250,510,370,630,255,255,255 };
Tstick2_6 = { 307,573,313,807,255,255,255 };
TLb2_6 = { 250,630,370,750,255,255,255 };
La2_1 = {10,270,130,390,255,255,255 };
Lb2_1 = { -47,270,73,390,255,255,255 };
La2_2 = { 130,453,250,573,255,255,255 };
Lb2_2 = { 73,510,193,630,255,255,255 };
La2_3 = { 10,573,130,693,255,255,255 };
Lb2_3 = { -47,630,73,750,255,255,255 };
La2_4 = { 490,630,610,750,255,255,255 };
Lb2_4 = { 490,630,610,750,255,255,255 };
stick(stick2_1.x1, stick2_1.y1, stick2_1.x2, stick2_1.y2, stick2_1.renk1, stick2_1.renk2, stick2_1.renk3);
stick(stick2_2.x1, stick2_2.y1, stick2_2.x2, stick2_2.y2, stick2_2.renk1, stick2_2.renk2, stick2_2.renk3);
stick(stick2_3.x1, stick2_3.y1, stick2_3.x2, stick2_3.y2, stick2_3.renk1, stick2_3.renk2, stick2_3.renk3);
stick(stick2_4.x1, stick2_4.y1, stick2_4.x2, stick2_4.y2, stick2_4.renk1, stick2_4.renk2, stick2_4.renk3);
stick(Tstick2_1.x1, Tstick2_1.y1, Tstick2_1.x2, Tstick2_1.y2, Tstick2_1.renk1, Tstick2_1.renk2, Tstick2_1.renk3);
La(TLa2_1.x1, TLa2_1.y1, TLa2_1.x2, TLa2_1.y2, TLa2_1.renk1, TLa2_1.renk2, TLa2_1.renk3);
stick(Tstick2_2.x1, Tstick2_2.y1, Tstick2_2.x2, Tstick2_2.y2, Tstick2_2.renk1, Tstick2_2.renk2, Tstick2_2.renk3);
La(TLa2_2.x1, TLa2_2.y1, TLa2_2.x2, TLa2_2.y2, TLa2_2.renk1, TLa2_2.renk2, TLa2_2.renk3);
stick(Tstick2_3.x1, Tstick2_3.y1, Tstick2_3.x2, Tstick2_3.y2, Tstick2_3.renk1, Tstick2_3.renk2, Tstick2_3.renk3);
La(TLa2_3.x1, TLa2_3.y1, TLa2_3.x2, TLa2_3.y2, TLa2_3.renk1, TLa2_3.renk2, TLa2_3.renk3);
stick(Tstick2_4.x1, Tstick2_4.y1, Tstick2_4.x2, Tstick2_4.y2, Tstick2_4.renk1, Tstick2_4.renk2, Tstick2_4.renk3);
Lb(TLb2_4.x1, TLb2_4.y1, TLb2_4.x2, TLb2_4.y2, TLb2_4.renk1, TLb2_4.renk2, TLb2_4.renk3);
stick(Tstick2_5.x1, Tstick2_5.y1, Tstick2_5.x2, Tstick2_5.y2, Tstick2_5.renk1, Tstick2_5.renk2, Tstick2_5.renk3);
Lb(TLb2_5.x1, TLb2_5.y1, TLb2_5.x2, TLb2_5.y2, TLb2_5.renk1, TLb2_5.renk2, TLb2_5.renk3);
stick(Tstick2_6.x1, Tstick2_6.y1, Tstick2_6.x2, Tstick2_6.y2, Tstick2_6.renk1, Tstick2_6.renk2, Tstick2_6.renk3);
Lb(TLb2_6.x1, TLb2_6.y1, TLb2_6.x2, TLb2_6.y2, TLb2_6.renk1, TLb2_6.renk2, TLb2_6.renk3);
La(La2_1.x1, La2_1.y1, La2_1.x2, La2_1.y2, La2_1.renk1, La2_1.renk2, La2_1.renk3);
Lb(Lb2_1.x1, Lb2_1.y1, Lb2_1.x2, Lb2_1.y2, Lb2_1.renk1, Lb2_1.renk2, Lb2_1.renk3);
La(La2_2.x1, La2_2.y1, La2_2.x2, La2_2.y2, La2_2.renk1, La2_2.renk2, La2_2.renk3);
Lb(Lb2_2.x1, Lb2_2.y1, Lb2_2.x2, Lb2_2.y2, Lb2_2.renk1, Lb2_2.renk2, Lb2_2.renk3);
La(La2_3.x1, La2_3.y1, La2_3.x2, La2_3.y2, La2_3.renk1, La2_3.renk2, La2_3.renk3);
Lb(Lb2_3.x1, Lb2_3.y1, Lb2_3.x2, Lb2_3.y2, Lb2_3.renk1, Lb2_3.renk2, Lb2_3.renk3);
La(La2_4.x1, La2_4.y1, La2_4.x2, La2_4.y2, La2_4.renk1, La2_4.renk2, La2_4.renk3);
Lb(Lb2_4.x1, Lb2_4.y1, Lb2_4.x2, Lb2_4.y2, Lb2_4.renk1, Lb2_4.renk2, Lb2_4.renk3);
while (1) {
al_wait_for_event(queue, &event);
if (puan2 > 0 && event.mouse.pressure == 1) {
puan2 -= 5;
printf("puan2: %d\n", puan2);
}
else if(puan2<=0) {
puan2 = 0;
}
if (event.mouse.x > 250 && event.mouse.x < 370 && event.mouse.y>270 && event.mouse.y < 390 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(250, 270, 370, 390, al_map_rgb(92, 97, 167));

if (count2_1 == 0) {

al_wait_for_event(queue, &event);
stick2_1.renk3 = 255;
stick((stick2_1.x1) + 57, (stick2_1.y1) - 57, (stick2_1.x2) - 57, (stick2_1.y2) + 57, stick2_1.renk1, stick2_1.renk2, stick2_1.renk3);
}
else if (count2_1 == 1) {
al_wait_for_event(queue, &event);
if (countT2_2 != 1) {
stick2_1.renk3 = 0;
}
else {
stick2_1.renk3 = 255;
}
stick((stick2_1.x1), (stick2_1.y1), (stick2_1.x2), (stick2_1.y2), stick2_1.renk1, stick2_1.renk2, stick2_1.renk3);
}
count2_1++;
if (count2_1 == 2)
count2_1 = 0;
}
if (event.mouse.x > 370 && event.mouse.x < 490 && event.mouse.y>270 && event.mouse.y < 390 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(370, 270, 490, 390, al_map_rgb(68,71,125));

if (count2_2 == 0) {

al_wait_for_event(queue, &event);
stick2_2.renk3 = 255;
stick((stick2_2.x1) + 57, (stick2_2.y1) - 57, (stick2_2.x2) - 57, (stick2_2.y2) + 57, stick2_2.renk1, stick2_2.renk2, stick2_2.renk3);
}
else if (count2_2 == 1) {
al_wait_for_event(queue, &event);
if (count2_1 == 0 && stick2_1.renk3 == 0) {
stick2_2.renk3 = 0;
}
else {
stick2_2.renk3 = 255;
}
stick((stick2_2.x1), (stick2_2.y1), (stick2_2.x2), (stick2_2.y2), stick2_2.renk1, stick2_2.renk2, stick2_2.renk3);
}
count2_2++;
if (count2_2 == 2)
count2_2 = 0;
}
if (event.mouse.x > 10 && event.mouse.x < 130 && event.mouse.y>390 && event.mouse.y < 510 && (event.mouse.pressure == 1)) {
al_draw_filled_rectangle(10, 390, 130, 510, al_map_rgb(139, 142, 192));

if (count2_3 == 1) {
al_wait_for_event(queue, &event);
if (countT2_4 != 1 && Tstick2_4.renk3 == 0) {
stick2_3.renk3 = 0;
}
else {
stick2_3.renk3 = 255;
}
stick(stick2_3.x1, stick2_3.y1, stick2_3.x2, stick2_3.y2, stick2_3.renk1, stick2_3.renk2, stick2_3.renk3);
}
else if (count2_3 == 0) {
al_wait_for_event(queue, &event);
stick2_3.renk3 = 255;
stick(stick2_3.x1 - 57, stick2_3.y1 + 57, stick2_3.x2 + 57, stick2_3.y2 - 57, stick2_3.renk1, stick2_3.renk2, stick2_3.renk3);
}
count2_3++;
if (count2_3 == 2)
count2_3 = 0;
}
if (event.mouse.x > 370 && event.mouse.x < 490 && event.mouse.y>630 && event.mouse.y < 750 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(370, 630, 490, 750, al_map_rgb(92, 97, 167));

if (count2_4 == 0) {

al_wait_for_event(queue, &event);
stick2_4.renk3 = 255;
stick((stick2_4.x1) + 57, (stick2_4.y1) - 57, (stick2_4.x2) - 57, (stick2_4.y2) + 57, stick2_4.renk1, stick2_4.renk2, stick2_4.renk3);
}
else if (count2_4 == 1) {
al_wait_for_event(queue, &event);
if (countT2_6 != 2 && Tstick2_6.renk3 == 0) {
stick2_4.renk3 = 0;
}
else {
stick2_4.renk3 = 255;
}
stick((stick2_4.x1), (stick2_4.y1), (stick2_4.x2), (stick2_4.y2), stick2_4.renk1, stick2_4.renk2, stick2_4.renk3);
}
count2_4++;
if (count2_4 == 2)
count2_4 = 0;
}
if (event.mouse.x > 130 && event.mouse.x < 250 && event.mouse.y>150 && event.mouse.y < 270 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(130, 150, 250, 270, al_map_rgb(92,97, 167));

if (countT2_1 == 0) {

al_wait_for_event(queue, &event);
if (countT2_2 != 0 && Tstick2_2.renk3 == 0) {
Tstick2_1.renk3 = 0;
TLa2_1.renk3 = 0;
}
else {
Tstick2_1.renk3 = 255;
TLa2_1.renk3 = 255;
}

stick(Tstick2_1.x1 + 57, Tstick2_1.y1 - 57, Tstick2_1.x2 - 57, Tstick2_1.y2 + 57, Tstick2_1.renk1, Tstick2_1.renk2, Tstick2_1.renk3);
La(TLa2_1.x1 - 57, TLa2_1.y1, TLa2_1.x2, TLa2_1.y2 - 57, TLa2_1.renk1, TLa2_1.renk2, TLa2_1.renk3);

}

else if (countT2_1 == 1) {

al_wait_for_event(queue, &event);
Tstick2_1.renk3 = 255;
TLa2_1.renk3 = 255;
stick(Tstick2_1.x1, Tstick2_1.y1, Tstick2_1.x2, Tstick2_1.y2, Tstick2_1.renk1, Tstick2_1.renk2, Tstick2_1.renk3);
La(TLa2_1.x1, TLa2_1.y1-57, TLa2_1.x2, TLa2_1.y2-57, TLa2_1.renk1, TLa2_1.renk2, TLa2_1.renk3);
}
else if (countT2_1 == 2) {
al_wait_for_event(queue, &event);
if (countT2_2 != 0 && Tstick2_2.renk3 == 0) {
Tstick2_1.renk3 = 0;
TLa2_1.renk3 = 0;
}
else {
Tstick2_1.renk3 = 255;
TLa2_1.renk3 = 255;
}
stick(Tstick2_1.x1+57, Tstick2_1.y1-57, Tstick2_1.x2-57, Tstick2_1.y2+57, Tstick2_1.renk1, Tstick2_1.renk2, Tstick2_1.renk3);
La(TLa2_1.x1, TLa2_1.y1, TLa2_1.x2+57, TLa2_1.y2-57, TLa2_1.renk1, TLa2_1.renk2, TLa2_1.renk3);
}
else if (countT2_1 == 3) {
al_wait_for_event(queue, &event);
if (countT2_2 != 0 && Tstick2_2.renk3 == 0) {
Tstick2_1.renk3 = 0;
TLa2_1.renk3 = 0;
}
else {
Tstick2_1.renk3 = 255;
TLa2_1.renk3 = 255;
}
stick(Tstick2_1.x1, Tstick2_1.y1, Tstick2_1.x2, Tstick2_1.y2, Tstick2_1.renk1, Tstick2_1.renk2, Tstick2_1.renk3);
La(TLa2_1.x1, TLa2_1.y1, TLa2_1.x2, TLa2_1.y2, TLa2_1.renk1, TLa2_1.renk2, TLa2_1.renk3);
}
countT2_1++;
if (countT2_1 == 4)
countT2_1 = 0;
}
if (event.mouse.x > 130 && event.mouse.x < 250 && event.mouse.y>270 && event.mouse.y < 390 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(130, 270, 250, 390, al_map_rgb(68, 71, 125));

if (countT2_2 == 0) {

al_wait_for_event(queue, &event);
if (countL2_1 == 3 && La2_1.renk3 == 0) {
Tstick2_2.renk3 = 0;
TLa2_2.renk3 = 0;
}
else {
Tstick2_2.renk3 = 255;
TLa2_2.renk3 = 255;
}
stick(Tstick2_2.x1 + 57, Tstick2_2.y1 - 57, Tstick2_2.x2 - 57, Tstick2_2.y2 + 57, Tstick2_2.renk1, Tstick2_2.renk2, Tstick2_2.renk3);
La(TLa2_2.x1 - 57, TLa2_2.y1, TLa2_2.x2, TLa2_2.y2 - 57, TLa2_2.renk1, TLa2_2.renk2, TLa2_2.renk3);

}

else if (countT2_2== 1) {

al_wait_for_event(queue, &event);
if (countL2_1 == 3 && La2_1.renk3 == 0) {
Tstick2_2.renk3 = 0;
TLa2_2.renk3 = 0;
}
else {
Tstick2_2.renk3 = 255;
TLa2_2.renk3 = 255;
}
stick(Tstick2_2.x1, Tstick2_2.y1, Tstick2_2.x2, Tstick2_2.y2, Tstick2_2.renk1, Tstick2_2.renk2, Tstick2_2.renk3);
La(TLa2_2.x1, TLa2_2.y1 - 57, TLa2_2.x2, TLa2_2.y2 - 57, TLa2_2.renk1, TLa2_2.renk2, TLa2_2.renk3);

}
else if (countT2_2 == 2) {
al_wait_for_event(queue, &event);
Tstick2_2.renk3 = 255;
TLa2_2.renk3 = 255;
stick(Tstick2_2.x1 + 57, Tstick2_2.y1 - 57, Tstick2_2.x2 - 57, Tstick2_2.y2 + 57, Tstick2_2.renk1, Tstick2_2.renk2, Tstick2_2.renk3);
La(TLa2_2.x1, TLa2_2.y1, TLa2_2.x2 + 57, TLa2_2.y2 - 57, TLa2_2.renk1, TLa2_2.renk2, TLa2_2.renk3);
}
else if (countT2_2 == 3) {
al_wait_for_event(queue, &event);
if (countL2_1 == 3 && La2_1.renk3 == 0) {
Tstick2_2.renk3 = 0;
TLa2_2.renk3 = 0;
}
else {
Tstick2_2.renk3 = 255;
TLa2_2.renk3 = 255;
}
stick(Tstick2_2.x1, Tstick2_2.y1, Tstick2_2.x2, Tstick2_2.y2, Tstick2_2.renk1, Tstick2_2.renk2, Tstick2_2.renk3);
La(TLa2_2.x1, TLa2_2.y1, TLa2_2.x2, TLa2_2.y2, TLa2_2.renk1, TLa2_2.renk2, TLa2_2.renk3);
}
countT2_2++;
if (countT2_2 == 4)
countT2_2 = 0;
}
if (event.mouse.x > 490 && event.mouse.x < 610 && event.mouse.y>270 && event.mouse.y < 390 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(490, 270, 610, 390, al_map_rgb(92, 97, 167));

if (countT2_3 == 0) {

al_wait_for_event(queue, &event);
Tstick2_3.renk3 = 255;
TLa2_3.renk3 = 255;
stick(Tstick2_3.x1+57, Tstick2_3.y1-57, Tstick2_3.x2-57, Tstick2_3.y2+57, Tstick2_3.renk1, Tstick2_3.renk2, Tstick2_3.renk3);
La(TLa2_3.x1, TLa2_3.y1+57, TLa2_3.x2+57, TLa2_3.y2, TLa2_3.renk1, TLa2_3.renk2, TLa2_3.renk3);
}

else if (countT2_3 == 1) {

al_wait_for_event(queue, &event);
if (count2_2 == 0 && stick2_2.renk3 == 0) {
Tstick2_3.renk3 = 0;
TLa2_3.renk3 = 0;
}
else {
Tstick2_3.renk3 = 255;
TLa2_3.renk3 = 255;
}
stick(Tstick2_3.x1, Tstick2_3.y1, Tstick2_3.x2, Tstick2_3.y2, Tstick2_3.renk1, Tstick2_3.renk2, Tstick2_3.renk3);
La(TLa2_3.x1, TLa2_3.y1+57, TLa2_3.x2, TLa2_3.y2+57, TLa2_3.renk1, TLa2_3.renk2, TLa2_3.renk3);
}
else if (countT2_3 == 2) {
al_wait_for_event(queue, &event);
if (count2_2 == 0 && stick2_2.renk3 == 0) {
Tstick2_3.renk3 = 0;
TLa2_3.renk3 = 0;
}
else {
Tstick2_3.renk3 = 255;
TLa2_3.renk3 = 255;
}
stick(Tstick2_3.x1+57, Tstick2_3.y1-57, Tstick2_3.x2-57, Tstick2_3.y2+57, Tstick2_3.renk1, Tstick2_3.renk2, Tstick2_3.renk3);
La(TLa2_3.x1-57, TLa2_3.y1+57, TLa2_3.x2, TLa2_3.y2, TLa2_3.renk1, TLa2_3.renk2, TLa2_3.renk3);
}
else if (countT2_3 == 3) {
al_wait_for_event(queue, &event);
if (count2_2 == 0 && stick2_2.renk3 == 0) {
Tstick2_3.renk3 = 0;
TLa2_3.renk3 = 0;
}
else {
Tstick2_3.renk3 = 255;
TLa2_3.renk3 = 255;
}
stick(Tstick2_3.x1, Tstick2_3.y1, Tstick2_3.x2, Tstick2_3.y2, Tstick2_3.renk1, Tstick2_3.renk2, Tstick2_3.renk3);
La(TLa2_3.x1, TLa2_3.y1, TLa2_3.x2, TLa2_3.y2, TLa2_3.renk1, TLa2_3.renk2, TLa2_3.renk3);
}
countT2_3++;
if (countT2_3 == 4)
countT2_3 = 0;

}
if (event.mouse.x > 10 && event.mouse.x < 130 && event.mouse.y>510 && event.mouse.y < 630 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(10, 510, 130, 630, al_map_rgb(92, 97, 167));

if (countT2_4 == 0) {

al_wait_for_event(queue, &event);
if ((countL2_3 == 0 || countL2_3 == 1) && La2_3.renk3 == 0) {
Tstick2_4.renk3 = 0;
TLb2_4.renk3 = 0;
}
else if (countL2_2 == 3 && La2_2.renk3 == 0) {
Tstick2_4.renk3 = 0;
TLb2_4.renk3 = 0;
}
else {
Tstick2_4.renk3 = 255;
TLb2_4.renk3 = 255;
}

stick(Tstick2_4.x1-57, Tstick2_4.y1+57, Tstick2_4.x2+57, Tstick2_4.y2-57, Tstick2_4.renk1, Tstick2_4.renk2, Tstick2_4.renk3);
Lb(TLb2_4.x1, TLb2_4.y1, TLb2_4.x2-57, TLb2_4.y2+57, TLb2_4.renk1, TLb2_4.renk2, TLb2_4.renk3);
}

else if (countT2_4 == 1) {

al_wait_for_event(queue, &event);
if ((countL2_3 == 0 || countL2_3 == 1) && La2_3.renk3 == 0) {
Tstick2_4.renk3 = 0;
TLb2_4.renk3 = 0;
}

else {
Tstick2_4.renk3 = 255;
TLb2_4.renk3 = 255;
}
stick(Tstick2_4.x1, Tstick2_4.y1, Tstick2_4.x2, Tstick2_4.y2, Tstick2_4.renk1, Tstick2_4.renk2, Tstick2_4.renk3);
Lb(TLb2_4.x1-57, TLb2_4.y1, TLb2_4.x2-57, TLb2_4.y2, TLb2_4.renk1, TLb2_4.renk2, TLb2_4.renk3);
}
else if (countT2_4 == 2) {
al_wait_for_event(queue, &event);
if (countL2_2 == 3 && La2_2.renk3 == 0) {
Tstick2_4.renk3 = 0;
TLb2_4.renk3 = 0;
}
else {
Tstick2_4.renk3 = 255;
TLb2_4.renk3 = 255;
}
stick(Tstick2_4.x1-57, Tstick2_4.y1+57, Tstick2_4.x2+57, Tstick2_4.y2-57, Tstick2_4.renk1, Tstick2_4.renk2, Tstick2_4.renk3);
Lb(TLb2_4.x1, TLb2_4.y1-57, TLb2_4.x2-57, TLb2_4.y2, TLb2_4.renk1, TLb2_4.renk2, TLb2_4.renk3);
}
else if (countT2_4 == 3) {
al_wait_for_event(queue, &event);
if ((countL2_3 == 0 || countL2_3 == 1) && La2_3.renk3 == 0) {
Tstick2_4.renk3 = 0;
TLb2_4.renk3 = 0;
}
else if (countL2_2 == 3 && La2_2.renk3 == 0) {
Tstick2_4.renk3 = 0;
TLb2_4.renk3 = 0;
}
else {
Tstick2_4.renk3 = 255;
TLb2_4.renk3 = 255;
}
stick(Tstick2_4.x1, Tstick2_4.y1, Tstick2_4.x2, Tstick2_4.y2, Tstick2_4.renk1, Tstick2_4.renk2, Tstick2_4.renk3);
Lb(TLb2_4.x1, TLb2_4.y1, TLb2_4.x2, TLb2_4.y2, TLb2_4.renk1, TLb2_4.renk2, TLb2_4.renk3);
}
countT2_4++;
if (countT2_4 == 4)
countT2_4 = 0;

}
if (event.mouse.x > 250 && event.mouse.x < 370 && event.mouse.y>510 && event.mouse.y < 630 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(250, 510, 370, 630, al_map_rgb(92, 97, 167));

if (countT2_5 == 0) {

al_wait_for_event(queue, &event);
if (countT2_6 != 1 && Tstick2_6.renk3 == 0) {
Tstick2_5.renk3 = 0;
TLb2_5.renk3 = 0;
}
else if (countL2_2 == 2 && La2_2.renk3 == 0) {
Tstick2_5.renk3 = 0;
TLb2_5.renk3 = 0;
}
else {
Tstick2_5.renk3 = 255;
TLb2_5.renk3 = 255;
}

stick(Tstick2_5.x1-57, Tstick2_5.y1+57, Tstick2_5.x2+57, Tstick2_5.y2-57, Tstick2_5.renk1, Tstick2_5.renk2, Tstick2_5.renk3);
Lb(TLb2_5.x1, TLb2_5.y1, TLb2_5.x2-57, TLb2_5.y2+57, TLb2_5.renk1, TLb2_5.renk2, TLb2_5.renk3);
}

else if (countT2_5 == 1) {

al_wait_for_event(queue, &event);
if (countT2_6 != 1 && Tstick2_6.renk3 == 0) {
Tstick2_5.renk3 = 0;
TLb2_5.renk3 = 0;
}
else if (countL2_2 == 2 && La2_2.renk3 == 0) {
Tstick2_5.renk3 = 0;
TLb2_5.renk3 = 0;
}
else {
Tstick2_5.renk3 = 255;
TLb2_5.renk3 = 255;
}
stick(Tstick2_5.x1, Tstick2_5.y1, Tstick2_5.x2, Tstick2_5.y2, Tstick2_5.renk1, Tstick2_5.renk2, Tstick2_5.renk3);
Lb(TLb2_5.x1-57, TLb2_5.y1, TLb2_5.x2-57, TLb2_5.y2, TLb2_5.renk1, TLb2_5.renk2, TLb2_5.renk3);
}
else if (countT2_5 == 2) {
al_wait_for_event(queue, &event);
if (countL2_2 == 2 && La2_2.renk3 == 0) {
Tstick2_5.renk3 = 0;
TLb2_5.renk3 = 0;
}
else {
Tstick2_5.renk3 = 255;
TLb2_5.renk3 = 255;
}
stick(Tstick2_5.x1-57, Tstick2_5.y1+57, Tstick2_5.x2+57, Tstick2_5.y2-57, Tstick2_5.renk1, Tstick2_5.renk2, Tstick2_5.renk3);
Lb(TLb2_5.x1, TLb2_5.y1-57, TLb2_5.x2-57, TLb2_5.y2, TLb2_5.renk1, TLb2_5.renk2, TLb2_5.renk3);
}
else if (countT2_5 == 3) {
al_wait_for_event(queue, &event);
if (countT2_6 != 1 && Tstick2_6.renk3 == 0) {
Tstick2_5.renk3 = 0;
TLb2_5.renk3 = 0;
}
else {
Tstick2_5.renk3 = 255;
TLb2_5.renk3 = 255;
}
stick(Tstick2_5.x1, Tstick2_5.y1, Tstick2_5.x2, Tstick2_5.y2, Tstick2_5.renk1, Tstick2_5.renk2, Tstick2_5.renk3);
Lb(TLb2_5.x1, TLb2_5.y1, TLb2_5.x2, TLb2_5.y2, TLb2_5.renk1, TLb2_5.renk2, TLb2_5.renk3);
}
countT2_5++;
if (countT2_5 == 4)
countT2_5 = 0;

}
if (event.mouse.x > 250 && event.mouse.x < 370 && event.mouse.y>630 && event.mouse.y < 750 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(250, 630, 370, 750, al_map_rgb(139, 142, 192));

if (countT2_6 == 0) {

al_wait_for_event(queue, &event);
if (count2p == 1) {
Tstick2_6.renk3 = 0;
TLb2_6.renk3 = 0;
}
else {
Tstick2_6.renk3 = 255;
TLb2_6.renk3 = 255;
}
stick(Tstick2_6.x1 - 57, Tstick2_6.y1 + 57, Tstick2_6.x2 + 57, Tstick2_6.y2 - 57, Tstick2_6.renk1, Tstick2_6.renk2, Tstick2_6.renk3);
Lb(TLb2_6.x1, TLb2_6.y1, TLb2_6.x2 - 57, TLb2_6.y2 + 57, TLb2_6.renk1, TLb2_6.renk2, TLb2_6.renk3);
}

else if (countT2_6 == 1) {

al_wait_for_event(queue, &event);
if (count2p == 1) {
Tstick2_6.renk3 = 0;
TLb2_6.renk3 = 0;
}
else {
Tstick2_6.renk3 = 255;
TLb2_6.renk3 = 255;
}
stick(Tstick2_6.x1, Tstick2_6.y1, Tstick2_6.x2, Tstick2_6.y2, Tstick2_6.renk1, Tstick2_6.renk2, Tstick2_6.renk3);
Lb(TLb2_6.x1 - 57, TLb2_6.y1, TLb2_6.x2 - 57, TLb2_6.y2, TLb2_6.renk1, TLb2_6.renk2, TLb2_6.renk3);
}
else if (countT2_6 == 2) {
al_wait_for_event(queue, &event);
if (count2p == 1) {
Tstick2_6.renk3 = 0;
TLb2_6.renk3 = 0;
}
else {
Tstick2_6.renk3 = 255;
TLb2_6.renk3 = 255;
}
stick(Tstick2_6.x1 - 57, Tstick2_6.y1 + 57, Tstick2_6.x2 + 57, Tstick2_6.y2 - 57, Tstick2_6.renk1, Tstick2_6.renk2, Tstick2_6.renk3);
Lb(TLb2_6.x1, TLb2_6.y1 - 57, TLb2_6.x2 - 57, TLb2_6.y2, TLb2_6.renk1, TLb2_6.renk2, TLb2_6.renk3);
}
else if (countT2_6 == 3) {
al_wait_for_event(queue, &event);
Tstick2_6.renk3 = 255;
TLb2_6.renk3 = 255;
stick(Tstick2_6.x1, Tstick2_6.y1, Tstick2_6.x2, Tstick2_6.y2, Tstick2_6.renk1, Tstick2_6.renk2, Tstick2_6.renk3);
Lb(TLb2_6.x1, TLb2_6.y1, TLb2_6.x2, TLb2_6.y2, TLb2_6.renk1, TLb2_6.renk2, TLb2_6.renk3);
}
countT2_6++;
if (countT2_6 == 4)
countT2_6 = 0;

}
if (event.mouse.x > 10 && event.mouse.x < 130 && event.mouse.y>270 && event.mouse.y < 390 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(10, 270, 130, 390, al_map_rgb(92, 97, 167));

if (countL2_1 == 0) {

al_wait_for_event(queue, &event);
La2_1.renk3 = 255;
Lb2_1.renk3 = 255;
La(La2_1.x1, La2_1.y1 - 57, La2_1.x2, La2_1.y2 - 57, La2_1.renk1, La2_1.renk2, La2_1.renk3);
Lb(Lb2_1.x1, Lb2_1.y1, Lb2_1.x2, Lb2_1.y2, Lb2_1.renk1, Lb2_1.renk2, Lb2_1.renk3);
}

else if (countL2_1 == 1) {

al_wait_for_event(queue, &event);
La2_1.renk3 = 255;
Lb2_1.renk3 = 255;
La(La2_1.x1, La2_1.y1 - 57, La2_1.x2, La2_1.y2 - 57, La2_1.renk1, La2_1.renk2, La2_1.renk3);
Lb(Lb2_1.x1 + 57, Lb2_1.y1, Lb2_1.x2 + 57, Lb2_1.y2, Lb2_1.renk1, Lb2_1.renk2, Lb2_1.renk3);
}
else if (countL2_1 == 2) {
al_wait_for_event(queue, &event);
if (stick2_3.renk3 == 0) {
La2_1.renk3 = 0;
Lb2_1.renk3 = 0;
}
else {
La2_1.renk3 = 255;
Lb2_1.renk3 = 255;
}

La(La2_1.x1, La2_1.y1, La2_1.x2, La2_1.y2, La2_1.renk1, La2_1.renk2, La2_1.renk3);
Lb(Lb2_1.x1 + 57, Lb2_1.y1, Lb2_1.x2 + 57, Lb2_1.y2, Lb2_1.renk1, Lb2_1.renk2, Lb2_1.renk3);
}
else if (countL2_1 == 3) {
al_wait_for_event(queue, &event);
if (stick2_3.renk3 == 0) {
La2_1.renk3 = 0;
Lb2_1.renk3 = 0;
}
else {
La2_1.renk3 = 255;
Lb2_1.renk3 = 255;
}
La(La2_1.x1, La2_1.y1, La2_1.x2, La2_1.y2, La2_1.renk1, La2_1.renk2, La2_1.renk3);
Lb(Lb2_1.x1, Lb2_1.y1, Lb2_1.x2, Lb2_1.y2, Lb2_1.renk1, Lb2_1.renk2, Lb2_1.renk3);
}
countL2_1++;
if (countL2_1 == 4)
countL2_1 = 0;
}
if (event.mouse.x > 130 && event.mouse.x < 250 && event.mouse.y>510 && event.mouse.y < 630 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(130, 510, 250, 630, al_map_rgb(68, 71, 125));

if (countL2_2 == 0) {
al_wait_for_event(queue, &event);
if (countT2_5 != 0 && Tstick2_5.renk3 ==0 ) {
La2_2.renk3 = 0;
Lb2_2.renk3 = 0;
}
else {
La2_2.renk3 = 255;
Lb2_2.renk3 = 255;
}
La(La2_2.x1, La2_2.y1 , La2_2.x2, La2_2.y2 , La2_2.renk1, La2_2.renk2, La2_2.renk3);
Lb(Lb2_2.x1+57, Lb2_2.y1, Lb2_2.x2+57, Lb2_2.y2, Lb2_2.renk1, Lb2_2.renk2, Lb2_2.renk3);
}

else if (countL2_2 == 1) {

al_wait_for_event(queue, &event);
if (countT2_5 != 0 && Tstick2_5.renk3 == 0) {
La2_2.renk3 = 0;
Lb2_2.renk3 = 0;
}
else if(count2p==0) {
La2_2.renk3 = 0;
Lb2_2.renk3 = 0;
}
else {
La2_2.renk3 = 255;
Lb2_2.renk3 = 255;
}
La(La2_2.x1, La2_2.y1 + 57, La2_2.x2, La2_2.y2 + 57, La2_2.renk1, La2_2.renk2, La2_2.renk3);
Lb(Lb2_2.x1 + 57, Lb2_2.y1, Lb2_2.x2 + 57, Lb2_2.y2, Lb2_2.renk1, Lb2_2.renk2, Lb2_2.renk3);
}
else if (countL2_2 == 2) {
al_wait_for_event(queue, &event);
if (countT2_4 != 2 && Tstick2_4.renk3 == 0) {
La2_2.renk3 = 0;
Lb2_2.renk3 = 0;
}
else if (count2p == 0) {
La2_2.renk3 = 0;
Lb2_2.renk3 = 0;
}
else {
La2_2.renk3 = 255;
Lb2_2.renk3 = 255;
}
La(La2_2.x1, La2_2.y1+57, La2_2.x2, La2_2.y2+57, La2_2.renk1, La2_2.renk2, La2_2.renk3);
Lb(Lb2_2.x1 , Lb2_2.y1, Lb2_2.x2 , Lb2_2.y2, Lb2_2.renk1, Lb2_2.renk2, Lb2_2.renk3);
}
else if (countL2_2 == 3) {
al_wait_for_event(queue, &event);
if (countT2_4 != 2 && Tstick2_4.renk3 == 0) {
La2_2.renk3 = 0;
Lb2_2.renk3 = 0;
}
else {
La2_2.renk3 = 255;
Lb2_2.renk3 = 255;
}

La(La2_2.x1, La2_2.y1, La2_2.x2, La2_2.y2, La2_2.renk1, La2_2.renk2, La2_2.renk3);
Lb(Lb2_2.x1, Lb2_2.y1, Lb2_2.x2, Lb2_2.y2, Lb2_2.renk1, Lb2_2.renk2, Lb2_2.renk3);
}
countL2_2++;
if (countL2_2 == 4)
countL2_2 = 0;
}
if (event.mouse.x >10 && event.mouse.x < 130 && event.mouse.y>630 && event.mouse.y < 750 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(10, 630, 130, 750, al_map_rgb(139, 142, 192));

if (countL2_3 == 0) {

al_wait_for_event(queue, &event);
if (count2p == 1) {
La2_3.renk3 = 0;
Lb2_3.renk3 = 0;
}
else {
La2_3.renk3 = 255;
Lb2_3.renk3 = 255;
}
La(La2_3.x1, La2_3.y1, La2_3.x2, La2_3.y2, La2_3.renk1, La2_3.renk2, La2_3.renk3);
Lb(Lb2_3.x1 + 57, Lb2_3.y1, Lb2_3.x2 + 57, Lb2_3.y2, Lb2_3.renk1, Lb2_3.renk2, Lb2_3.renk3);
}

else if (countL2_3 == 1) {
al_wait_for_event(queue, &event);
if (count2p == 1) {
La2_3.renk3 = 0;
Lb2_3.renk3 = 0;
}
else {
La2_3.renk3 = 255;
Lb2_3.renk3 = 255;
}
La(La2_3.x1, La2_3.y1 + 57, La2_3.x2, La2_3.y2 + 57, La2_3.renk1, La2_3.renk2, La2_3.renk3);
Lb(Lb2_3.x1 + 57, Lb2_3.y1, Lb2_3.x2 + 57, Lb2_3.y2, Lb2_3.renk1, Lb2_3.renk2, Lb2_3.renk3);
}
else if (countL2_3 == 2) {
al_wait_for_event(queue, &event);
La2_3.renk3 = 255;
Lb2_3.renk3 = 255;
La(La2_3.x1, La2_3.y1 + 57, La2_3.x2, La2_3.y2 + 57, La2_3.renk1, La2_3.renk2, La2_3.renk3);
Lb(Lb2_3.x1, Lb2_3.y1, Lb2_3.x2, Lb2_3.y2, Lb2_3.renk1, Lb2_3.renk2, Lb2_3.renk3);
}
else if (countL2_3 == 3) {
al_wait_for_event(queue, &event);
La2_3.renk3 = 255;
Lb2_3.renk3 = 255;
La(La2_3.x1, La2_3.y1, La2_3.x2, La2_3.y2, La2_3.renk1, La2_3.renk2, La2_3.renk3);
Lb(Lb2_3.x1, Lb2_3.y1, Lb2_3.x2, Lb2_3.y2, Lb2_3.renk1, Lb2_3.renk2, Lb2_3.renk3);
}
countL2_3++;
if (countL2_3 == 4)
countL2_3 = 0;
}
if (event.mouse.x >490 && event.mouse.x < 610 && event.mouse.y>630 && event.mouse.y < 750 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(490, 630, 610, 750, al_map_rgb(139, 142, 192));

if (countL2_4 == 0) {

al_wait_for_event(queue, &event);
if ( stick2_4.renk3 == 0 && count2_4 == 0 ) {
La2_4.renk3 = 0;
Lb2_4.renk3 = 0;
}
else {
La2_4.renk3 = 255;
Lb2_4.renk3 = 255;
}
La(La2_4.x1, La2_4.y1, La2_4.x2, La2_4.y2, La2_4.renk1, La2_4.renk2, La2_4.renk3);
Lb(Lb2_4.x1-57, Lb2_4.y1, Lb2_4.x2-57, Lb2_4.y2, Lb2_4.renk1, Lb2_4.renk2, Lb2_4.renk3);
}

else if (countL2_4 == 1) {

al_wait_for_event(queue, &event);
if (stick2_4.renk3 == 0 && count2_4 == 0) {
La2_4.renk3 = 0;
Lb2_4.renk3 = 0;
}
else {
La2_4.renk3 = 255;
Lb2_4.renk3 = 255;
}
La(La2_4.x1, La2_4.y1-57, La2_4.x2, La2_4.y2-57, La2_4.renk1, La2_4.renk2, La2_4.renk3);
Lb(Lb2_4.x1-57, Lb2_4.y1, Lb2_4.x2-57, Lb2_4.y2, Lb2_4.renk1, Lb2_4.renk2, Lb2_4.renk3);
}
else if (countL2_4 == 2) {
al_wait_for_event(queue, &event);
La2_4.renk3 = 255;
Lb2_4.renk3 = 255;
La(La2_4.x1, La2_4.y1-57, La2_4.x2, La2_4.y2-57, La2_4.renk1, La2_4.renk2, La2_4.renk3);
Lb(Lb2_4.x1, Lb2_4.y1, Lb2_4.x2, Lb2_4.y2, Lb2_4.renk1, Lb2_4.renk2, Lb2_4.renk3);
}
else if (countL2_4 == 3) {

al_wait_for_event(queue, &event);
La2_4.renk3 = 255;
Lb2_4.renk3 = 255;
La(La2_4.x1, La2_4.y1, La2_4.x2, La2_4.y2, La2_4.renk1, La2_4.renk2, La2_4.renk3);
Lb(Lb2_4.x1, Lb2_4.y1, Lb2_4.x2, Lb2_4.y2, Lb2_4.renk1, Lb2_4.renk2, Lb2_4.renk3);
}
countL2_4++;
if (countL2_4 == 4)
countL2_4 = 0;
}
if (event.mouse.x >490 && event.mouse.x < 610 && event.mouse.y>630 && event.mouse.y < 750 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(490, 630, 610, 750, al_map_rgb(139, 142, 192));

if (countL2_4 == 0) {

al_wait_for_event(queue, &event);
La(La2_4.x1, La2_4.y1, La2_4.x2, La2_4.y2, La2_4.renk1, La2_4.renk2, La2_4.renk3);
Lb(Lb2_4.x1 - 57, Lb2_4.y1, Lb2_4.x2 - 57, Lb2_4.y2, Lb2_4.renk1, Lb2_4.renk2, Lb2_4.renk3);
}

else if (countL2_4 == 1) {

al_wait_for_event(queue, &event);
La(La2_4.x1, La2_4.y1 - 57, La2_4.x2, La2_4.y2 - 57, La2_4.renk1, La2_4.renk2, La2_4.renk3);
Lb(Lb2_4.x1 - 57, Lb2_4.y1, Lb2_4.x2 - 57, Lb2_4.y2, Lb2_4.renk1, Lb2_4.renk2, Lb2_4.renk3);
}
else if (countL2_4 == 2) {
al_wait_for_event(queue, &event);
La(La2_4.x1, La2_4.y1 - 57, La2_4.x2, La2_4.y2 - 57, La2_4.renk1, La2_4.renk2, La2_4.renk3);
Lb(Lb2_4.x1, Lb2_4.y1, Lb2_4.x2, Lb2_4.y2, Lb2_4.renk1, Lb2_4.renk2, Lb2_4.renk3);
}
else if (countL2_4 == 3) {
al_wait_for_event(queue, &event);
La(La2_4.x1, La2_4.y1, La2_4.x2, La2_4.y2, La2_4.renk1, La2_4.renk2, La2_4.renk3);
Lb(Lb2_4.x1, Lb2_4.y1, Lb2_4.x2, Lb2_4.y2, Lb2_4.renk1, Lb2_4.renk2, Lb2_4.renk3);
}
countL2_4++;
if (countL2_4 == 4)
countL2_4 = 0;
}
if (event.mouse.x > 130 && event.mouse.x < 250 && event.mouse.y>630 && event.mouse.y < 750 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(130, 630, 250, 750, al_map_rgb(92, 97, 167));

if (count2p == 1) {
al_wait_for_event(queue, &event);
stick(stick2p.x1, stick2p.y1, stick2p.x2, stick2p.y2, stick2p.renk1, stick2p.renk2, stick2p.renk3);
powersource(130, 630, 250, 750);
}
else if (count2p == 0) {
al_wait_for_event(queue, &event);
stick(stick2p.x1-57, stick2p.y1+57, stick2p.x2+57, stick2p.y2-57, stick2p.renk1, stick2p.renk2, stick2p.renk3);
powersource(130, 630, 250, 750);
}
count2p++;
if (count2p == 2)
count2p = 0;
}
if (event.mouse.x > 10 && event.mouse.x < 130 && event.mouse.y>150 && event.mouse.y < 270 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(10, 150, 130, 270, al_map_rgb(139, 142, 192));

if (counth2_1 == 0) {

al_wait_for_event(queue, &event);
Lb2h1.renk3 = 255;
windows2h1.renk3 = 100;
windows2h1.renk2 = 100;
windows2h1.renk1 = 100;
Lb(Lb2h1.x1+57, Lb2h1.y1-57, Lb2h1.x2, Lb2h1.y2, Lb2h1.renk1, Lb2h1.renk2, Lb2h1.renk3);
house(10, 150, 130, 270);
windows(10, 150, 130, 270, windows2h1.renk1, windows2h1.renk2, windows2h1.renk3);
}

else if (counth2_1 == 1) {

al_wait_for_event(queue, &event);
if (countT2_1 != 3 && Tstick2_1.renk3 == 0) {
Lb2h1.renk3 = 0;
windows2h1.renk3 = 0;
windows2h1.renk2 = 255;
windows2h1.renk1 = 255;
}
else {
Lb2h1.renk3 = 255;
windows2h1.renk3 = 100;
windows2h1.renk2 = 100;
windows2h1.renk1 = 100;
}
Lb(Lb2h1.x1+57, Lb2h1.y1, Lb2h1.x2+57, Lb2h1.y2, Lb2h1.renk1, Lb2h1.renk2, Lb2h1.renk3);
house(10, 150, 130, 270);
windows(10, 150, 130, 270, windows2h1.renk1, windows2h1.renk2, windows2h1.renk3);
}
else if (counth2_1 == 2) {
al_wait_for_event(queue, &event);
Lb2h1.renk3 = 255;
windows2h1.renk3 = 100;
windows2h1.renk2 = 100;
windows2h1.renk1 = 100;
Lb(Lb2h1.x1+57, Lb2h1.y1, Lb2h1.x2, Lb2h1.y2+57, Lb2h1.renk1, Lb2h1.renk2, Lb2h1.renk3);
house(10, 150, 130, 270);
windows(10, 150, 130, 270, windows2h1.renk1, windows2h1.renk2, windows2h1.renk3);
}
else if (counth2_1 == 3) {
al_wait_for_event(queue, &event);
Lb2h1.renk3 = 255;
windows2h1.renk3 = 100;
windows2h1.renk2 = 100;
windows2h1.renk1 = 100;
Lb(Lb2h1.x1, Lb2h1.y1, Lb2h1.x2, Lb2h1.y2, Lb2h1.renk1, Lb2h1.renk2, Lb2h1.renk3);
house(10, 150, 130, 270);
windows(10, 150, 130, 270, windows2h1.renk1, windows2h1.renk2, windows2h1.renk3);
}
counth2_1++;
if (counth2_1 == 4)
counth2_1 = 0;
}
if (event.mouse.x > 250 && event.mouse.x < 370 && event.mouse.y>150 && event.mouse.y < 270 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(250, 150, 370, 270, al_map_rgb(139, 142, 192));

if (counth2_2 == 0) {

al_wait_for_event(queue, &event);
Lb2h2.renk3 = 255;
windows2h2.renk3 = 100;
windows2h2.renk2 = 100;
windows2h2.renk1 = 100;
Lb(Lb2h2.x1, Lb2h2.y1, Lb2h2.x2-57, Lb2h2.y2+57, Lb2h2.renk1, Lb2h2.renk2, Lb2h2.renk3);
house(250, 150, 370, 270);
windows(250, 150, 370, 270, windows2h2.renk1, windows2h2.renk2, windows2h2.renk3);
}

else if (counth2_2 == 1) {

al_wait_for_event(queue, &event);
if (countT2_1 != 1 && Tstick2_1.renk3 == 0) {
Lb2h2.renk3 = 0;
windows2h2.renk3 = 0;
windows2h2.renk2 = 255;
windows2h2.renk1 = 255;
}
else {
Lb2h2.renk3 = 255;
windows2h2.renk3 = 100;
windows2h2.renk2 = 100;
windows2h2.renk1 = 100;
}
Lb(Lb2h2.x1-57, Lb2h2.y1, Lb2h2.x2-57, Lb2h2.y2, Lb2h2.renk1, Lb2h2.renk2, Lb2h2.renk3);
house(250, 150, 370, 270);
windows(250, 150, 370, 270, windows2h2.renk1, windows2h2.renk2, windows2h2.renk3);
}
else if (counth2_2 == 2) {
al_wait_for_event(queue, &event);
Lb2h2.renk3 = 255;
windows2h2.renk3 = 100;
windows2h2.renk2 = 100;
windows2h2.renk1 = 100;
Lb(Lb2h2.x1, Lb2h2.y1-57, Lb2h2.x2-57, Lb2h2.y2, Lb2h2.renk1, Lb2h2.renk2, Lb2h2.renk3);
house(250, 150, 370, 270);
windows(250, 150, 370, 270, windows2h2.renk1, windows2h2.renk2, windows2h2.renk3);
}
else if (counth2_2 == 3) {
al_wait_for_event(queue, &event);
Lb2h2.renk3 = 255;
windows2h2.renk3 = 100;
windows2h2.renk2 = 100;
windows2h2.renk1 = 100;
Lb(Lb2h2.x1, Lb2h2.y1, Lb2h2.x2, Lb2h2.y2, Lb2h2.renk1, Lb2h2.renk2, Lb2h2.renk3);
house(250, 150, 370, 270);
windows(250, 150, 370, 270, windows2h2.renk1, windows2h2.renk2, windows2h2.renk3);
}
counth2_2++;
if (counth2_2 == 4)
counth2_2 = 0;
}
if (event.mouse.x > 490 && event.mouse.x < 610 && event.mouse.y>150 && event.mouse.y < 270 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(490, 150, 610, 270, al_map_rgb(139, 142, 192));

if (counth2_3== 0) {

al_wait_for_event(queue, &event);
La2h3.renk3 = 255;
windows2h3.renk3 = 100;
windows2h3.renk2 = 100;
windows2h3.renk1 = 100;
La(La2h3.x1, La2h3.y1+57, La2h3.x2+57, La2h3.y2, La2h3.renk1, La2h3.renk2, La2h3.renk3);
house(490, 150, 610, 270);
windows(490, 150, 610, 270, windows2h3.renk1, windows2h3.renk2, windows2h3.renk3);
}

else if (counth2_3 == 1) {

al_wait_for_event(queue, &event);
if (countT2_3 != 2 && Tstick2_3.renk3 == 0) {
La2h3.renk3 = 0;
windows2h3.renk3 = 0;
windows2h3.renk2 = 255;
windows2h3.renk1 = 255;
}
else {
La2h3.renk3 = 255;
windows2h3.renk3 = 100;
windows2h3.renk2 = 100;
windows2h3.renk1 = 100;
}
La(La2h3.x1, La2h3.y1+57, La2h3.x2, La2h3.y2+57, La2h3.renk1, La2h3.renk2, La2h3.renk3);
house(490, 150, 610, 270);
windows(490, 150, 610, 270, windows2h3.renk1, windows2h3.renk2, windows2h3.renk3);
}
else if (counth2_3 == 2) {
al_wait_for_event(queue, &event);
La2h3.renk3 = 255;
windows2h3.renk3 = 100;
windows2h3.renk2 = 100;
windows2h3.renk1 = 100;
La(La2h3.x1-57, La2h3.y1+57, La2h3.x2, La2h3.y2, La2h3.renk1, La2h3.renk2, La2h3.renk3);
house(490, 150, 610, 270);
windows(490, 150, 610, 270, windows2h3.renk1, windows2h3.renk2, windows2h3.renk3);
}
else if (counth2_3 == 3) {
al_wait_for_event(queue, &event);
La2h3.renk3 = 255;
windows2h3.renk3 = 100;
windows2h3.renk2 = 100;
windows2h3.renk1 = 100;
La(La2h3.x1, La2h3.y1, La2h3.x2, La2h3.y2, La2h3.renk1, La2h3.renk2, La2h3.renk3);
house(490, 150, 610, 270);
windows(490, 150, 610, 270, windows2h3.renk1, windows2h3.renk2, windows2h3.renk3);
}
counth2_3++;
if (counth2_3 == 4)
counth2_3 = 0;
}
if (event.mouse.x > 130 && event.mouse.x < 250 && event.mouse.y>390 && event.mouse.y < 510 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(130, 390, 250, 510, al_map_rgb(92, 97, 167));

if (counth2_4 == 0) {

al_wait_for_event(queue, &event);
if ((countL2_2 == 0 || countL2_2 == 1) && La2_2.renk3 == 0) {
Lb2h4.renk3 = 0;
windows2h4.renk3 = 0;
windows2h4.renk2 = 255;
windows2h4.renk1 = 255;
}
else {
Lb2h4.renk3 = 255;
windows2h4.renk3 = 100;
windows2h4.renk2 = 100;
windows2h4.renk1 = 100;
}
Lb(Lb2h4.x1, Lb2h4.y1, Lb2h4.x2-57, Lb2h4.y2+57, Lb2h4.renk1, Lb2h4.renk2, Lb2h4.renk3);
house(130, 390, 250, 510);
windows(130, 390, 250, 510, windows2h4.renk1, windows2h4.renk2, windows2h4.renk3);
}

else if (counth2_4 == 1) {

al_wait_for_event(queue, &event);
Lb2h4.renk3 = 255;
windows2h4.renk3 = 100;
windows2h4.renk2 = 100;
windows2h4.renk1 = 100;
Lb(Lb2h4.x1-57, Lb2h4.y1, Lb2h4.x2-57, Lb2h4.y2, Lb2h4.renk1, Lb2h4.renk2, Lb2h4.renk3);
house(130, 390, 250, 510);
windows(130, 390, 250, 510, windows2h4.renk1, windows2h4.renk2, windows2h4.renk3);
}
else if (counth2_4 == 2) {
al_wait_for_event(queue, &event);
if (countT2_2 != 2 && Tstick2_2.renk3 == 0) {
Lb2h4.renk3 = 0;
windows2h4.renk3 = 0;
windows2h4.renk2 = 255;
windows2h4.renk1 = 255;
}
else {
Lb2h4.renk3 = 255;
windows2h4.renk3 = 100;
windows2h4.renk2 = 100;
windows2h4.renk1 = 100;
}
Lb(Lb2h4.x1, Lb2h4.y1-57, Lb2h4.x2-57, Lb2h4.y2, Lb2h4.renk1, Lb2h4.renk2, Lb2h4.renk3);
house(130, 390, 250, 510);
windows(130, 390, 250, 510, windows2h4.renk1, windows2h4.renk2, windows2h4.renk3);
}
else if (counth2_4 == 3) {
al_wait_for_event(queue, &event);
Lb2h4.renk3 = 255;
windows2h4.renk3 = 100;
windows2h4.renk2 = 100;
windows2h4.renk1 = 100;
Lb(Lb2h4.x1, Lb2h4.y1, Lb2h4.x2, Lb2h4.y2, Lb2h4.renk1, Lb2h4.renk2, Lb2h4.renk3);
house(130, 390, 250, 510);
windows(130, 390, 250, 510, windows2h4.renk1, windows2h4.renk2, windows2h4.renk3);
}
counth2_4++;
if (counth2_4 == 4)
counth2_4 = 0;
}
if (event.mouse.x > 250 && event.mouse.x < 370 && event.mouse.y>390 && event.mouse.y < 510 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(250, 390, 370, 510, al_map_rgb(139, 142, 192));

if (counth2_5 == 0) {

al_wait_for_event(queue, &event);
Lb2h5.renk3 = 255;
windows2h5.renk3 = 100;
windows2h5.renk2 = 100;
windows2h5.renk1 = 100;
Lb(Lb2h5.x1+57, Lb2h5.y1-57, Lb2h5.x2, Lb2h5.y2, Lb2h5.renk1, Lb2h5.renk2, Lb2h5.renk3);
house(250, 390, 370, 510);
windows(250, 390, 370, 510, windows2h5.renk1, windows2h5.renk2, windows2h5.renk3);
}

else if (counth2_5 == 1) {

al_wait_for_event(queue, &event);
Lb2h5.renk3 = 255;
windows2h5.renk3 = 100;
windows2h5.renk2 = 100;
windows2h5.renk1 = 100;
Lb(Lb2h5.x1+57, Lb2h5.y1, Lb2h5.x2+57, Lb2h5.y2, Lb2h5.renk1, Lb2h5.renk2, Lb2h5.renk3);
house(250, 390, 370, 510);
windows(250, 390, 370, 510, windows2h5.renk1, windows2h5.renk2, windows2h5.renk3);
}
else if (counth2_5 == 2) {
al_wait_for_event(queue, &event);
if (countT2_5 != 1 && Tstick2_5.renk3 == 0) {
Lb2h5.renk3 = 0;
windows2h5.renk3 = 0;
windows2h5.renk2 = 255;
windows2h5.renk1 = 255;
}
else {
Lb2h5.renk3=255;
windows2h5.renk3 = 100;
windows2h5.renk2 = 100;
windows2h5.renk1 = 100;
}
Lb(Lb2h5.x1+57, Lb2h5.y1, Lb2h5.x2, Lb2h5.y2+57, Lb2h5.renk1, Lb2h5.renk2, Lb2h5.renk3);
house(250, 390, 370, 510);
windows(250, 390, 370, 510, windows2h5.renk1, windows2h5.renk2, windows2h5.renk3);
}
else if (counth2_5 == 3) {
al_wait_for_event(queue, &event);
Lb2h5.renk3 = 255;
windows2h5.renk3 = 100;
windows2h5.renk2 = 100;
windows2h5.renk1 = 100;
Lb(Lb2h5.x1, Lb2h5.y1, Lb2h5.x2, Lb2h5.y2, Lb2h5.renk1, Lb2h5.renk2, Lb2h5.renk3);
house(250, 390, 370, 510);
windows(250, 390, 370, 510, windows2h5.renk1, windows2h5.renk2, windows2h5.renk3);
}
counth2_5++;
if (counth2_5 == 4)
counth2_5 = 0;
}
if (event.mouse.x > 490 && event.mouse.x < 610 && event.mouse.y>390 && event.mouse.y < 510 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(490, 390, 610, 510, al_map_rgb(139, 142, 192));

if (counth2_6 == 0) {

al_wait_for_event(queue, &event);
Lb2h6.renk3 = 255;
windows2h6.renk3 = 100;
windows2h6.renk2 = 100;
windows2h6.renk1 = 100;
Lb(Lb2h6.x1, Lb2h6.y1, Lb2h6.x2-57, Lb2h6.y2+57, Lb2h6.renk1, Lb2h6.renk2, Lb2h6.renk3);
house(490, 390, 610, 510);
windows(490, 390, 610, 510, windows2h6.renk1, windows2h6.renk2, windows2h6.renk3);
}

else if (counth2_6 == 1) {

al_wait_for_event(queue, &event);
Lb2h6.renk3 = 255;
windows2h6.renk3 = 100;
windows2h6.renk2 = 100;
windows2h6.renk1 = 100;
Lb(Lb2h6.x1-57, Lb2h6.y1, Lb2h6.x2-57, Lb2h6.y2, Lb2h6.renk1, Lb2h6.renk2, Lb2h6.renk3);
house(490, 390, 610, 510);
windows(490, 390, 610, 510, windows2h6.renk1, windows2h6.renk2, windows2h6.renk3);
}
else if (counth2_6 == 2) {
al_wait_for_event(queue, &event);
if (countT2_3 != 0 && Tstick2_3.renk3 == 0) {
Lb2h6.renk3 = 0;
windows2h6.renk3 = 0;
windows2h6.renk2 = 255;
windows2h6.renk1 = 255;
}
else {
Lb2h6.renk3 = 255;
windows2h6.renk3 = 100;
windows2h6.renk2 = 100;
windows2h6.renk1 = 100;
}
Lb(Lb2h6.x1, Lb2h6.y1-57, Lb2h6.x2-57, Lb2h6.y2, Lb2h6.renk1, Lb2h6.renk2, Lb2h6.renk3);
house(490, 390, 610, 510);
windows(490, 390, 610, 510, windows2h6.renk1, windows2h6.renk2, windows2h6.renk3);
}
else if (counth2_6 == 3) {
al_wait_for_event(queue, &event);
Lb2h6.renk3 = 255;
windows2h6.renk3 = 100;
windows2h6.renk2 = 100;
windows2h6.renk1 = 100;
Lb(Lb2h6.x1, Lb2h6.y1, Lb2h6.x2, Lb2h6.y2, Lb2h6.renk1, Lb2h6.renk2, Lb2h6.renk3);
house(490, 390, 610, 510);
windows(490, 390, 610, 510, windows2h6.renk1, windows2h6.renk2, windows2h6.renk3);
}
counth2_6++;
if (counth2_6 == 4)
counth2_6 = 0;
}
if (event.mouse.x > 370 && event.mouse.x < 490 && event.mouse.y>510 && event.mouse.y < 630 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(370, 510, 490, 630, al_map_rgb(68, 71, 125));

if (counth2_7 == 0) {

al_wait_for_event(queue, &event);
La2h7.renk3 = 255;
windows2h7.renk3 = 100;
windows2h7.renk2 = 100;
windows2h7.renk1 = 100;
La(La2h7.x1, La2h7.y1+57, La2h7.x2+57, La2h7.y2, La2h7.renk1, La2h7.renk2, La2h7.renk3);
house(370, 510, 490, 630);
windows(370, 510, 490, 630, windows2h7.renk1, windows2h7.renk2, windows2h7.renk3);
}

else if (counth2_7 == 1) {

al_wait_for_event(queue, &event);
La2h7.renk3 = 255;
windows2h7.renk3 = 100;
windows2h7.renk2 = 100;
windows2h7.renk1 = 100;
La(La2h7.x1, La2h7.y1+57, La2h7.x2, La2h7.y2+57, La2h7.renk1, La2h7.renk2, La2h7.renk3);
house(370, 510, 490, 630);
windows(370, 510, 490, 630, windows2h7.renk1, windows2h7.renk2, windows2h7.renk3);
}
else if (counth2_7 == 2) {
al_wait_for_event(queue, &event);
if (countT2_5 != 2 && Tstick2_5.renk3 == 0) {
La2h7.renk3 = 0;
windows2h7.renk3=0;
windows2h7.renk2 = 255;
windows2h7.renk1 = 255;
}
else {
La2h7.renk3 = 255;
windows2h7.renk3 = 100;
windows2h7.renk2 = 100;
windows2h7.renk1 = 100;

}
La(La2h7.x1-57, La2h7.y1+57, La2h7.x2, La2h7.y2, La2h7.renk1, La2h7.renk2, La2h7.renk3);
house(370, 510, 490, 630);
windows(370, 510, 490, 630, windows2h7.renk1, windows2h7.renk2, windows2h7.renk3);
}
else if (counth2_7 == 3) {
al_wait_for_event(queue, &event);
La2h7.renk3 = 255;
windows2h7.renk3 = 100;
windows2h7.renk2 = 100;
windows2h7.renk1 = 100;
La(La2h7.x1, La2h7.y1, La2h7.x2, La2h7.y2, La2h7.renk1, La2h7.renk2, La2h7.renk3);
house(370, 510, 490, 630);
windows(370, 510, 490, 630, windows2h7.renk1, windows2h7.renk2, windows2h7.renk3);
}
counth2_7++;
if (counth2_7 == 4)
counth2_7 = 0;
}
if (event.mouse.x > 490 && event.mouse.x < 610 && event.mouse.y>510 && event.mouse.y < 630 && (event.mouse.pressure == 1)) {

al_draw_filled_rectangle(490, 510, 610, 630, al_map_rgb(92, 97, 167));

if (counth2_8 == 0) {

al_wait_for_event(queue, &event);
La2h8.renk3 = 255;
windows2h8.renk3 = 100;
windows2h8.renk2 = 100;
windows2h8.renk1 = 100;
La(La2h8.x1-57, La2h8.y1, La2h8.x2, La2h8.y2-57, La2h8.renk1, La2h8.renk2, La2h8.renk3);
house(490, 510, 610, 630);
windows(490, 510, 610, 630, windows2h8.renk1, windows2h8.renk2, windows2h8.renk3);
}

else if (counth2_8 == 1) {

al_wait_for_event(queue, &event);
La2h8.renk3 = 255;
windows2h8.renk3 = 100;
windows2h8.renk2 = 100;
windows2h8.renk1 = 100;
La(La2h8.x1, La2h8.y1-57, La2h8.x2, La2h8.y2-57, La2h8.renk1, La2h8.renk2, La2h8.renk3);
house(490, 510, 610, 630);
windows(490, 510, 610, 630, windows2h8.renk1, windows2h8.renk2, windows2h8.renk3);
}
else if (counth2_8 == 2) {
al_wait_for_event(queue, &event);
La2h8.renk3 = 255;
windows2h8.renk3 = 100;
windows2h8.renk2 = 100;
windows2h8.renk1 = 100;
La(La2h8.x1, La2h8.y1, La2h8.x2+57, La2h8.y2-57, La2h8.renk1, La2h8.renk2, La2h8.renk3);
house(490, 510, 610, 630);
windows(490, 510, 610, 630, windows2h8.renk1, windows2h8.renk2, windows2h8.renk3);
}
else if (counth2_8 == 3) {
al_wait_for_event(queue, &event);
if (countL2_4 == 2 && La2_4.renk3 == 0) {
La2h8.renk3 = 0;
windows2h8.renk3 = 0;
windows2h8.renk2 = 255;
windows2h8.renk1 = 255;
}
else {
La2h8.renk3 = 255;
windows2h8.renk3 = 100;
windows2h8.renk2 = 100;
windows2h8.renk1 = 100;
}
La(La2h8.x1, La2h8.y1, La2h8.x2, La2h8.y2, La2h8.renk1, La2h8.renk2, La2h8.renk3);
house(490, 510, 610, 630);
windows(490, 510, 610, 630, windows2h8.renk1, windows2h8.renk2, windows2h8.renk3);
}
counth2_8++;
if (counth2_8 == 4)
counth2_8 = 0;
}
if (windows2h1.renk3 == 0 && windows2h2.renk3 == 0 && windows2h3.renk3 == 0 && windows2h4.renk3 == 0 && windows2h5.renk3 == 0&&windows2h6.renk3==0&&windows2h7.renk3==0&&windows2h8.renk3==0) {
printf("LEVEL COMPLETED!\n");
}
al_flip_display();

}
system("pause");
return 0;

}
