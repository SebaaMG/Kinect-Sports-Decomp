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
extern int fn_82A76730();


undefined8 fn_82A768D0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x84) + 0x14))
                      (*(int **)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x88) = uVar1;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x28))
            (*(int **)(param_1 + 8),1,(ulonglong)*(uint *)(param_1 + 0x78) + 0x38,1,param_1 + 0x88,1
            );
  fn_82A76730(param_1);
  return 0;
}

