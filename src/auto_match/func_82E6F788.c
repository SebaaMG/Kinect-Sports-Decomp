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
extern unsigned int *auStack_30;


undefined8 fn_82E6F788(int param_1,ulonglong param_2,longlong *param_3)

{
  undefined8 uVar1;
  uint auStack_30 [2];
  longlong alStack_28 [5];
  
  if (param_3 == (longlong *)0x0) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    *param_3 = 0;
    if (param_2 < 0x100000000) {
      alStack_28[0] = 0;
      uVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x44))
                        (*(int **)(param_1 + 0x58),param_2 & 0xffffffff,alStack_28,0);
      if (-1 < (int)uVar1) {
        auStack_30[0] = 0;
        uVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x40))
                          (*(int **)(param_1 + 0x58),auStack_30);
        if (-1 < (int)uVar1) {
          *param_3 = *(longlong *)(param_1 + 0x30) + (ulonglong)auStack_30[0] + alStack_28[0];
        }
      }
    }
    else {
      uVar1 = 0xffffffffc00d3a9d;
    }
  }
  return uVar1;
}

