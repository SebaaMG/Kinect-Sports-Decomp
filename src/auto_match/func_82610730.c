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
extern int fn_825F4DE0();
extern int fn_825F4F10();
extern int fn_825F4FE8();
extern unsigned int lbl_821CC160;


void fn_82610730(int param_1,undefined8 param_2,int param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  
  fVar3 = lbl_821CC160;
  iVar1 = **(int **)(param_1 + 0x60);
  if (param_5 == 0) {
    bVar5 = lbl_821CC160 < *(float *)(param_3 + 0x18);
    iVar4 = fn_825F4F10(iVar1,bVar5);
    if (iVar4 == 0) {
      fn_825F4DE0(iVar1,param_3 + 0x10,bVar5);
    }
    *(undefined4 *)(iVar1 + 0x920) = *(undefined4 *)(param_3 + 0x14);
    return;
  }
  if (param_5 != 1) {
    if (param_5 < 3) {
      if (*(float *)(param_3 + 0x18) <= lbl_821CC160) {
        return;
      }
      fVar2 = lbl_821CC160;
      if (*(int *)(iVar1 + 0x8dc) != 0) {
        fVar2 = *(float *)(*(int *)(iVar1 + 0x8dc) + 0x10) - *(float *)(iVar1 + 0x8f4);
      }
      if (*(float *)(param_3 + 0x18) < fVar2) {
        return;
      }
      if (*(float *)(iVar1 + 0x924) != lbl_821CC160) {
        return;
      }
      *(undefined4 *)(iVar1 + 0x924) = *(undefined4 *)(iVar1 + 0x8f4);
      *(float *)(iVar1 + 0x920) = fVar3;
      return;
    }
    if (param_5 != 3) {
      return;
    }
  }
  fn_825F4FE8(iVar1);
  return;
}

