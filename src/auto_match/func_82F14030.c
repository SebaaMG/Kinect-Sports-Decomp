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


void fn_82F14030(int param_1,int param_2,longlong param_3,longlong param_4,int param_5,int param_6
                  ,int param_7,int param_8)

{
  uint uVar1;
  ulonglong uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint uVar26;
  longlong lVar24;
  longlong lVar25;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  
  puVar21 = (undefined1 *)(param_2 + param_5);
  uVar1 = -param_8 & 7;
  puVar19 = (undefined4 *)(param_1 + param_5 + -0x10);
  puVar20 = puVar21 + -0x10;
  puVar22 = (undefined1 *)(param_1 + param_5 + param_8 + -1);
  puVar23 = puVar21 + param_8 + -1;
  lVar12 = ((-(ulonglong)(in_stack_00000064 != 0) & 0xe) << 0x20 |
           -(ulonglong)(in_stack_00000064 != 0) & 10) + 10;
  puVar18 = puVar19;
  puVar14 = puVar20;
  if ((int)param_3 < (int)param_4) {
    param_3 = param_4 - param_3;
    do {
      iVar15 = 0;
      uVar3 = CONCAT11(*puVar22,*puVar22);
      uVar4 = CONCAT11(puVar21[param_1 - param_2],puVar21[param_1 - param_2]);
      uVar5 = CONCAT11(*puVar23,*puVar23);
      uVar6 = CONCAT11(*puVar21,*puVar21);
      uVar7 = CONCAT22(uVar3,uVar3);
      uVar8 = CONCAT22(uVar4,uVar4);
      uVar9 = CONCAT22(uVar6,uVar6);
      uVar10 = CONCAT22(uVar5,uVar5);
      for (uVar26 = uVar1; uVar26 != 0; uVar26 = uVar26 - 1) {
        puVar22[iVar15 + 1] = *puVar22;
        puVar23[iVar15 + 1] = *puVar23;
        iVar15 = iVar15 + 1;
      }
      iVar15 = 0;
      lVar24 = 2;
      do {
        *(ulonglong *)((int)puVar18 + iVar15) = CONCAT44(uVar8,uVar8);
        *(ulonglong *)(puVar14 + iVar15) = CONCAT44(uVar9,uVar9);
        *(ulonglong *)(puVar14 + (int)puVar19 + iVar15 + uVar1 + (in_stack_00000054 - (int)puVar20))
             = CONCAT44(uVar7,uVar7);
        *(ulonglong *)(puVar14 + iVar15 + uVar1 + in_stack_00000054) = CONCAT44(uVar10,uVar10);
        iVar15 = iVar15 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      param_3 = param_3 + -1;
      puVar18 = (undefined4 *)((int)puVar18 + in_stack_0000005c);
      puVar14 = puVar14 + in_stack_0000005c;
      puVar21 = puVar21 + in_stack_0000005c;
      puVar22 = puVar22 + in_stack_0000005c;
      puVar23 = puVar23 + in_stack_0000005c;
    } while (param_3 != 0);
  }
  iVar15 = (int)(uVar1 + param_8 + 0x20) >> 2;
  if ((param_6 != 0) &&
     (puVar11 = (undefined4 *)((int)puVar19 - (int)lVar12 * in_stack_0000005c), (int)lVar12 != 0)) {
    puVar21 = puVar20 + ((int)puVar11 - (int)puVar19);
    iVar17 = (int)puVar20 - (int)puVar11;
    lVar24 = lVar12;
    do {
      if (0 < iVar15) {
        lVar25 = (longlong)iVar15;
        puVar16 = puVar11;
        do {
          *puVar16 = *(undefined4 *)((int)puVar19 + (iVar17 - (int)puVar20) + (int)puVar16);
          *(undefined4 *)(((int)puVar21 - (int)puVar11) + (int)puVar16) =
               *(undefined4 *)(iVar17 + (int)puVar16);
          puVar16 = puVar16 + 1;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
      lVar24 = lVar24 + -1;
      puVar11 = (undefined4 *)((int)puVar11 + in_stack_0000005c);
      puVar21 = puVar21 + in_stack_0000005c;
      iVar17 = iVar17 - in_stack_0000005c;
    } while (lVar24 != 0);
  }
  if (param_7 != 0) {
    if (in_stack_00000064 == 0) {
      uVar2 = -param_4 & 7;
    }
    else {
      uVar2 = -param_4 & 0xf;
    }
    lVar12 = uVar2 + lVar12;
    iVar17 = (int)puVar14 - in_stack_0000005c;
    if ((int)lVar12 != 0) {
      iVar13 = iVar17 - (int)puVar18;
      puVar19 = puVar18;
      do {
        if (0 < iVar15) {
          lVar24 = (longlong)iVar15;
          puVar11 = puVar19;
          do {
            *puVar11 = *(undefined4 *)
                        ((int)puVar18 + iVar13 + (-iVar17 - in_stack_0000005c) + (int)puVar11);
            *(undefined4 *)((int)puVar11 + ((int)puVar14 - (int)puVar19)) =
                 *(undefined4 *)(iVar13 + (int)puVar11);
            puVar11 = puVar11 + 1;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        lVar12 = lVar12 + -1;
        puVar19 = (undefined4 *)((int)puVar19 + in_stack_0000005c);
        iVar13 = iVar13 - in_stack_0000005c;
        puVar14 = puVar14 + in_stack_0000005c;
      } while (lVar12 != 0);
    }
  }
  return;
}

