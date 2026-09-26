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


void fn_82645D88(int param_1,int param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  bVar1 = *(byte *)(param_1 + 0x2abf);
  *(byte *)(param_1 + 0x2abf) = bVar1 | 0x20;
  if (param_2 != 0) {
    *(byte *)(param_1 + 0x2abf) = bVar1 | 0x30;
  }
  if ((*(ushort *)(param_1 + 0x2880) & 3) == 0) {
    uVar7 = 0x10;
  }
  else {
    uVar7 = 8;
    if ((*(ushort *)(param_1 + 0x2880) & 3) != 1) {
      uVar5 = 0x10;
      uVar6 = 0x28;
      goto LAB_82645de0;
    }
  }
  uVar5 = 0x20;
  uVar6 = 0x50;
LAB_82645de0:
  uVar8 = (uVar5 + param_4) - 1 & ~(uVar5 - 1);
  trapWord(6,uVar5,0);
  if ((int)param_3 != 0) {
    piVar3 = (int *)(param_1 + 0x33e4);
    puVar4 = (uint *)(param_1 + 0x336c);
    do {
      puVar2 = puVar4 + 1;
      trapWord(6,uVar5,0);
      puVar4 = puVar4 + 2;
      trapWord(6,uVar7,0);
      piVar3 = piVar3 + 1;
      *piVar3 = (int)(*puVar4 / uVar7) * (int)((uVar8 & 0xffffffff) / uVar5) +
                (int)(*puVar2 / uVar5);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *(int *)(param_1 + 0x3424) = (int)uVar8;
  trapWord(6,uVar6,0);
  *(uint *)(param_1 + 0x2880) =
       (uint)((uVar8 & 0xffffffff) << 0x12) | *(uint *)(param_1 + 0x2880) & 0x3ffff;
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 0x100;
  *(int *)(param_1 + 0x3428) = (int)(((uVar6 + param_4) - 1 & 0xffffffff) / uVar6) * (int)uVar6;
  if (((*(byte *)(param_1 + 0x2abf) & 0x20) == 0) &&
     ((*(uint *)(param_1 + 0x2efc) & 0xe0000) == 0x40000)) {
    uVar7 = *(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffeff;
  }
  else {
    uVar7 = *(ulonglong *)(param_1 + 0x28) | 0x100;
  }
  *(ulonglong *)(param_1 + 0x28) = uVar7;
  return;
}

