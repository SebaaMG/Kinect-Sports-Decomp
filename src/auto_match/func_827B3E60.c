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
extern int fn_827B3D38();


void fn_827B3E60(int param_1,ulonglong param_2,longlong param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar7;
  ulonglong uVar6;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined4 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  
  uVar1 = (int)(uint)param_3 >> 8;
  uVar2 = (int)(uint)param_5 >> 8;
  uVar4 = (uint)param_3 & 0xff;
  uVar3 = (uint)param_5 & 0xff;
  iVar5 = (int)param_6;
  iVar18 = (int)param_4;
  uVar14 = (undefined4)param_2;
  if (iVar18 == iVar5) {
    if ((ulonglong)*(uint *)(param_1 + 0x3c) != (longlong)(int)uVar2 ||
        *(uint *)(param_1 + 0x40) != param_2) {
      if (*(int *)(param_1 + 0x48) != 0 || *(int *)(param_1 + 0x44) != 0) {
        fn_827B3D38(param_1 + 0x14,(uint *)(param_1 + 0x3c));
      }
      *(uint *)(param_1 + 0x3c) = uVar2;
      *(undefined4 *)(param_1 + 0x40) = uVar14;
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  else {
    if (uVar1 == uVar2) {
      iVar7 = (iVar5 - iVar18) + *(int *)(param_1 + 0x44);
      iVar5 = (uVar3 + uVar4) * (iVar5 - iVar18) + *(int *)(param_1 + 0x48);
    }
    else {
      uVar21 = param_5 - param_3;
      uVar9 = (longlong)(int)(0x100 - uVar4) * (longlong)(iVar5 - iVar18);
      iVar12 = 0x100;
      lVar15 = 1;
      if ((longlong)uVar21 < 0) {
        uVar9 = (longlong)(iVar5 - iVar18) * (longlong)(int)uVar4;
        iVar12 = 0;
        lVar15 = -1;
        uVar21 = -uVar21;
      }
      iVar18 = (int)uVar21;
      trapWord(6,uVar21,0);
      lVar13 = uVar9 - (longlong)((int)uVar9 / iVar18) * (longlong)iVar18;
      lVar20 = (longlong)((int)uVar9 / iVar18);
      trapWord(6,uVar21,0);
      trapWord(5,uVar21 & ~(((uVar9 & 0x7fffffff) << 1 | (uVar9 & 0xffffffff) >> 0x1f) - 1),0xffff);
      trapWord(5,uVar21 & ~(((uVar9 & 0x7fffffff) << 1 | (uVar9 & 0xffffffff) >> 0x1f) - 1),0xffff);
      if (lVar13 < 0) {
        lVar20 = lVar20 + -1;
        lVar13 = lVar13 + uVar21;
      }
      uVar9 = lVar15 + (int)uVar1;
      lVar8 = (longlong)(int)(iVar12 + uVar4) * (longlong)(int)lVar20 +
              (ulonglong)*(uint *)(param_1 + 0x48);
      *(int *)(param_1 + 0x48) = (int)lVar8;
      lVar10 = lVar20 + (ulonglong)*(uint *)(param_1 + 0x44);
      *(int *)(param_1 + 0x44) = (int)lVar10;
      puVar17 = (uint *)(param_1 + 0x3c);
      if (*(uint *)(param_1 + 0x3c) != uVar9 || *(uint *)(param_1 + 0x40) != param_2) {
        if (lVar8 != 0 || lVar10 != 0) {
          fn_827B3D38(param_1 + 0x14,puVar17);
        }
        *puVar17 = (uint)uVar9;
        *(undefined4 *)(param_1 + 0x40) = uVar14;
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      param_4 = lVar20 + param_4;
      iVar19 = (int)param_4;
      if ((uint)uVar9 != uVar2) {
        trapWord(6,uVar21,0);
        uVar11 = (lVar20 - param_4) + param_6;
        trapWord(6,uVar21,0);
        uVar6 = (uVar11 & 0xffffff) * 0x100;
        lVar20 = uVar6 - (longlong)((int)uVar6 / iVar18) * (longlong)iVar18;
        uVar16 = (ulonglong)((int)uVar6 / iVar18);
        trapWord(5,uVar21 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar11 & 0xffffff) >> 0x17) - 1),0xffff)
        ;
        trapWord(5,uVar21 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar11 & 0xffffff) >> 0x17) - 1),0xffff)
        ;
        if (lVar20 < 0) {
          uVar16 = uVar16 - 1;
          lVar20 = lVar20 + uVar21;
        }
        lVar13 = lVar13 - uVar21;
        do {
          lVar13 = lVar20 + lVar13;
          uVar6 = uVar16;
          if (-1 < lVar13) {
            lVar13 = lVar13 - uVar21;
            uVar6 = uVar16 + 1;
          }
          uVar9 = lVar15 + uVar9;
          lVar10 = uVar6 + *(uint *)(param_1 + 0x44);
          lVar8 = (uVar6 & 0xffffff) * 0x100 + (ulonglong)*(uint *)(param_1 + 0x48);
          *(int *)(param_1 + 0x44) = (int)lVar10;
          *(int *)(param_1 + 0x48) = (int)lVar8;
          param_4 = uVar6 + param_4;
          iVar19 = (int)param_4;
          if (*puVar17 != uVar9 || *(uint *)(param_1 + 0x40) != param_2) {
            if (lVar8 != 0 || lVar10 != 0) {
              fn_827B3D38(param_1 + 0x14,puVar17);
            }
            *puVar17 = (uint)uVar9;
            *(undefined4 *)(param_1 + 0x40) = uVar14;
            *(undefined4 *)(param_1 + 0x44) = 0;
            *(undefined4 *)(param_1 + 0x48) = 0;
          }
        } while ((uint)uVar9 != uVar2);
      }
      iVar7 = (iVar5 - iVar19) + *(int *)(param_1 + 0x44);
      iVar5 = ((uVar3 - iVar12) + 0x100) * (iVar5 - iVar19) + *(int *)(param_1 + 0x48);
    }
    *(int *)(param_1 + 0x48) = iVar5;
    *(int *)(param_1 + 0x44) = iVar7;
  }
  return;
}

