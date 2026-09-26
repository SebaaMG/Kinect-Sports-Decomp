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
extern int fn_82AA66A8();
extern int fn_82ACA4F0();
extern int fn_82AE5400();


ulonglong fn_82AE5BC0(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = fn_82AE5400(param_1,0xff,param_2,0xfffffffffffffffc);
  if ((int)uVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*param_1,0xdee);
  }
  uVar3 = fn_82ACA4F0(uVar2 & 0xf,param_2);
  iVar1 = ((uint)(uVar2 >> 8) & 0xffffff) + 1;
  *(ulonglong *)(param_1 + iVar1 * 2) =
       (uVar3 & 0xffffffff) << ((uVar2 & 0xffffffff) >> 2 & 0x3c) |
       *(ulonglong *)(param_1 + iVar1 * 2);
  return uVar2 & 0xfffffff0 | uVar3 & 0xffffffff0000000f;
}

