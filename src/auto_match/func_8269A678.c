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
extern int fn_826A98D8();


ulonglong fn_8269A678(int param_1,int param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if ((ulonglong)*(uint *)(param_1 + 4) != 0) {
    return (ulonglong)*(uint *)(param_1 + 4);
  }
  if ((*(int *)(param_2 + 0x68) == 0) || (*(int *)(*(int *)(param_1 + 0xc) + 0x10) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_2 + 0x68) + 0x5c))();
    uVar2 = fn_826A98D8(uVar1,(int *)(param_1 + 0xc),0);
  }
  return uVar2;
}

