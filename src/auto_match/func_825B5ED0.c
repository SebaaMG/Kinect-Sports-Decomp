float fn_825B5ED0(int object)
{
    int first;
    int second;
    int third;
    first = *(int *)(object + 4);
    second = *(int *)(first + 0x10);
    third = *(int *)(second + 4);
    return *(float *)third;
}
