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
extern unsigned int *auStack_440;
extern int fn_824C1BF8();
extern int fn_8265C9E0();
extern int fn_82F691F0();


void fn_82245C80(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined1 auStack_440 [1064];
  
  fn_824C1BF8(auStack_440,param_3);
  (**(code **)(**(int **)(param_1 + 0x58) + 0x14))();
  if (param_4 != 0) {
    *(undefined4 *)(param_4 + 4) = 7;
    *(undefined4 *)(param_4 + 0xc) = 0x428;
    uVar1 = fn_8265C9E0(0x428);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar1,0,0x428);
  }
  return;
}

