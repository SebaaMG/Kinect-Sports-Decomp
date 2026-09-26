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
extern int fn_82A51140();


undefined8 fn_82A51648(double param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  
  (**(code **)(*(int *)(*(int *)(param_2 + 0x30) + 0x2c) + 8))(*(int *)(param_2 + 0x30) + 0x2c);
  uVar3 = 0;
  if (param_1 != (double)*(float *)(param_2 + 0x48)) {
    *(float *)(param_2 + 0x48) = (float)param_1;
    uVar4 = param_4;
    if ((param_4 & 0xffffffff) == 0) {
      uVar4 = 0x1337f001;
    }
    puVar5 = *(undefined4 **)(param_2 + 0x68);
    while (puVar5 != (undefined4 *)0x0) {
      if (puVar5 == (undefined4 *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *puVar5;
        puVar5 = (undefined4 *)puVar5[1];
      }
      fn_82A51140(uVar2,param_2,uVar4);
    }
    if ((param_4 & 0xffffffff) == 0) {
      piVar1 = *(int **)(*(int *)(param_2 + 0x30) + 0xb0);
      uVar3 = (**(code **)(*piVar1 + 0x48))(piVar1,uVar4);
    }
  }
  (**(code **)(*(int *)(*(int *)(param_2 + 0x30) + 0x2c) + 0x14))(*(int *)(param_2 + 0x30) + 0x2c);
  return uVar3;
}

