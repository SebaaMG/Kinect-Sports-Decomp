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
extern int fn_82692200();
extern unsigned int lbl_831F129C;


undefined8 fn_8267BED0(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)(((uint)((param_1 & 0xffffffff) >> 0x11) & 0x7ff8) +
                                     lbl_831F129C + 4) +
                           ((uint)((param_1 & 0xffffffff) >> 10) & 0x3fc)) + 0x14);
  if (*(char *)(iVar1 + 100) == '\0') {
    uVar2 = fn_82692200(*(undefined4 *)(iVar1 + 0x68),param_2);
  }
  else {
    RtlEnterCriticalSection(iVar1 + 0x48);
    uVar2 = fn_82692200(*(undefined4 *)(iVar1 + 0x68),param_2);
    RtlLeaveCriticalSection(iVar1 + 0x48);
  }
  return uVar2;
}

