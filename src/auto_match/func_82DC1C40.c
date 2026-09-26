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
extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82DC1C40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = fn_82CE5410();
  if (*(uint *)(iVar1 + 0x20) == (*(uint *)(iVar1 + 0x24) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar2 + 0x10),(int *)(iVar1 + 0x1c),4);
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x20) * 4 + *(int *)(iVar1 + 0x1c)) = 10;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  *(undefined1 *)(param_1 + 0x16) = 1;
  return;
}

