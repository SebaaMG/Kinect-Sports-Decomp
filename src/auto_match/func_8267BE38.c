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
extern int fn_8267BC98();
extern int fn_82692538();
extern unsigned int lbl_831F129C;


void fn_8267BE38(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 & 0xffffffff) != 0) {
    iVar2 = *(int *)(*(int *)(((uint)((param_1 & 0xffffffff) >> 0x11) & 0x7ff8) + lbl_831F129C + 4)
                    + ((uint)((param_1 & 0xffffffff) >> 10) & 0x3fc));
    iVar1 = *(int *)(iVar2 + 0x14);
    if (*(char *)(iVar1 + 100) == '\0') {
      fn_82692538(*(undefined4 *)(iVar1 + 0x68),iVar2,param_1);
    }
    else {
      RtlEnterCriticalSection(iVar1 + 0x48);
      fn_82692538(*(undefined4 *)(iVar1 + 0x68),iVar2,param_1);
      RtlLeaveCriticalSection(iVar1 + 0x48);
    }
    if ((param_1 & 0xffffffff) == (ulonglong)*(uint *)(iVar1 + 0x14)) {
      fn_8267BC98(iVar1);
    }
  }
  return;
}

