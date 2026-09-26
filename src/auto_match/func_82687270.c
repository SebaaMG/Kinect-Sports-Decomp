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
extern U64 storeWordConditionalIndexed();


void fn_82687270(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  char in_RESERVE;
  byte in_cr0;
  
  do {
    puVar4 = (uint *)(param_1 + 4);
    uVar5 = (ulonglong)*puVar4;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,param_1 + 4);
      *puVar4 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  sync(1);
  if (uVar5 == 1) {
    puVar3 = (undefined4 *)param_1;
    piVar1 = (int *)puVar3[2];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1,param_1);
      puVar3[2] = 0;
    }
    (**(code **)*puVar3)(param_1,1);
  }
  return;
}

