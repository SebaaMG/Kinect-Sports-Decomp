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
extern int fn_826D79D8();


int fn_826D97A0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = 4;
    uVar3 = 0x1505;
    lVar4 = 4;
    do {
      iVar2 = iVar2 + -1;
      uVar3 = (uint)*(byte *)(iVar2 + param_2) + uVar3 * 0x1003f;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    iVar2 = fn_826D79D8(param_1,param_2,*(uint *)(iVar1 + 4) & uVar3);
    if (-1 < iVar2) {
      return (iVar2 + 1) * 0x10 + iVar1;
    }
  }
  return 0;
}

