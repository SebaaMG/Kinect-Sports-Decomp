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
extern int fn_82243668();
extern int fn_82243728();
extern int fn_828AC670();
extern int fn_82F691F0();


undefined1 fn_822437F0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = fn_82243728(param_1,0);
  if (lVar1 != 0) {
    fn_82243668(param_1,1,param_2,8);
    fn_82243668(param_1,2,param_2 + 0x2c,0x10);
    fn_82243668(param_1,3,param_2 + 8,0x24);
    uVar2 = fn_82243728(param_1,4);
    uVar3 = fn_82243728(param_1,5);
    fn_828AC670(param_3,uVar2,uVar3);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_2,0,0x3c);
}

