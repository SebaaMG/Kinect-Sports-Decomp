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
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_8268B8E8();
extern int fn_8268BEA8();


void fn_826E76C8(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (param_2 != (int *)0x0) {
    fn_8267C4C8(param_2);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_8267C4F0();
  }
  *(int **)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(int *)(param_1 + 8) = param_4;
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_4 + 0xc);
  }
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (param_2 == (int *)0x0) {
    fn_8268BEA8(param_1 + 0x18);
  }
  else {
    uVar1 = (**(code **)(*param_2 + 4))(param_2);
    fn_8268B8E8(param_1 + 0x18,uVar1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (param_2 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  }
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  return;
}

