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
extern int fn_82A0B708();
extern int fn_82F691F0();


void fn_82A0B9C8(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 2;
  iVar1 = param_1;
  do {
    fn_82A0B708(iVar1);
    lVar2 = lVar2 + -1;
    iVar1 = iVar1 + 0x5550;
  } while (-1 < lVar2);
  *(undefined4 *)(param_1 + 0xebe4) = 2;
  *(undefined4 *)(param_1 + 0x4144) = 0;
  *(undefined4 *)(param_1 + 0x9694) = 1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0xfff0,0,0x340);
}

