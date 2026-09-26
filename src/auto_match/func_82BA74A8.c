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
extern int fn_82BC6928();
extern int fn_82BC69A8();
extern int fn_82BC6A18();


void fn_82BA74A8(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  
  puVar1 = *(uint **)(param_1 + 0x14);
  uVar4 = -(uint)((*puVar1 & 0xffff) < 100) & *puVar1 & 0xffff;
  if (uVar4 == 0xf) {
    puVar3 = puVar1 + 1;
    if ((short)*puVar1 != 0xf) {
      puVar3 = (uint *)0x0;
    }
    uVar4 = 0;
    puVar5 = puVar1 + 2;
    *(uint **)(param_1 + 0x14) = puVar1 + 1;
    *(uint **)(param_1 + 0x14) = puVar5;
    if ((short)*puVar3 != 0) {
      do {
        puVar5 = puVar5 + 1;
        uVar4 = uVar4 + 1;
        *(uint **)(param_1 + 0x14) = puVar5;
      } while (uVar4 < (ushort)*puVar3);
    }
  }
  else if (uVar4 == 0x4f) {
    puVar3 = puVar1 + 1;
    if ((short)*puVar1 != 0x4f) {
      puVar3 = (uint *)0x0;
    }
    uVar4 = 0;
    puVar5 = puVar1 + 2;
    *(uint **)(param_1 + 0x14) = puVar1 + 1;
    *(uint **)(param_1 + 0x14) = puVar5;
    if ((short)*puVar3 != 0) {
      do {
        puVar5 = puVar5 + 1;
        uVar4 = uVar4 + 1;
        *(uint **)(param_1 + 0x14) = puVar5;
      } while (uVar4 < (ushort)*puVar3);
    }
  }
  else {
    *(uint **)(param_1 + 0x14) = puVar1 + 1;
    iVar6 = 0;
    iVar2 = fn_82BC6928(uVar4);
    if (0 < iVar2) {
      do {
        puVar1 = *(uint **)(param_1 + 0x14);
        *(uint **)(param_1 + 0x14) = puVar1 + 1;
        if ((*puVar1 & 0x400000) != 0) {
          *(uint **)(param_1 + 0x14) = puVar1 + 2;
        }
        if ((*puVar1 & 0x800000) != 0) {
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
        }
        iVar6 = iVar6 + 1;
        iVar2 = fn_82BC6928(uVar4);
      } while (iVar6 < iVar2);
    }
    iVar6 = 0;
    iVar2 = fn_82BC69A8(uVar4);
    if (0 < iVar2) {
      do {
        puVar1 = *(uint **)(param_1 + 0x14);
        *(uint **)(param_1 + 0x14) = puVar1 + 1;
        if ((*puVar1 & 0x400000) != 0) {
          *(uint **)(param_1 + 0x14) = puVar1 + 2;
        }
        if ((*puVar1 & 0x800000) != 0) {
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
        }
        iVar6 = iVar6 + 1;
        iVar2 = fn_82BC69A8(uVar4);
      } while (iVar6 < iVar2);
    }
    iVar6 = 0;
    iVar2 = fn_82BC6A18(uVar4);
    if (0 < iVar2) {
      do {
        iVar6 = iVar6 + 1;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
        iVar2 = fn_82BC6A18(uVar4);
      } while (iVar6 < iVar2);
    }
  }
  return;
}

