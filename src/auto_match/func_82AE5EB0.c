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
extern int fn_82AE5828();


ulonglong fn_82AE5EB0(undefined4 *param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = fn_82AE5828(param_1,0,param_2,1);
  if ((int)uVar2 == -1) {
    if (param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(*param_1,0xdf1);
    }
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar4 = fn_82ACA4F0(uVar2 & 0xf,param_2);
    iVar1 = (int)((uVar2 & 0xffffffff) >> 10) + 1;
    uVar3 = uVar2 & 0xfffffff0 | uVar4 & 0xffffffff0000000f;
    *(ulonglong *)(param_1 + iVar1 * 2) =
         (uVar4 & 0xffffffff) << ((uVar2 & 0xffffffff) >> 4 & 0x3f) |
         *(ulonglong *)(param_1 + iVar1 * 2);
  }
  return uVar3;
}

