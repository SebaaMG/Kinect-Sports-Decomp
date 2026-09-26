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
extern int fn_825C75A0();
extern int fn_82631C78();
extern unsigned int lbl_8320A898;


void fn_82576EE8(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  
  for (piVar1 = (int *)param_2[8]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x1c))(param_1);
    }
  }
  fn_82631C78(lbl_8320A898,0,0x40,0x40);
  for (iVar2 = param_2[0x1c]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x1e4)) {
    (**(code **)**(undefined4 **)(iVar2 + 0x1d0))(param_1);
  }
  if ((int *)param_2[0x20] != (int *)0x0) {
    (**(code **)(*(int *)param_2[0x20] + 0x20))(param_1);
  }
  for (piVar1 = (int *)param_2[4]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[4]) {
    if ((*piVar1 != 0) && (piVar1[1] != 0)) {
      (*(code *)piVar1[2])(param_1);
    }
  }
  fn_825C75A0(*param_2,param_4);
  return;
}

