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
extern int fn_82318F38();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_82318788(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint uStack0000001c;
  undefined4 *puStack_20;
  undefined4 *apuStack_1c [3];
  
  puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  puStack_20 = *(undefined4 **)(param_1 + 4);
  while (puVar2 = puVar4, *(char *)((int)puVar2 + 0x25) == '\0') {
    if ((uint)puVar2[3] < param_2) {
      puVar4 = (undefined4 *)puVar2[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar2;
      puStack_20 = puVar2;
    }
  }
  puVar4 = *(undefined4 **)(param_1 + 4);
  if ((puStack_20 == puVar4) || (param_2 < (uint)puStack_20[3])) {
    ppuVar3 = apuStack_1c;
    apuStack_1c[0] = puVar4;
  }
  else {
    ppuVar3 = &puStack_20;
  }
  if (*ppuVar3 == puVar4) {
    uStack0000001c = param_2;
    iVar1 = fn_82318F38(param_1,&stack0x0000001c);
    puVar2 = (undefined4 *)(iVar1 + -4);
    puVar4 = (undefined4 *)(param_3 + -4);
    lVar5 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

