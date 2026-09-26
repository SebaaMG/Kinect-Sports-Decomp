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
extern int fn_82FA9208();
extern int fn_82FAD148();
extern int fn_82FB3AE8();


undefined8 fn_82FB3D48(int param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [48];
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  piVar2 = *(int **)(param_1 + 0x28);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[1];
    (**(code **)(*piVar2 + 4))(piVar2,0);
    piVar2 = piVar1;
  }
  fn_82FAD148(param_1 + 0x40);
  uVar3 = fn_82FB3AE8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x38) + 0x28),
                            *(int *)(param_1 + 0x38) + 0x10,param_2,auStack_30);
  fn_82FA9208(param_1);
  return uVar3;
}

