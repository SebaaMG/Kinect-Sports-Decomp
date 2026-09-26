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


undefined8 fn_82D6A9C0(int *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = (int *)*param_1;
  if (piVar1[3] == 0x1e) {
    piVar4 = (int *)param_2[3];
    piVar2 = param_2;
    while (piVar5 = piVar4, piVar5 != (int *)0x0) {
      piVar2 = piVar5;
      piVar4 = (int *)piVar5[3];
    }
    piVar5 = (int *)param_1[3];
    piVar4 = param_1;
    while (piVar3 = piVar5, piVar3 != (int *)0x0) {
      piVar4 = piVar3;
      piVar5 = (int *)piVar3[3];
    }
    (**(code **)(*piVar1 + 0x2c))(piVar1,piVar4,piVar2,param_3);
  }
  piVar1 = (int *)*param_2;
  if (piVar1[3] == 0x1e) {
    piVar2 = (int *)param_1[3];
    while (piVar4 = piVar2, piVar4 != (int *)0x0) {
      param_1 = piVar4;
      piVar2 = (int *)piVar4[3];
    }
    piVar2 = (int *)param_2[3];
    while (piVar4 = piVar2, piVar4 != (int *)0x0) {
      param_2 = piVar4;
      piVar2 = (int *)piVar4[3];
    }
    (**(code **)(*piVar1 + 0x2c))(piVar1,param_2,param_1,param_3);
  }
  return 0;
}

