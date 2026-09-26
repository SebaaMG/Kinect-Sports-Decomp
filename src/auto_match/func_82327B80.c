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
extern int fn_8288B760();


bool fn_82327B80(int *param_1)

{
  undefined4 uVar1;
  char cVar3;
  int iVar2;
  
  cVar3 = fn_8288B760();
  if (cVar3 == '\0') {
    iVar2 = (**(code **)(*param_1 + 4))(param_1);
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x4f0) + 0x3c))();
  }
  else if ((int *)**(int **)(param_1[4] + 0x210) == *(int **)(param_1[4] + 0x210)) {
    iVar2 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(**(int **)(param_1[4] + 0x210) + 0x10);
    iVar2 = (**(code **)(*param_1 + 4))(param_1);
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x4f0) + 0x38))((int *)(iVar2 + 0x4f0),uVar1);
  }
  return iVar2 == 1;
}

