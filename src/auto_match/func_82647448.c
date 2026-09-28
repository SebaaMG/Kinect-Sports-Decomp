// Kinect Sports retail 4D5308C9, function 0x82647448 (20 bytes).
int fn_82647448(int param_1)
{
    int *counter = (int *)(param_1 + 0x3c);
    *counter = *counter + 1;
    return *counter;
}
