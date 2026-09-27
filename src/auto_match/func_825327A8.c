// Kinect Sports retail 4D5308C9, function 0x825327A8 (0x64 bytes).
// Returns the handle produced by fn_825328D0 after handing it to fn_82532810,
// unless the +0x180 field is empty or no handle exists.
extern void *fn_825328D0(int param_1);
extern void fn_82532810(int param_1, void *param_2);

void *fn_825327A8(int param_1)
{
    void *param_2;

    if (*(unsigned int *)(param_1 + 0x180) == 0) {
        return 0;
    }

    param_2 = fn_825328D0(param_1);
    if (param_2 == 0) {
        return 0;
    }

    fn_82532810(param_1, param_2);
    return param_2;
}
