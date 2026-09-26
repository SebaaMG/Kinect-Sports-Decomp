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


void fn_8264EF50(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int in_r13;
  
  iVar2 = KeGetCurrentProcessType();
  piVar1 = __imp__VdGlobalDevice;
  if (iVar2 == 2) {
    piVar1 = __imp__VdGlobalXamDevice;
  }
  iVar2 = (uint)*(byte *)(in_r13 + 0x10c) * 0x6c + *piVar1;
  *(undefined4 *)(((*(uint *)(iVar2 + 0x2c94) & 3) + 0x17) * 4 + iVar2 + 0x2c40) = param_1;
  *(int *)(iVar2 + 0x2c94) = *(int *)(iVar2 + 0x2c94) + 1;
  KeSetEvent(iVar2 + 0x2c7c,1,0);
  return;
}

