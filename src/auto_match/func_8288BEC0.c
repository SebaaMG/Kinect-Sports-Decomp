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
extern int fn_825089A0();


int fn_8288BEC0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 8) = 0;
  piVar1 = (int *)fn_825089A0();
  uVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,0x2c,1);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)uVar2 = uVar2;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x28) = 1;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x29) = 1;
  return param_1;
}

