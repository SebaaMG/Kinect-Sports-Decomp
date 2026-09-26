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
extern int fn_822315A0();
extern int fn_8243DD58();
extern int fn_8265CA20();
extern unsigned int lbl_821BF148;


void fn_8249FAD0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = (int)&lbl_821BF148;
  puVar1 = *(undefined4 **)(param_1[0x19] + 4);
  while (*(char *)((int)puVar1 + 0x15) == '\0') {
    fn_8243DD58(param_1 + 0x18,puVar1[2]);
    puVar2 = (undefined4 *)*puVar1;
    fn_8265CA20(puVar1);
    puVar1 = puVar2;
  }
  *(int *)(param_1[0x19] + 4) = param_1[0x19];
  *(int *)param_1[0x19] = param_1[0x19];
  *(int *)(param_1[0x19] + 8) = param_1[0x19];
  param_1[0x1a] = 0;
  (**(code **)(*param_1 + 0xc))(param_1,0);
  puVar1 = *(undefined4 **)(param_1[0x23] + 4);
  while (*(char *)((int)puVar1 + 0x15) == '\0') {
    fn_8243DD58(param_1 + 0x22,puVar1[2]);
    puVar2 = (undefined4 *)*puVar1;
    fn_8265CA20(puVar1);
    puVar1 = puVar2;
  }
  *(int *)(param_1[0x23] + 4) = param_1[0x23];
  *(int *)param_1[0x23] = param_1[0x23];
  *(int *)(param_1[0x23] + 8) = param_1[0x23];
  param_1[0x24] = 0;
  fn_8265CA20(param_1[0x23]);
  puVar1 = *(undefined4 **)(param_1[0x19] + 4);
  while (*(char *)((int)puVar1 + 0x15) == '\0') {
    fn_8243DD58(param_1 + 0x18,puVar1[2]);
    puVar2 = (undefined4 *)*puVar1;
    fn_8265CA20(puVar1);
    puVar1 = puVar2;
  }
  *(int *)(param_1[0x19] + 4) = param_1[0x19];
  *(int *)param_1[0x19] = param_1[0x19];
  *(int *)(param_1[0x19] + 8) = param_1[0x19];
  param_1[0x1a] = 0;
  fn_8265CA20(param_1[0x19]);
  if (param_1[0x15] != 0) {
    fn_822315A0();
  }
  return;
}

