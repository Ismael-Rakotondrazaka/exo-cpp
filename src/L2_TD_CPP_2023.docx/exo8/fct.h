int fct(char car, int nb)
{
    int res;
    if (car == 'a')
        res = nb + car;
    else if (car == 's')
        res = nb - car;
    else
        res = nb * car;
    return res;
}
