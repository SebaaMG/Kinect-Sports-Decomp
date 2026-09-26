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
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_2e8;
extern unsigned int *auStack_c0;
extern unsigned int fStack_1c0;
extern unsigned int fStack_1d0;
extern unsigned int fStack_1e0;
extern unsigned int fStack_1f4;
extern unsigned int fStack_1f8;
extern unsigned int fStack_214;
extern unsigned int fStack_218;
extern unsigned int fStack_23c;
extern unsigned int fStack_294;
extern unsigned int fStack_29c;
extern unsigned int fStack_2a0;
extern unsigned int fStack_2a4;
extern unsigned int fStack_2b4;
extern unsigned int fStack_2bc;
extern unsigned int fStack_2c0;
extern unsigned int fStack_2c4;
extern int fn_8262FE50();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263C2C8();
extern int fn_826417C8();
extern int fn_82641B60();
extern int fn_82643A48();
extern int fn_82645110();
extern int fn_8264F830();
extern int fn_8264FB08();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_82195668;
extern unsigned int lbl_821956B4;
extern unsigned int lbl_821957F0;
extern unsigned int lbl_82195C54;
extern unsigned int lbl_82195C58;
extern unsigned int lbl_82195C5C;
extern unsigned int lbl_82195C60;
extern unsigned int lbl_82195C64;
extern unsigned int lbl_82195C68;
extern unsigned int lbl_82195C6C;
extern unsigned int lbl_82195C70;
extern unsigned int lbl_82195C74;
extern unsigned int lbl_82195C78;
extern unsigned int lbl_82195C7C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1b8;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c4;
extern unsigned int uStack_1c8;
extern unsigned int uStack_1cc;
extern unsigned int uStack_1d4;
extern unsigned int uStack_1d8;
extern unsigned int uStack_1dc;
extern unsigned int uStack_1e4;
extern unsigned int uStack_1e8;
extern unsigned int uStack_1ec;
extern unsigned int uStack_1f0;
extern unsigned int uStack_1fc;
extern unsigned int uStack_200;
extern unsigned int uStack_204;
extern unsigned int uStack_208;
extern unsigned int uStack_20c;
extern unsigned int uStack_210;
extern unsigned int uStack_21c;
extern unsigned int uStack_220;
extern unsigned int uStack_224;
extern unsigned int uStack_228;
extern unsigned int uStack_22c;
extern unsigned int uStack_230;
extern unsigned int uStack_234;
extern unsigned int uStack_238;
extern unsigned int uStack_240;
extern unsigned int uStack_244;
extern unsigned int uStack_248;
extern unsigned int uStack_250;
extern unsigned int uStack_298;
extern unsigned int uStack_2a8;
extern unsigned int uStack_2ac;
extern unsigned int uStack_2b0;
extern unsigned int uStack_2b8;
extern unsigned int uStack_2c8;
extern unsigned int uStack_2cc;
extern unsigned int uStack_2d0;
extern unsigned int uStack_2d4;
extern unsigned int uStack_2d8;
extern unsigned int uStack_2f0;
extern unsigned int uStack_c8;


void fn_8264FC60(int param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                  uint param_6)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined4 auStack_2e0 [2];
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined4 uStack_2b8;
  float fStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined4 uStack_298;
  float fStack_294;
  undefined4 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  float fStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  float fStack_218;
  float fStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 auStack_1b0 [156];
  int aiStack_114 [19];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [192];
  
  auStack_2e0[0] = 0;
  uStack_2d8 = 0;
  lVar8 = 6;
  uStack_2d4 = 0;
  puVar4 = &uStack_c8;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  fn_8263C2C8(param_5 + 7 & 0xfffffff8,param_6 + 7 & 0xfffffff8,0x28280106,0,auStack_2e0,
                  auStack_c0,auStack_2e8,&uStack_2f0);
  if (*(int *)(param_1 + 0x3158) != 0) {
    fn_8262FE50(*(int *)(param_1 + 0x3158));
  }
  fn_8263A508(param_1,0);
  uVar7 = 0;
  piVar5 = aiStack_114;
  piVar6 = (int *)(param_1 + 0x3148);
  do {
    iVar3 = *piVar6;
    if (iVar3 != 0) {
      fn_8262FE50(iVar3);
    }
    piVar5 = piVar5 + 1;
    *piVar5 = iVar3;
    fn_8263A1B8(param_1,uVar7,auStack_c0);
    uVar7 = uVar7 + 1;
    piVar6 = piVar6 + 1;
  } while ((uVar7 & 0xffffffff) < 4);
  *(uint *)(param_1 + 0x29c0) = *(uint *)(param_1 + 0x29c0) | 1;
  *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) | 0x800000000;
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  if (uVar7 != 0) {
    if ((*(ulonglong *)(param_1 + 0x28) & uVar7) != 0) {
      uVar1 = fn_826417C8(param_1,uVar7,*(undefined4 *)(param_1 + 0x2940));
      *(undefined8 *)(param_1 + 0x10) = uVar1;
    }
    if ((*(ulonglong *)(param_1 + 0x10) & 0xfff) != 0) {
      fn_82641B60(param_1,*(ulonglong *)(param_1 + 0x10) << 0x34,0x2200,param_1 + 0x2934);
      *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) & 0xfffffffffffff000;
    }
    if ((*(ulonglong *)(param_1 + 0x10) & 0x1f000) != 0) {
      fn_82641B60(param_1,(*(ulonglong *)(param_1 + 0x10) & 0x1f000) << 0x2f,0x2180,
                        param_1 + 0x2920);
      *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) & 0xfffffffffffe0fff;
    }
    if ((*(ulonglong *)(param_1 + 0x10) & 0x3fffc0000000000) != 0) {
      fn_82641B60(param_1,(*(ulonglong *)(param_1 + 0x10) & 0x3fffc0000000000) << 6,0x2000,
                        param_1 + 0x2880);
      *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) & 0xfc0003ffffffffff;
    }
    if ((*(ulonglong *)(param_1 + 0x10) & 0x3ffffe00000) != 0) {
      fn_82641B60(param_1,(*(ulonglong *)(param_1 + 0x10) & 0x3ffffe00000) << 0x16,0x2100,
                        param_1 + 0x28cc);
      *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) & 0xfffffc00001fffff;
    }
  }
  uVar7 = *(ulonglong *)(param_1 + 0x18);
  if ((uVar7 != 0) && ((uVar7 & 0x7ffffc00000000) != 0)) {
    fn_82641B60(param_1,(uVar7 & 0x7ffffc00000000) << 9,0x2280,param_1 + 0x2964);
    *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) & 0xff800003ffffffff;
  }
  uVar7 = *(ulonglong *)(param_1 + 0x20);
  if ((uVar7 != 0) && ((uVar7 & 0x3fffffffff) != 0)) {
    fn_82641B60(param_1,uVar7 << 0x1a,0x2300,param_1 + 0x29b8);
    *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) & 0xffffffc000000000;
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) < uVar2) {
    uVar2 = fn_82645110(param_1);
  }
  *(undefined4 *)(uVar2 + 4) = 0xc0003b00;
  *(undefined4 *)(uVar2 + 8) = 0x300;
  *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar2 + 8);
  iVar3 = fn_82643A48(param_1,0x1b);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 4) = 0xc0192b00;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0x18;
    fn_82F68CC0(iVar3 + 0x10,0xffffffff8218ca00,0x60);
    *(int *)(param_1 + 0x30) = iVar3 + 0x6c;
    fn_8264F830(param_1,0xfc,0xffffffff8218c9c0,4);
  }
  iVar3 = fn_82643A48(param_1,0x1b0);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 4) = 0xc1ae2b00;
    *(undefined4 *)(iVar3 + 8) = 1;
    *(undefined4 *)(iVar3 + 0xc) = 0x1ad;
    fn_82F68CC0(iVar3 + 0x10,0xffffffff8218cb20,0x6b4);
    *(int *)(param_1 + 0x30) = iVar3 + 0x6c0;
    fn_8264F830(param_1,500,0xffffffff8218ca60,0xc);
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) < uVar2) {
    uVar2 = fn_82645110(param_1);
  }
  *(undefined4 *)(uVar2 + 4) = 0x12180;
  *(undefined4 *)(uVar2 + 8) = 0x10000800;
  *(undefined4 *)(uVar2 + 0xc) = 4;
  *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar2 + 0xc);
  fn_8264FB08(param_1);
  uStack_2f0 = (param_2 & 0xffffffff) >> 1;
  fStack_23c = (float)uStack_2f0;
  uStack_250 = lbl_821CC160;
  uStack_248 = 0;
  uStack_244 = 0;
  uStack_210 = lbl_8218E8FC;
  uStack_20c = lbl_8218E8FC;
  fStack_1f8 = (float)param_5 * lbl_82195668;
  uStack_2d0 = lbl_821CC160;
  uStack_2cc = lbl_821CC160;
  uStack_2c8 = lbl_821CC160;
  fStack_2c4 = lbl_821CA460;
  uStack_2b8 = lbl_821CC160;
  fStack_2b4 = lbl_821CA460;
  uStack_2b0 = lbl_821CC160;
  uStack_2ac = lbl_821CC160;
  uStack_2a8 = lbl_821CC160;
  fStack_2a4 = lbl_821CA460;
  uStack_298 = lbl_821CC160;
  fStack_294 = lbl_821CA460;
  uStack_240 = lbl_821CC160;
  uStack_238 = lbl_82195C54;
  uStack_234 = lbl_82195C58;
  uStack_230 = lbl_821CC160;
  uStack_22c = lbl_821CC160;
  uStack_228 = lbl_821956B4;
  uStack_224 = lbl_821957F0;
  uStack_220 = lbl_821CC160;
  uStack_21c = lbl_821CC160;
  uStack_208 = lbl_821917B4;
  uStack_204 = lbl_821917B4;
  uStack_200 = lbl_821CC160;
  uStack_1fc = lbl_821CC160;
  uStack_1f0 = lbl_821CC160;
  uStack_1ec = lbl_821CC160;
  fStack_218 = (float)param_5 * lbl_8218E8E8 - lbl_821CA460;
  fStack_1f4 = lbl_821CA460 / fStack_1f8;
  fStack_2c0 = (float)param_5;
  fStack_2bc = (float)param_6;
  fStack_2a0 = (float)param_5;
  fStack_29c = (float)param_6;
  uStack_1e8 = lbl_821CC160;
  uStack_1e4 = lbl_821CC160;
  fStack_1e0 = lbl_821CA460;
  uStack_1dc = lbl_82195C5C;
  uStack_1d8 = lbl_82195C60;
  uStack_1d4 = lbl_82195C64;
  fStack_1d0 = lbl_821CA460;
  uStack_1cc = lbl_82195C68;
  uStack_1c8 = lbl_82195C6C;
  uStack_1c4 = lbl_82195C70;
  fStack_1c0 = lbl_821CA460;
  uStack_1bc = lbl_82195C74;
  uStack_1b8 = lbl_82195C78;
  uStack_1b4 = lbl_82195C7C;
  fStack_214 = fStack_218;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_1b0,0,0xa0);
}

