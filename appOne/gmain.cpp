#include <stdio.h>
#include "libone.h"

void gmain(){
	{window(500, 800);
	float vx, vy;
	vx = 0;
	vy = 0;
	while (notQuit) {
	clear(0, 149, 217);

		/*
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
		
		stroke(255);
		fill(255);
		circle(width / 2 + vx, height - 100 + vy, 75);
		circle(width / 2 + vx, height - 100 - 60 + vy, 60);
		strokeWeight(5);
		stroke(0);
		point(width / 2 - 10 + vx, height - 100 - 60 - 30 / 2 + vy);
		point(width / 2 + 10 + vx, height - 100 - 60 - 30 / 2 + vy);
		line(width / 2 - 5 + vx, height - 100 - 60 + vy, width / 2 + 5 + vx, height - 100 - 60 + vy);
		if (isPress(KEY_RIGHT) || isPress(KEY_LEFT) || isPress(KEY_UP) || isPress(KEY_DOWN)) {
			if (isPress(KEY_RIGHT)) {
				vx += 2;
			}
			else if (isPress(KEY_LEFT)) {
				vx -= 2;
			}
			else if (isPress(KEY_UP)) {
				vy -= 2;
			}
			else {
				vy += 2;
			}
		}
		
	}
	}
}