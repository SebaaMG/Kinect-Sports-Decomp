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
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821955C0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F844;


void fn_825300A8(double param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  
  iVar6 = lbl_8327F844;
  fVar5 = lbl_821CC160;
  if (param_3 < 0) {
    return;
  }
  if (1 < param_3) {
    return;
  }
  iVar7 = param_3 * 0x2c + lbl_8327F844;
  if ((*(char *)(iVar7 + 0x40) != '\0') && (*(float *)(iVar7 + 0x4c) < lbl_821CC160)) {
    return;
  }
  *(float *)(iVar7 + 0x5c) = lbl_821CC160;
  dVar4 = lbl_821955C0;
  fVar1 = *(float *)(iVar7 + 0x54);
  fVar2 = *(float *)(iVar7 + 0x50);
  dVar8 = (double)lbl_8218EC10;
  *(undefined1 *)(iVar7 + 0x40) = 1;
  fVar3 = lbl_821CA460;
  *(float *)((param_3 + 2) * 0x2c + iVar6) = fVar5;
  if ((float)(param_1 - dVar8) < 0.0) {
    param_1 = dVar4;
  }
  *(float *)(iVar7 + 0x44) = (float)param_1;
  fVar3 = fVar3 / (float)param_1;
  *(float *)(iVar7 + 0x4c) = -(fVar1 * fVar3);
  *(float *)(iVar7 + 0x48) = -(fVar2 * fVar3);
  return;
}

