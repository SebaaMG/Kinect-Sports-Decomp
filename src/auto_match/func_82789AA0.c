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
extern int fn_82789508();


void fn_82789AA0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    do {
      puVar4 = (uint *)(*(int *)((uVar3 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x68)) +
                       (uVar3 & 0xff) * 0xc);
      uVar1 = *puVar4;
      if (*(int *)(*(int *)((puVar4[1] >> 6 & 0x3fffffc) + *(int *)(param_1 + 0xc)) +
                   (puVar4[1] & 0xff) * 0xc + 8) <
          *(int *)(*(int *)((uVar1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0xc)) +
                   (uVar1 & 0xff) * 0xc + 8)) {
        uVar2 = puVar4[1];
        puVar4[1] = uVar1;
        *puVar4 = uVar2;
      }
      if (*(int *)(*(int *)((puVar4[2] >> 6 & 0x3fffffc) + *(int *)(param_1 + 0xc)) +
                   (puVar4[2] & 0xff) * 0xc + 8) <
          *(int *)(*(int *)((puVar4[1] >> 6 & 0x3fffffc) + *(int *)(param_1 + 0xc)) +
                   (puVar4[1] & 0xff) * 0xc + 8)) {
        uVar1 = puVar4[2];
        puVar4[2] = puVar4[1];
        puVar4[1] = uVar1;
      }
      uVar1 = *puVar4;
      if (*(int *)(*(int *)((puVar4[1] >> 6 & 0x3fffffc) + *(int *)(param_1 + 0xc)) +
                   (puVar4[1] & 0xff) * 0xc + 8) <
          *(int *)(*(int *)((uVar1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0xc)) +
                   (uVar1 & 0xff) * 0xc + 8)) {
        uVar2 = puVar4[1];
        puVar4[1] = uVar1;
        *puVar4 = uVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x5c));
  }
  fn_82789508((uint *)(param_1 + 0x5c),0);
  return;
}

