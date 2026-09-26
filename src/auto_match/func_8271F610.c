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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82681728();
extern int fn_826826A8();
extern int fn_82683270();
extern int fn_826944C8();
extern int fn_82695520();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82720748();


void fn_8271F610(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  char cVar6;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  int aiStack_70 [4];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  uVar9 = 0;
  auStack_60[0] = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 0x2a0);
  cVar6 = (**(code **)(*(int *)(iVar1 + 0x10) + 0x2c))
                    (iVar1 + 0x10,(uint *)(param_1 + 0x78),*(int *)(param_1 + 0x78) + 0x5c,
                     auStack_60);
  if (cVar6 != '\0') {
    uVar4 = fn_82696958(auStack_60,param_1);
    if ((uVar4 & 0xffffffff) != 0) {
      uVar9 = uVar4 + 0x10;
    }
    if ((uVar9 & 0xffffffff) != 0) {
      if ((param_3 & 0xffffffff) == 0) {
        uVar8 = *(int *)(param_1 + 8) + 0x10;
        *(uint *)(param_1 + 8) = uVar8;
        if (*(uint *)(param_1 + 0x10) <= uVar8) {
          fn_826826A8((undefined4 *)(param_1 + 8));
        }
        puVar2 = *(undefined1 **)(param_1 + 8);
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = 1;
        }
      }
      else {
        uVar5 = fn_82695520(auStack_50,param_3);
        uVar8 = *(int *)(param_1 + 8) + 0x10;
        *(uint *)(param_1 + 8) = uVar8;
        if (*(uint *)(param_1 + 0x10) <= uVar8) {
          fn_826826A8((int *)(param_1 + 8));
        }
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 != 0) {
          fn_82695DA0(iVar1,uVar5);
        }
        fn_82696330(auStack_50);
      }
      puVar10 = (uint *)(param_1 + 8);
      if ((param_2 & 0xffffffff) == 0) {
        uVar8 = *puVar10;
        *puVar10 = uVar8 + 0x10;
        if (*(uint *)(param_1 + 0x10) <= uVar8 + 0x10) {
          fn_826826A8(puVar10);
        }
        if ((undefined1 *)*puVar10 != (undefined1 *)0x0) {
          *(undefined1 *)*puVar10 = 1;
        }
      }
      else {
        uVar5 = fn_82695520(auStack_50,param_2);
        uVar8 = *puVar10;
        *puVar10 = uVar8 + 0x10;
        if (*(uint *)(param_1 + 0x10) <= uVar8 + 0x10) {
          fn_826826A8(puVar10);
        }
        if (*puVar10 != 0) {
          fn_82695DA0(*puVar10,uVar5);
        }
        fn_82696330(auStack_50);
      }
      iVar1 = *(int *)(param_1 + 0xc);
      uVar8 = *puVar10;
      uVar3 = *(uint *)(param_1 + 0x1c);
      fn_82681728(aiStack_70,(ulonglong)*(uint *)(param_1 + 0x78) + 0x254,0xffffffff8200ec78);
      fn_82720748(param_1,uVar9,aiStack_70,2,
                        (longlong)((int)(uVar8 - iVar1) >> 4) +
                        ((ulonglong)uVar3 & 0x7ffffff) * 0x20 + -0x20);
      lVar7 = (ulonglong)*(uint *)(aiStack_70[0] + 8) - 1;
      *(int *)(aiStack_70[0] + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(aiStack_70[0]);
      }
      fn_82683270(puVar10,2);
    }
  }
  fn_82696330(auStack_60);
  return;
}

