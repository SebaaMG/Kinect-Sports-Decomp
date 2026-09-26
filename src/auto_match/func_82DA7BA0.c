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


void fn_82DA7BA0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (*(char *)(iVar1 + 4) == '\x03') {
    if (*(char *)(param_2[1] + 4) == '\x03') {
      return;
    }
    iVar1 = *(char *)(iVar1 + 5) + iVar1;
    (**(code **)(*(int *)(*(char *)(iVar1 + 0x10) + iVar1) + 0x1c))
              (*(char *)(iVar1 + 0x10) + iVar1,(int)*(char *)(param_2[1] + 5) + param_2[1]);
  }
  iVar1 = param_2[1];
  if (*(char *)(iVar1 + 4) == '\x03') {
    iVar1 = *(char *)(iVar1 + 5) + iVar1;
    (**(code **)(*(int *)(*(char *)(iVar1 + 0x10) + iVar1) + 0x1c))
              (*(char *)(iVar1 + 0x10) + iVar1,(int)*(char *)(*param_2 + 5) + *param_2);
  }
  return;
}

