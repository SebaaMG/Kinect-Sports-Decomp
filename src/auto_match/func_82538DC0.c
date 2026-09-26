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
extern int fn_82268638();
extern int fn_82268D78();


int fn_82538DC0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  if (*(uint *)(*(int *)(param_1 + 0x10) + 4) < *(uint *)(*(int *)(param_1 + 0x10) + 8)) {
    *(int *)(*(int *)(param_1 + 0x10) + 4) = iVar1 + 0x38;
    fn_82268638();
  }
  else {
    if (iVar1 != 0) {
      fn_82268D78();
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4) + 0x38;
    *(int *)(*(int *)(param_1 + 0x10) + 4) = iVar1;
    *(int *)(*(int *)(param_1 + 0x10) + 8) = iVar1;
  }
  return param_1;
}

