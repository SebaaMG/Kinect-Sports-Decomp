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
extern unsigned int *auStack_108;
extern unsigned int *auStack_10c;
extern unsigned int *auStack_110;
extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern int fn_82A1C120();
extern int fn_82F691F0();


void fn_8225F748(int param_1)

{
  int iVar1;
  undefined1 auStack_110 [4];
  undefined1 auStack_10c [4];
  undefined1 auStack_108 [88];
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [112];
  
  *(undefined1 *)(param_1 + 2) = 1;
  iVar1 = fn_82A1C120(0xffffffff821a6764,auStack_70,0x40,auStack_110,auStack_108,auStack_10c,
                            auStack_b0,0x40);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_1 + 3,0,0x24);
  }
  return;
}

