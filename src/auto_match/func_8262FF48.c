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
extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;


void fn_8262FF48(undefined8 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = KeGetCurrentProcessType();
  piVar1 = __imp__VdGlobalDevice;
  if (iVar2 == 2) {
    piVar1 = __imp__VdGlobalXamDevice;
  }
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x3c) = *(int *)(iVar2 + 0x3c) + 1;
  }
  *param_2 = iVar2;
  return;
}

