#include <stdio.h>
#include "libone.h"

void gmain(){
	window(500, 800);
	float x,y,vx, vy,rad,h,b;
	x = (width / 2);
	y = (height / 2 - 100);
	vx = 0;
	vy = 0;
	rad = 0;
	h = 3.0;
	b = y+vy;
	float q, p,k;
	q = 0;
	p = 300;
	k = 100;
	while (notQuit) {
	clear(0, 149, 217);

		/*Easy Graphics CodingÇ…Ç†ÇÈê}å`Ç≈çÏÇ¡ÇΩê·ÇæÇÈÇ‹
		stroke(255);
		fill(255);
		circle(250, 700, 200);
		circle(250, 550, 125);
		strokeWeight(16);
		stroke(0);
		point(220, 520);
		point(280, 520);
		strokeWeight(10);
		line(230, 560, 270, 560);

		fill(0);
		rect(194, 400, 110, 80);
		rect(154, 460, 190, 40);

		line(320, 640, 400, 660);
		line(400, 660, 430, 640);
		line(400, 660, 430, 680);

		line(180, 640, 100, 660);
		line(100, 660, 70, 640);
		line(100, 660, 70, 680);
		*/
		
		/*ìÆÇ©ÇπÇÈÇÊÇ§Ç…ÇµÇΩê·ÇæÇÈÇ‹
		stroke(255);
		fill(255);
		circle(x + vx, y + vy, 75);
		circle(x + vx, y - 60 + vy, 60);
		strokeWeight(5);
		stroke(0);
		point(x - 10 + vx, y - 60 - 30 / 2 + vy);
		point(x + 10 + vx, y - 60 - 30 / 2 + vy);
		line(x - 5 + vx, y - 60 + vy, x + 5 + vx, y - 60 + vy);
		if (isPress(KEY_RIGHT) || isPress(KEY_LEFT) || isPress(KEY_UP) || isPress(KEY_DOWN)) {
			if (isPress(KEY_RIGHT) && 75/2+x + vx <= width) {
				vx += 3;
			}
			else if (isPress(KEY_LEFT)&& -75/2+x + vx >= 0) {
				vx -= 3;
			}
			else if (isPress(KEY_UP) && -75/2-60+y + vy >= 0) {
				vy -= 3;
			}
			else if (isPress(KEY_DOWN)&& 75/2 + y + vy <= height) {
				vy += 3;
			}
		}
		*/
	
	//â~Ç™è„â∫Ç…ìÆÇ≠Ç‡ÇÃ
	/*
	textSize(20);
	text(y+vy, 0, 20);
	text(h, 0, 40);
	angleMode(DEGREES);
	strokeWeight(5);
	fill(200, 50, 50);
	circle(x, y+vy, 145);
	fill(255);
	rectMode(CENTER);
	rect(x, y+vy, 100, 100, rad);
	line(x, y + vy, 0, height / 2);
	vy += h;
	rad += h;
	
	if (y + vy+100 > height && h <= 3) {
		h += -0.05;
	}
	if (y + vy - 100 < 0 && h >= -3) {
		h += 0.05;
	}
	*/
	fill(255);
	rect(k, k, p, 50);
	fill(200, 100, 100);
	rect(k, k, p+q, 50);
	
	q += -1;
	if (p + q < 0) {
		textSize(50);
		text("GAME OVER", 150, 300);
	}
	}
}