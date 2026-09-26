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
extern int fn_82535298();
extern int fn_82536288();


void fn_8260E140(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  int *piVar1;
  bool bVar2;
  int aiStack_10 [4];
  
  if (param_5 != 0) {
    return;
  }
  piVar1 = (int *)(param_3 + 0x10);
  if (piVar1 == (int *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = *piVar1 != 0;
  }
  if (bVar2) {
    aiStack_10[0] = *piVar1;
    aiStack_10[0] =
         fn_82535298(aiStack_10,*(undefined4 *)(**(int **)(param_1 + 0x60) + 0x84c),
                           0xffffffff83296bc0,0xffffffff83296bd0);
    fn_82536288(aiStack_10);
  }
  return;
}

