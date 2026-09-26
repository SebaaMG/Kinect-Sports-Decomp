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
extern int fn_82F68CC0();


void fn_82C3F1B8(int param_1,int *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  undefined2 uVar6;
  int iVar7;
  
  iVar1 = param_2[10];
  iVar2 = param_2[9];
  if (param_3 - param_4 < 1) {
    if (((int)(param_3 - param_4) < 0) && (iVar7 = 0, 0 < *param_2)) {
      psVar5 = (short *)(param_2[0xc] + -2);
      do {
        psVar3 = psVar5 + 1;
        iVar4 = param_2[8] + iVar7;
        iVar7 = iVar7 + 1;
        psVar5 = psVar5 + 1;
        *psVar5 = *psVar3 - *(short *)(iVar4 * 2 + iVar1);
      } while (iVar7 < *param_2);
    }
  }
  else {
    iVar7 = 0;
    if (0 < *param_2) {
      psVar5 = (short *)(param_2[0xc] + -2);
      do {
        psVar3 = psVar5 + 1;
        iVar4 = param_2[8] + iVar7;
        iVar7 = iVar7 + 1;
        psVar5 = psVar5 + 1;
        *psVar5 = *(short *)(iVar4 * 2 + iVar1) + *psVar3;
      } while (iVar7 < *param_2);
    }
  }
  if (param_2[8] == 0) {
    fn_82F68CC0(*param_2 * 4 + iVar2,iVar2);
    fn_82F68CC0(*param_2 * 2 + iVar1,iVar1);
    param_2[8] = *param_2 + -1;
  }
  else {
    param_2[8] = param_2[8] + -1;
  }
  iVar7 = (int)param_3;
  if (*(int *)(param_1 + 0x2d0) < iVar7) {
    *(int *)(param_2[8] * 4 + iVar2) = *(int *)(param_1 + 0x2d0);
  }
  else if (iVar7 < *(int *)(param_1 + 0x2d4)) {
    *(int *)(param_2[8] * 4 + iVar2) = *(int *)(param_1 + 0x2d4);
  }
  else {
    *(int *)(param_2[8] * 4 + iVar2) = iVar7;
  }
  if (iVar7 < 1) {
    if (iVar7 < 0) {
      *(short *)(param_2[8] * 2 + iVar1) = -*(short *)((int)param_2 + 0x1e);
      goto LAB_82c3f344;
    }
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined2 *)((int)param_2 + 0x1e);
  }
  *(undefined2 *)(param_2[8] * 2 + iVar1) = uVar6;
LAB_82c3f344:
  iVar2 = (param_2[2] + param_2[8]) * 2;
  *(short *)(iVar2 + iVar1) = *(short *)(iVar2 + iVar1) >> 2;
  iVar2 = (param_2[1] + param_2[8]) * 2;
  *(short *)(iVar2 + iVar1) = *(short *)(iVar2 + iVar1) >> 1;
  return;
}

