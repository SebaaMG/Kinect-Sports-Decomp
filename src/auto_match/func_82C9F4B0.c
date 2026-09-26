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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int iRam8329f138;


void fn_82C9F4B0(undefined8 param_1,int param_2,int param_3,longlong param_4,longlong param_5,
                  int param_6,int param_7,int param_8)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar11;
  ulonglong uVar10;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  undefined8 *puVar18;
  undefined4 *puVar19;
  longlong lVar17;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined1 *puVar24;
  ulonglong uVar25;
  undefined1 *puVar26;
  uint uVar28;
  ulonglong uVar27;
  int in_stack_00000054;
  int in_stack_00000064;
  int in_stack_0000006c;
  
  puVar11 = (undefined1 *)(param_3 + param_6);
  puVar24 = puVar11 + in_stack_00000054 + -1;
  puVar21 = (undefined4 *)((param_2 + param_6) - iRam8329f138);
  puVar22 = (undefined8 *)(puVar11 + -iRam8329f138);
  iVar14 = iRam8329f138 * 2 + (-in_stack_00000054 & 7U) + in_stack_00000054;
  puVar26 = (undefined1 *)(param_2 + param_6 + in_stack_00000054 + -1);
  uVar1 = iVar14 >> 2;
  uVar25 = (ulonglong)(int)uVar1;
  iVar14 = iVar14 - iRam8329f138;
  uVar15 = ((-(ulonglong)(in_stack_0000006c != 0) & 0xe) << 0x20 |
           -(ulonglong)(in_stack_0000006c != 0) & 10) + 10;
  puVar20 = puVar21;
  puVar23 = puVar22;
  if ((int)param_4 < (int)param_5) {
    param_4 = param_5 - param_4;
    iVar16 = iRam8329f138;
    do {
      iVar12 = 0;
      uVar2 = CONCAT11(puVar11[param_2 - param_3],puVar11[param_2 - param_3]);
      uVar3 = CONCAT11(*puVar26,*puVar26);
      uVar4 = CONCAT11(*puVar24,*puVar24);
      uVar5 = CONCAT11(*puVar11,*puVar11);
      uVar6 = CONCAT22(uVar3,uVar3);
      uVar7 = CONCAT22(uVar2,uVar2);
      uVar8 = CONCAT22(uVar5,uVar5);
      uVar9 = CONCAT22(uVar4,uVar4);
      for (uVar28 = -in_stack_00000054 & 7U; uVar28 != 0; uVar28 = uVar28 - 1) {
        puVar26[iVar12 + 1] = *puVar26;
        puVar24[iVar12 + 1] = *puVar24;
        iVar12 = iVar12 + 1;
        iVar16 = iRam8329f138;
      }
      iVar12 = 0;
      if (0 < iVar16) {
        puVar18 = puVar23;
        do {
          *(ulonglong *)(((int)puVar20 - (int)puVar23) + (int)puVar18) = CONCAT44(uVar7,uVar7);
          iVar12 = iVar12 + 8;
          *puVar18 = CONCAT44(uVar8,uVar8);
          *(ulonglong *)((int)puVar21 + (iVar14 - (int)puVar22) + (int)puVar18) =
               CONCAT44(uVar6,uVar6);
          *(ulonglong *)(iVar14 + (int)puVar18) = CONCAT44(uVar9,uVar9);
          puVar18 = puVar18 + 1;
          iVar16 = iRam8329f138;
        } while (iVar12 < iRam8329f138);
      }
      param_4 = param_4 + -1;
      puVar20 = (undefined4 *)((int)puVar20 + in_stack_00000064);
      puVar23 = (undefined8 *)((int)puVar23 + in_stack_00000064);
      puVar11 = puVar11 + in_stack_00000064;
      puVar26 = puVar26 + in_stack_00000064;
      puVar24 = puVar24 + in_stack_00000064;
    } while (param_4 != 0);
    uVar15 = uVar15 & 0xffffffff;
    uVar25 = (ulonglong)uVar1;
  }
  if ((param_7 != 0) &&
     (puVar13 = (undefined4 *)((int)puVar21 - (int)uVar15 * in_stack_00000064), (int)uVar15 != 0)) {
    puVar11 = (undefined1 *)(((int)puVar13 - (int)puVar21) + (int)puVar22);
    iVar14 = (int)puVar22 - (int)puVar13;
    uVar10 = uVar15;
    do {
      if (0 < (int)uVar25) {
        uVar27 = uVar25;
        puVar19 = puVar13;
        do {
          *puVar19 = *(undefined4 *)((int)puVar19 + (int)puVar21 + (iVar14 - (int)puVar22));
          *(undefined4 *)((int)puVar19 + ((int)puVar11 - (int)puVar13)) =
               *(undefined4 *)((int)puVar19 + iVar14);
          puVar19 = puVar19 + 1;
          uVar27 = uVar27 - 1;
        } while (uVar27 != 0);
      }
      uVar10 = uVar10 - 1;
      puVar13 = (undefined4 *)((int)puVar13 + in_stack_00000064);
      puVar11 = puVar11 + in_stack_00000064;
      iVar14 = iVar14 - in_stack_00000064;
    } while (uVar10 != 0);
  }
  if (param_8 != 0) {
    iVar14 = (int)puVar23 - in_stack_00000064;
    if (in_stack_0000006c == 0) {
      uVar10 = -param_5 & 7;
    }
    else {
      uVar10 = -param_5 & 0xf;
    }
    lVar17 = uVar10 + uVar15;
    if ((int)lVar17 != 0) {
      iVar16 = iVar14 - (int)puVar20;
      puVar21 = puVar20;
      do {
        if (0 < (int)uVar25) {
          uVar15 = uVar25;
          puVar13 = puVar21;
          do {
            *puVar13 = *(undefined4 *)
                        ((int)puVar20 + iVar16 + (-iVar14 - in_stack_00000064) + (int)puVar13);
            *(undefined4 *)((int)puVar13 + ((int)puVar23 - (int)puVar21)) =
                 *(undefined4 *)(iVar16 + (int)puVar13);
            puVar13 = puVar13 + 1;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        lVar17 = lVar17 + -1;
        puVar21 = (undefined4 *)((int)puVar21 + in_stack_00000064);
        iVar16 = iVar16 - in_stack_00000064;
        puVar23 = (undefined8 *)((int)puVar23 + in_stack_00000064);
      } while (lVar17 != 0);
    }
  }
  return;
}

