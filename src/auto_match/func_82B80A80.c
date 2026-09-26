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


void fn_82B80A80(undefined8 param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
                  undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((*param_2 & 0x40000000) == 0) {
    if (param_5 <= param_4) {
      return;
    }
    iVar5 = param_5 - param_4;
    iVar3 = param_4 << 3;
    uVar2 = 0;
    do {
      puVar4 = (undefined4 *)(iVar3 + param_2[6]);
      iVar3 = iVar3 + 8;
      *puVar4 = param_6;
      uVar1 = uVar2 & 0xfffc;
      uVar2 = uVar2 + 4;
      puVar4[1] = uVar1 | puVar4[1] & 0x10000 | 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return;
  }
  uVar2 = 0;
  if ((*param_2 & 0x1fff8) == 0) {
    return;
  }
  iVar3 = 0;
  do {
    uVar1 = *(uint *)(iVar3 + param_2[7]);
    if ((uVar1 >> 4 & 0x3fff) == param_3) {
      puVar4 = (undefined4 *)(param_2[6] + iVar3);
      *puVar4 = param_6;
      puVar4[1] = (uint)((0x1fU - LZCOUNT(uVar1 & 0xf) & 0xffffffff) << 2) & 0xfffc |
                  puVar4[1] & 0x10000 | 1;
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 8;
  } while (uVar2 < (*param_2 >> 3 & 0x3fff));
  return;
}

