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


uint fn_82AC5428(uint param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(param_2 + 0x44);
  if (((param_1 < uVar4) || (*(int *)(param_2 + 0x48) + uVar4 < param_1 + 0x18)) ||
     (*(int *)(param_2 + 0x48) + uVar4 < *(uint *)(param_1 + 0x10) + param_1)) {
    return 0x80004005;
  }
  uVar4 = 0;
  puVar5 = (uint *)((*(uint *)(param_1 + 0x10) & 0xfffffffc) + (int)(param_1 + 0x14));
  puVar7 = (uint *)(param_1 + 0x14);
LAB_82ac5578:
  do {
    puVar8 = puVar7;
    if (puVar5 <= puVar7) {
LAB_82ac5580:
      return -(uint)(puVar5 != puVar8) & 0x80004005;
    }
    uVar2 = (ushort)*puVar7;
    uVar6 = (uint)uVar2;
    uVar3 = *(ushort *)puVar7;
    puVar8 = puVar7 + 1;
    if (uVar6 == 0) {
      uVar4 = uVar4 + 1;
      puVar7 = puVar8;
      if (2 < uVar4) goto LAB_82ac5580;
      goto LAB_82ac5578;
    }
    if (uVar4 == 0) {
      if ((uVar2 & 0xf) != 0) {
        return 0x80004005;
      }
      if (puVar5 <= puVar8) {
        return 0x80004005;
      }
      puVar7 = puVar7 + 2;
      if (*(uint *)(param_2 + 0x50) <= *puVar8) {
        return 0x80004005;
      }
      if (*(uint *)(param_2 + 0x50) < uVar6 * 4 + *puVar8) {
        return 0x80004005;
      }
      bVar1 = 0x200 < (ulonglong)(uVar2 >> 2) + (ulonglong)uVar3;
    }
    else {
      if (uVar4 == 1) {
        if (uVar3 < 0x2320) {
          return 0x80004005;
        }
        bVar1 = 0x23a0 < uVar6 * 4 + (uint)uVar3;
      }
      else {
        puVar7 = puVar8;
        if (uVar4 != 2) goto LAB_82ac5578;
        if ((uVar2 & 1) != 0) {
          return 0x80004005;
        }
        if (uVar3 < 0x2300) {
          return 0x80004005;
        }
        bVar1 = 0x2320 < (uVar6 & 0xfffe) * 2 + (uint)uVar3;
      }
      if (bVar1) {
        return 0x80004005;
      }
      puVar7 = puVar8 + uVar6;
      bVar1 = puVar5 < puVar7;
    }
    if (bVar1) {
      return 0x80004005;
    }
  } while( true );
}

