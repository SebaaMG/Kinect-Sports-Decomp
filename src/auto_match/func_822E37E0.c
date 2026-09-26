typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_822315A0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_822E37E0(float *param_1,int *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  int iVar4;
  
  fVar2 = lbl_821CA460;
  iVar4 = param_3 * 0xc;
  fVar1 = *(float *)(*param_2 + iVar4);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  *param_1 = (*(float *)(*param_2 + iVar4 + 4) - fVar1) *
             ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar1;
  fVar1 = *(float *)((param_3 + 4) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[1] = (*(float *)(*param_2 + iVar4 + 0x34) - fVar1) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  fVar1 = *(float *)((param_3 + 8) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[2] = (*(float *)(*param_2 + iVar4 + 100) - fVar1) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  fVar1 = *(float *)((param_3 + 0xc) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[3] = (*(float *)(*param_2 + iVar4 + 0x94) - fVar1) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  fVar1 = *(float *)((param_3 + 0x10) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[4] = (*(float *)(*param_2 + iVar4 + 0xc4) - fVar1) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  fVar1 = *(float *)((param_3 + 0x14) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[5] = (*(float *)(*param_2 + iVar4 + 0xf4) - fVar1) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  fVar1 = *(float *)((param_3 + 0x18) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[6] = (*(float *)(*param_2 + iVar4 + 0x124) - fVar1) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  fVar1 = *(float *)((param_3 + 0x1c) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[7] = (*(float *)(*param_2 + iVar4 + 0x154) - fVar1) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  fVar1 = *(float *)((param_3 + 0x20) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[8] = (*(float *)(*param_2 + iVar4 + 0x184) - fVar1) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  fVar1 = *(float *)((param_3 + 0x24) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[9] = (*(float *)(*param_2 + iVar4 + 0x1b4) - fVar1) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  fVar1 = *(float *)((param_3 + 0x28) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[10] = (*(float *)(*param_2 + iVar4 + 0x1e4) - fVar1) *
                ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  fVar1 = *(float *)((param_3 + 0x2c) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar3 = (ulonglong)param_3;
  param_1[0xb] = (*(float *)(*param_2 + iVar4 + 0x214) - fVar1) *
                 ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  fVar1 = *(float *)((param_3 + 0x30) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[0xc] = (*(float *)(*param_2 + iVar4 + 0x244) - fVar1) *
                 ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  fVar1 = *(float *)((param_3 + 0x34) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[0xd] = (*(float *)(*param_2 + iVar4 + 0x274) - fVar1) *
                 ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  fVar1 = *(float *)((param_3 + 0x38) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[0xe] = (*(float *)(*param_2 + iVar4 + 0x2a4) - fVar1) *
                 ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  fVar1 = *(float *)((param_3 + 0x3c) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[0xf] = (*(float *)(*param_2 + iVar4 + 0x2d4) - fVar1) *
                 ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  fVar1 = *(float *)((param_3 + 0x40) * 0xc + *param_2);
  param_1[0x10] =
       (*(float *)(*param_2 + iVar4 + 0x304) - fVar1) *
       ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  fVar1 = *(float *)((param_3 + 0x44) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[0x11] =
       (*(float *)(*param_2 + iVar4 + 0x334) - fVar1) *
       ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  fVar1 = *(float *)((param_3 + 0x48) * 0xc + *param_2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[0x12] =
       (*(float *)(*param_2 + iVar4 + 0x364) - fVar1) *
       ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) + fVar1;
  param_1[0x13] = *(float *)((int)((uVar3 + 0xe4 & 0xffffffff) << 2) + *param_2);
  param_1[0x14] = *(float *)((int)((uVar3 + 0xe8 & 0xffffffff) << 2) + *param_2);
  param_1[0x15] = *(float *)((int)((uVar3 + 0xec & 0xffffffff) << 2) + *param_2);
  param_1[0x16] = *(float *)((int)((uVar3 + 0xf0 & 0xffffffff) << 2) + *param_2);
  param_1[0x17] = *(float *)(*param_2 + iVar4 + 8);
  param_1[0x18] = *(float *)(*param_2 + iVar4 + 0x38);
  param_1[0x19] = *(float *)(*param_2 + iVar4 + 0x68);
  param_1[0x1a] = *(float *)(*param_2 + iVar4 + 0x98);
  param_1[0x1b] = *(float *)(*param_2 + iVar4 + 200);
  param_1[0x1c] = *(float *)(*param_2 + iVar4 + 0xf8);
  param_1[0x1d] = *(float *)(*param_2 + iVar4 + 0x128);
  param_1[0x1e] = *(float *)(*param_2 + iVar4 + 0x158);
  param_1[0x1f] = *(float *)(*param_2 + iVar4 + 0x188);
  param_1[0x20] = *(float *)(*param_2 + iVar4 + 0x1b8);
  param_1[0x21] = *(float *)(*param_2 + iVar4 + 0x1e8);
  param_1[0x22] = *(float *)(*param_2 + iVar4 + 0x218);
  param_1[0x23] = *(float *)(*param_2 + iVar4 + 0x248);
  param_1[0x24] = *(float *)(*param_2 + iVar4 + 0x278);
  param_1[0x25] = *(float *)(*param_2 + iVar4 + 0x2a8);
  param_1[0x26] = *(float *)(*param_2 + iVar4 + 0x2d8);
  param_1[0x27] = *(float *)(*param_2 + iVar4 + 0x308);
  param_1[0x28] = *(float *)(*param_2 + iVar4 + 0x338);
  param_1[0x29] = *(float *)(*param_2 + iVar4 + 0x368);
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

