void blur(int height, int width, RGBTRIPLE image[height][width])
{
        RGBTRIPLE temp[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            temp[i][j] = image[i][j];
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int count = 0;
            double sum_blue = 0;
            double sum_green = 0;
            double sum_red = 0;
            for (int k = - 1; k < 2; k++)
            {
                for (int l = - 1; l < 2; l++)
                {
                    if ((k + i) < 0 || (l + j) < 0 || (k + i) > (height-1) || (l + j) < (width-1))
                    {
                        continue;
                    }
                    sum_blue += temp[k+i][l+j].rgbtBlue;
                    sum_green += temp[k+i][l+j].rgbtGreen;
                    sum_red += temp[k+i][l+j].rgbtRed;
                    count++;
                }
            }
            temp[i][j].rgbtBlue = round(sum_blue / count);
            temp[i][j].rgbtGreen = round(sum_green / count);
            temp[i][j].rgbtRed = round(sum_red / count);
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = temp[i][j];
        }
    }
    return;
}
