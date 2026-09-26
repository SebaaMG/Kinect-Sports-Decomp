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


undefined4 fn_822ABA88(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 *puStack_10;
  undefined4 *apuStack_c [3];
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  puStack_10 = *(undefined4 **)(param_1 + 4);
  while (puVar2 = puVar1, *(char *)((int)puVar2 + 0x15) == '\0') {
    if ((uint)puVar2[3] < param_2) {
      puVar1 = (undefined4 *)puVar2[2];
    }
    else {
      puVar1 = (undefined4 *)*puVar2;
      puStack_10 = puVar2;
    }
  }
  if ((puStack_10 == *(undefined4 **)(param_1 + 4)) || (param_2 < (uint)puStack_10[3])) {
    apuStack_c[0] = *(undefined4 **)(param_1 + 4);
    ppuVar3 = apuStack_c;
  }
  else {
    ppuVar3 = &puStack_10;
  }
  return (*ppuVar3)[4];
}

