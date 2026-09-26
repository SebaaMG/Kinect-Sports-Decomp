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
extern int fn_8265C940();
extern int fn_82F691F0();


undefined8 fn_82AC5880(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + 0x8058);
  *puVar3 = 0;
  *(uint *)(param_1 + 0x805c) = 0;
  *(undefined4 *)(param_1 + 0x8060) = 0;
  *(undefined4 *)(param_1 + 0x8064) = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x34) >> 0x18 & 7;
    *(undefined4 *)(param_1 + 0x8060) = 1;
    if (uVar1 == 2) {
      *(undefined4 *)(param_1 + 0x8064) = 1;
    }
    else if (uVar1 != 0) {
      return 0xffffffff80004005;
    }
    if (0x10 < (*(uint *)(param_1 + 0x1c) & 0x1f)) {
      return 0xffffffff80004005;
    }
    *puVar3 = (*(uint *)(param_1 + 0x34) >> 0x14 & 0xf) + 1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x34) >> 0x1c & 7;
    if (4 < uVar1) {
      return 0xffffffff80004005;
    }
    *puVar3 = uVar1;
    *(uint *)(param_1 + 0x805c) = *(uint *)(param_1 + 0x34) >> 0x1b & 1;
  }
  puVar2 = (undefined4 *)fn_8265C940(0x10000c,0x24870000);
  if (puVar2 == (undefined4 *)0x0) {
    return 0xffffffff80004005;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(puVar2 + 3,0,0x100000);
}

