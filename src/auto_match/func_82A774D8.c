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


void fn_82A774D8(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0xb8);
  if (*(int *)(param_1 + 0xbc) != piVar1[7] + *piVar1 + piVar1[6]) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0xbc) = *piVar1 + piVar1[6];
  if ((iVar2 != 0) && (iVar2 != 0xff)) {
    *(int *)(param_1 + 0xc0) = iVar2 + -1;
  }
  piVar3 = *(int **)(param_1 + 0x108);
  if (piVar3 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82a77540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x24))(piVar3,piVar1[1],piVar1[2]);
  return;
}

