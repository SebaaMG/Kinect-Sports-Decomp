extern int lbl_8326B370[];
extern float lbl_821CA45C;
extern float lbl_821916FC;

extern int fn_82560690(int param);

float fn_825316F0(void)
{
    float value;
    int result;

    if (lbl_8326B370[0x42] != 0) {
        result = fn_82560690(0);
        value = (result < 2) ? *(float *)((char *)&lbl_821CA45C + 4) : lbl_821916FC;
    } else {
        result = fn_82560690(0);
        value = (result < 3) ? *(float *)((char *)&lbl_821CA45C + 4) : lbl_821916FC;
    }

    return value;
}
