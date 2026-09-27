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
extern int memcpy();


void fn_83081A78(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  
  iVar5 = (uint)*(ushort *)(param_1 + 1) << 1;
  if (*(ushort *)(param_1 + 1) == 0) {
    iVar5 = 1;
  }
  iVar4 = fn_82CE5410();
  uVar3 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))
                    (*(int **)(iVar4 + 0x10),(longlong)iVar5 * (longlong)param_2);
  memcpy(uVar3,*param_1,(longlong)(int)(uint)*(ushort *)(param_1 + 1) * (longlong)param_2);
  uVar1 = *(ushort *)((int)param_1 + 6);
  if ((uVar1 & 0x8000) == 0) {
    uVar2 = *param_1;
    iVar4 = fn_82CE5410();
    (**(code **)(**(int **)(iVar4 + 0x10) + 8))
              (*(int **)(iVar4 + 0x10),uVar2,(longlong)(int)(uVar1 & 0x3fff) * (longlong)param_2);
  }
  *param_1 = (int)uVar3;
  *(ushort *)((int)param_1 + 6) = *(ushort *)((int)param_1 + 6) & 0x4000 | (ushort)iVar5;
  return;
}

