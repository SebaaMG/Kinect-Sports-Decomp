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
extern int fn_82CFBBF0();


longlong fn_82CEB3B0(int param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  puVar1 = *(uint **)(param_1 + 0x24);
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  uVar4 = 0;
  if (0 < (int)puVar1[1]) {
    iVar3 = 0;
    do {
      iVar2 = fn_82CFBBF0(*(undefined4 *)(iVar3 + *puVar1),param_2);
      if (iVar2 == 0) {
        return (uVar4 + (uVar4 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + (ulonglong)*puVar1 + 4;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while ((int)uVar4 < (int)puVar1[1]);
  }
  return 0;
}

