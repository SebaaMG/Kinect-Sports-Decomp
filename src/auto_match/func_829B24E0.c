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
extern int fn_829B2110();
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82005328;
extern unsigned int lbl_82028884;
extern unsigned int uStack_48;
extern unsigned int uStack_4b;
extern unsigned int uStack_4c;
extern unsigned int uStack_4d;
extern unsigned int uStack_4e;


undefined8 fn_829B24E0(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  float *pfVar13;
  uint uVar15;
  ulonglong uVar14;
  longlong lVar16;
  byte bStack_50;
  byte bStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined8 uStack_48;
  float afStack_40 [16];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uStack_48 = *(undefined8 *)(param_2 + 4);
  uVar10 = fn_829B2110(param_1,&uStack_48);
  fVar9 = lbl_82028884;
  fVar8 = lbl_82002C2C;
  if (-1 < (int)uVar10) {
    bStack_4f = (byte)((ushort)uVar1 >> 8);
    bStack_50 = (byte)uVar1;
    uVar15 = 1;
    pfVar13 = afStack_40 + 1;
    fVar6 = (float)bStack_50 * lbl_82005328;
    fVar7 = (float)bStack_4f * lbl_82005328;
    if (bStack_4f < bStack_50) {
      lVar16 = 6;
      do {
        uVar11 = 7 - uVar15;
        uVar14 = (ulonglong)uVar15;
        uVar15 = uVar15 + 1;
        pfVar13 = pfVar13 + 1;
        *pfVar13 = ((float)uVar11 * fVar6 + (float)uVar14 * fVar7) * fVar9;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    else {
      lVar16 = 4;
      do {
        pfVar13 = pfVar13 + 1;
        *pfVar13 = ((float)(5 - uVar15) * fVar6 + (float)uVar15 * fVar7) * fVar8;
        lVar16 = lVar16 + -1;
        uVar15 = uVar15 + 1;
      } while (lVar16 != 0);
    }
    uStack_4d = (undefined1)((ushort)uVar2 >> 8);
    uStack_4c = (undefined1)uVar3;
    puVar12 = (undefined4 *)(param_1 + -4);
    uStack_4e = (undefined1)uVar2;
    lVar16 = 8;
    uVar14 = (ulonglong)CONCAT21(CONCAT11(uStack_4c,uStack_4d),uStack_4e);
    do {
      lVar5 = uVar14 << 2;
      uVar14 = uVar14 >> 3;
      puVar12 = puVar12 + 4;
      *puVar12 = *(undefined4 *)((int)afStack_40 + ((uint)lVar5 & 0x1c));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    puVar12 = (undefined4 *)(param_1 + 0x7c);
    uStack_4b = (undefined1)((ushort)uVar3 >> 8);
    lVar16 = 8;
    uVar14 = (ulonglong)CONCAT21(uVar4,uStack_4b);
    do {
      lVar5 = uVar14 << 2;
      uVar14 = uVar14 >> 3;
      puVar12 = puVar12 + 4;
      *puVar12 = *(undefined4 *)((int)afStack_40 + ((uint)lVar5 & 0x1c));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    uVar10 = 0;
  }
  return uVar10;
}

