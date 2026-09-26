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
extern unsigned int *auStack_a0;
extern int fn_828AC488();
extern int fn_828D4D10();
extern int fn_828E1FD8();
extern int fn_82F622E0();


void fn_828E20C8(int param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  int iVar1;
  char cVar3;
  undefined8 uVar2;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_a0 [160];
  
  uVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0xc);
      if ((uint)((*(int *)(param_1 + 0x10) - iVar1) / 0x1c) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ae698);
      }
      iVar1 = *(int *)(iVar5 + iVar1);
      if (((iVar1 != 0) && (cVar3 = (**(code **)(**(int **)(iVar1 + 0x50) + 0x48))(), cVar3 != '\0')
          ) && (uVar6 = 0, lVar7 = param_3, param_4 != 0)) {
        do {
          iVar1 = *(int *)(param_1 + 0xc);
          if ((uint)((*(int *)(param_1 + 0x10) - iVar1) / 0x1c) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            fn_82F622E0(0xffffffff821ae698);
          }
          uVar2 = fn_828D4D10(auStack_a0,param_2,lVar7);
          fn_828E1FD8(iVar5 + iVar1 + 4,uVar2);
          fn_828AC488(auStack_a0);
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x2a;
        } while (uVar6 < param_4);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x1c;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  return;
}

