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
extern int fn_82599308();
extern int fn_82CE5410();
extern int fn_82CE7310();
extern int fn_82CE78C0();
extern int fn_82CE95A8();


void fn_825990F0(void)

{
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar1;
  undefined4 *puVar5;
  
  iVar2 = fn_82599308();
  if (*(int *)(iVar2 + 4) != 0) {
    iVar2 = fn_82599308();
    iVar2 = *(int *)(iVar2 + 4);
    if (iVar2 != 0) {
      fn_82CE95A8(iVar2);
      iVar3 = fn_82CE5410();
      (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),iVar2,0x1c0);
    }
    iVar2 = fn_82599308();
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  fn_82CE78C0();
  piVar4 = (int *)fn_82CE7310();
  iVar2 = *piVar4;
  lVar1 = fn_82599308();
  (**(code **)(iVar2 + 0x10))(piVar4,lVar1 + 8,3);
  fn_82599308();
  puVar5 = (undefined4 *)fn_82599308();
  *puVar5 = 0;
  return;
}

