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
extern int fn_82F68B70();


void fn_82370008(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  
  switch(param_2) {
  case 0:
    iVar1 = *(int *)(param_1 + 0x90);
    dVar5 = (double)*(float *)(param_1 + 0x728);
    uVar3 = *(undefined4 *)(param_1 + 0x71c);
    dVar4 = (double)*(float *)(param_1 + 0x724);
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
    break;
  case 1:
    iVar1 = *(int *)(param_1 + 0x90);
    dVar5 = (double)*(float *)(param_1 + 0x738);
    uVar3 = *(undefined4 *)(param_1 + 0x72c);
    dVar4 = (double)*(float *)(param_1 + 0x734);
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
    break;
  case 2:
  case 8:
    return;
  case 3:
    iVar1 = *(int *)(param_1 + 0x90);
    dVar5 = (double)*(float *)(param_1 + 0x6e8);
    uVar3 = *(undefined4 *)(param_1 + 0x6dc);
    dVar4 = (double)*(float *)(param_1 + 0x6e4);
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
    break;
  case 4:
    iVar1 = *(int *)(param_1 + 0x90);
    dVar5 = (double)*(float *)(param_1 + 0x6d8);
    uVar3 = *(undefined4 *)(param_1 + 0x6cc);
    dVar4 = (double)*(float *)(param_1 + 0x6d4);
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
    break;
  case 5:
    iVar1 = *(int *)(param_1 + 0x90);
    dVar5 = (double)*(float *)(param_1 + 0x758);
    uVar3 = *(undefined4 *)(param_1 + 0x74c);
    dVar4 = (double)*(float *)(param_1 + 0x754);
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
    break;
  case 6:
    iVar1 = *(int *)(param_1 + 0x90);
    dVar5 = (double)*(float *)(param_1 + 0x748);
    uVar3 = *(undefined4 *)(param_1 + 0x73c);
    dVar4 = (double)*(float *)(param_1 + 0x744);
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
    break;
  case 7:
    iVar1 = *(int *)(param_1 + 0x90);
    dVar5 = (double)*(float *)(param_1 + 0x768);
    uVar3 = *(undefined4 *)(param_1 + 0x75c);
    dVar4 = (double)*(float *)(param_1 + 0x764);
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
    break;
  case 9:
    iVar1 = *(int *)(param_1 + 0x90);
    dVar5 = (double)*(float *)(param_1 + 0x798);
    uVar3 = *(undefined4 *)(param_1 + 0x78c);
    dVar4 = (double)*(float *)(param_1 + 0x794);
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
    break;
  case 10:
    iVar1 = *(int *)(param_1 + 0x90);
    dVar5 = (double)*(float *)(param_1 + 0x7b8);
    uVar3 = *(undefined4 *)(param_1 + 0x7ac);
    dVar4 = (double)*(float *)(param_1 + 0x7b4);
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
    break;
  case 0xb:
    if (*(int *)(param_1 + 0x220) == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x90);
    dVar5 = (double)*(float *)(param_1 + 0x7a8);
    uVar3 = *(undefined4 *)(param_1 + 0x79c);
    dVar4 = (double)*(float *)(param_1 + 0x7a4);
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
    break;
  case 0xc:
    iVar1 = *(int *)(param_1 + 0x90);
    dVar5 = (double)*(float *)(param_1 + 0x788);
    uVar3 = *(undefined4 *)(param_1 + 0x77c);
    dVar4 = (double)*(float *)(param_1 + 0x784);
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
    break;
  case 0xd:
    iVar1 = *(int *)(param_1 + 0x90);
    dVar5 = (double)*(float *)(param_1 + 0x778);
    uVar3 = *(undefined4 *)(param_1 + 0x76c);
    dVar4 = (double)*(float *)(param_1 + 0x774);
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
    break;
  case 0xe:
    iVar1 = *(int *)(param_1 + 0x90);
    dVar5 = (double)*(float *)(param_1 + 0x6a8);
    uVar3 = *(undefined4 *)(param_1 + 0x69c);
    dVar4 = (double)*(float *)(param_1 + 0x6a4);
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
    break;
  case 0xf:
    iVar1 = *(int *)(param_1 + 0x90);
    dVar5 = (double)*(float *)(param_1 + 0x6b8);
    uVar3 = *(undefined4 *)(param_1 + 0x6ac);
    dVar4 = (double)*(float *)(param_1 + 0x6b4);
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
    break;
  case 0x10:
    iVar1 = *(int *)(param_1 + 0x90);
    dVar5 = (double)*(float *)(param_1 + 0x6c8);
    uVar3 = *(undefined4 *)(param_1 + 0x6bc);
    dVar4 = (double)*(float *)(param_1 + 0x6c4);
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
    break;
  case 0x11:
    iVar1 = *(int *)(param_1 + 0x90);
    dVar5 = (double)*(float *)(param_1 + 0x708);
    uVar3 = *(undefined4 *)(param_1 + 0x6fc);
    dVar4 = (double)*(float *)(param_1 + 0x704);
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
    break;
  default:
    return;
  }
  fn_82F68B70(dVar4,dVar5,iVar1,param_2,uVar2,param_4,uVar3,0);
  return;
}

