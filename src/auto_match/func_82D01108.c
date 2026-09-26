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


void fn_82D01108(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar4 = param_1[2];
    iVar3 = fn_82CE5410();
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(*(int **)(iVar3 + 0x14),iVar1,iVar4 << 2);
    uVar2 = param_1[2];
    iVar1 = param_1[1];
    iVar4 = fn_82CE5410();
    (**(code **)(**(int **)(iVar4 + 0x14) + 8))
              (*(int **)(iVar4 + 0x14),iVar1,
               ((ulonglong)uVar2 + ((ulonglong)uVar2 & 0x1fffffff) * 8 & 0x1fffffff) << 3);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

