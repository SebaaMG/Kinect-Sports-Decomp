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
extern int fn_82522ED8();
extern int fn_82573EE0();
extern int fn_825776F8();
extern int fn_82578F00();
extern int fn_825CB538();
extern int fn_8265C9E0();


void fn_82577D38(int param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  
  if (*(int **)(param_2 + 0x8c0) == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(**(int **)(param_2 + 0x8c0) + 0x1c))();
  }
  uVar7 = fn_82573EE0(uVar6,0x18);
  puVar8 = (uint *)fn_82573EE0(uVar6,0x26);
  if (puVar8 != (uint *)0x0) {
    puVar2 = *(ushort **)(param_1 + 0x34);
    uVar10 = (ulonglong)*puVar8;
    iVar3 = *(int *)(puVar2 + 4);
    iVar4 = *(int *)(puVar2 + 2);
    uVar1 = *puVar2;
    if (0 < (int)*puVar8) {
      iVar11 = 0;
      do {
        if (((uVar7 & 0xffffffff) != 0) &&
           (*(int *)((int)uVar7 + 0x40) != *(int *)(iVar11 + puVar8[1]))) {
          fn_82578F00(param_1);
          uVar7 = 0;
        }
        if (*(int *)(iVar11 + puVar8[1]) < (iVar3 - iVar4) / (int)(uint)uVar1) {
          fn_82578F00(param_1);
          uVar7 = 0;
        }
        uVar10 = uVar10 - 1;
        iVar11 = iVar11 + 0xa0;
      } while (uVar10 != 0);
    }
  }
  if ((uVar7 & 0xffffffff) != 0) {
    fn_82578F00(param_1,*(undefined4 *)((int)uVar7 + 0x40));
  }
  uVar5 = *(uint *)(*(int *)(param_1 + 0x34) + 4);
  if (*(uint *)(*(int *)(param_1 + 0x34) + 8) != uVar5) {
    uVar7 = fn_8265C9E0(0xd0);
    if ((uVar7 & 0xffffffff) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = fn_825CB538(uVar7,*(undefined4 *)(param_1 + 4),param_1,(ulonglong)uVar5 + 0x30,
                                1 << (*(uint *)(param_1 + 0x40) & 0x3f));
    }
    *(undefined4 *)(param_1 + 0x3c) = uVar9;
  }
  puVar2 = *(ushort **)(param_1 + 0x38);
  if (puVar2 != (ushort *)0x0) {
    iVar3 = (int)(*(int *)(puVar2 + 4) - *(uint *)(puVar2 + 2)) / (int)(uint)*puVar2;
    lVar12 = (longlong)iVar3;
    if ((iVar3 != 0) && (uVar7 = (ulonglong)*(uint *)(puVar2 + 2), 0 < iVar3)) {
      do {
        fn_825776F8(param_1,uVar7);
        lVar12 = lVar12 + -1;
        uVar7 = uVar7 + 0x1c;
      } while (lVar12 != 0);
    }
    fn_82522ED8(*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

