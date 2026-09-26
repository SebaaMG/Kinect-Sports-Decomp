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
extern int fn_82CFBB08();


void fn_82CE81C8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  RtlEnterCriticalSection();
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  if (*(short *)((*(char *)(param_1 + 0xd0) + 0x11) * 2 + iVar1) != 0) {
    iVar2 = (*(char *)(param_1 + 0xd0) + 0x11) * 2;
    *(short *)(iVar2 + iVar1) = *(short *)(iVar2 + iVar1) + -1;
    fn_82CFBB08(*(undefined4 *)((*(char *)(param_1 + 0xd0) + 0x1e) * 4 + param_1),1);
  }
  RtlLeaveCriticalSection(param_1);
  return;
}

