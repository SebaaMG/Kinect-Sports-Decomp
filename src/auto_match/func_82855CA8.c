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
extern unsigned int *auStack_110;
extern unsigned int *auStack_150;
extern unsigned int *auStack_90;
extern unsigned int *auStack_d0;
extern int fn_826310E0();
extern int fn_8280AC48();
extern int fn_8280CB70();
extern int fn_8280CC30();
extern int fn_8280CD18();
extern int fn_8280CED8();
extern int fn_82855BE8();


void fn_82855CA8(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar9;
  longlong lVar8;
  undefined1 auStack_150 [64];
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [144];
  
  uVar1 = *param_1;
  uVar2 = param_1[0x1a4c];
  param_3 = *(int *)(param_2 + 4) + param_3;
  if ((*(byte *)(param_3 + 0x40) & 1) == 0) {
    param_3 = param_2 + 0x10;
  }
  fn_8280AC48(param_3,auStack_110);
  if (*(char *)(param_2 + 0xc) == '\0') {
    fn_8280CED8(auStack_110,auStack_d0);
    fn_8280CB70(param_1 + uVar2 * 0x34 + 0x5c,auStack_d0,auStack_90);
    fn_8280CB70(param_1 + uVar2 * 0x34 + 0x6c,auStack_90);
    fn_8280AC48(auStack_110,param_1 + uVar2 * 0x34 + 0x5c);
  }
  else {
    iVar9 = uVar2 * 0x34 + 0x5c;
    if (*(char *)(param_2 + 0xc) == '\x02') {
      iVar9 = uVar2 * 0x34 + 0x6c;
    }
    fn_8280CB70(param_1 + iVar9,auStack_110);
  }
  puVar6 = param_1 + uVar2 * 0x34 + 0x6c;
  if (*(int *)(param_2 + 8) == 0) {
    fn_8280CB70(puVar6,param_1 + uVar2 * 0x34 + 0x5c,auStack_110);
    fn_8280CB70((ulonglong)uVar1 + 0x40,auStack_110,param_1 + uVar2 * 0x34 + 0x4c);
  }
  else {
    fn_8280CB70((ulonglong)uVar1 + 0x40,puVar6,param_1 + uVar2 * 0x34 + 0x4c);
    fn_82855BE8(param_1,param_1[0x1e],param_1[0x1d]);
    iVar9 = 0;
    uVar1 = param_1[0x20];
    uVar3 = param_1[0x1f];
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        uVar5 = lVar7 + (ulonglong)param_1[0x26];
        uVar4 = (uVar5 & 0xffffffff) >> 2;
        fn_826310E0(param_1[1],uVar5,
                     (ulonglong)*(byte *)(iVar9 + uVar3) * 0x40 +
                     (ulonglong)param_1[uVar2 * 0x34 + 0x7c],3,
                     (ulonglong)
                     (-0x8000000000000000 >> (((uVar5 + 2 & 0xffffffff) >> 2) - uVar4 & 0x7f)) >>
                     (uVar4 & 0x7f));
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 3;
      } while (iVar9 < (int)uVar1);
    }
  }
  uVar1 = param_1[0x1a4c];
  lVar7 = (ulonglong)*param_1 + 0x40;
  lVar8 = (ulonglong)*param_1 + 0x80;
  if (param_1[0x23] != 0xffff) {
    fn_8280CD18(puVar6,auStack_150);
    uVar2 = param_1[0x23];
    fn_826310E0(param_1[1],(ulonglong)uVar2,auStack_150,3,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((ulonglong)uVar2 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar2 >> 2) & 0x7f)) >>
                 ((ulonglong)(uVar2 >> 2) & 0x7f));
  }
  if (param_1[0x21] != 0xffff) {
    fn_8280CD18(lVar8,auStack_150);
    uVar2 = param_1[0x21];
    fn_826310E0(param_1[1],(ulonglong)uVar2,auStack_150,4,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((ulonglong)uVar2 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar2 >> 2) & 0x7f)) >>
                 ((ulonglong)(uVar2 >> 2) & 0x7f));
  }
  if (param_1[0x22] != 0xffff) {
    fn_8280CC30(lVar7,puVar6,auStack_150);
    uVar2 = param_1[0x22];
    fn_826310E0(param_1[1],(ulonglong)uVar2,auStack_150,3,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((ulonglong)uVar2 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar2 >> 2) & 0x7f)) >>
                 ((ulonglong)(uVar2 >> 2) & 0x7f));
  }
  if (param_1[0x48] != 0xffff) {
    fn_8280CC30(lVar8,param_1 + uVar1 * 0x34 + 0x4c,(ulonglong)*param_1 + 0xc0);
    uVar1 = param_1[0x48];
    fn_826310E0(param_1[1],(ulonglong)uVar1,(ulonglong)*param_1 + 0xc0,4,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((ulonglong)uVar1 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar1 >> 2) & 0x7f)) >>
                 ((ulonglong)(uVar1 >> 2) & 0x7f));
  }
  if (param_1[0x24] != 0xffff) {
    fn_8280CD18(lVar7,auStack_150);
    uVar1 = param_1[0x24];
    fn_826310E0(param_1[1],(ulonglong)uVar1,auStack_150,3,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((ulonglong)uVar1 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar1 >> 2) & 0x7f)) >>
                 ((ulonglong)(uVar1 >> 2) & 0x7f));
  }
  return;
}

