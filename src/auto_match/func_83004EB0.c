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


undefined8
fn_83004EB0(int param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return 2;
  }
  iVar2 = (param_3 + 1) * 0xc + *(int *)(param_1 + 0x28);
  if (*(int *)(iVar2 + 4) == 0) {
    return 0x1f;
  }
  piVar1 = *(int **)(iVar2 + 4);
                    /* WARNING: Could not recover jumptable at 0x83004f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*piVar1 + 4))(piVar1,param_4,param_5,param_6);
  return uVar3;
}

