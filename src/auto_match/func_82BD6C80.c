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


void fn_82BD6C80(int param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  uVar4 = 0;
  *param_4 = uVar1;
  if (uVar1 != 0) {
    puVar5 = (undefined4 *)(param_1 + 0x24);
    param_2 = param_2 - (int)param_3;
    do {
      piVar2 = (int *)puVar5[-5];
      uVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
      *(undefined4 *)(param_2 + (int)param_3) = uVar3;
      if (piVar2 == (int *)0x0) {
        *param_3 = 0;
      }
      else {
        *param_3 = *puVar5;
        (**(code **)(*piVar2 + 0xc))(piVar2);
        *puVar5 = 0;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 1;
      param_3 = param_3 + 1;
    } while (uVar4 < *param_4);
  }
  return;
}

