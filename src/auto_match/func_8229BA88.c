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
extern int fn_8249ABC0();
extern int fn_8249D980();
extern int fn_8249DA08();
extern int fn_82F4EC30();
extern int fn_82F52C20();


void fn_8229BA88(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(param_1 + 0x40);
  do {
    if (*piVar5 != 0) {
      uVar1 = fn_82F4EC30(uVar4);
      fn_82F52C20(uVar1,*piVar5,1);
      *piVar5 = 0;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 2;
  } while ((uVar4 & 0xffffffff) < 2);
  iVar2 = fn_8249ABC0();
  uVar3 = 0xffffffff;
  if (*(int *)(param_1 + 0x50) != -1) {
    uVar3 = 0xffffffff;
    fn_8249D980(*(undefined4 *)(iVar2 + 0x110));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
  }
  if (*(int *)(param_1 + 0x54) != -1) {
    fn_8249DA08();
    *(undefined4 *)(param_1 + 0x54) = uVar3;
  }
  return;
}

