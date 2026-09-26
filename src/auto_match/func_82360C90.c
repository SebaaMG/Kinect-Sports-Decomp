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
extern int fn_82359108();
extern int fn_82359200();
extern int fn_82417F58();
extern unsigned int lbl_821CC160;


void fn_82360C90(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)((int)param_1 + 0xa0);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x40) != 1)) {
    uVar2 = fn_82417F58((double)lbl_821CC160,*(undefined4 *)((int)param_1 + 0x2b20));
    fn_82359108(param_1,uVar2,0);
  }
  else {
    fn_82359200((double)lbl_821CC160,param_1,param_2,param_2);
  }
  return;
}

