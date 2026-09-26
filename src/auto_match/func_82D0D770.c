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
extern int fn_82CE5410();
extern int fn_82D0D6E8();
extern int fn_82D16300();
extern int fn_82D16968();


int fn_82D0D770(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = fn_82CE5410();
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x14);
  *(undefined2 *)(iVar1 + 4) = 0x14;
  iVar2 = fn_82D0D6E8();
  iVar1 = *(int *)(iVar2 + 8);
  if (iVar1 != 0) {
    fn_82D16300(iVar1);
    iVar3 = fn_82CE5410();
    (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),iVar1,0x1c0);
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  uVar4 = fn_82D16968(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(iVar2 + 8) = uVar4;
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  else {
    uVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 4))();
    *(undefined4 *)(iVar2 + 0x10) = uVar4;
  }
  return iVar2;
}

