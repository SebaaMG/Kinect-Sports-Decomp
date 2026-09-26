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
extern int fn_82359698();
extern int fn_82405638();
extern int fn_82405898();
extern int fn_82405A10();
extern unsigned int lbl_821CC160;


void fn_82405500(double param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar2 = *(uint *)(param_2 + 0x18);
  if (7 < uVar2) {
    return;
  }
  if (uVar2 == 0) {
    if (*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x78) + 0xc) != 0) {
      return;
    }
  }
  else {
    if (uVar2 == 1) {
      fVar1 = (float)((double)*(float *)(param_2 + 0x34) - param_1);
      *(float *)(param_2 + 0x34) = fVar1;
      if (lbl_821CC160 < fVar1) {
        return;
      }
      uVar4 = 2;
      goto LAB_82405618;
    }
    if (uVar2 == 2) {
      fn_82405898(param_2);
      return;
    }
    if (uVar2 == 3) {
      fVar1 = (float)((double)*(float *)(param_2 + 0x34) - param_1);
      *(float *)(param_2 + 0x34) = fVar1;
      if (lbl_821CC160 < fVar1) {
        return;
      }
      uVar4 = 4;
      goto LAB_82405618;
    }
    if (uVar2 == 4) {
      fn_82405A10(param_2);
      return;
    }
    if ((uVar2 != 5) && (uVar2 != 6)) {
      fVar1 = (float)((double)*(float *)(param_2 + 0x34) - param_1);
      *(float *)(param_2 + 0x34) = fVar1;
      if (lbl_821CC160 < fVar1) {
        return;
      }
      iVar3 = *(int *)(param_2 + 8);
      *(undefined4 *)(iVar3 + 1000) = 1;
      fn_82359698(iVar3,1);
      uVar4 = 8;
      goto LAB_82405618;
    }
    fVar1 = (float)((double)*(float *)(param_2 + 0x34) - param_1);
    *(float *)(param_2 + 0x34) = fVar1;
    if (lbl_821CC160 < fVar1) {
      return;
    }
  }
  uVar4 = 1;
LAB_82405618:
  fn_82405638(param_2,uVar4);
  return;
}

