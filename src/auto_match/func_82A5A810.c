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
#define TBLr 0
extern int fn_82A5A670();
extern int fn_82F691F0();


void fn_82A5A810(int param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x78) = param_3;
  lVar2 = (**(code **)(**(int **)(param_3 + 0x84) + 8))();
  if ((lVar2 == 0) || ((int)lVar2 == -1)) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  else {
    fn_82A5A670(param_1);
    *(undefined4 *)(param_1 + 0x7c) = 1;
  }
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(undefined4 *)(param_1 + 0x23c) = 2;
  uVar1 = TBLr;
  *(undefined8 *)(param_1 + 0x2a0) = uVar1;
  *(undefined8 *)(param_1 + 0x2a8) = uVar1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x240,0,0x50);
}

