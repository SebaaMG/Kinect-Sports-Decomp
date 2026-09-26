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
extern int fn_82CEB1A8();


ulonglong fn_82CFF6C0(int param_1,int param_2)

{
  int iVar2;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)*(ushort *)(param_2 + 4) & 0x7fff;
  if (((int)uVar1 == 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
    if (iVar2 != 0) {
      uVar1 = fn_82CEB1A8();
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

