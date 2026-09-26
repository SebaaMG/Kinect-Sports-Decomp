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
extern unsigned int *auStack_90;
extern int fn_8265C940();
extern int fn_82A1EFC0();
extern int fn_82BD9E68();


undefined8 fn_82BDA558(undefined4 param_1)

{
  int iVar1;
  undefined4 *in_r8;
  undefined1 auStack_90 [144];
  
  iVar1 = fn_8265C940(0x58,0x618a8010);
  if (iVar1 == 0) {
    fn_82BD9E68(0);
    *in_r8 = 0;
    return 0xffffffff8007000e;
  }
  *(undefined4 *)(iVar1 + 8) = param_1;
  *(undefined4 *)(iVar1 + 0x44) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_90,0,0x18);
}

