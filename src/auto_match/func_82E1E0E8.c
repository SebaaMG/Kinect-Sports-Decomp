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
extern int fn_8265C9E0();
extern int fn_82E1D978();
extern int fn_82E1F7F0();


void fn_82E1E0E8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = fn_82E1F7F0(param_2);
  uVar2 = fn_82E1F7F0(param_3);
  puVar3 = (undefined4 *)fn_82E1D978(param_1,uVar1);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)fn_8265C9E0(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
    }
    *puVar3 = (int)uVar1;
    puVar3[1] = uVar2;
    puVar3[2] = *(undefined4 *)(param_1 + 4);
    puVar3[3] = 0;
    *(undefined4 **)(param_1 + 4) = puVar3;
  }
  else {
    puVar4 = (undefined4 *)fn_8265C9E0(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
    }
    for (; puVar3[3] != 0; puVar3 = (undefined4 *)puVar3[3]) {
    }
    *puVar3 = (int)uVar1;
    puVar4[1] = uVar2;
    puVar3[3] = puVar4;
  }
  return;
}

