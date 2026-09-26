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
extern int fn_82526608();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_825184D8(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  uint uStack0000001c;
  undefined4 *puStack_20;
  undefined4 *apuStack_1c [3];
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  puStack_20 = puVar1;
  puVar2 = (undefined4 *)puVar1[1];
  while (*(char *)((int)puVar2 + 0x15) == '\0') {
    if ((uint)puVar2[3] < param_2) {
      puVar2 = (undefined4 *)puVar2[2];
    }
    else {
      puStack_20 = puVar2;
      puVar2 = (undefined4 *)*puVar2;
    }
  }
  if ((puStack_20 == *(undefined4 **)(param_1 + 0x14)) || (param_2 < (uint)puStack_20[3])) {
    ppuVar3 = apuStack_1c;
    apuStack_1c[0] = *(undefined4 **)(param_1 + 0x14);
  }
  else {
    ppuVar3 = &puStack_20;
  }
  if (*ppuVar3 == puVar1) {
    uStack0000001c = param_2;
    puVar1 = (undefined4 *)fn_82526608(param_1 + 0x10,&stack0x0000001c);
    *puVar1 = param_3;
  }
  return;
}

