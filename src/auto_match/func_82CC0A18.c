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


undefined8 fn_82CC0A18(int param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  
  lVar9 = (param_2 & 0x7fffffff) * 2 + (ulonglong)*(uint *)(param_1 + 0x54c8);
  lVar10 = (ulonglong)*(uint *)(param_1 + 0x6070) + 8;
  iVar1 = (int)((lVar9 + 0x2ca5U & 0x3fffffff) << 2);
  if (*(int *)(iVar1 + param_1) == 0) {
    puVar3 = (undefined2 *)fn_82C562F0(lVar10,0x400,0xffffffff82196582);
    *(undefined2 **)(iVar1 + param_1) = puVar3;
    if (puVar3 != (undefined2 *)0x0) {
      iVar15 = 0;
      puVar12 = puVar3 + 0xff;
      puVar11 = puVar3 + 0x101;
      do {
        if (iVar15 < *(int *)(param_1 + 0x5520)) {
          iVar16 = *(int *)(param_1 + 0x5530) * iVar15;
          lVar6 = (longlong)(iVar16 >> 8);
          lVar13 = (longlong)(-iVar16 >> 8);
        }
        else {
          iVar16 = *(int *)(param_1 + 0x5534) * iVar15;
          lVar6 = (longlong)(iVar16 >> 8) + (ulonglong)*(uint *)(param_1 + 0x5528);
          lVar13 = (longlong)(-iVar16 >> 8) + ~(ulonglong)*(uint *)(param_1 + 0x5528) + 1;
        }
        uVar4 = fn_830C6378(-(ulonglong)*(uint *)(param_1 + 0x1a4),lVar6,
                                (ulonglong)*(uint *)(param_1 + 0x1a4) - 1);
        uVar5 = fn_830C6378(-(ulonglong)*(uint *)(param_1 + 0x1a4),lVar13,
                                (ulonglong)*(uint *)(param_1 + 0x1a4) - 1);
        iVar15 = iVar15 + 1;
        puVar12 = puVar12 + 1;
        *puVar12 = uVar4;
        puVar11 = puVar11 + -1;
        *puVar11 = uVar5;
      } while (iVar15 < 0x100);
      uVar4 = fn_830C6378(-(ulonglong)*(uint *)(param_1 + 0x1a4),0xffffffffffffff00,
                              (ulonglong)*(uint *)(param_1 + 0x1a4) - 1);
      *puVar3 = uVar4;
      puVar3 = (undefined2 *)fn_82C562F0(lVar10,0x100,0xffffffff82196582);
      iVar15 = (int)((lVar9 + 0x2cadU & 0xffffffff) << 2);
      *(undefined2 **)(iVar15 + param_1) = puVar3;
      if (puVar3 != (undefined2 *)0x0) {
        iVar16 = 0;
        puVar12 = puVar3 + 0x3f;
        puVar11 = puVar3 + 0x41;
        do {
          if (iVar16 < *(int *)(param_1 + 0x5524)) {
            iVar8 = *(int *)(param_1 + 0x5530) * iVar16;
            uVar7 = (ulonglong)(uint)(iVar8 >> 7) & 0xfffffffe;
            uVar14 = (ulonglong)(uint)(-iVar8 >> 7) & 0xfffffffe;
          }
          else {
            iVar8 = *(int *)(param_1 + 0x5534) * iVar16;
            uVar7 = ((ulonglong)(uint)(iVar8 >> 7) & 0xfffffffe) +
                    ((ulonglong)*(uint *)(param_1 + 0x552c) & 0x7fffffff) * 2;
            uVar14 = (~(ulonglong)*(uint *)(param_1 + 0x552c) + 1 & 0x7fffffff) * 2 +
                     ((ulonglong)(uint)(-iVar8 >> 7) & 0xfffffffe);
          }
          uVar4 = fn_830C6378(-(ulonglong)*(uint *)(param_1 + 0x1a8),uVar7,
                                  (ulonglong)*(uint *)(param_1 + 0x1a8) - 2);
          puVar12 = puVar12 + 1;
          *puVar12 = uVar4;
          uVar4 = fn_830C6378(-(ulonglong)*(uint *)(param_1 + 0x1a8),uVar14,
                                  (ulonglong)*(uint *)(param_1 + 0x1a8) - 2);
          iVar16 = iVar16 + 1;
          puVar11 = puVar11 + -1;
          *puVar11 = uVar4;
        } while (iVar16 < 0x40);
        uVar4 = fn_830C6378(-(ulonglong)*(uint *)(param_1 + 0x1a8),0xffffffffffffff80,
                                (ulonglong)*(uint *)(param_1 + 0x1a8) - 2);
        *puVar3 = uVar4;
        *(undefined4 *)(param_1 + 0xb2dc) = *(undefined4 *)(iVar1 + param_1);
        *(undefined4 *)(param_1 + 0xb2e0) = *(undefined4 *)(iVar15 + param_1);
        return 0;
      }
    }
    uVar2 = 0xfffffffffffffff7;
  }
  else {
    *(int *)(param_1 + 0xb2dc) = *(int *)(iVar1 + param_1);
    *(undefined4 *)(param_1 + 0xb2e0) =
         *(undefined4 *)((int)((lVar9 + 0x2cadU & 0xffffffff) << 2) + param_1);
    uVar2 = 0;
  }
  return uVar2;
}

