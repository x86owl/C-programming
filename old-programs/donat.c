#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

	float A = 0, B = 0; // Rotation angles for the x and z axes
	float i,j; 	// Loop variables for iterating over the torus 
	float zbuffer[7040];	// Z- buffer (stores depths for each pixel)
	char output[1760]; 		// Frame buffer (stores the characters for each pixel)

	// Clear the terminal screen (ANSI) escape code
	printf("\x1b[2j");


	//main animation loop 
	while(1)
	{
		//Clear the frame buffer with spaces and the z-buffer with zeros
		memset(output, ' ',1760);
		memset(zbuffer, 0, 7040);
		for (j =0; j< 6.28; j+=0.07)
		{
			//j is the angle around the donut's large circle (R1)
			for(i =0;i < 6.28;i +=0.02){
				//i is the angle around the donut's small circle(R2)
				float c = sin(i),d = cos(j), e = sin(A), f = sin(j), g = cos(A), h = d + 2, D = 1 /(c * h * e + f * g + 5), l= cos(i), m = cos(B), n = sin(B);
				float t = c * h * g - f * e;

				int x = 40 + 30 * D *(l * h * m - t * n);
				int y = 12 + 15 * D *(l * h * n + t * m);
				int o = x + 80 * y; // Index for the 1D arrays


				// Calculate luminance (N), scaled to a range of 0-11
				int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);

				//check if the point is on screen and closer than what's already there
				if (y < 22 && y >= 0 && x >= 0 && x < 80 && D > zbuffer[o])
				{
					zbuffer[o] = D;
					output[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];

				}
			}
		}// Move the coursor to the top-left corner
		printf("\x1b[H");

		//print the frame buffer adding newlines to wrap
		for (int k = 0; k < 1761; k++)
		{
			putchar(k % 80 == 79?'\n' :output[k]);
		}
		//Increment the rotation angles for the next frame
		A += 0.04;
		B +=0.02;
	}

	return 0;
}	

