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
extern int fn_82359718();
extern int fn_823B4F98();


void fn_82358B00(undefined8 param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  fn_82359718();
  fn_823B4F98(param_1,param_2[0x23]);
  piVar1 = (int *)param_2[9];
  for (piVar3 = (int *)param_2[8]; piVar3 < piVar1; piVar3 = piVar3 + 1) {
    puVar2 = (undefined4 *)((undefined4 *)*piVar3)[1];
    for (puVar4 = *(undefined4 **)*piVar3; puVar4 < puVar2; puVar4 = puVar4 + 1) {
      (**(code **)(*(int *)*puVar4 + 4))(param_1);
    }
  }
  puVar2 = (undefined4 *)param_2[4];
  for (puVar4 = (undefined4 *)param_2[3]; puVar4 < puVar2; puVar4 = puVar4 + 1) {
    (**(code **)(*(int *)*puVar4 + 4))(param_1);
  }
  (**(code **)(*param_2 + 0xd0))(param_2);
  return;
}

