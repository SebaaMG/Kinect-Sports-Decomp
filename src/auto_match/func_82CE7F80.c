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
extern unsigned int *auStack_60;
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CE7E68();
extern int fn_82CE7EE0();
extern int fn_82CFAA48();
extern int fn_82CFAC70();
extern unsigned int lbl_8317F4E4;


int * fn_82CE7F80(undefined8 param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [56];
  
  fn_82CE7EE0(auStack_50);
  iVar2 = fn_82CE5410();
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x14);
  *(undefined2 *)(iVar2 + 4) = 0x14;
  uVar1 = (*(code *)lbl_8317F4E4)(param_2,auStack_50);
  piVar3 = (int *)fn_82CFAC70(iVar2,uVar1);
  pcVar4 = (char *)(**(code **)(*piVar3 + 0x18))(auStack_60,piVar3);
  if (*pcVar4 == '\0') {
    iVar2 = fn_82CE5410();
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x24);
    *(undefined2 *)(iVar2 + 4) = 0x24;
    piVar5 = (int *)fn_82CFAA48(iVar2,piVar3,0x1000);
    fn_82CE4118(piVar3);
    fn_82CE7E68(auStack_50);
    piVar3 = piVar5;
  }
  else {
    fn_82CE7E68(auStack_50);
  }
  return piVar3;
}

