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


ulonglong fn_82E06078(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x2c);
  iVar4 = 0;
  if (0 < (int)*(uint *)(param_1 + 0x2c)) {
    iVar3 = 0;
    do {
      lVar1 = fn_82E06078(*(undefined4 *)(iVar3 + *(int *)(param_1 + 0x28)));
      iVar4 = iVar4 + 1;
      uVar2 = lVar1 + uVar2;
      iVar3 = iVar3 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x2c));
  }
  return uVar2;
}

