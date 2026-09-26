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
extern unsigned int iStack_88;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_92;
extern unsigned int uStack_93;
extern unsigned int uStack_94;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_82DC8328(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int *piStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  
  iVar6 = (**(code **)(*param_1 + 0x40))();
  uVar3 = *(undefined4 *)(iVar6 + 0x14);
  iVar7 = (**(code **)(*param_1 + 0x40))(param_1);
  iVar6 = param_1[0xf];
  iVar8 = iVar6 + 0x30;
  uVar4 = *(undefined4 *)(iVar7 + 0x18);
  bVar1 = *(byte *)(iVar6 + 10);
  uVar2 = *(ushort *)(iVar6 + 4);
  iVar10 = (uint)*(ushort *)(iVar6 + 6) * 0x20 + iVar6 + 0x30;
  iVar6 = (**(code **)(*param_1 + 0x40))(param_1);
  lVar9 = (ulonglong)uVar2 - 1;
  iVar7 = (int)lVar9;
  bVar5 = (*(byte *)(*(int *)(iVar6 + 0x30) + 0x12) & 8) != 0;
  if (-1 < iVar7) {
    do {
      if (((*(byte *)(iVar10 + 0xf) & 1) != 0) || (bVar5)) {
        uStack_92 = (int)lVar9 == 0;
        uStack_93 = iVar7 == (int)lVar9;
        iStack_88 = iVar10 + 0x14;
        uStack_a0 = 3;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_b0 = param_3;
        uStack_ac = uVar3;
        uStack_a8 = uVar4;
        piStack_a4 = param_1;
        iStack_9c = iVar8;
        iStack_98 = iVar10;
        uStack_94 = bVar5;
        (**(code **)*param_2)(param_2,&uStack_b0);
      }
      lVar9 = lVar9 + -1;
      iVar8 = iVar8 + 0x20;
      iVar10 = (uint)bVar1 + iVar10;
    } while (-1 < lVar9);
  }
  return;
}

