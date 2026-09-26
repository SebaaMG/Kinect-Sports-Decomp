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
extern int fn_825089A0();
extern int fn_82880608();
extern int fn_82880618();
extern int fn_828EA790();
extern unsigned int lbl_83212A50;
extern unsigned int lbl_83213E40;
extern unsigned int lbl_83213E44;
extern unsigned int lbl_83213E4C;
extern unsigned int lbl_83213E50;


void fn_82888520(void)

{
  uint uVar1;
  int *piVar3;
  ulonglong uVar2;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int aiStack_30 [12];
  
  piVar3 = (int *)fn_825089A0();
  uVar2 = (**(code **)(*piVar3 + 0xc))();
  if ((uVar2 / 1000 & 0xffffffff) != (ulonglong)lbl_83213E44) {
    lbl_83213E44 = (uint)(uVar2 / 1000);
    iVar4 = (int)((ulonglong)lbl_83213E40 + 1);
    lVar11 = 0x33;
    uVar1 = iVar4 / 0xb + (iVar4 >> 0x1f);
    lVar10 = 0;
    lVar9 = (ulonglong)lbl_83213E40 + 1 + ((longlong)(int)uVar1 + (ulonglong)(uVar1 >> 0x1f)) * -0xb
    ;
    lbl_83213E40 = (uint)lVar9;
    do {
      uVar6 = (lVar9 + 3) * 0x33 + lVar10;
      uVar2 = (lVar9 + 0xe) * 0x33 + lVar10;
      lVar10 = lVar10 + 1;
      *(undefined4 *)((int)&lbl_83212A50 + (int)((uVar6 & 0xffffffff) << 2)) = 0;
      *(undefined4 *)((int)&lbl_83212A50 + (int)((uVar2 & 0xffffffff) << 2)) = 0;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar4 = fn_82880608();
    aiStack_30[0] = **(int **)(iVar4 + 4);
    if ((int *)aiStack_30[0] == *(int **)(iVar4 + 4)) {
      uVar2 = (ulonglong)lbl_83213E40;
    }
    else {
      do {
        iVar5 = fn_82880618(*(undefined4 *)(aiStack_30[0] + 0x10));
        uVar2 = (ulonglong)lbl_83213E40;
        lVar9 = 0;
        lVar10 = 0x33;
        do {
          uVar7 = (uVar2 + 3) * 0x33 + lVar9;
          uVar6 = (uVar2 + 0xe) * 0x33 + lVar9;
          lVar9 = lVar9 + 1;
          *(undefined4 *)((int)((uVar7 & 0xffffffff) << 2) + iVar5) = 0;
          *(undefined4 *)((int)((uVar6 & 0xffffffff) << 2) + iVar5) = 0;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        fn_828EA790(aiStack_30);
      } while (aiStack_30[0] != *(int *)(iVar4 + 4));
    }
    uVar6 = (ulonglong)lbl_83213E4C;
    if (0 < (int)lbl_83213E4C) {
      iVar4 = lbl_83213E50;
      do {
        lVar9 = 0;
        lVar10 = 0x33;
        do {
          uVar8 = (uVar2 + 3) * 0x33 + lVar9;
          uVar7 = (uVar2 + 0xe) * 0x33 + lVar9;
          lVar9 = lVar9 + 1;
          *(undefined4 *)((int)((uVar8 & 0xffffffff) << 2) + iVar4) = 0;
          *(undefined4 *)((int)((uVar7 & 0xffffffff) << 2) + iVar4) = 0;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        uVar6 = uVar6 - 1;
        iVar4 = iVar4 + 0x13ec;
      } while (uVar6 != 0);
    }
  }
  return;
}

