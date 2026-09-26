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
extern int fn_82A40238();


int fn_82A404D0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int aiStack_30 [12];
  
  piVar2 = (int *)(param_1 + 0x2c);
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))(piVar2);
  piVar1 = (int *)(param_1 + 0x50);
  aiStack_30[0] = 0;
  (**(code **)(*(int *)(param_1 + 0x50) + 8))(piVar1);
  if (*(int *)(param_1 + 0xa4) == 0) {
    if (*(int *)(param_1 + 0x1b8) != 0) {
      aiStack_30[0] =
           (**(code **)(**(int **)(param_1 + 0xb0) + 0x38))
                     (*(int **)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x214),param_1 + 0xac);
      if (aiStack_30[0] < 0) goto LAB_82a40568;
      *(undefined4 *)(param_1 + 0xa8) = 2;
    }
    *(undefined4 *)(param_1 + 0xa4) = 1;
  }
LAB_82a40568:
  (**(code **)(*piVar1 + 0x14))(piVar1);
  (**(code **)(*piVar2 + 0x14))(piVar2);
  fn_82A40238(aiStack_30);
  return aiStack_30[0];
}

