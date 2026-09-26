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
extern unsigned int uStack_24;


void fn_8250B778(int param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte in_cr6;
  longlong lVar5;
  undefined4 uStack_24;
  float afStack_20 [8];
  int iVar2;
  
  while (!(bool)(in_cr6 >> 1 & 1)) {
    puVar3 = &uStack_24;
    puVar4 = (undefined4 *)(param_4 + -4);
    lVar5 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar2 = param_4;
    if (*(float *)(param_1 + 8) <= afStack_20[2]) {
      while( true ) {
        iVar1 = iVar2 + -0x14;
        puVar4 = (undefined4 *)(iVar2 + -4);
        lVar5 = 5;
        if (*(float *)(iVar2 + -0xc) <= afStack_20[2]) break;
        puVar3 = (undefined4 *)(iVar2 + -0x18);
        do {
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar3;
          lVar5 = lVar5 + -1;
          iVar2 = iVar1;
        } while (lVar5 != 0);
      }
      puVar3 = &uStack_24;
      do {
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    else {
      while (param_1 != iVar2) {
        iVar1 = iVar2 + -0x14;
        puVar3 = (undefined4 *)(iVar2 + -4);
        puVar4 = (undefined4 *)(iVar2 + -0x18);
        lVar5 = 5;
        do {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar4;
          lVar5 = lVar5 + -1;
          iVar2 = iVar1;
        } while (lVar5 != 0);
      }
      puVar4 = &uStack_24;
      puVar3 = (undefined4 *)(param_1 + -4);
      lVar5 = 5;
      do {
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    param_4 = param_4 + 0x14;
    in_cr6 = (param_4 == param_2) << 1;
  }
  return;
}

