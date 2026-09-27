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
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
extern unsigned int lbl_82002AE0;
extern float lbl_82002C2C;
extern unsigned int lbl_82005328;
extern float lbl_82028884;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_4b;
extern unsigned int uStack_4c;
extern unsigned int uStack_4d;
extern unsigned int uStack_4e;


undefined8 fn_82BBEF70(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 *puVar6;
  float *pfVar7;
  uint uVar9;
  ulonglong uVar8;
  longlong lVar10;
  byte bStack_50;
  byte bStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  float afStack_30 [6];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  bStack_4f = (byte)((ushort)*param_2 >> 8);
  bStack_50 = (byte)*param_2;
  uVar9 = 1;
  pfVar7 = afStack_30 + 1;
  afStack_30[0] = (float)bStack_50 * lbl_82005328;
  afStack_30[1] = (float)bStack_4f * lbl_82005328;
  if (bStack_4f < bStack_50) {
    lVar10 = 6;
    do {
      uVar5 = 7 - uVar9;
      uVar8 = (ulonglong)uVar9;
      uVar9 = uVar9 + 1;
      pfVar7 = pfVar7 + 1;
      *pfVar7 = ((float)uVar5 * afStack_30[0] + (float)uVar8 * afStack_30[1]) * lbl_82028884;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  else {
    lVar10 = 4;
    do {
      uVar5 = 5 - uVar9;
      uVar8 = (ulonglong)uVar9;
      uVar9 = uVar9 + 1;
      pfVar7 = pfVar7 + 1;
      *pfVar7 = ((float)uVar5 * afStack_30[0] + (float)uVar8 * afStack_30[1]) * lbl_82002C2C;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uStack_18 = lbl_821AAD20;
    uStack_14 = lbl_82002AE0;
  }
  uStack_4d = (undefined1)((ushort)uVar1 >> 8);
  uStack_4c = (undefined1)uVar2;
  puVar6 = (undefined4 *)(param_1 + -4);
  uStack_4e = (undefined1)uVar1;
  lVar10 = 8;
  uVar8 = (ulonglong)CONCAT21(CONCAT11(uStack_4c,uStack_4d),uStack_4e);
  do {
    lVar4 = uVar8 << 2;
    uVar8 = uVar8 >> 3;
    puVar6 = puVar6 + 4;
    *puVar6 = *(undefined4 *)((int)afStack_30 + ((uint)lVar4 & 0x1c));
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  puVar6 = (undefined4 *)(param_1 + 0x7c);
  uStack_4b = (undefined1)((ushort)uVar2 >> 8);
  lVar10 = 8;
  uVar8 = (ulonglong)CONCAT21(uVar3,uStack_4b);
  do {
    lVar4 = uVar8 << 2;
    uVar8 = uVar8 >> 3;
    puVar6 = puVar6 + 4;
    *puVar6 = *(undefined4 *)((int)afStack_30 + ((uint)lVar4 & 0x1c));
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return 0;
}

