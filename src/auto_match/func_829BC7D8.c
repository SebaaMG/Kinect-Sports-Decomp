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
extern int fn_82F691F0();


void fn_829BC7D8(int *param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar12;
  ulonglong uVar11;
  int iVar13;
  longlong lVar14;
  char acStack_581 [269];
  int aiStack_474 [285];
  
  if ((param_3 < 0) || (3 < param_3)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x32;
    *(int *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  iVar7 = param_3 + 0x2e;
  if (param_2 == 0) {
    iVar7 = param_3 + 0x32;
  }
  iVar7 = param_1[iVar7];
  if (iVar7 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x32;
    *(int *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  if (*param_4 == 0) {
    iVar4 = (**(code **)param_1[1])(param_1,1,0x590);
    *param_4 = iVar4;
  }
  param_4 = (int *)*param_4;
  iVar4 = 0;
  iVar9 = 1;
  param_4[0x23] = iVar7;
  do {
    bVar2 = *(byte *)(iVar9 + iVar7);
    uVar12 = (uint)bVar2;
    if (0x100 < (int)((uint)bVar2 + iVar4)) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (bVar2 != 0) {
      iVar13 = uVar12 + iVar4;
      pcVar8 = acStack_581 + iVar4;
      do {
        pcVar8 = pcVar8 + 1;
        *pcVar8 = (char)iVar9;
        uVar12 = uVar12 - 1;
        iVar4 = iVar13;
      } while (uVar12 != 0);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x11);
  uVar11 = 0;
  acStack_581[iVar4 + 1] = '\0';
  iVar4 = 0;
  uVar10 = (ulonglong)acStack_581[1];
  uVar3 = 0x100000001 << (uVar10 & 0x1f) | 0x100000001U >> 0x40 - (uVar10 & 0x1f);
  while (acStack_581[1] != '\0') {
    pcVar8 = acStack_581 + iVar4 + 1;
    if ((int)*pcVar8 == (int)uVar10) {
      piVar5 = aiStack_474 + iVar4;
      do {
        pcVar8 = pcVar8 + 1;
        cVar1 = *pcVar8;
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
        *piVar5 = (int)uVar11;
        uVar11 = uVar11 + 1;
      } while ((int)cVar1 == (int)uVar10);
    }
    if ((int)uVar3 <= (int)uVar11) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    uVar11 = (uVar11 & 0x7fffffff) << 1;
    uVar10 = uVar10 + 1;
    uVar3 = (uVar3 & 0xffffffff) << 1 | (uVar3 & 0xffffffff) >> 0x1f;
    acStack_581[1] = acStack_581[iVar4 + 1];
  }
  iVar9 = 0;
  iVar4 = 1;
  lVar14 = 0x10;
  piVar5 = param_4;
  do {
    piVar6 = piVar5 + 1;
    if (*(char *)(iVar4 + iVar7) == '\0') {
      *piVar6 = -1;
    }
    else {
      piVar5[0x13] = iVar9 - aiStack_474[iVar9 + 1];
      iVar9 = (uint)*(byte *)(iVar4 + iVar7) + iVar9;
      *piVar6 = aiStack_474[iVar9];
    }
    iVar4 = iVar4 + 1;
    lVar14 = lVar14 + -1;
    piVar5 = piVar6;
  } while (lVar14 != 0);
  param_4[0x11] = 0xfffff;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_4 + 0x24,0,0x400);
}

