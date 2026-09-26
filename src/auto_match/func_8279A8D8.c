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


undefined8 fn_8279A8D8(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x10);
  if (uVar1 != 0) {
    iVar4 = 0;
    do {
      if (uVar2 < uVar1) {
        iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + iVar4);
      }
      else {
        iVar3 = 0;
      }
      if ((*(ushort *)(*(int *)(iVar3 + 0xc) + 0x16) & 0x600) != 0) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar2 < uVar1);
  }
  return 0;
}

