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


void fn_82A4FBD8(int param_1,ulonglong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x34)) {
    puVar3 = *(undefined4 **)(param_1 + 0x2c);
    uVar1 = param_2 & 0xffffffff;
    while (uVar1 != 0) {
      puVar3 = (undefined4 *)puVar3[1];
      param_2 = param_2 - 1;
      uVar1 = param_2;
    }
    puVar3 = (undefined4 *)*puVar3;
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  uVar2 = (**(code **)(*(int *)*puVar3 + 0x18))((int *)*puVar3,0);
  *param_3 = uVar2;
  return;
}

