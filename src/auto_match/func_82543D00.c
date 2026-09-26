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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82544718();
extern int fn_82549798();
extern int fn_8263C910();
extern int fn_82A93C18();
extern int fn_82A93F70();
extern int fn_82F68CC0();
extern unsigned int lbl_8326B1C8;
extern unsigned int lbl_8326B1CC;
extern unsigned int lbl_8326B314;
extern unsigned int lbl_8326B318;
extern unsigned int lbl_8326B31C;
extern unsigned int lbl_8326B320;
extern unsigned int lbl_8326B334;
extern unsigned int lbl_8326B338;
extern unsigned int lbl_8326B33C;
extern unsigned int lbl_8326B340;
extern unsigned int lbl_8326B34C;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int uRam8326b344;
extern unsigned int uRam8326b348;


void fn_82543D00(void)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint auStack_e0 [4];
  int aiStack_d0 [4];
  undefined1 auStack_c0 [192];
  
  uVar2 = lbl_8326B434;
  uVar1 = lbl_8326B430;
  if (lbl_8326B34C == 0) {
    uVar14 = (ulonglong)lbl_8326B430;
    uVar13 = (ulonglong)lbl_8326B434;
    lbl_8326B34C = 1;
    aiStack_d0[1] = 0;
    aiStack_d0[3] = 0;
    uVar12 = (longlong)(int)((lbl_8326B434 - (lbl_8326B434 - 1 & 0x1f)) + 0x1f) *
             (longlong)(int)((lbl_8326B430 - (lbl_8326B430 - 1 & 0x1f)) + 0x1f);
    lVar3 = (uVar12 & 0x1fffffff) << 3;
    lbl_8326B314 = (undefined4)lVar3;
    lVar10 = ((ulonglong)(lbl_8326B430 >> 1) - ((ulonglong)(lbl_8326B430 >> 1) - 1 & 0x1f)) + 0x1f;
    lVar9 = ((ulonglong)(lbl_8326B434 >> 1) - ((ulonglong)(lbl_8326B434 >> 1) - 1 & 0x1f)) + 0x1f;
    lbl_8326B318 = fn_82549798(lVar3,0x1000,0x404,0);
    lVar7 = (uVar12 & 0x3fffffff) << 2;
    uVar8 = (uint)lVar7;
    lVar3 = lVar7;
    lbl_8326B31C = uVar8;
    if ((int)uVar8 < 0x398000) {
      lVar3 = 0x398000;
      lbl_8326B31C = 0x398000;
    }
    lbl_8326B320 = fn_82549798(lVar3,0x1000,0x404,0);
    fn_82A93C18(0x500,0x2d0,1,0,0x18280186,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326b0c4,lbl_8326B320);
    fn_82A93C18(uVar14,uVar13,1,0,0x18280186,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326b090,lbl_8326B320);
    fn_82A93C18(lVar10,uVar13,1,0,0x18280186,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326b0f8,
                      ((ulonglong)lbl_8326B320 - (ulonglong)auStack_e0[0]) + (ulonglong)lbl_8326B31C
                     );
    fn_82A93C18(uVar14 - lVar10,uVar13,1,0,0x18280186,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326b12c,
                      ((ulonglong)lbl_8326B320 - (ulonglong)auStack_e0[0]) + (ulonglong)lbl_8326B31C
                     );
    fn_82A93C18(uVar14,lVar9,1,0,0x18280186,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326b160,
                      ((ulonglong)lbl_8326B320 - (ulonglong)auStack_e0[0]) + (ulonglong)lbl_8326B31C
                     );
    fn_82A93C18(uVar14,uVar13 - lVar9,1,0,0x18280186,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326b194,
                      ((ulonglong)lbl_8326B320 - (ulonglong)auStack_e0[0]) + (ulonglong)lbl_8326B31C
                     );
    fn_82A93C18(uVar14,uVar13,1,0,0x18280186,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326af58,lbl_8326B320);
    if ((int)uVar8 < 0x398000) {
      lVar7 = 0x398000;
    }
    lbl_8326B334 = (undefined4)lVar7;
    lbl_8326B338 = fn_82549798(lVar7,0,0x404,0);
    fn_82A93C18(0x500,0x2d0,1,0,0x1a220197,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326af8c,lbl_8326B338);
    fn_82A93C18(uVar14,uVar13,1,0,0x1a220197,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326afc0,lbl_8326B338);
    fn_82A93C18(uVar14,uVar13,1,0,0x18280186,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326aff4,lbl_8326B338);
    fn_82F68CC0(0xffffffff8326b028,0xffffffff8326afc0,0x34);
    fn_82F68CC0(0xffffffff8326b05c,0xffffffff8326aff4,0x34);
    lbl_8326B33C = uVar1;
    lbl_8326B340 = uVar2;
    uRam8326b344 = uVar1;
    uRam8326b348 = uVar2;
    aiStack_d0[0] = 0;
    aiStack_d0[2] = 0;
    lbl_8326B1CC = fn_8263C910(uVar14,uVar13,0x1a220197,0,aiStack_d0);
    aiStack_d0[2] = 0;
    uVar8 = uVar2 + 0xf & 0xfffffff0;
    iVar11 = (int)((uVar14 + 0x4f & 0xffffffff) / 0x50) * 0x50;
    aiStack_d0[0] = (int)((((longlong)(int)uVar8 * (longlong)iVar11 & 0x3fffffffU) << 2) / 0x1400);
    lbl_8326B1C8 = fn_8263C910(uVar14,uVar13,0x18280186,0,aiStack_d0);
    lVar3 = 0;
    uVar12 = 2;
    puVar6 = (undefined4 *)0x8326b2e4;
    lVar7 = -0x7cd94e30;
    do {
      uVar4 = fn_82544718(auStack_c0,uVar1 / uVar12,uVar2 / uVar12,0x18280186,lVar3,auStack_e0
                               );
      fn_82F68CC0(lVar7,uVar4,0x34);
      aiStack_d0[2] = 0;
      aiStack_d0[0] =
           (int)((((longlong)(int)uVar8 * (longlong)iVar11 & 0x3fffffffU) << 2) / 0x1400) +
           (int)((((longlong)(int)uVar8 * (longlong)iVar11 & 0x3fffffffU) << 2) / 0x1400);
      lVar3 = lVar3 + (ulonglong)auStack_e0[0];
      uVar5 = fn_8263C910(uVar1 / uVar12,uVar2 / uVar12,0x18280186,0,aiStack_d0);
      puVar6[-4] = uVar5;
      uVar5 = fn_8263C910(0x500 / (int)uVar12,0x2d0 / (int)uVar12,0x18280186,0,aiStack_d0);
      lVar7 = lVar7 + 0x34;
      puVar6 = puVar6 + 1;
      *puVar6 = uVar5;
      uVar12 = (uVar12 & 0x7fffffff) << 1;
    } while ((int)lVar7 < -0x7cd94d2c);
  }
  return;
}

