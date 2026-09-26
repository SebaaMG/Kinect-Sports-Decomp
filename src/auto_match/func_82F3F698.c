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
extern unsigned int *auStack_88;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E577A0();
extern unsigned int uStack_8a;
extern unsigned int uStack_8c;
extern unsigned int uStack_8e;
extern unsigned int uStack_90;


longlong fn_82F3F698(int *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  int *piVar17;
  ushort uStack_90;
  ushort uStack_8e;
  ushort uStack_8c;
  ushort uStack_8a;
  ushort auStack_88 [68];
  
  if (param_1[3] == 0) {
    return -0x3ff2c94a;
  }
  if (param_2 == (uint *)0x0) {
    return -0x7ff8ffa9;
  }
  uVar1 = param_1[0x10];
  if ((ulonglong)uVar1 < 0x22) {
    uVar15 = 0x22;
LAB_82f3f6e8:
    *param_2 = uVar15;
    return -0x3ff2c94f;
  }
  piVar17 = param_1 + 10;
  uStack_90 = 0;
  uStack_8e = 0;
  uStack_8c = 0;
  uStack_8a = 0;
  auStack_88[0] = 0;
  fn_82E57620(param_1 + 4,piVar17);
  fn_82E576A8(param_1 + 8,piVar17);
  lVar7 = fn_82E57738(&uStack_90,piVar17);
  uVar2 = uStack_90;
  lVar16 = -0x3ff2c566;
  lVar8 = lVar16;
  if (lVar7 < 0) goto LAB_82f3fab8;
  uVar10 = (ulonglong)uStack_90;
  if ((uStack_90 & 1) != 0) goto LAB_82f3fac8;
  *(ushort *)(param_1 + 0x17) = uStack_90 >> 1;
  lVar7 = fn_82E57738(&uStack_8e,piVar17);
  uVar3 = uStack_8e;
  if (lVar7 < 0) goto LAB_82f3fab8;
  uVar11 = (ulonglong)uStack_8e;
  if ((uStack_8e & 1) != 0) goto LAB_82f3fac8;
  *(ushort *)((int)param_1 + 0x5e) = uStack_8e >> 1;
  lVar7 = fn_82E57738(&uStack_8c,piVar17);
  uVar4 = uStack_8c;
  if (lVar7 < 0) goto LAB_82f3fab8;
  uVar12 = (ulonglong)uStack_8c;
  if ((uStack_8c & 1) != 0) goto LAB_82f3fac8;
  *(ushort *)(param_1 + 0x18) = uStack_8c >> 1;
  lVar7 = fn_82E57738(&uStack_8a,piVar17);
  uVar5 = uStack_8a;
  if (lVar7 < 0) goto LAB_82f3fab8;
  uVar13 = (ulonglong)uStack_8a;
  if ((uStack_8a & 1) != 0) goto LAB_82f3fac8;
  *(ushort *)((int)param_1 + 0x62) = uStack_8a >> 1;
  lVar7 = fn_82E57738(auStack_88,piVar17);
  uVar6 = auStack_88[0];
  if (lVar7 < 0) goto LAB_82f3fab8;
  uVar9 = (ulonglong)auStack_88[0];
  if ((auStack_88[0] & 1) != 0) goto LAB_82f3fac8;
  *(ushort *)(param_1 + 0x19) = auStack_88[0] >> 1;
  uVar14 = uVar9 + uVar13 + uVar12 + uVar11 + uVar10 + 0x22;
  uVar15 = (uint)uVar14;
  if (uVar1 < uVar14) goto LAB_82f3f6e8;
  if (param_1[0x12] != 0) {
    fn_82E4FE40();
  }
  param_1[0x12] = 0;
  if (uVar10 == 0) {
LAB_82f3f8c8:
    if (param_1[0x13] != 0) {
      fn_82E4FE40();
    }
    param_1[0x13] = 0;
    if (uVar11 != 0) {
      uVar10 = uVar11 + 1 >> 1;
      uVar11 = uVar10 + 1;
      lVar8 = uVar11 * 2;
      if (0x7fffffff < uVar11) {
        lVar8 = -1;
      }
      uVar11 = fn_82E50BE8(lVar8,0,0,0,0);
      param_1[0x13] = (int)uVar11;
      if ((uVar11 & 0xffffffff) == 0) goto LAB_82f3f89c;
      lVar7 = fn_82E577A0(uVar11,piVar17,uVar3 >> 1);
      if (lVar7 < 0) goto LAB_82f3fab8;
      *(undefined2 *)((int)(uVar10 << 1) + param_1[0x13]) = 0;
    }
    if (param_1[0x14] != 0) {
      fn_82E4FE40();
    }
    param_1[0x14] = 0;
    if (uVar12 != 0) {
      uVar10 = uVar12 + 1 >> 1;
      uVar11 = uVar10 + 1;
      lVar8 = uVar11 * 2;
      if (0x7fffffff < uVar11) {
        lVar8 = -1;
      }
      uVar11 = fn_82E50BE8(lVar8,0,0,0,0);
      param_1[0x14] = (int)uVar11;
      if ((uVar11 & 0xffffffff) == 0) goto LAB_82f3f89c;
      lVar7 = fn_82E577A0(uVar11,piVar17,uVar4 >> 1);
      if (lVar7 < 0) goto LAB_82f3fab8;
      *(undefined2 *)((int)(uVar10 << 1) + param_1[0x14]) = 0;
    }
    if (param_1[0x15] != 0) {
      fn_82E4FE40();
    }
    param_1[0x15] = 0;
    if (uVar13 != 0) {
      uVar10 = uVar13 + 1 >> 1;
      uVar11 = uVar10 + 1;
      lVar8 = uVar11 * 2;
      if (0x7fffffff < uVar11) {
        lVar8 = -1;
      }
      uVar11 = fn_82E50BE8(lVar8,0,0,0,0);
      param_1[0x15] = (int)uVar11;
      if ((uVar11 & 0xffffffff) == 0) goto LAB_82f3f89c;
      lVar7 = fn_82E577A0(uVar11,piVar17,uVar5 >> 1);
      if (lVar7 < 0) goto LAB_82f3fab8;
      *(undefined2 *)((int)(uVar10 << 1) + param_1[0x15]) = 0;
    }
    if (param_1[0x16] != 0) {
      fn_82E4FE40();
    }
    param_1[0x16] = 0;
    if (uVar9 != 0) {
      uVar10 = uVar9 + 1 >> 1;
      uVar11 = uVar10 + 1;
      lVar8 = uVar11 * 2;
      if (0x7fffffff < uVar11) {
        lVar8 = -1;
      }
      uVar11 = fn_82E50BE8(lVar8,0,0,0,0);
      param_1[0x16] = (int)uVar11;
      if ((uVar11 & 0xffffffff) == 0) goto LAB_82f3f89c;
      lVar7 = fn_82E577A0(uVar11,piVar17,uVar6 >> 1);
      if (-1 < lVar7) {
        *(undefined2 *)((int)(uVar10 << 1) + param_1[0x16]) = 0;
      }
    }
LAB_82f3fab8:
    lVar8 = lVar7;
    if ((int)lVar7 == -0x3ff2c94f) {
      return lVar7;
    }
  }
  else {
    uVar10 = uVar10 + 1 >> 1;
    uVar14 = uVar10 + 1;
    lVar8 = uVar14 * 2;
    if (0x7fffffff < uVar14) {
      lVar8 = -1;
    }
    uVar14 = fn_82E50BE8(lVar8,0,0,0,0);
    param_1[0x12] = (int)uVar14;
    if ((uVar14 & 0xffffffff) != 0) {
      lVar7 = fn_82E577A0(uVar14,piVar17,uVar2 >> 1);
      if (lVar7 < 0) goto LAB_82f3fab8;
      *(undefined2 *)((int)(uVar10 << 1) + param_1[0x12]) = 0;
      goto LAB_82f3f8c8;
    }
LAB_82f3f89c:
    lVar8 = -0x7ff8fff2;
  }
LAB_82f3fac8:
  *param_2 = uVar1 - param_1[0x10];
  if ((-1 < (int)lVar8) && (uVar10 = (**(code **)(*param_1 + 0x2c))(param_1), uVar10 != *param_2)) {
    lVar8 = lVar16;
  }
  return lVar8;
}

