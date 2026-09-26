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
extern int fn_83008488();
extern int fn_83013880();


void fn_830087C8(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int *apiStack_50 [20];
  
  fn_83008488();
  *(int *)(param_1 + 0x1c) = (int)param_3;
  apiStack_50[0] = (int *)0x0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar1 = fn_83013880(0xffffffff831bc7f4,param_3,apiStack_50);
  if (iVar1 == 1) {
    if (apiStack_50[0] != (int *)0x0) {
      (**(code **)(*apiStack_50[0] + 0xc))(apiStack_50[0],0xffffffff831bc7f4,param_4,param_5);
      *(int **)(param_1 + 0x18) = apiStack_50[0];
    }
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 4;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x1000000;
  return;
}

