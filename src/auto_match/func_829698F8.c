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
extern int fn_82969740();


undefined8 fn_829698F8(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  
  puVar2 = *(uint **)(param_3 * 4 + *(int *)(param_1 + 0x14));
  puVar3 = *(uint **)(param_2 * 4 + *(int *)(param_1 + 0x14));
  puVar2[0xc] = param_2;
  uVar4 = fn_82969740(param_1,puVar3,puVar2);
  if (-1 < (int)uVar4) {
    uVar1 = *puVar2;
    uVar6 = *puVar3 & 0xe000000;
    uVar5 = *puVar3 & 0xf1ffffff;
    *puVar3 = uVar5;
    if (uVar6 <= (uVar1 & 0xe000000)) {
      uVar6 = uVar1 & 0xe000000;
    }
    *puVar3 = uVar5 | uVar6;
    if (puVar3[0x18] == 0) {
      puVar3[0x18] = puVar2[0x18];
      puVar3[0x19] = puVar2[0x19];
    }
    uVar4 = 0;
  }
  return uVar4;
}

