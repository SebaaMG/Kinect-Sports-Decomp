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


ulonglong fn_826C6B78(int param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1b4);
  if (iVar1 != 0) {
    uVar2 = 0;
    if (*(uint *)(iVar1 + 0xc) != 0) {
      iVar3 = 0;
      do {
        if (*(int *)(*(int *)(iVar1 + 8) + iVar3) == param_2) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 4;
      } while ((uVar2 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 0xc));
    }
  }
  return 0xffffffffffffffff;
}

