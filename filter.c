#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for ( int i = 0; i < height-1; i++)
    {
        for ( int j = 0; j < width-1; j++)
        {
            float average = round((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed)/3);
            image[i][j].rgbtBlue = average;
            image[i][j].rgbtGreen = average;
            image[i][j].rgbtRed = average;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    int color[3];
    for ( int i = 0; i < height-1; i++)
    {
        for ( int j = 0; j < (width-1)/2; j++)
        {
            color[0] = image[i][j].rgbtRed;
            color[1] = image[i][j].rgbtBlue;
            color[2] = image[i][j].rgbtGreen;
            image[i][j].rgbtRed = image[i][width-1-j].rgbtRed;
            image[i][j].rgbtBlue = image[i][width-1-j].rgbtBlue;
            image[i][j].rgbtGreen = image[i][width-1-j].rgbtGreen;
            image[i][width-1-j].rgbtRed = color[0];
            image[i][width-1-j].rgbtBlue = color[1];
            image[i][width-1-j].rgbtGreen = color[2];
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
