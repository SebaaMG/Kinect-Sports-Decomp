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
extern float lbl_82192480;
extern unsigned int lbl_821925C0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_82625DC8(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  
  fVar7 = lbl_821CA460;
  uVar8 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  fVar1 = *param_3 * lbl_8218E8E8;
  fVar2 = *param_3 * lbl_821925C0;
  fVar3 = param_3[1] * lbl_821925C0;
  fVar4 = param_3[1] * lbl_8218E8E8;
  uVar9 = uVar8 * 0x19660d + 0x3c6ef35f;
  fVar5 = (float)(uVar8 & 0x7fffff | 0x3f800000) - lbl_821CA460;
  fVar6 = (float)(uVar9 & 0x7fffff | 0x3f800000) - lbl_821CA460;
  lbl_83265A28 = uVar9;
  param_1[1] = lbl_821CC160;
  *param_1 = (fVar1 - fVar2) * fVar5 + fVar2;
  param_1[2] = (fVar4 - fVar3) * fVar6 + fVar3;
  if (param_2 != 0) {
    lbl_83265A28 = uVar9 * 0x19660d + 0x3c6ef35f;
    uVar8 = (uint)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar7) * lbl_82192480);
    if (uVar8 == 0) {
      *param_1 = fVar2;
    }
    else if (uVar8 == 1) {
      *param_1 = fVar1;
    }
    else if (uVar8 < 3) {
      param_1[2] = fVar3;
    }
    else if (uVar8 < 5) {
      param_1[2] = fVar4;
    }
  }
  return;
}

