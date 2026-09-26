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
extern int fn_8223B688();
extern int fn_82302DA8();
extern int fn_82F622A8();
extern unsigned int lbl_82190000;


void fn_82302B40(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar7;
  ulonglong uVar6;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar1 = param_1[1];
  if ((uVar1 <= param_2) || (bVar3 = true, param_2 < *param_1)) {
    bVar3 = false;
  }
  uVar7 = param_1[2];
  if (bVar3) {
    puVar9 = (undefined4 *)*param_1;
    iVar5 = param_2 - (int)puVar9;
    if (uVar1 == uVar7) {
      uVar1 = (int)(uVar1 - (int)puVar9) >> 6;
      lVar8 = (longlong)(int)uVar1;
      if (0x3fffffe < uVar1) {
        puVar9 = &lbl_82190000;
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar6 = lVar8 + 1;
      uVar1 = (int)(uVar7 - (int)puVar9) >> 6;
      if ((ulonglong)uVar1 < (uVar6 & 0xffffffff)) {
        uVar4 = 0;
        if ((ulonglong)uVar1 <= (0x3ffffff - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
          uVar4 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
        }
        if ((uVar4 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          uVar4 = uVar6;
        }
        fn_82302DA8(param_1,uVar4);
      }
    }
    param_2 = (iVar5 >> 6) * 0x40 + *param_1;
  }
  else if (uVar1 == uVar7) {
    puVar9 = (undefined4 *)*param_1;
    uVar1 = (int)(uVar1 - (int)puVar9) >> 6;
    lVar8 = (longlong)(int)uVar1;
    if (0x3fffffe < uVar1) {
      puVar9 = &lbl_82190000;
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar6 = lVar8 + 1;
    uVar1 = (int)(uVar7 - (int)puVar9) >> 6;
    if ((ulonglong)uVar1 < (uVar6 & 0xffffffff)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 <= (0x3ffffff - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
        uVar4 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
      }
      if ((uVar4 & 0xffffffff) < (uVar6 & 0xffffffff)) {
        uVar4 = uVar6;
      }
      fn_82302DA8(param_1,uVar4);
    }
  }
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    fn_8223B688(uVar1,param_2);
    *(undefined4 *)(uVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    puVar9 = (undefined4 *)(param_2 + 0x20 & 0xfffffff0);
    uVar10 = puVar9[1];
    uVar11 = puVar9[2];
    uVar12 = puVar9[3];
    puVar2 = (undefined4 *)(uVar1 + 0x20 & 0xfffffff0);
    *puVar2 = *puVar9;
    puVar2[1] = uVar10;
    puVar2[2] = uVar11;
    puVar2[3] = uVar12;
    *(undefined4 *)(uVar1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(uVar1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(uVar1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  }
  param_1[1] = param_1[1] + 0x40;
  return;
}

