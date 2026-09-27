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
extern unsigned int lbl_8218E8E8;
extern float lbl_8219250C;
extern unsigned int lbl_821925C0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_82625AC0(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  fVar9 = lbl_821CA460;
  fVar1 = *param_3 * lbl_8218E8E8;
  fVar6 = param_3[1] * lbl_8218E8E8;
  fVar5 = param_3[2] * lbl_8218E8E8;
  uVar10 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  fVar2 = *param_3 * lbl_821925C0;
  fVar3 = param_3[1] * lbl_821925C0;
  fVar4 = param_3[2] * lbl_821925C0;
  uVar11 = uVar10 * 0x19660d + 0x3c6ef35f;
  uVar12 = uVar11 * 0x19660d + 0x3c6ef35f;
  fVar7 = (float)(uVar11 & 0x7fffff | 0x3f800000) - lbl_821CA460;
  fVar8 = (float)(uVar12 & 0x7fffff | 0x3f800000) - lbl_821CA460;
  lbl_83265A28 = uVar12;
  *param_1 = (fVar1 - fVar2) * ((float)(uVar10 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar2;
  param_1[1] = (fVar6 - fVar3) * fVar7 + fVar3;
  param_1[2] = (fVar5 - fVar4) * fVar8 + fVar4;
  if (param_2 != 0) {
    lbl_83265A28 = uVar12 * 0x19660d + 0x3c6ef35f;
    uVar10 = (uint)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar9) * lbl_8219250C);
    if (uVar10 == 0) {
      *param_1 = fVar2;
    }
    else if (uVar10 == 1) {
      *param_1 = fVar1;
    }
    else if (uVar10 < 3) {
      param_1[1] = fVar6;
    }
    else if (uVar10 == 3) {
      param_1[1] = fVar3;
    }
    else if (uVar10 < 5) {
      param_1[2] = fVar4;
    }
    else if (uVar10 < 7) {
      param_1[2] = fVar5;
    }
  }
  return;
}

