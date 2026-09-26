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
extern unsigned int fStack0000002c;
extern int fn_8302A8F0();
extern int fn_8302A9B8();
extern unsigned int lbl_832642E4;
extern unsigned int lbl_83264368;
extern unsigned int stack0x0000002c;


void fn_82FF5400(double param_1,undefined8 param_2,int param_3,uint param_4,undefined8 param_5,
                  longlong param_6,int param_7,int param_8)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fStack0000002c;
  
  bVar1 = *(byte *)(param_3 + 0x38);
  fStack0000002c = (float)param_1;
  iVar3 = *(int *)(param_3 + 0x14);
  *(uint *)(param_3 + 0x14) = param_4;
  if ((bVar1 & 0x80) == 0) {
    if ((bVar1 & 0x40) != 0) {
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_3 + 0x10);
    }
    if (param_8 == 2) {
      *(float *)(param_3 + 0xc) = (float)(param_1 + (double)*(float *)(param_3 + 0xc));
      goto LAB_82ff54b8;
    }
  }
  else {
    if ((bVar1 & 0x40) == 0) {
      param_1 = (double)fn_8302A8F0(lbl_83264368);
    }
    else {
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_3 + 0x10);
      fn_8302A9B8(param_3 + 8,&stack0x0000002c);
      param_1 = (double)fStack0000002c;
    }
    if (param_8 == 2) {
      *(float *)(param_3 + 0xc) = (float)(param_1 * (double)*(float *)(param_3 + 0xc));
      goto LAB_82ff54b8;
    }
  }
  *(float *)(param_3 + 0xc) = (float)param_1;
LAB_82ff54b8:
  if (((*(float *)(param_3 + 8) < *(float *)(param_3 + 0xc)) || (param_7 == 3)) ||
     (iVar6 = 8 - param_7, param_7 == 5)) {
    iVar6 = param_7;
  }
  *(int *)(param_3 + 4) = iVar6;
  fVar4 = (float)*(uint *)(lbl_832642E4 + 0x90);
  if ((iVar3 == *(int *)(param_3 + 0x14)) && ((param_4 & 0xf000000) != 0)) {
    fVar2 = *(float *)(param_3 + 0x18);
    *(float *)(param_3 + 0x18) = fVar4;
    fVar5 = (float)((param_6 + 0x14U & 0xffffffff) / 0x15);
    fVar4 = *(float *)(param_3 + 0x1c) - (fVar4 - fVar2);
    if (fVar5 - fVar4 < 0.0) {
      fVar4 = fVar5;
    }
    *(float *)(param_3 + 0x1c) = fVar4;
  }
  else {
    *(float *)(param_3 + 0x18) = fVar4;
    *(float *)(param_3 + 0x1c) = (float)((param_6 + 0x14U & 0xffffffff) / 0x15);
  }
  return;
}

