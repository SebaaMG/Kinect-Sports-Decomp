void fn_8281DC98(const float *src, float *dst, float scale_x, float scale_y, float scale_z)
{
    // Column 0 (indices 0, 3, 6) scaled by scale_x (f1)
    dst[0] = src[0] * scale_x;
    dst[3] = src[3] * scale_x;
    dst[6] = src[6] * scale_x;

    // Column 1 (indices 1, 4, 7) scaled by scale_y (f2)
    dst[1] = src[1] * scale_y;
    dst[4] = src[4] * scale_y;
    dst[7] = src[7] * scale_y;

    // Column 2 (indices 2, 5, 8) scaled by scale_z (f3)
    dst[2] = src[2] * scale_z;
    dst[5] = src[5] * scale_z;
    dst[8] = src[8] * scale_z;
}
