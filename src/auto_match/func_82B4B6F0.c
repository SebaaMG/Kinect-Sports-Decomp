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
extern unsigned int *auStack_a0;
extern int fn_82AA66A8();
extern int fn_82B45880();
extern int fn_82B4A3D8();
extern int fn_82B80788();


ulonglong fn_82B4B6F0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int iVar2;
  ulonglong uVar1;
  undefined1 auStack_a0 [160];
  
  iVar2 = fn_82B45880();
  uVar1 = fn_82B4A3D8(param_1,0xffffffffffffffff,0,*(undefined4 *)(iVar2 + 0x18),param_3,param_4,
                        param_5);
  if (uVar1 == 0) {
    fn_82B80788(param_1,auStack_a0,100,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdc3,auStack_a0);
  }
  if ((uVar1 & 0xf) == 0) {
    fn_82B80788(param_1,auStack_a0,100,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xe32,auStack_a0,(uVar1 & 0xffffffff) >> 4);
  }
  return uVar1;
}

