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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82491D70();
extern int fn_82491EF0();
extern int fn_824967B0();
extern int fn_8255E948();
extern int fn_8255EF20();
extern int fn_8255EFC8();
extern int fn_827F3BA8();
extern int fn_827F3C20();
extern int fn_827F3EB0();
extern int fn_827FA1E8();
extern int fn_82F68CC0();
extern unsigned int lbl_8218E8E8;
extern unsigned int uStack_68;


void fn_8255EBE0(int *param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar9;
  ulonglong uVar8;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  float *pfVar13;
  uint uVar14;
  uint auStack_70 [2];
  undefined8 uStack_68;
  undefined1 auStack_60 [96];
  
  uVar6 = fn_8255EF20();
  (**(code **)(*param_1 + 0xc))(param_1);
  fn_824967B0(param_2);
  uVar7 = fn_827F3EB0(param_1);
  fn_82491D70(param_2,uVar7);
  fn_827F3BA8(param_1);
  uVar14 = 0;
  iVar9 = fn_827F3EB0(param_1);
  if (iVar9 != 0) {
    do {
      uVar8 = fn_8255E948(auStack_60);
      uVar10 = param_2[1];
      if (((ulonglong)uVar10 <= (uVar8 & 0xffffffff)) ||
         (bVar4 = true, (uVar8 & 0xffffffff) < (ulonglong)*param_2)) {
        bVar4 = false;
      }
      if (bVar4) {
        uVar3 = *param_2;
        if (uVar10 == param_2[2]) {
          fn_82491EF0(param_2);
        }
        uVar10 = param_2[1];
        uVar8 = (longlong)((int)((int)uVar8 - uVar3) / 0x1c) * 0x1c + (ulonglong)*param_2;
      }
      else {
        if (uVar10 == param_2[2]) {
          fn_82491EF0(param_2);
        }
        uVar10 = param_2[1];
      }
      if (uVar10 != 0) {
        fn_82F68CC0(uVar10,uVar8,0x1c);
      }
      uVar14 = uVar14 + 1;
      param_2[1] = param_2[1] + 0x1c;
      uVar10 = fn_827F3EB0(param_1);
    } while (uVar14 < uVar10);
  }
  iVar9 = fn_827F3C20(param_1);
  uVar1 = *(ushort *)(iVar9 + 0x32);
  uVar2 = *(ushort *)(iVar9 + 0x2e);
  iVar9 = *(int *)(iVar9 + 0x84);
  auStack_70[0] = fn_827FA1E8();
  fVar5 = lbl_8218E8E8;
  uVar14 = (int)(param_2[1] - *param_2) / 0x1c;
  uStack_68 = CONCAT44(uVar14,(((U64)(uStack_68) >> 32) & 0xFFFFFFFF));
  puVar12 = auStack_70;
  if (uVar14 <= auStack_70[0]) {
    puVar12 = (uint *)&uStack_68;
  }
  uVar8 = (ulonglong)*puVar12;
  iVar11 = 0;
  if (uVar8 != 0) {
    pfVar13 = (float *)(((uint)uVar1 * 0xc + (uint)uVar2) * 4 + iVar9 + -4);
    do {
      pfVar13 = pfVar13 + 1;
      uStack_68 = (longlong)(*pfVar13 + fVar5);
      *(undefined1 *)((int)param_2 + iVar11 + 0x10) = (undefined1)uStack_68;
      iVar11 = iVar11 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  fn_8255EFC8(param_1,uVar6);
  return;
}

