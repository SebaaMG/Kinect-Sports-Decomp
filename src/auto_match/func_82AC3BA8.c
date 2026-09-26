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


undefined8 fn_82AC3BA8(int param_1,int param_2,char param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)(param_2 * 0xc + param_1);
  uVar5 = 0;
  uVar4 = 0;
  bVar3 = false;
  bVar1 = *(byte *)(puVar6 + 2) & 0x1f;
  if (bVar1 < 0x1c) {
    if (bVar1 < 0x18) {
      if (0x13 < bVar1) {
        if (0x17 < bVar1) {
          return 0xffffffff80004005;
        }
        uVar5 = 1;
        bVar3 = true;
      }
    }
    else {
      if (*(char *)(param_4 + 0x28) == '\0') {
        return 0xffffffff80004005;
      }
      uVar5 = 1;
    }
  }
  else if (bVar1 != 0x1c) {
    if (bVar1 != 0x1d) {
      return 0xffffffff80004005;
    }
    uVar4 = 1;
  }
  uVar2 = *puVar6 >> 0x1a;
  if (uVar2 < 0x23) {
    if (uVar2 < 0x1b) {
      if (0x16 < uVar2) {
        if (uVar2 < 0x19) {
          uVar4 = uVar4 + 1;
        }
        else if (0x1a < uVar2) {
          return 0xffffffff80004005;
        }
      }
      goto LAB_82ac3ca0;
    }
    bVar3 = true;
  }
  else {
    if (uVar2 < 0x23) {
      return 0xffffffff80004005;
    }
    if (0x27 < uVar2) {
      if (uVar2 != 0x28) {
        if (uVar2 < 0x2a) {
          return 0xffffffff80004005;
        }
        if (0x32 < uVar2) {
          return 0xffffffff80004005;
        }
      }
      goto LAB_82ac3ca0;
    }
    if (*(char *)(param_4 + 0x28) == '\0') {
      return 0xffffffff80004005;
    }
  }
  uVar5 = uVar5 + 1;
LAB_82ac3ca0:
  if (((uVar5 < 2) && (uVar4 < 2)) && ((!bVar3 || (param_3 != '\0')))) {
    return 0;
  }
  return 0xffffffff80004005;
}

