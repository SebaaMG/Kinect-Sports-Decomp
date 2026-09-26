// Kinect Sports retail 4D5308C9, function 0x8251DC28 (100 bytes).
// Clears the 11 int fields of the object, then runs the constructor at
// offset 0x20 and hands the object pointer back to the caller.
extern void fn_82488FB8(int *param_1);

int *fn_8251DC28(int *param_1)
{
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    fn_82488FB8(param_1 + 8);
    return param_1;
}
