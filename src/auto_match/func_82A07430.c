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
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int lbl_82015BD0;
extern unsigned int lbl_82015BD8;
extern float lbl_8207F394;


longlong fn_82A07430(int param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int in_r0;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  struct { float first; float second; } stack_pair_70;

  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  puVar8 = (undefined4 *)((int)&stack_pair_70.first + in_r0 & 0xfffffff0);
  *puVar8 = in_register_00010010;
  puVar8[1] = in_register_00010014;
  puVar8[2] = in_register_00010018;
  puVar8[3] = in_vr1;
  puVar8 = (undefined4 *)((int)&fStack_60 + in_r0 & 0xfffffff0);
  *puVar8 = in_register_00010020;
  puVar8[1] = in_register_00010024;
  puVar8[2] = in_register_00010028;
  puVar8[3] = in_vr2;
  lVar18 = 0;
  *param_3 = 0;
  uVar2 = (uint)((stack_pair_70.first / fStack_68) * lbl_8207F394 + lbl_82015BD0);
  uVar16 = (ulonglong)uVar2;
  uVar3 = (uint)(lbl_82015BD8 - (stack_pair_70.second / fStack_68) * lbl_8207F394);
  uVar4 = (uint)((fStack_60 / fStack_58) * lbl_8207F394 + lbl_82015BD0);
  uVar5 = (uint)(lbl_82015BD8 - (fStack_5c / fStack_58) * lbl_8207F394);
  uVar13 = (ulonglong)uVar5;
  if ((((((int)uVar2 < 0) || (0x13f < (int)uVar2)) || ((int)uVar3 < 0)) ||
      ((0xef < (int)uVar3 || ((int)uVar4 < 0)))) ||
     ((0x13f < (int)uVar4 || (((int)uVar5 < 0 || (0xef < (int)uVar5)))))) {
    lVar18 = 0;
  }
  else {
    uVar6 = (int)(uVar4 - uVar2) >> 0x1f;
    uVar7 = (int)(uVar5 - uVar3) >> 0x1f;
    bVar1 = (int)((uVar5 - uVar3 ^ uVar7) - uVar7) <= (int)((uVar4 - uVar2 ^ uVar6) - uVar6);
    uVar10 = (ulonglong)uVar4;
    uVar11 = (ulonglong)uVar3;
    if (!bVar1) {
      uVar10 = uVar13;
      uVar13 = (ulonglong)uVar4;
      uVar11 = uVar16;
      uVar16 = (ulonglong)uVar3;
    }
    uVar21 = uVar10;
    uVar14 = uVar13;
    if ((int)uVar10 < (int)uVar16) {
      uVar21 = uVar16;
      uVar14 = uVar11;
      uVar11 = uVar13;
      uVar16 = uVar10;
    }
    uVar10 = uVar14 - uVar11;
    uVar12 = uVar21 - uVar16;
    uVar13 = (ulonglong)((int)uVar10 >> 0x1f);
    lVar20 = (longlong)((int)uVar12 >> 1) + (ulonglong)((int)uVar12 < 0 && (uVar12 & 1) != 0);
    uVar19 = 1;
    if ((int)uVar14 <= (int)uVar11) {
      uVar19 = 0xffffffffffffffff;
    }
    uVar14 = 0;
    if ((int)uVar16 < (int)uVar21) {
      lVar9 = (uVar16 & 0x7fffffff) << 1;
      lVar15 = (uVar11 & 0x7fffffff) << 1;
      uVar21 = uVar12;
      do {
        if (bVar1) {
          iVar17 = *(int *)(param_1 + 4) * (int)uVar11 + (int)lVar9;
        }
        else {
          iVar17 = *(int *)(param_1 + 4) * (int)uVar16 + (int)lVar15;
        }
        lVar20 = lVar20 - ((uVar10 ^ uVar13) - uVar13);
        if (lVar20 < 0) {
          uVar11 = uVar19 + uVar11;
          lVar15 = (uVar19 & 0x7fffffff) * 2 + lVar15;
          lVar20 = lVar20 + uVar12;
        }
        if ((*(ushort *)(iVar17 + *(int *)(param_1 + 8)) & 7) == 0) {
          lVar18 = lVar18 + 1;
        }
        uVar16 = uVar16 + 1;
        lVar9 = lVar9 + 2;
        uVar21 = uVar21 - 1;
        uVar14 = uVar12;
      } while (uVar21 != 0);
    }
    *param_3 = (int)uVar14;
  }
  return lVar18;
}

