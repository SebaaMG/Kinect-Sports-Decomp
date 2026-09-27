typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    int x, y, z;
} Vec3i;

typedef struct {
    char pad[0x30];
    Vec3 v1;      // 0x30
    Vec3 v2;      // 0x3c
    Vec3 v3;      // 0x48
    Vec3i v4;     // 0x54
} SourceStruct;

int fn_8287B6A8(SourceStruct* src, Vec3* out1, Vec3* out2, Vec3* out3, Vec3i* out4)
{
    out2->x = src->v1.x;
    out2->y = src->v1.y;
    out2->z = src->v1.z;
    
    out3->x = src->v2.x;
    out3->y = src->v2.y;
    out3->z = src->v2.z;
    
    out1->x = src->v3.x;
    out1->y = src->v3.y;
    out1->z = src->v3.z;
    
    out4->x = src->v4.x;
    out4->y = src->v4.y;
    out4->z = src->v4.z;
    
    return 0x20250000;
}
