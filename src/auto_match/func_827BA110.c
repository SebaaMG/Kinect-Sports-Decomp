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


void fn_827BA110(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      puVar4 = (uint *)(*(int *)((uVar3 >> 2 & 0x3ffffffc) + *(int *)(param_1 + 0x10)) +
                       (uVar3 & 0xf) * 8);
      uVar1 = puVar4[1];
      if (2 < uVar1) {
        uVar2 = *puVar4;
        uVar5 = (uVar2 + uVar1) - 1;
        psVar7 = (short *)(*(int *)((uVar2 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x20)) +
                          (uVar2 & 0x3f) * 4);
        psVar6 = (short *)(*(int *)((uVar5 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x20)) +
                          (uVar5 * 4 & 0xfc));
        if ((*psVar7 == *psVar6) && (psVar7[1] == psVar6[1])) {
          puVar4[1] = uVar1 - 1;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 4));
  }
  return;
}

