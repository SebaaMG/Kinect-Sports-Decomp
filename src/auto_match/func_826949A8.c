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
extern unsigned int *auStack_50;
extern int fn_82694610();
extern int fn_826BD078();


int * fn_826949A8(int *param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint auStack_50 [20];
  
  if (param_3 == param_4) {
    iVar2 = *(int *)(*(int *)(*param_2 & 0xfffffc00) + 0x18);
  }
  else {
    auStack_50[0] = *(uint *)*param_2;
    uVar3 = (ulonglong)auStack_50[0];
    iVar2 = 0;
    uVar4 = uVar3;
    uVar5 = uVar3;
    while( true ) {
      if (iVar2 == param_3) {
        uVar5 = uVar4;
      }
      iVar1 = fn_826BD078(auStack_50);
      iVar2 = iVar2 + 1;
      if (iVar2 == param_4) goto LAB_82694a2c;
      if (iVar1 == 0) break;
      uVar4 = (ulonglong)auStack_50[0];
    }
    if (iVar2 < param_4) {
LAB_82694a2c:
      uVar3 = (ulonglong)auStack_50[0];
    }
    if (uVar3 < uVar5) {
      uVar3 = uVar5;
    }
    iVar2 = fn_82694610(*(undefined4 *)(*param_2 & 0xfffffc00),uVar5,uVar3 - uVar5);
  }
  iVar1 = *(int *)(iVar2 + 8);
  *param_1 = iVar2;
  *(int *)(iVar2 + 8) = iVar1 + 1;
  return param_1;
}

