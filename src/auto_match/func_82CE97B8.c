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


void fn_82CE97B8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  lVar4 = 0xe;
  puVar5 = (undefined4 *)(param_1 + 0x158);
  do {
    iVar1 = puVar5[-4];
    if (iVar1 != 0) {
      uVar2 = puVar5[-5];
      iVar3 = fn_82CE5410();
      (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),uVar2,iVar1 << 7);
    }
    lVar4 = lVar4 + -1;
    puVar5 = puVar5 + -5;
  } while (-1 < lVar4);
  return;
}

