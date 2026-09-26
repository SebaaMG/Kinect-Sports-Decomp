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
extern unsigned int *auStack_20;
extern int fn_824CCD80();
extern int fn_824CD030();
extern int fn_82560100();
extern unsigned int lbl_821CC160;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;


void fn_822BD460(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_20 [2];
  
  iVar1 = fn_82560100((double)lbl_821CC160,param_1,param_2,&stack0x00000020,param_4,
                            &stack0x00000030,0,0,0);
  if (((param_3 & 0xffffffff) != 0) && (iVar2 = fn_824CD030(param_3), iVar2 != 0)) {
    auStack_20[0] = fn_824CCD80(param_3);
    (**(code **)(**(int **)(iVar1 + 0x1b0) + 8))(*(int **)(iVar1 + 0x1b0),0x19,auStack_20);
  }
  return;
}

