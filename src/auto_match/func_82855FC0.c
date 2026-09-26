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
extern unsigned int *auStack_80;
extern int fn_826310E0();
extern int fn_8280CC30();
extern int fn_8280CD18();
extern int fn_82855BE8();


void fn_82855FC0(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_80 [128];
  
  uVar5 = param_1[0x1a4c] - 1;
  param_1[0x1a4c] = uVar5;
  if (*(int *)(param_2 + 4) != 0) {
    fn_82855BE8(param_1,param_1[0x1e],param_1[0x1d]);
    iVar8 = 0;
    uVar1 = param_1[0x20];
    uVar2 = param_1[0x1f];
    if (0 < (int)uVar1) {
      lVar6 = 0;
      do {
        uVar4 = lVar6 + (ulonglong)param_1[0x26];
        uVar3 = (uVar4 & 0xffffffff) >> 2;
        fn_826310E0(param_1[1],uVar4,
                     (ulonglong)*(byte *)(iVar8 + uVar2) * 0x40 +
                     (ulonglong)param_1[uVar5 * 0x34 + 0x7c],3,
                     (ulonglong)
                     (-0x8000000000000000 >> (((uVar4 + 2 & 0xffffffff) >> 2) - uVar3 & 0x7f)) >>
                     (uVar3 & 0x7f));
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 3;
      } while (iVar8 < (int)uVar1);
    }
    param_1[0x41] = 1;
  }
  uVar1 = param_1[0x1a4c];
  lVar6 = (ulonglong)*param_1 + 0x40;
  lVar7 = (ulonglong)*param_1 + 0x80;
  if (param_1[0x23] != 0xffff) {
    fn_8280CD18(param_1 + uVar5 * 0x34 + 0x6c,auStack_80);
    uVar2 = param_1[0x23];
    fn_826310E0(param_1[1],(ulonglong)uVar2,auStack_80,3,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((ulonglong)uVar2 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar2 >> 2) & 0x7f)) >>
                 ((ulonglong)(uVar2 >> 2) & 0x7f));
  }
  if (param_1[0x21] != 0xffff) {
    fn_8280CD18(lVar7,auStack_80);
    uVar2 = param_1[0x21];
    fn_826310E0(param_1[1],(ulonglong)uVar2,auStack_80,4,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((ulonglong)uVar2 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar2 >> 2) & 0x7f)) >>
                 ((ulonglong)(uVar2 >> 2) & 0x7f));
  }
  if (param_1[0x22] != 0xffff) {
    fn_8280CC30(lVar6,param_1 + uVar5 * 0x34 + 0x6c,auStack_80);
    uVar5 = param_1[0x22];
    fn_826310E0(param_1[1],(ulonglong)uVar5,auStack_80,3,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((ulonglong)uVar5 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar5 >> 2) & 0x7f)) >>
                 ((ulonglong)(uVar5 >> 2) & 0x7f));
  }
  if (param_1[0x48] != 0xffff) {
    fn_8280CC30(lVar7,param_1 + uVar1 * 0x34 + 0x4c,(ulonglong)*param_1 + 0xc0);
    uVar5 = param_1[0x48];
    fn_826310E0(param_1[1],(ulonglong)uVar5,(ulonglong)*param_1 + 0xc0,4,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((ulonglong)uVar5 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar5 >> 2) & 0x7f)) >>
                 ((ulonglong)(uVar5 >> 2) & 0x7f));
  }
  if (param_1[0x24] != 0xffff) {
    fn_8280CD18(lVar6,auStack_80);
    uVar5 = param_1[0x24];
    fn_826310E0(param_1[1],(ulonglong)uVar5,auStack_80,3,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((ulonglong)uVar5 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar5 >> 2) & 0x7f)) >>
                 ((ulonglong)(uVar5 >> 2) & 0x7f));
  }
  return;
}

