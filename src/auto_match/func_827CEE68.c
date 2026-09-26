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
extern int fn_82F68CC0();


void fn_827CEE68(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  ulonglong uVar17;
  
  uVar1 = *(uint *)(param_1 + 0xdc);
  uVar17 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0x144);
  lVar5 = (*(code *)**(undefined4 **)(param_1 + 4))
                    (param_1,1,(longlong)*(int *)(param_1 + 0x3c) * (longlong)(int)uVar1 * 0x14);
  iVar12 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    lVar14 = ((ulonglong)uVar1 & 0x3fffffff) * 4;
    puVar16 = (uint *)(*(int *)(param_1 + 0x44) + 8);
    puVar13 = (undefined4 *)(iVar2 + 4);
    do {
      uVar10 = (longlong)*(int *)(param_1 + 0xd8) * (longlong)(int)puVar16[5];
      uVar3 = *puVar16;
      uVar8 = (uVar10 & 0x1fffffff) << 3;
      trapWord(6,(ulonglong)uVar3,0);
      trapWord(5,(ulonglong)uVar3 &
                 ~(((uVar8 & 0x7fffffff) << 1 | (uVar10 & 0x1fffffff) >> 0x1c) - 1),0xffff);
      puVar6 = (undefined4 *)
               (**(code **)(*(int *)(param_1 + 4) + 8))
                         (param_1,1,(int)uVar8 / (int)uVar3,uVar17 * 3);
      lVar15 = lVar14 + lVar5;
      fn_82F68CC0(lVar15,puVar6,uVar17 * 0xc);
      lVar11 = 0;
      if (0 < (int)uVar1) {
        uVar8 = uVar17;
        puVar9 = puVar6;
        do {
          uVar7 = ((ulonglong)uVar1 & 0x7fffffff) * 2 + lVar11;
          uVar10 = lVar14 + lVar11;
          lVar11 = lVar11 + 1;
          *(undefined4 *)(((int)lVar5 - (int)puVar6) + (int)puVar9) =
               *(undefined4 *)((int)((uVar7 & 0xffffffff) << 2) + (int)puVar6);
          uVar4 = *puVar9;
          puVar9 = puVar9 + 1;
          *(undefined4 *)((int)((uVar10 & 0xffffffff) << 2) + (int)lVar5) = uVar4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      iVar12 = iVar12 + 1;
      puVar13 = puVar13 + 1;
      *puVar13 = (int)lVar15;
      lVar5 = uVar17 * 0x14 + lVar5;
      puVar16 = puVar16 + 0x15;
    } while (iVar12 < *(int *)(param_1 + 0x3c));
  }
  return;
}

