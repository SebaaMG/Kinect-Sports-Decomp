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
extern int fn_82696958();


undefined8 fn_826F8DE8(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  sync(1);
  bVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x20) != 1;
  if ((*(char *)(*(int *)(param_1 + 0x10) + 0x78) == '\0') || (bVar3)) {
    if (bVar3) {
      return 0;
    }
    uVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x68) + 0x5c))();
    piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x70);
    iVar2 = *piVar1;
    uVar5 = fn_82696958(*(int *)(param_1 + 0x10) + 0x60,uVar4);
    (**(code **)(iVar2 + 8))(piVar1,uVar4,uVar5);
  }
  return 1;
}

