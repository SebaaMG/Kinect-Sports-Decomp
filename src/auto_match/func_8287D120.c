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
extern unsigned int iStack00000010;
extern unsigned int iStack00000018;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;


void fn_8287D120(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iStack00000010;
  uint uStack00000014;
  int iStack00000018;
  uint uStack0000001c;
  
  uStack00000014 = (uint)param_1;
  uStack0000001c = (uint)param_2;
  if ((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
    iStack00000018 = (int)(param_2 >> 0x20);
    iStack00000010 = (int)(param_1 >> 0x20);
    do {
      uStack0000001c = uStack0000001c - 1;
      if (uStack00000014 == uStack0000001c) {
        return;
      }
      uVar6 = uStack0000001c >> 2;
      if (*(uint *)(iStack00000018 + 8) <= uVar6) {
        uVar6 = uVar6 - *(uint *)(iStack00000018 + 8);
      }
      uVar7 = uStack00000014 >> 2;
      if (*(uint *)(iStack00000010 + 8) <= uVar7) {
        uVar7 = uVar7 - *(uint *)(iStack00000010 + 8);
      }
      iVar4 = (uStack00000014 & 3) * 4;
      iVar5 = (uStack0000001c & 3) * 4;
      uStack00000014 = uStack00000014 + 1;
      iVar1 = *(int *)(*(int *)(iStack00000018 + 4) + uVar6 * 4);
      iVar2 = *(int *)(*(int *)(iStack00000010 + 4) + uVar7 * 4);
      uVar3 = *(undefined4 *)(iVar2 + iVar4);
      *(undefined4 *)(iVar2 + iVar4) = *(undefined4 *)(iVar1 + iVar5);
      *(undefined4 *)(iVar1 + iVar5) = uVar3;
    } while (uStack00000014 != uStack0000001c);
  }
  return;
}

