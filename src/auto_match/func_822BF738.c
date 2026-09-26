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
extern int fn_8234B0C8();
extern int fn_8288B760();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_822BF738(undefined8 param_1,ulonglong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  iVar3 = fn_82F6A548();
  if ((*(int *)(iVar3 + 0x7ac) == 0) && (*(int *)(iVar3 + 0x7a0) == 0)) {
    dVar6 = (double)lbl_821CC160;
    if (*(int *)(iVar3 + 0x24) == 0) {
      iVar2 = *(int *)(iVar3 + 0x5a8);
      if ((param_2 & 0xffffffff) < 2) {
        dVar6 = (double)*(float *)(iVar2 + 0x48);
      }
      else if ((param_2 & 0xffffffff) == 2) {
        dVar6 = (double)*(float *)(iVar2 + 0x4c);
      }
      else if ((param_2 & 0xffffffff) < 4) {
        dVar6 = (double)*(float *)(iVar2 + 0x50);
      }
    }
    else if ((param_2 & 0xffffffff) < 2) {
      dVar6 = (double)*(float *)(iVar3 + 0x200);
    }
    else if ((param_2 & 0xffffffff) == 2) {
      dVar6 = (double)*(float *)(iVar3 + 0x204);
    }
    else if ((param_2 & 0xffffffff) < 4) {
      dVar6 = (double)*(float *)(iVar3 + 0x208);
    }
    dVar7 = (double)lbl_821CA460;
    dVar5 = dVar7;
    if (*(int *)(iVar3 + 0x168) == 0) {
      uVar4 = *(uint *)(iVar3 + 0x16c);
    }
    else {
      uVar4 = fn_8288B760();
      uVar4 = uVar4 & 0xff;
    }
    if (uVar4 != 0) {
      if ((int)param_2 == 2) {
        *(undefined4 *)(iVar3 + 0x79c) = *(undefined4 *)(iVar3 + 0x214);
      }
      if (*(int *)(iVar3 + 0x7a4) != 0) {
        if (*(int *)(iVar3 + 0x24) == 0) {
          fVar1 = *(float *)(*(int *)(iVar3 + 0x5a8) + 0x48);
        }
        else {
          fVar1 = *(float *)(iVar3 + 0x200);
        }
        dVar6 = (double)fVar1;
        dVar7 = (double)*(float *)(iVar3 + 0x1c8);
      }
      if (*(int *)(iVar3 + 0x5c0) != 0) {
        dVar5 = (double)(float)((double)*(float *)(*(int *)(iVar3 + 0x5c0) * 0x18 + iVar3 + 0x5b4) +
                               dVar5);
      }
      dVar7 = (double)(float)(dVar5 * dVar7);
    }
    if (*(int *)(iVar3 + 0x24) != 0) {
      fn_8234B0C8((double)lbl_8218E8E8,(ulonglong)*(uint *)(iVar3 + 0x118) + 0x2c0,
                        0xffffffff821acc9c);
    }
    if (*(int **)(iVar3 + 0x270) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x270) + 4))((double)(float)(dVar7 * dVar6));
    }
  }
  fn_82F6A594();
  return;
}

