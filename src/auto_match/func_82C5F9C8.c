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
extern int fn_82C58F30();
extern int fn_82C69500();


void fn_82C5F9C8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  fn_82C69500(param_1 + 0xea0,param_1 + 0xea8);
  puVar1 = *(undefined4 **)(param_1 + 0xea0);
  piVar2 = *(int **)(param_1 + 0xea8);
  *(undefined4 *)(param_1 + 0xec0) = *puVar1;
  *(undefined4 *)(param_1 + 0xec4) = puVar1[1];
  *(undefined4 *)(param_1 + 0xec8) = puVar1[2];
  iVar3 = *piVar2;
  *(int *)(param_1 + 0xecc) = iVar3;
  *(int *)(param_1 + 0xed0) = piVar2[1];
  *(int *)(param_1 + 0xed4) = piVar2[2];
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xdc) + iVar3;
  }
  *(int *)(param_1 + 0xee4) = iVar4;
  *(int *)(param_1 + 0xf10) = *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xec0);
  *(int *)(param_1 + 0xf14) = *(int *)(param_1 + 0xec4) + *(int *)(param_1 + 0xe0);
  *(int *)(param_1 + 0xf18) = *(int *)(param_1 + 0xec8) + *(int *)(param_1 + 0xe0);
  *(int *)(param_1 + 0x39e8) = iVar3;
  *(undefined4 *)(param_1 + 0x39ec) = *(undefined4 *)(param_1 + 0xed0);
  *(undefined4 *)(param_1 + 0x39f0) = *(undefined4 *)(param_1 + 0xed4);
  if (param_2 != 0) {
    fn_82C58F30(param_1);
  }
  return;
}

