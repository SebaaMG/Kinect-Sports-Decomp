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
extern int fn_82248B90();
extern int fn_82594C50();
extern int fn_8288F948();
extern int fn_828A12E8();


void fn_82513668(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int aiStack_2c [11];
  
  (**(code **)(**(int **)(param_2 + 8) + 100))();
  fn_82594C50(*(undefined4 *)(param_2 + 8));
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = fn_828A12E8(uVar1);
  iVar3 = fn_8288F948(uVar2,1);
  aiStack_2c[0] = **(int **)(iVar3 + 4);
  while( true ) {
    iVar3 = aiStack_2c[0];
    uVar2 = fn_828A12E8(uVar1);
    iVar4 = fn_8288F948(uVar2,1);
    if (iVar3 == *(int *)(iVar4 + 4)) break;
    (**(code **)(**(int **)(iVar3 + 0x14) + 0x50))();
    fn_82248B90(aiStack_2c);
  }
  (**(code **)(**(int **)(param_2 + 0x18) + 0x28))(param_1);
  return;
}

