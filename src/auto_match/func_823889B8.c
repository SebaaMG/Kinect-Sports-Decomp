float fn_823889B8(int object)
{
    int first;
    int second;
    first = *(int *)(object + 8);
    second = *(int *)(first + 0x260);
    return *(float *)(second + 0x194);
}
