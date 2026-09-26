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
extern int fn_82C562F0();
extern int fn_830C6378();


undefined8 fn_82CC0710(int param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar12;
  ulonglong uVar11;
  undefined2 *puVar14;
  ulonglong uVar13;
  longlong lVar15;
  undefined2 *puVar16;
  int iVar17;
  int iVar18;
  
  lVar9 = (param_2 & 0x7fffffff) * 2 + (ulonglong)*(uint *)(param_1 + 0x54c8);
  lVar10 = (ulonglong)*(uint *)(param_1 + 0x6070) + 8;
  iVar1 = (int)((lVar9 + 0x2c95U & 0x3fffffff) << 2);
  if (*(int *)(iVar1 + param_1) == 0) {
    puVar3 = (undefined2 *)fn_82C562F0(lVar10,0x400,0xffffffff82196582);
    *(undefined2 **)(iVar1 + param_1) = puVar3;
    if (puVar3 != (undefined2 *)0x0) {
      iVar17 = 0;
      puVar14 = puVar3 + 0xff;
      puVar12 = puVar3 + 0x101;
      do {
        if (iVar17 < *(int *)(param_1 + 0x553c)) {
          iVar18 = *(int *)(param_1 + 0x554c) * iVar17;
          lVar6 = (longlong)(iVar18 >> 8);
          lVar15 = (longlong)(-iVar18 >> 8);
        }
        else {
          iVar18 = *(int *)(param_1 + 0x5550) * iVar17;
          lVar6 = (longlong)(iVar18 >> 8) + (ulonglong)*(uint *)(param_1 + 0x5544);
          lVar15 = (longlong)(-iVar18 >> 8) + ~(ulonglong)*(uint *)(param_1 + 0x5544) + 1;
        }
        uVar4 = fn_830C6378(-(ulonglong)*(uint *)(param_1 + 0x1a4),lVar6,
                                (ulonglong)*(uint *)(param_1 + 0x1a4) - 1);
        uVar5 = fn_830C6378(-(ulonglong)*(uint *)(param_1 + 0x1a4),lVar15,
                                (ulonglong)*(uint *)(param_1 + 0x1a4) - 1);
        iVar17 = iVar17 + 1;
        puVar14 = puVar14 + 1;
        *puVar14 = uVar4;
        puVar12 = puVar12 + -1;
        *puVar12 = uVar5;
      } while (iVar17 < 0x100);
      uVar4 = fn_830C6378(-(ulonglong)*(uint *)(param_1 + 0x1a4),0xffffffffffffff00,
                              (ulonglong)*(uint *)(param_1 + 0x1a4) - 1);
      *puVar3 = uVar4;
      puVar3 = (undefined2 *)fn_82C562F0(lVar10,0x300,0xffffffff82196582);
      iVar17 = (int)((lVar9 + 0x2c9dU & 0xffffffff) << 2);
      *(undefined2 **)(iVar17 + param_1) = puVar3;
      if (puVar3 != (undefined2 *)0x0) {
        puVar8 = puVar3 + 0xc0;
        iVar18 = 0;
        puVar14 = puVar3 + 0x141;
        puVar12 = puVar8;
        puVar16 = puVar8;
        do {
          if (iVar18 < *(int *)(param_1 + 0x5540)) {
            iVar7 = *(int *)(param_1 + 0x554c) * iVar18;
            uVar13 = (ulonglong)(uint)(iVar7 >> 7) & 0xfffffffe;
            uVar11 = (ulonglong)(uint)(-iVar7 >> 7) & 0xfffffffe;
          }
          else {
            iVar7 = *(int *)(param_1 + 0x5550) * iVar18;
            uVar13 = ((ulonglong)(uint)(iVar7 >> 7) & 0xfffffffe) +
                     ((ulonglong)*(uint *)(param_1 + 0x5548) & 0x7fffffff) * 2;
            uVar11 = (~(ulonglong)*(uint *)(param_1 + 0x5548) + 1 & 0x7fffffff) * 2 +
                     ((ulonglong)(uint)(-iVar7 >> 7) & 0xfffffffe);
          }
          uVar4 = fn_830C6378(-(ulonglong)*(uint *)(param_1 + 0x1a8),uVar13,
                                  (ulonglong)*(uint *)(param_1 + 0x1a8) - 2);
          *(undefined2 *)((int)puVar3 + (int)puVar16 + (0x80 - (int)puVar8)) = uVar4;
          uVar4 = fn_830C6378(-(ulonglong)*(uint *)(param_1 + 0x1a8),uVar11,
                                  (ulonglong)*(uint *)(param_1 + 0x1a8) - 2);
          *(undefined2 *)((int)puVar3 + (int)puVar12 + (0x80 - (int)puVar8)) = uVar4;
          uVar4 = fn_830C6378(1 - (ulonglong)*(uint *)(param_1 + 0x1a8),uVar13 + 1,
                                  (ulonglong)*(uint *)(param_1 + 0x1a8) - 1);
          *puVar16 = uVar4;
          uVar4 = fn_830C6378(1 - (ulonglong)*(uint *)(param_1 + 0x1a8),uVar11 + 1,
                                  (ulonglong)*(uint *)(param_1 + 0x1a8) - 1);
          *puVar12 = uVar4;
          uVar4 = fn_830C6378(1 - (ulonglong)*(uint *)(param_1 + 0x1a8),uVar13 - 1,
                                  (ulonglong)*(uint *)(param_1 + 0x1a8) - 1);
          puVar16[0x80] = uVar4;
          uVar4 = fn_830C6378(1 - (ulonglong)*(uint *)(param_1 + 0x1a8),uVar11 - 1,
                                  (ulonglong)*(uint *)(param_1 + 0x1a8) - 1);
          iVar18 = iVar18 + 1;
          puVar14 = puVar14 + -1;
          *puVar14 = uVar4;
          puVar16 = puVar16 + 1;
          puVar12 = puVar12 + -1;
        } while (iVar18 < 0x40);
        uVar4 = fn_830C6378(-(ulonglong)*(uint *)(param_1 + 0x1a8),0xffffffffffffff80,
                                (ulonglong)*(uint *)(param_1 + 0x1a8) - 2);
        *puVar3 = uVar4;
        uVar4 = fn_830C6378(1 - (ulonglong)*(uint *)(param_1 + 0x1a8),0xffffffffffffff81,
                                (ulonglong)*(uint *)(param_1 + 0x1a8) - 1);
        puVar3[0x80] = uVar4;
        uVar4 = fn_830C6378(1 - (ulonglong)*(uint *)(param_1 + 0x1a8),0xffffffffffffff7f,
                                (ulonglong)*(uint *)(param_1 + 0x1a8) - 1);
        puVar3[0x100] = uVar4;
        *(undefined4 *)(param_1 + 0xb2d4) = *(undefined4 *)(iVar1 + param_1);
        *(undefined4 *)(param_1 + 0xb2d8) = *(undefined4 *)(iVar17 + param_1);
        return 0;
      }
    }
    uVar2 = 0xfffffffffffffff7;
  }
  else {
    *(int *)(param_1 + 0xb2d4) = *(int *)(iVar1 + param_1);
    *(undefined4 *)(param_1 + 0xb2d8) =
         *(undefined4 *)((int)((lVar9 + 0x2c9dU & 0xffffffff) << 2) + param_1);
    uVar2 = 0;
  }
  return uVar2;
}

