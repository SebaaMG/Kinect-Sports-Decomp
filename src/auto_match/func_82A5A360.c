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
extern int fn_82A5A300();
extern int fn_82A5D210();
extern unsigned int iStack00000014;


undefined8 fn_82A5A360(int param_1)

{
  int iVar1;
  int iStack00000014;
  
  iStack00000014 = param_1;
  RtlInitializeCriticalSection(param_1 + 0x24);
  iVar1 = fn_82A5D210(0,0);
  *(int *)(param_1 + 0x20) = iVar1;
  if ((iVar1 != 0) && (iVar1 != -1)) {
    iVar1 = fn_82A5D210(0,0);
    *(int *)(param_1 + 0x1c) = iVar1;
    if ((iVar1 != 0) && (iVar1 != -1)) {
      iVar1 = fn_82A5D210(1,0);
      *(int *)(param_1 + 0x18) = iVar1;
      if ((iVar1 != 0) && (iVar1 != -1)) {
        iVar1 = fn_82A5D210(0,0);
        *(int *)(param_1 + 0x14) = iVar1;
        if ((iVar1 != 0) && (iVar1 != -1)) {
          *(undefined4 *)(param_1 + 4) = 1;
          return 0;
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x18) != -1)) {
    fn_82A5A300();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 0x1c) != -1)) {
    fn_82A5A300();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x20) != -1)) {
    fn_82A5A300();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return 0xffffffff8007000e;
}

