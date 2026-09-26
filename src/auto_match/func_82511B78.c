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
extern int fn_825120A0();
extern int fn_8265CA20();
extern unsigned int lbl_821C097C;


void fn_82511B78(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar1 = (int *)param_1[9];
  piVar4 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(undefined4 *)(param_1[9] + 4) = param_1[9];
  param_1[10] = 0;
  if (piVar4 != (int *)param_1[9]) {
    do {
      piVar1 = (int *)*piVar4;
      if (piVar4[3] != 0) {
        fn_822315A0();
      }
      fn_8265CA20(piVar4);
      piVar4 = piVar1;
    } while (piVar1 != (int *)param_1[9]);
  }
  fn_8265CA20(param_1[9]);
  puVar3 = *(undefined4 **)(param_1[6] + 4);
  while (*(char *)((int)puVar3 + 0x15) == '\0') {
    fn_8243DD58(param_1 + 5,puVar3[2]);
    puVar2 = (undefined4 *)*puVar3;
    fn_8265CA20(puVar3);
    puVar3 = puVar2;
  }
  *(undefined4 *)(param_1[6] + 4) = param_1[6];
  *(undefined4 *)param_1[6] = param_1[6];
  *(undefined4 *)(param_1[6] + 8) = param_1[6];
  param_1[7] = 0;
  fn_8265CA20(param_1[6]);
  fn_825120A0(param_1 + 1);
  fn_8265CA20(param_1[2]);
  *param_1 = &lbl_821C097C;
  return;
}

