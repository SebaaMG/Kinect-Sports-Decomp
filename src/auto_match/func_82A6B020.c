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
extern unsigned int *auStack_60;
extern int fn_82A1DDC0();
extern int fn_82A69D38();


undefined8
fn_82A6B020(int param_1,undefined8 param_2,ushort *param_3,undefined4 *param_4,ulonglong param_5,
             undefined2 param_6,undefined8 param_7)

{
  undefined2 uVar1;
  ushort *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  short sVar14;
  int iVar12;
  ulonglong uVar10;
  int iVar13;
  ulonglong uVar11;
  undefined8 uVar15;
  ulonglong uVar16;
  int iVar17;
  ushort auStack_60 [48];
  
  auStack_60[0] = *param_3;
  iVar17 = 0;
  puVar2 = *(ushort **)(param_1 + 0x2e4);
  uVar15 = 0;
  uVar16 = ((param_5 & 0xffffffff) / (ulonglong)*(uint *)(param_1 + 0x58)) /
           (ulonglong)*(ushort *)(param_1 + 0x22);
  if (*(int *)(param_1 + 0xb0) == 1) {
    fn_82A69D38(param_1,auStack_60,0,0,param_7);
    if (*param_3 < auStack_60[0]) {
      auStack_60[0] = *param_3 & 0xfff0;
      *param_3 = auStack_60[0];
    }
  }
  if (*(short *)(param_1 + 0x22) != 0) {
    iVar12 = 0;
    do {
      iVar13 = iVar12 * 0x6f0;
      sVar14 = (short)iVar12 + 1;
      iVar12 = (int)sVar14;
      *(uint *)(iVar13 + *(int *)(param_1 + 0x140) + 0x1ec) = (uint)auStack_60[0];
    } while ((int)sVar14 < (int)(uint)*(ushort *)(param_1 + 0x22));
  }
  if (*(int *)(param_1 + 0xb0) == 0) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x188) - (ulonglong)*(uint *)(param_1 + 0x184) & 0xffff;
    uVar10 = (ulonglong)auStack_60[0];
    if (uVar16 <= auStack_60[0]) {
      uVar10 = uVar16;
    }
    if (0x7ffe < (int)uVar10) {
      uVar10 = 0x7fff;
    }
    if ((int)uVar5 < (int)uVar10) {
      uVar10 = uVar5;
    }
    if (*(int *)(param_1 + 0x1cc) == 0) {
      if (*(int *)(param_1 + 0x1c0) == 0) {
        iVar12 = *(int *)(param_1 + 0x100);
      }
      else {
        iVar12 = *(int *)(param_1 + 0x100) << (*(uint *)(param_1 + 0x1c8) & 0x3f);
      }
    }
    else {
      iVar12 = *(int *)(param_1 + 0x100) >> (*(uint *)(param_1 + 0x1c8) & 0x3f);
    }
    auStack_60[0] = (ushort)uVar10;
    if ((uVar10 & 0xffff) == 0) {
      *param_3 = 0;
    }
    else {
      uVar3 = *param_4;
      if (*(short *)(param_1 + 0x22) != 0) {
        uVar7 = iVar12 * 3;
        iVar13 = 0;
        do {
          iVar9 = (((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0)) * iVar13;
          iVar6 = iVar13 * 0x6f0;
          sVar14 = (short)iVar13 + 1;
          iVar13 = (int)sVar14;
          *(int *)(iVar6 + *(int *)(param_1 + 0x140) + 0x3c) =
               ((iVar9 - (*(int *)(param_1 + 0x1d4) >> 1)) + (iVar12 >> 1) +
               *(int *)(param_1 + 0x184)) * 4 + *(int *)(param_1 + 0x144);
        } while ((int)sVar14 < (int)(uint)*(ushort *)(param_1 + 0x22));
      }
      if ((*(code **)(param_1 + 0x1ec) != (code *)0x0) &&
         (uVar15 = (**(code **)(param_1 + 0x1ec))(param_2,auStack_60,0,0), (int)uVar15 < 0)) {
        return uVar15;
      }
      uVar1 = *(undefined2 *)(param_1 + 0x22);
      *(undefined2 *)(param_1 + 0x22) = param_6;
      uVar15 = (**(code **)(param_1 + 0x1e8))(param_1,uVar3,auStack_60[0]);
      if ((int)uVar15 < 0) {
        return uVar15;
      }
      *(undefined2 *)(param_1 + 0x22) = uVar1;
      *(uint *)(param_1 + 0x184) = (uint)auStack_60[0] + *(int *)(param_1 + 0x184);
      *param_3 = auStack_60[0];
      uVar7 = *(uint *)(param_1 + 0x1d4);
      if ((int)uVar7 <= (int)*(uint *)(param_1 + 0x184)) {
        lVar8 = (ulonglong)*(uint *)(param_1 + 0x184) - (ulonglong)uVar7;
        iVar13 = (int)uVar7 >> 1;
        iVar9 = (int)lVar8;
        *(int *)(param_1 + 0x184) = iVar9;
        *(uint *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) - uVar7;
        if ((lVar8 < 0) || ((int)(iVar13 + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0)) <= iVar9)) {
          return 0xffffffff80004005;
        }
        if (*(short *)(param_1 + 0x22) != 0) {
          uVar7 = iVar12 * 3;
          do {
            uVar4 = *(uint *)(param_1 + 0x184);
            lVar8 = (((longlong)
                      (int)(((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0)) *
                      (longlong)iVar17 - (longlong)iVar13) + (longlong)(iVar12 >> 1) & 0x3fffffffU)
                    * 4 + (ulonglong)*(uint *)(param_1 + 0x144);
            fn_82A1DDC0(((ulonglong)uVar4 & 0x3fffffff) * 4 + lVar8,
                              ((ulonglong)uVar4 + (ulonglong)*(uint *)(param_1 + 0x1d4) & 0x3fffffff
                              ) * 4 + lVar8,((longlong)iVar13 - (ulonglong)uVar4 & 0x3fffffff) << 2)
            ;
            sVar14 = (short)iVar17 + 1;
            iVar17 = (int)sVar14;
          } while ((int)sVar14 < (int)(uint)*(ushort *)(param_1 + 0x22));
        }
      }
    }
  }
  else {
    uVar16 = uVar16 & 0xfffffff0;
    auStack_60[0] = 0;
    if (*(short *)(param_1 + 0x22) != 0) {
      iVar17 = *(int *)(param_1 + 0x140);
      uVar5 = 0;
      do {
        iVar12 = (int)uVar5 * 0x6f0;
        iVar17 = iVar17 + iVar12;
        uVar10 = (ulonglong)*(uint *)(iVar17 + 0x1ec);
        if (uVar16 <= *(uint *)(iVar17 + 0x1ec)) {
          uVar10 = uVar16;
        }
        if (0x7ffe < uVar10) {
          uVar10 = 0x7fff;
        }
        *(short *)((int)((uVar5 & 0xffffffff) << 1) + (int)puVar2) = (short)uVar10;
        *(uint *)(iVar17 + 0x3c) = (uint)*(ushort *)(param_1 + 0xd2) * 4 + *(int *)(iVar17 + 0x38);
        iVar17 = *(int *)(param_1 + 0x140);
        uVar7 = *(uint *)(iVar17 + iVar12 + 0x1ec);
        uVar11 = (ulonglong)uVar7;
        uVar10 = uVar11;
        if (uVar16 <= uVar11) {
          uVar10 = uVar16;
        }
        if (uVar10 < 0x7fff) {
          if (uVar16 <= uVar11) {
            uVar7 = (uint)uVar16;
          }
        }
        else {
          uVar7 = 0x7fff;
        }
        uVar10 = (ulonglong)*(uint *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(param_1 + 0x164))
                 - (ulonglong)*(ushort *)(param_1 + 0xd2);
        if ((int)uVar7 <= (int)uVar10) {
          uVar10 = uVar11;
          if (uVar16 <= uVar11) {
            uVar10 = uVar16;
          }
          if (uVar10 < 0x7fff) {
            uVar10 = uVar11;
            if (uVar16 <= uVar11) {
              uVar10 = uVar16;
            }
          }
          else {
            uVar10 = 0x7fff;
          }
        }
        sVar14 = (short)uVar5 + 1;
        auStack_60[0] = (ushort)uVar10;
        uVar5 = (ulonglong)sVar14;
      } while ((int)sVar14 < (int)(uint)*(ushort *)(param_1 + 0x22));
    }
    if ((*(code **)(param_1 + 0x1ec) != (code *)0x0) &&
       (uVar15 = (**(code **)(param_1 + 0x1ec))(param_2,auStack_60,0,0), (int)uVar15 < 0)) {
      return uVar15;
    }
    uVar15 = 0;
    *param_3 = *puVar2;
    if (*(ushort *)(param_1 + 0x22) != 0) {
      sVar14 = 0;
      do {
        sVar14 = sVar14 + 1;
      } while ((int)sVar14 < (int)(uint)*(ushort *)(param_1 + 0x22));
    }
  }
  if (*(int *)(param_1 + 0x48) == 3) {
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  return uVar15;
}

