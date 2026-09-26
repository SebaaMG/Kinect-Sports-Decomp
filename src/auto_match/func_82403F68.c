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


bool fn_82403F68(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if ((int *)**(int **)(param_1[4] + 0x210) == *(int **)(param_1[4] + 0x210)) {
    bVar4 = false;
  }
  else {
    uVar1 = *(undefined4 *)(**(int **)(param_1[4] + 0x210) + 0x10);
    iVar2 = (**(code **)(*param_1 + 4))();
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x28c) + 0x38))((int *)(iVar2 + 0x28c),uVar1);
    iVar3 = (**(code **)(*param_1 + 4))(param_1);
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x238) + 0x3c))();
    bVar4 = iVar3 == iVar2;
  }
  return bVar4;
}

