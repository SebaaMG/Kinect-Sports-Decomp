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
extern unsigned int *auStack_30;
extern int fn_82A443F0();
extern unsigned int uStack_28;


void fn_82A47830(int param_1,undefined4 *param_2)

{
  undefined4 uVar2;
  ulonglong uVar1;
  undefined1 auStack_30 [8];
  ulonglong uStack_28;
  
  (**(code **)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 8))(*(int *)(param_1 + 0x34) + 0x2c);
  fn_82A443F0(param_1);
  if ((*(int *)(param_1 + 0xb4) == 0) || (*(undefined4 **)(param_1 + 0xac) == (undefined4 *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined4 **)(param_1 + 0xac);
  }
  *param_2 = uVar2;
  param_2[1] = *(undefined4 *)(param_1 + 0xb4);
  (**(code **)(**(int **)(param_1 + 0x90) + 0x38))(*(int **)(param_1 + 0x90),auStack_30);
  uVar1 = ((ulonglong)*(uint *)(param_1 + 0x40) & 0x7fffffff) << 1;
  trapDoubleWordImmediate(6,uVar1,0);
  *(ulonglong *)(param_2 + 2) = uStack_28 / uVar1 & 0xffffffff;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 0x14))(*(int *)(param_1 + 0x34) + 0x2c);
  return;
}

