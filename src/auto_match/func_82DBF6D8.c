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
extern int fn_8260A488();
extern int fn_8260A568();
extern int fn_8260A648();
extern int fn_82CE5410();
extern int fn_82D93C00();
extern int fn_82D972A0();
extern int fn_82D97CB8();


int fn_82DBF6D8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int *piVar5;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  if (iVar1 == 2) {
    iVar1 = fn_82CE5410();
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0xe0);
    *(undefined2 *)(iVar1 + 4) = 0xe0;
    iVar1 = fn_82D93C00();
    fn_8260A488(iVar1 + 0x10,param_1 + 4);
    *(int *)(iVar1 + 8) = param_1[2];
    if (*(int **)(iVar1 + 0xb0) != (int *)0x0) {
      uVar3 = (**(code **)(**(int **)(iVar1 + 0xb0) + 0xc))();
      *(undefined4 *)(iVar1 + 0xb0) = uVar3;
    }
  }
  else if (iVar1 == 6) {
    iVar1 = fn_82CE5410();
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0xd0);
    *(undefined2 *)(iVar1 + 4) = 0xd0;
    iVar1 = fn_82D972A0();
    fn_8260A568(iVar1 + 0x10,param_1 + 4);
    *(int *)(iVar1 + 8) = param_1[2];
    if (*(int **)(iVar1 + 0xac) != (int *)0x0) {
      uVar3 = (**(code **)(**(int **)(iVar1 + 0xac) + 0xc))();
      *(undefined4 *)(iVar1 + 0xac) = uVar3;
    }
  }
  else if (iVar1 == 7) {
    iVar1 = fn_82CE5410();
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x140);
    *(undefined2 *)(iVar1 + 4) = 0x140;
    iVar1 = fn_82D97CB8();
    fn_8260A648(iVar1 + 0x10,param_1 + 4);
    piVar5 = (int *)(iVar1 + 0xe0);
    lVar4 = 3;
    *(int *)(iVar1 + 8) = param_1[2];
    do {
      if ((int *)*piVar5 != (int *)0x0) {
        iVar2 = (**(code **)(*(int *)*piVar5 + 0xc))();
        *piVar5 = iVar2;
      }
      lVar4 = lVar4 + -1;
      piVar5 = piVar5 + 1;
    } while (lVar4 != 0);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

