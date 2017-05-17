
int and(int z, int x, int y)
{
    return ((z > x) && (z < y));
}

int checksum(int s)
{
 if (s < 10000)
    {
        printf("Ошибка!\n");
        return 1;
    }

int checkdate(int d)
{
	if ((d < 0) || (d > 365))
    {
        printf("Ошибка!");
        return 0;
    }
}

