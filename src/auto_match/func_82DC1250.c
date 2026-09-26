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


void fn_82DC1250(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)*param_1;
  puVar3 = puVar5 + param_1[1];
  if (puVar3 <= puVar5) {
    return;
  }
  do {
    switch(*puVar5) {
    case 0:
      goto switchD_82dc1288_caseD_0;
    default:
      goto switchD_82dc1288_caseD_1;
    case 3:
    case 4:
    case 5:
    case 0x18:
      goto switchD_82dc1288_caseD_3;
    case 6:
    case 0x11:
    case 0x12:
      iVar4 = *(int *)(param_2 + 4) + 0x30;
      iVar1 = *(int *)(param_2 + 0xc) + 1;
      break;
    case 7:
    case 0xd:
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 0x90;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 3;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 3;
      goto switchD_82dc1288_caseD_1;
    case 0xc:
      iVar4 = *(int *)(param_2 + 4) + 0x60;
      iVar2 = *(int *)(param_2 + 8) + 2;
      iVar1 = *(int *)(param_2 + 0xc) + 2;
      goto LAB_82dc13cc;
    case 0xe:
      iVar1 = *(int *)(param_2 + 0xc) + 3;
      goto LAB_82dc13bc;
    case 0xf:
      iVar4 = *(int *)(param_2 + 4) + 0x50;
      iVar1 = *(int *)(param_2 + 0xc) + 3;
      break;
    case 0x10:
      iVar1 = *(int *)(param_2 + 0xc) + 1;
      goto LAB_82dc13bc;
    case 0x13:
      puVar5 = puVar5 + 2;
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 0x30;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      goto switchD_82dc1288_caseD_1;
    case 0x14:
      iVar4 = *(int *)(param_2 + 4) + 0x30;
      iVar1 = *(int *)(param_2 + 0xc) + 2;
      break;
    case 0x15:
      iVar1 = *(int *)(param_2 + 0xc) + 2;
LAB_82dc13bc:
      iVar4 = *(int *)(param_2 + 4) + 0x40;
    }
    iVar2 = *(int *)(param_2 + 8) + 1;
LAB_82dc13cc:
    *(int *)(param_2 + 4) = iVar4;
    *(int *)(param_2 + 8) = iVar2;
    *(int *)(param_2 + 0xc) = iVar1;
switchD_82dc1288_caseD_3:
    puVar5 = puVar5 + 1;
switchD_82dc1288_caseD_1:
    puVar5 = puVar5 + 1;
  } while (puVar5 < puVar3);
switchD_82dc1288_caseD_0:
  return;
}

