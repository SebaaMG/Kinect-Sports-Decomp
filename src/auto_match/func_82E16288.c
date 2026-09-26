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


undefined4 fn_82E16288(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)(param_1 + 0x10);
    uVar6 = (uVar3 >> 4) * -0x61c8864f & uVar1;
    iVar5 = uVar6 * 8;
    uVar4 = *(uint *)(iVar5 + iVar2);
    while (uVar4 != 0xffffffff) {
      if (uVar4 == uVar3) {
        return *(undefined4 *)(iVar5 + iVar2 + 4);
      }
      uVar6 = uVar6 + 1 & uVar1;
      iVar5 = uVar6 * 8;
      uVar4 = *(uint *)(iVar5 + iVar2);
    }
  }
  return 0;
}

