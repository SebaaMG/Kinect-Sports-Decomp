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
extern int fn_82BD62B0();
extern int fn_82BD62B8();
extern unsigned int lbl_821AAD20;


void fn_82BD51F0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int aiStack_30 [12];
  
  piVar1 = *(int **)(param_1 + 0x40);
  iVar2 = *param_2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x3c))(piVar1,4,aiStack_30);
    if (((((param_2[0x34] & 2U) == 0) && (iVar3 = fn_82BD62B8(param_2), iVar3 != 0x70000000))
        && (iVar3 = fn_82BD62B0(param_2), iVar3 != 0)) || ((param_2[0x34] & 0xf0000U) == 0)) {
      aiStack_30[iVar2] = lbl_821AAD20;
    }
    else {
      aiStack_30[iVar2] = param_2[0x31];
    }
    (**(code **)(**(int **)(param_1 + 0x40) + 0x38))(*(int **)(param_1 + 0x40),4,aiStack_30,0);
    return;
  }
  return;
}

