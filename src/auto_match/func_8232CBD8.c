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
extern int fn_824D3368();
extern int fn_824D33E8();


void fn_8232CBD8(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_2[2] + 0x27c);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x24);
    if ((((iVar3 == 0) || (iVar2 = fn_824D33E8(iVar3), iVar2 != 0)) ||
        (iVar2 = fn_824D3368(iVar3), iVar2 != 0)) ||
       ((*(int *)(iVar3 + 0x518) != 0 && (*(int *)(iVar3 + 0x998) != 0)))) {
      iVar1 = *(int *)(iVar1 + 0x24);
      if (((iVar1 == 0) ||
          ((iVar3 = fn_824D33E8(iVar1), iVar3 != 0 ||
           (iVar3 = fn_824D3368(iVar1), iVar3 != 0)))) ||
         ((*(int *)(iVar1 + 0x518) != 1 && (*(int *)(iVar1 + 0x998) != 1)))) goto LAB_8232cca8;
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    (**(code **)(*param_2 + 0x10))(param_2,uVar4);
  }
LAB_8232cca8:
  (**(code **)(*param_2 + 0xc))(param_1,param_2);
  return;
}

