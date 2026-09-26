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
extern int fn_827F9658();
extern int fn_8280CB70();
extern int fn_8280CC30();
extern int fn_8280CD18();


void fn_82852720(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_80 [128];
  
  uVar1 = param_1[0x1a4c];
  uVar2 = *param_1;
  fn_827F9658((ulonglong)*(uint *)(param_2 + 4) * 0x34 + (ulonglong)param_1[0x1b],
                  ((ulonglong)*(uint *)(param_2 + 4) & 0x3ffffff) * 0x40 + (ulonglong)param_1[0x1a],
                  param_1 + uVar1 * 0x34 + 0x5c);
  fn_8280CB70((ulonglong)uVar2 + 0x40,param_1 + uVar1 * 0x34 + 0x5c,param_1 + uVar1 * 0x34 + 0x4c);
  lVar4 = (ulonglong)*param_1 + 0x40;
  lVar5 = (ulonglong)*param_1 + 0x80;
  uVar2 = param_1[0x1a4c];
  if (param_1[0x23] != 0xffff) {
    fn_8280CD18(param_1 + uVar1 * 0x34 + 0x6c,auStack_80);
    uVar3 = param_1[0x23];
    fn_826310E0(param_1[1],(ulonglong)uVar3,auStack_80,3,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((ulonglong)uVar3 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar3 >> 2) & 0x7f)) >>
                 ((ulonglong)(uVar3 >> 2) & 0x7f));
  }
  if (param_1[0x21] != 0xffff) {
    fn_8280CD18(lVar5,auStack_80);
    uVar3 = param_1[0x21];
    fn_826310E0(param_1[1],(ulonglong)uVar3,auStack_80,4,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((ulonglong)uVar3 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar3 >> 2) & 0x7f)) >>
                 ((ulonglong)(uVar3 >> 2) & 0x7f));
  }
  if (param_1[0x22] != 0xffff) {
    fn_8280CC30(lVar4,param_1 + uVar1 * 0x34 + 0x6c,auStack_80);
    uVar1 = param_1[0x22];
    fn_826310E0(param_1[1],(ulonglong)uVar1,auStack_80,3,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((ulonglong)uVar1 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar1 >> 2) & 0x7f)) >>
                 ((ulonglong)(uVar1 >> 2) & 0x7f));
  }
  if (param_1[0x48] != 0xffff) {
    fn_8280CC30(lVar5,param_1 + uVar2 * 0x34 + 0x4c,(ulonglong)*param_1 + 0xc0);
    uVar1 = param_1[0x48];
    fn_826310E0(param_1[1],(ulonglong)uVar1,(ulonglong)*param_1 + 0xc0,4,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((ulonglong)uVar1 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar1 >> 2) & 0x7f)) >>
                 ((ulonglong)(uVar1 >> 2) & 0x7f));
  }
  if (param_1[0x24] != 0xffff) {
    fn_8280CD18(lVar4,auStack_80);
    uVar1 = param_1[0x24];
    fn_826310E0(param_1[1],(ulonglong)uVar1,auStack_80,3,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((ulonglong)uVar1 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar1 >> 2) & 0x7f)) >>
                 ((ulonglong)(uVar1 >> 2) & 0x7f));
  }
  return;
}

