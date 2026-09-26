void fn_8270A558(unsigned char *output, const unsigned char *p2, const unsigned char *p3, const unsigned char *p4, const unsigned char *p5, int x, int y)
{
    int sum = (int)*p3 * (0x100 - y) * x +
              (int)*p4 * (0x100 - x) * y +
              (int)*p2 * (0x100 - y) * (0x100 - x) +
              (int)*p5 * x * y + 0x8000;
    int shift = 16;
    *output = (unsigned char)(sum >> shift);
}
