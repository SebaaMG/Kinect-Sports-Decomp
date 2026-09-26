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
extern int fn_82F691F0();
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;


void fn_82CB2190(int param_1)

{
  undefined4 in_r7;
  undefined4 in_r8;
  undefined4 in_r9;
  undefined4 in_r10;
  undefined4 uStack00000034;
  undefined4 uStack0000003c;
  undefined4 uStack00000044;
  undefined4 uStack0000004c;
  
  uStack00000034 = in_r7;
  uStack0000003c = in_r8;
  uStack00000044 = in_r9;
  uStack0000004c = in_r10;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(undefined4 *)(param_1 + 0x6e4),0,0x80);
}

