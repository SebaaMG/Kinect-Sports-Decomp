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
extern int fn_82A1E508();


undefined8 fn_82E665B0(int param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  uVar3 = 0xffffffff;
  if ((param_1 == -1) || ((param_2 & 0xffffffff) == 0)) {
LAB_82e665d4:
    uVar5 = 0xffffffff80070057;
  }
  else {
    uVar4 = 0;
    do {
      if ((param_2 & 0xffffffff) == 0) break;
      if (((param_2 & 1) != 0) && (bVar1 = uVar3 != 0xffffffff, uVar3 = uVar4, bVar1))
      goto LAB_82e665d4;
      uVar4 = uVar4 + 1;
      param_2 = (param_2 & 0xffffffff) >> 1;
    } while (uVar4 < 6);
    iVar2 = fn_82A1E508();
    if (iVar2 == -1) {
      uVar5 = 0xffffffff80004005;
    }
  }
  return uVar5;
}

