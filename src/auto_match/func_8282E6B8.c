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
extern int fn_82360F68();
extern int fn_82518FF0();
extern int fn_8257A9F0();
extern int fn_8265CA20();
extern int fn_828223C8();
extern int fn_828252D8();
extern int fn_8282DDD8();
extern int fn_8282F108();
extern unsigned int iStack_7c;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int uStack_78;
extern unsigned int uStack_a0;


void fn_8282E6B8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined4 *puVar10;
  ulonglong uVar9;
  undefined1 uStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 *puStack_94;
  undefined4 *apuStack_90 [4];
  int *piStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  
  iStack_9c = 0;
  iStack_98 = 0;
  iVar5 = param_1 + 0x2f4;
  while (fn_828223C8(iVar5,&iStack_98), iVar5 = iStack_98, iStack_98 != 0) {
    puVar10 = (undefined4 *)(iStack_98 + 0x20);
    if (*(int *)(iStack_98 + 0x20) == 0) {
      uVar7 = 0;
      iVar4 = param_1 + 0x2fc;
      while (fn_828223C8(iVar4,&iStack_9c), iVar4 = iStack_9c, iStack_9c != 0) {
        if (*(char *)(iStack_9c + 0x28) == *(char *)(iVar5 + 0x14)) {
          piStack_80 = (int *)0x0;
          piVar8 = (int *)(iStack_9c + 0x3c);
          iStack_7c = 0;
          uStack_78 = 0;
          uVar6 = (ulonglong)*(uint *)(*(int *)(iStack_9c + 0x3c) + 8);
          fn_82360F68(&piStack_80,uVar6);
          puVar10 = *(undefined4 **)(*piVar8 + 4);
          puStack_94 = (undefined4 *)*puVar10;
          while (piVar3 = piStack_80, puStack_94 != puVar10) {
            apuStack_90[0] = puStack_94 + 3;
            fn_8257A9F0(&piStack_80,apuStack_90);
            fn_82518FF0(&puStack_94);
            puVar10 = *(undefined4 **)(*piVar8 + 4);
          }
          fn_8282F108(piStack_80,iStack_7c,iStack_7c - (int)piStack_80 >> 2,uStack_a0);
          piVar8 = piVar3;
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            puVar10 = (undefined4 *)*piVar8;
            uVar1 = *puVar10;
            uVar9 = (ulonglong)(uint)puVar10[3] + (ulonglong)*(uint *)(iVar4 + 0x24);
            uVar2 = puVar10[1];
            if ((uVar7 & 0xffffffff) < (uVar9 & 0xffffffff)) {
              fn_8282DDD8(param_2,uVar9 - uVar7);
            }
            (*(code *)param_2[2])(*param_2,(ulonglong)uVar2,uVar1);
            uVar7 = uVar2 + uVar9;
            piVar8 = piVar8 + 1;
          }
          if (piVar3 != (int *)0x0) {
            fn_8265CA20(piVar3);
          }
          piStack_80 = (int *)0x0;
          iStack_7c = 0;
          uStack_78 = 0;
          iVar4 = iStack_9c;
        }
      }
      uVar6 = (ulonglong)*(uint *)(iVar5 + 0x1c);
      iVar5 = iStack_98;
      if ((uVar7 & 0xffffffff) <= uVar6) {
        fn_8282DDD8(param_2,uVar6 - uVar7);
        iVar5 = iStack_98;
      }
    }
    else {
      (*(code *)param_2[2])(*param_2,*(undefined4 *)(iStack_98 + 0x1c));
      fn_828252D8(*puVar10);
      iVar5 = iStack_98;
    }
  }
  return;
}

