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
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_11c;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_fc;
extern unsigned int fStack_e4;
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826C6248();
extern int fn_826C8C70();
extern int fn_826E7408();
extern int fn_826E7438();
extern int fn_826E7800();
extern int fn_826E7990();
extern int fn_826E7B08();
extern int fn_826E8AF0();
extern int fn_826E8E18();
extern int fn_826E92E8();
extern int fn_826E9330();
extern int fn_826E95F8();
extern int fn_8278EA40();
extern unsigned int iStack_120;
extern unsigned int lbl_8200DD28;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


longlong fn_826FAA70(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  char cVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  int iStack_120;
  undefined1 auStack_11c [32];
  undefined1 auStack_fc [24];
  float fStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined2 uStack_d8;
  byte bStack_d6;
  byte bStack_d5;
  ulonglong uStack_d0;
  undefined1 auStack_c0 [192];
  
  lVar14 = ((ulonglong)*(uint *)(param_1 + 0x34) - (ulonglong)*(uint *)(param_1 + 0x30)) +
           (ulonglong)*(uint *)(param_1 + 0x2c);
  lVar8 = fn_826E7408();
  cVar9 = fn_826E7438(param_1);
  if (cVar9 == '\0') {
    return lVar8 - lVar14;
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
    fn_826E7990(param_1);
  }
  iVar12 = *(int *)(param_1 + 0x2c) + 1;
  bVar5 = *(byte *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x2c) = iVar12;
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(int *)(param_1 + 0x30) - iVar12 < 1) {
    fn_826E7990(param_1);
  }
  uVar16 = 0;
  uVar15 = 0;
  bVar6 = *(byte *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  fn_826C6248(&iStack_120);
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 2) {
    fn_826E7800(param_1,2);
  }
  iVar12 = *(int *)(param_1 + 0x2c) + 2;
  puVar13 = (undefined1 *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
  uVar1 = puVar13[1];
  uVar2 = *puVar13;
  *(int *)(param_1 + 0x2c) = iVar12;
  uStack_e0 = (uint)CONCAT11(uVar1,uVar2);
  if ((bVar5 & 2) != 0) {
    bStack_d5 = bStack_d5 | 2;
    *(undefined1 *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - iVar12 < 2) {
      fn_826E7800(param_1,2);
    }
    puVar13 = (undefined1 *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar13[1];
    uVar2 = *puVar13;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 2;
    uStack_dc = (uint)CONCAT11(uVar1,uVar2);
  }
  if ((bVar5 & 4) != 0) {
    bStack_d5 = bStack_d5 | 4;
    fn_826E8AF0(param_1,auStack_fc);
  }
  if ((bVar5 & 8) != 0) {
    bStack_d5 = bStack_d5 | 8;
    fn_826E8E18(param_1,auStack_11c);
  }
  if ((bVar5 & 0x10) != 0) {
    bStack_d5 = bStack_d5 | 0x10;
    *(undefined1 *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 2) {
      fn_826E7800(param_1,2);
    }
    fStack_e4 = lbl_8200DD28;
    puVar13 = (undefined1 *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar13[1];
    uVar2 = *puVar13;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 2;
    uStack_d0 = (ulonglong)CONCAT11(uVar1,uVar2);
    fStack_e4 = (float)uStack_d0 * fStack_e4;
  }
  if ((bVar5 & 0x20) != 0) {
    uVar15 = fn_826E95F8(param_1,*(undefined4 *)(param_1 + 0x1c));
  }
  if ((bVar5 & 0x40) != 0) {
    bStack_d5 = bStack_d5 | 0x40;
    *(undefined1 *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 2) {
      fn_826E7800(param_1,2);
    }
    puVar13 = (undefined1 *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar13[1];
    uVar2 = *puVar13;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 2;
    uStack_d8 = CONCAT11(uVar1,uVar2);
  }
  if ((bVar6 & 1) != 0) {
    bStack_d5 = bStack_d5 | 0x20;
    fn_8278EA40(param_1,auStack_c0,4);
  }
  if ((bVar6 & 2) != 0) {
    *(undefined1 *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
      fn_826E7990(param_1);
    }
    bStack_d6 = *(byte *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if ((bStack_d6 == 0) || (0xe < bStack_d6)) {
      bStack_d6 = 1;
    }
    bStack_d5 = bStack_d5 | 0x80;
  }
  if ((bVar6 & 4) != 0) {
    *(undefined1 *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
      fn_826E7990(param_1);
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  if ((bVar5 & 0x80) != 0) {
    *(undefined1 *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 2) {
      fn_826E7800(param_1,2);
    }
    iVar12 = *(int *)(param_1 + 0x2c) + 2;
    *(undefined1 *)(param_1 + 0x15) = 0;
    *(int *)(param_1 + 0x2c) = iVar12;
    if (*(int *)(param_1 + 0x30) - iVar12 < 4) {
      fn_826E7800(param_1,4);
    }
    puVar13 = (undefined1 *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar13[3];
    uVar2 = puVar13[2];
    uVar3 = puVar13[1];
    uVar4 = *puVar13;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
    uVar16 = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
  }
  fn_826E7B08(param_1,lVar14);
  uVar7 = ((ulonglong)bVar5 & 2) >> 1;
  fn_826C8C70(param_1,0xffffffff8200dd18,uStack_e0);
  if ((bVar5 & 2) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dd08,uStack_dc & 0xffff);
  }
  if ((bVar5 & 4) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dd00);
    fn_826E9330(param_1,auStack_fc);
  }
  if ((bVar5 & 8) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dc50);
    fn_826E92E8(param_1,auStack_11c);
  }
  if ((bVar5 & 0x10) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dcf0,(double)fStack_e4);
  }
  if ((bVar5 & 0x20) != 0) {
    uVar11 = uVar15;
    if ((uVar15 & 0xffffffff) == 0) {
      uVar11 = 0xffffffff8200dce8;
    }
    fn_826C8C70(param_1,0xffffffff8200dcd8,uVar11);
  }
  if ((bVar5 & 0x40) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dcc4,uStack_d8);
  }
  if ((bVar6 & 2) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dd2c,bStack_d6);
  }
  if ((bVar5 & 0x80) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dca8,uVar16);
  }
  if ((uVar7 == 0) || ((bVar5 & 1) == 0)) {
    if ((uVar7 != 0) || ((bVar5 & 1) == 0)) goto LAB_826fafd8;
    uVar10 = 0xffffffff8200dc84;
  }
  else {
    uVar10 = 0xffffffff8200dc94;
  }
  fn_826C8C70(param_1,uVar10);
LAB_826fafd8:
  if ((uVar15 & 0xffffffff) != 0) {
    fn_8267BE38(uVar15);
  }
  fn_826E7B08(param_1,lVar14);
  if (iStack_120 != 0) {
    fn_8267C498();
  }
  return lVar8 - lVar14;
}

