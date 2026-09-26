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
extern int fn_824DF2E8();
extern int fn_824DF3E0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_824E0D28(double param_1,int param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  
  fn_824DF2E8((double)*(float *)(param_3 + 0x54),param_2 + 0x20);
  *(float *)(param_2 + 0x3c) = (float)((double)*(float *)(param_2 + 0x3c) + param_1);
  fn_824DF3E0(param_2 + 0x20);
  pfVar2 = *(float **)(param_2 + 4);
  bVar5 = *pfVar2 < lbl_821CA460 - *(float *)(param_3 + 100) / *(float *)(param_2 + 0x38);
  uVar4 = (uint)bVar5;
  *(uint *)(param_2 + 0x10) = uVar4;
  uVar3 = lbl_821CC160;
  if ((uVar4 != 0) && ((*(int *)(param_2 + 8) == 0 || (*(int *)(param_2 + 0xc) != 0)))) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x14) + param_1);
    *(float *)(param_2 + 0x14) = fVar1;
    if (fVar1 <= pfVar2[1]) goto LAB_824e0df8;
    *(undefined4 *)(param_2 + 0x18) = uVar3;
    *(undefined4 *)(param_2 + 8) = 1;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  *(undefined4 *)(param_2 + 0x14) = uVar3;
LAB_824e0df8:
  if (*(int *)(param_2 + 8) != 0) {
    if (*(int *)(param_2 + 0xc) != 0) {
      *(float *)(param_2 + 0x18) = (float)((double)*(float *)(param_2 + 0x18) + param_1);
    }
    if (pfVar2[2] < *(float *)(param_2 + 0x18)) {
      *(undefined4 *)(param_2 + 0x18) = uVar3;
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
  }
  if ((!bVar5) && (*(int *)(param_2 + 8) != 0)) {
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}

