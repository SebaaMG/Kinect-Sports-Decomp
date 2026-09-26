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


char fn_82642938(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  
  if ((((*(byte *)(param_1 + 8) & 7) == 7) || ((*(uint *)(param_1 + 0x14) & 0x40000) != 0)) ||
     ((param_2 != 0 && ((*(uint *)(param_2 + 0x14) & 0x20000) != 0)))) {
    return '\x02';
  }
  uVar3 = *(uint *)(param_1 + 0x14) >> 5 & 0x1f;
  uVar10 = 0;
  puVar8 = (uint *)(param_2 + 0x20);
  uVar4 = *(uint *)(param_2 + 0x14) >> 5 & 0x1f;
  bVar5 = false;
  uVar7 = 0;
  puVar9 = (uint *)((*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) + 9) * 4 + param_1);
  bVar6 = false;
  if (uVar4 != 0) {
    do {
      bVar5 = bVar6;
      uVar1 = *puVar8;
      if (uVar3 <= uVar10) {
        return '\0';
      }
      do {
        if ((uVar1 & 0xff) <= (uint)(byte)*puVar9) break;
        uVar10 = uVar10 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar10 < uVar3);
      if (uVar3 <= uVar10) {
        return '\0';
      }
      uVar2 = *puVar9;
      if ((uVar1 & 0xff) < (uVar2 & 0xff)) {
        return '\0';
      }
      if ((uVar1 >> 0xc & ~(uVar2 >> 0xc) & 0xf) != 0) {
        return '\0';
      }
      if (((uVar2 ^ uVar1) & 0xf00) != 0) {
        bVar5 = true;
      }
      uVar7 = uVar7 + 1;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
      uVar10 = uVar10 + 1;
      bVar6 = bVar5;
    } while (uVar7 < uVar4);
  }
  if (uVar10 < uVar3) {
    bVar5 = true;
  }
  return !bVar5 + '\x01';
}

