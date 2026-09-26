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
extern unsigned int *auStack_50;
extern int fn_82AB15D0();
extern int fn_82AB6EC0();
extern int fn_82B9A4B0();
extern unsigned int lbl_820DDC60;
extern unsigned int lbl_820DDC64;
extern unsigned int lbl_8316E58C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
fn_82B9D930(ulonglong param_1,undefined8 param_2,float *param_3,code *param_4,ulonglong param_5)

{
  float fVar1;
  int iVar3;
  ulonglong uVar2;
  undefined1 auStack_50 [80];
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(param_1,0xffffffff820d2ea4,0xffffffff820d2ff0,0xffffffff820ddb08,0xd81);
  }
  iVar3 = fn_82AB6EC0(param_1,0x244);
  uVar2 = fn_82AB6EC0(param_1,0x245);
  fVar1 = lbl_820DDC60;
  if ((uVar2 & 0xffffffff) == 1) {
    fVar1 = (float)(iVar3 - 1) + lbl_820DDC64;
  }
  *param_3 = fVar1;
  if ((param_4 != (code *)0x0) && ((param_5 & 0xffffffff) != 0)) {
    fn_82B9A4B0((double)fVar1,uVar2,auStack_50);
    (*param_4)(param_5,0xffffffff820ddc50,lbl_8316E58C,0x43,
               auStack_50);
  }
  return 1;
}

