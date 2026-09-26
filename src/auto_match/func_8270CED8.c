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
extern int fn_8270C708();


undefined8 fn_8270CED8(int param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
code_r0x8270cf00:
    uVar1 = 0;
  }
  else {
    if (param_2 != *(int *)(param_1 + 0x10)) {
      fn_8270C708(param_1);
      if (param_2 == 2) {
        if ((*(int **)(param_1 + 8) == (int *)0x0) ||
           (cVar2 = (**(code **)(**(int **)(param_1 + 8) + 0xc))(), cVar2 == '\0'))
        goto code_r0x8270cf00;
      }
      *(int *)(param_1 + 0x10) = param_2;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

