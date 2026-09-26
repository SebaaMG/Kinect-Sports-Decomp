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
extern unsigned int *auStack_58;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_82517978();
extern int fn_8251F468();
extern int fn_82522588();
extern int fn_82522D98();
extern int fn_8265C9E0();
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int stack0x00000000;
extern unsigned int uStack_60;


/* WARNING: Removing unreachable block (ram,0x825bdb90) */

void fn_825BDA18(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 uStack_60;
  int iStack_5c;
  undefined1 auStack_58 [4];
  int iStack_54;
  undefined4 auStack_50 [20];
  
  if (*(int *)(param_1 + 0x1e4) != 0) {
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x21c);
    uVar1 = *(uint *)(param_1 + 0x220);
    while ((uVar9 & 0xffffffff) != (ulonglong)uVar1) {
      fn_82365BD8(&stack0x00000000 + -0x60,uVar9);
      fn_825BDA18(uStack_60);
      uVar9 = uVar9 + 8;
      if (iStack_5c != 0) {
        fn_822315A0();
      }
    }
    uVar9 = 0;
    if ((ulonglong)*(uint *)(*(int *)(param_1 + 0x8c) + 0x24) +
        (ulonglong)*(uint *)(*(int *)(param_1 + 0x8c) + 0x14) != 0) {
      lVar7 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x8c);
        if ((uVar9 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 0x14)) {
          lVar8 = (ulonglong)*(uint *)(iVar2 + 0x10) + lVar7;
        }
        else {
          lVar8 = (uVar9 - *(uint *)(iVar2 + 0x14) & 0x3fffffff) * 4 +
                  (ulonglong)*(uint *)(iVar2 + 0x20);
        }
        puVar3 = (undefined4 *)fn_8265C9E0(0x10);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        fn_82517978(&stack0x00000000 + -0x60,*(undefined4 *)(param_1 + 4),
                          *(undefined4 *)(param_1 + 8),1);
        puVar4 = (undefined4 *)fn_82522588(&stack0x00000000 + -0x58,&stack0x00000000 + -0x60);
        uVar5 = 0;
        uVar6 = 0;
        if ((undefined4 *)(&stack0x00000000 + -0x50) != puVar4) {
          uVar6 = puVar4[1];
          puVar4[1] = 0;
          uVar5 = *puVar4;
          *puVar4 = 0;
        }
        iVar2 = puVar3[1];
        puVar3[1] = uVar6;
        *puVar3 = uVar5;
        if (iVar2 != 0) {
          fn_822315A0();
        }
        if (iStack_54 != 0) {
          fn_822315A0();
        }
        puVar3[2] = (int)uVar9;
        puVar3[3] = *(undefined4 *)(param_1 + 0x230);
        fn_8251F468(lVar8,0,4,0,0xffffffff825be288,puVar3,0,0);
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 8;
      } while ((uVar9 & 0xffffffff) <
               (ulonglong)
               (uint)(*(int *)(*(int *)(param_1 + 0x8c) + 0x24) +
                     *(int *)(*(int *)(param_1 + 0x8c) + 0x14)));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(((ulonglong)*(uint *)(*(int *)(param_1 + 0x8c) + 0x24) +
                     (ulonglong)*(uint *)(*(int *)(param_1 + 0x8c) + 0x14) & 0x3fffffff) << 2);
}

