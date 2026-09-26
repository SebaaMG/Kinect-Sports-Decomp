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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D98360();
extern int fn_82D98A88();
extern int fn_82D98A90();
extern int fn_82DA0490();
extern int fn_82DBEF20();
extern int fn_82DBEF90();
extern int fn_82DBF000();
extern int fn_82DBF070();
extern int fn_82DBF0E0();
extern int fn_82DBF150();
extern int fn_82DBF1C0();
extern int fn_82DBF230();
extern int fn_82DBF2A0();
extern int fn_82DBF310();
extern int fn_82DBF380();
extern int fn_82DBF3F0();


int fn_82DBF460(int *param_1)

{
  int *piVar1;
  undefined4 uVar4;
  undefined8 uVar2;
  int iVar5;
  ulonglong uVar3;
  
  uVar4 = (**(code **)(*param_1 + 0x20))();
  switch(uVar4) {
  case 0:
    iVar5 = fn_82DBEF20(param_1);
    break;
  case 1:
    iVar5 = fn_82DBEF90(param_1);
    break;
  case 2:
    iVar5 = fn_82DBF000(param_1);
    break;
  case 3:
    iVar5 = fn_82DBF070(param_1);
    piVar1 = (int *)param_1[6];
    uVar2 = (**(code **)(*piVar1 + 0x34))(piVar1);
    fn_82DA0490(iVar5,piVar1);
    fn_82CE4118(uVar2);
    break;
  default:
    goto LAB_82dbf6cc;
  case 6:
    iVar5 = fn_82DBF0E0(param_1);
    break;
  case 7:
    iVar5 = fn_82DBF150(param_1);
    break;
  case 8:
    iVar5 = fn_82DBF1C0(param_1);
    break;
  case 9:
    iVar5 = fn_82DBF230(param_1);
    break;
  case 0xc:
    uVar3 = fn_82DBF460(param_1[6]);
    if ((uVar3 & 0xffffffff) != 0) {
      iVar5 = fn_82CE5410();
      iVar5 = (**(code **)(**(int **)(iVar5 + 0x10) + 4))(*(int **)(iVar5 + 0x10),0x28);
      *(undefined2 *)(iVar5 + 4) = 0x28;
      iVar5 = fn_82D98360(iVar5,uVar3);
      fn_82CE4118(uVar3);
      *(int *)(iVar5 + 0x20) = param_1[8];
      *(undefined1 *)(iVar5 + 0x24) = *(undefined1 *)(param_1 + 9);
      *(undefined1 *)(iVar5 + 0x25) = *(undefined1 *)((int)param_1 + 0x25);
      *(int *)(iVar5 + 8) = param_1[2];
      return iVar5;
    }
    goto LAB_82dbf6cc;
  case 0xd:
    fn_82D98A88(param_1);
    uVar3 = ((int (*)())fn_82DBF460)();
    if ((uVar3 & 0xffffffff) != 0) {
      iVar5 = fn_82CE5410();
      iVar5 = (**(code **)(**(int **)(iVar5 + 0x10) + 4))(*(int **)(iVar5 + 0x10),0x20);
      *(undefined2 *)(iVar5 + 4) = 0x20;
      iVar5 = fn_82D98A90(iVar5,uVar3);
      fn_82CE4118(uVar3);
      *(int *)(iVar5 + 0x1c) = param_1[7];
      *(int *)(iVar5 + 8) = param_1[2];
      return iVar5;
    }
LAB_82dbf6cc:
    iVar5 = 0;
    break;
  case 0xe:
    iVar5 = fn_82DBF2A0(param_1);
    break;
  case 0xf:
    iVar5 = fn_82DBF310(param_1);
    break;
  case 0x12:
    iVar5 = fn_82DBF380(param_1);
    break;
  case 0x13:
    iVar5 = fn_82DBF3F0(param_1);
  }
  return iVar5;
}

