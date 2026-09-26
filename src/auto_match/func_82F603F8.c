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


undefined8 fn_82F603F8(int param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  RtlEnterCriticalSection(param_1 + 0xd4);
  if ((*(char *)(param_1 + 4) == '\0') || (*(uint *)(param_1 + 8) <= *(uint *)(param_1 + 0xc))) {
    uVar1 = 0xffffffff82240404;
  }
  else if (param_2 == (int *)0x0) {
    uVar1 = 0xffffffff82240403;
  }
  else {
    *(int **)(*(uint *)(param_1 + 0xc) * 4 + *(int *)(param_1 + 0x1c)) = param_2;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    (**(code **)(*param_2 + 4))(param_2);
  }
  RtlLeaveCriticalSection(param_1 + 0xd4);
  return uVar1;
}

