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


void fn_827C36D8(int *param_1,char param_2,int param_3,int *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar10;
  longlong lVar9;
  int iVar11;
  char acStack_571 [269];
  int aiStack_464 [281];
  
  if ((param_3 < 0) || (3 < param_3)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x32;
    *(int *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  iVar5 = param_3 + 0x28;
  if (param_2 == '\0') {
    iVar5 = param_3 + 0x2c;
  }
  iVar5 = param_1[iVar5];
  if (iVar5 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x32;
    *(int *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  if (*param_4 == 0) {
    iVar3 = (**(code **)param_1[1])(param_1,1,0x590);
    *param_4 = iVar3;
  }
  param_4 = (int *)*param_4;
  iVar3 = 0;
  iVar7 = 1;
  param_4[0x23] = iVar5;
  do {
    bVar2 = *(byte *)(iVar7 + iVar5);
    uVar10 = (uint)bVar2;
    if (0x100 < (int)((uint)bVar2 + iVar3)) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (bVar2 != 0) {
      iVar11 = uVar10 + iVar3;
      pcVar6 = acStack_571 + iVar3;
      do {
        pcVar6 = pcVar6 + 1;
        *pcVar6 = (char)iVar7;
        uVar10 = uVar10 - 1;
        iVar3 = iVar11;
      } while (uVar10 != 0);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x11);
  uVar8 = 0;
  acStack_571[iVar3 + 1] = '\0';
  iVar3 = 0;
  lVar9 = (longlong)acStack_571[1];
  if (lVar9 != 0) {
    do {
      pcVar6 = acStack_571 + iVar3 + 1;
      uVar10 = (uint)lVar9;
      if ((int)*pcVar6 == uVar10) {
        piVar4 = aiStack_464 + iVar3;
        do {
          pcVar6 = pcVar6 + 1;
          cVar1 = *pcVar6;
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 1;
          *piVar4 = (int)uVar8;
          uVar8 = uVar8 + 1;
        } while ((int)cVar1 == uVar10);
      }
      if (1 << (uVar10 & 0x3f) <= (int)uVar8) {
        *(undefined4 *)(*param_1 + 0x14) = 8;
        (**(code **)*param_1)(param_1);
      }
      uVar8 = (uVar8 & 0x7fffffff) << 1;
      lVar9 = lVar9 + 1;
    } while (acStack_571[iVar3 + 1] != '\0');
  }
  iVar7 = 0;
  iVar3 = 1;
  lVar9 = 0x10;
  piVar4 = param_4;
  do {
    if (*(char *)(iVar3 + iVar5) == '\0') {
      iVar11 = -1;
    }
    else {
      piVar4[0x13] = iVar7 - aiStack_464[iVar7 + 1];
      iVar7 = (uint)*(byte *)(iVar3 + iVar5) + iVar7;
      iVar11 = aiStack_464[iVar7];
    }
    piVar4[1] = iVar11;
    iVar3 = iVar3 + 1;
    lVar9 = lVar9 + -1;
    piVar4 = piVar4 + 1;
  } while (lVar9 != 0);
  param_4[0x11] = 0xfffff;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_4 + 0x24,0,0x400);
}

