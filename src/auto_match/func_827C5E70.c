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
extern unsigned int *auStack_464;
extern int fn_82F691F0();


void fn_827C5E70(int *param_1,char param_2,int param_3,uint *param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar8;
  ulonglong uVar7;
  uint uVar10;
  longlong lVar9;
  int iVar11;
  int iVar12;
  char acStack_571 [269];
  undefined4 auStack_464 [281];
  
  if ((param_3 < 0) || (3 < param_3)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x32;
    *(int *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  iVar5 = param_3 + 0x16;
  if (param_2 == '\0') {
    iVar5 = param_3 + 0x1a;
  }
  iVar5 = param_1[iVar5];
  if (iVar5 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x32;
    *(int *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  if (*param_4 == 0) {
    uVar3 = (**(code **)param_1[1])(param_1,1,0x500);
    *param_4 = uVar3;
  }
  uVar3 = *param_4;
  iVar11 = 0;
  iVar8 = 1;
  do {
    bVar2 = *(byte *)(iVar8 + iVar5);
    uVar10 = (uint)bVar2;
    if (0x100 < (int)((uint)bVar2 + iVar11)) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (bVar2 != 0) {
      iVar12 = uVar10 + iVar11;
      pcVar6 = acStack_571 + iVar11;
      do {
        pcVar6 = pcVar6 + 1;
        *pcVar6 = (char)iVar8;
        uVar10 = uVar10 - 1;
        iVar11 = iVar12;
      } while (uVar10 != 0);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x11);
  uVar7 = 0;
  acStack_571[iVar11 + 1] = '\0';
  iVar5 = 0;
  lVar9 = (longlong)acStack_571[1];
  if (lVar9 != 0) {
    do {
      pcVar6 = acStack_571 + iVar5 + 1;
      uVar10 = (uint)lVar9;
      if ((int)*pcVar6 == uVar10) {
        puVar4 = auStack_464 + iVar5;
        do {
          pcVar6 = pcVar6 + 1;
          cVar1 = *pcVar6;
          iVar5 = iVar5 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = (int)uVar7;
          uVar7 = uVar7 + 1;
        } while ((int)cVar1 == uVar10);
      }
      if (1 << (uVar10 & 0x3f) <= (int)uVar7) {
        *(undefined4 *)(*param_1 + 0x14) = 8;
        (**(code **)*param_1)(param_1);
      }
      uVar7 = (uVar7 & 0x7fffffff) << 1;
      lVar9 = lVar9 + 1;
    } while (acStack_571[iVar5 + 1] != '\0');
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0((ulonglong)uVar3 + 0x400,0,0x100);
}

