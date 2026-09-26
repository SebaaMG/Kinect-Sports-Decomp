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
extern int fn_822733C8();
extern int fn_8265CA20();


void fn_82448FB0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    puVar3 = *(undefined4 **)(piVar1[0xd] + 4);
    while (*(char *)((int)puVar3 + 0x11) == '\0') {
      fn_822733C8(piVar1 + 0xc,puVar3[2]);
      puVar2 = (undefined4 *)*puVar3;
      fn_8265CA20(puVar3);
      puVar3 = puVar2;
    }
    *(int *)(piVar1[0xd] + 4) = piVar1[0xd];
    *(int *)piVar1[0xd] = piVar1[0xd];
    *(int *)(piVar1[0xd] + 8) = piVar1[0xd];
    piVar1[0xe] = 0;
    fn_8265CA20(piVar1[0xd]);
    if (*piVar1 != 0) {
      fn_8265CA20();
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    fn_8265CA20(piVar1);
  }
  return;
}

