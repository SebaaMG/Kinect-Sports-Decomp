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


uint * fn_8255BFC0(int *param_1,ushort param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  if (param_2 < 0x2711) {
    puVar1 = (uint *)*param_1;
    if (puVar1 == (uint *)0x0) {
      return (uint *)0x0;
    }
    puVar3 = puVar1 + 2;
    uVar2 = 0;
    if (*puVar1 != 0) {
      do {
        if (*(ushort *)((int)puVar3 + 6) == param_2) {
          return puVar3;
        }
        uVar2 = uVar2 + 1;
        puVar3 = (uint *)(*puVar3 + (int)puVar3);
      } while (uVar2 < *puVar1);
    }
  }
  else {
    puVar1 = (uint *)param_1[1];
    if (puVar1 == (uint *)0x0) {
      return (uint *)0x0;
    }
    puVar3 = puVar1 + 2;
    uVar2 = 0;
    if (*puVar1 != 0) {
      do {
        if (*(ushort *)((int)puVar3 + 6) == param_2) {
          return puVar3;
        }
        uVar2 = uVar2 + 1;
        puVar3 = (uint *)(*puVar3 + (int)puVar3);
      } while (uVar2 < *puVar1);
    }
  }
  return (uint *)0x0;
}

