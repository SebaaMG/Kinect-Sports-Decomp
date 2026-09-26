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
extern int fn_82515798();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


undefined8 fn_825156F8(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  uint uStack0000001c;
  undefined4 *puStack_10;
  undefined4 *apuStack_c [3];
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  puStack_10 = puVar1;
  puVar3 = (undefined4 *)puVar1[1];
  while (*(char *)((int)puVar3 + 0x49) == '\0') {
    if ((uint)puVar3[3] < param_2) {
      puVar3 = (undefined4 *)puVar3[2];
    }
    else {
      puStack_10 = puVar3;
      puVar3 = (undefined4 *)*puVar3;
    }
  }
  if ((puStack_10 == *(undefined4 **)(param_1 + 4)) || (param_2 < (uint)puStack_10[3])) {
    ppuVar4 = apuStack_c;
    apuStack_c[0] = *(undefined4 **)(param_1 + 4);
  }
  else {
    ppuVar4 = &puStack_10;
  }
  if (*ppuVar4 == puVar1) {
    uVar2 = 0;
  }
  else {
    uStack0000001c = param_2;
    uVar2 = fn_82515798(param_1,&stack0x0000001c);
  }
  return uVar2;
}

