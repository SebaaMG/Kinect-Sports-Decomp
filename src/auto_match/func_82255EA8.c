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
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern unsigned int *auStack_94;
extern unsigned int *auStack_9c;
extern unsigned int *auStack_a0;
extern unsigned int fStack_98;
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B5608();
extern int fn_82F63108();


void fn_82255EA8(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  float fStack_98;
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [112];
  
  fn_828B5608(auStack_88);
  (**(code **)(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,auStack_70);
  (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,&fStack_98);
  (**(code **)(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,auStack_90);
  (**(code **)(**(int **)(param_1 + 0x80) + 0x14))(*(int **)(param_1 + 0x80),param_2,auStack_94);
  (**(code **)(**(int **)(param_1 + 0x88) + 0x14))(*(int **)(param_1 + 0x88),param_2,auStack_88);
  (**(code **)(**(int **)(param_1 + 0x90) + 0x14))(*(int **)(param_1 + 0x90),param_2,auStack_9c);
  (**(code **)(**(int **)(param_1 + 0x98) + 0x14))(*(int **)(param_1 + 0x98),param_2,auStack_a0);
  if (*(int *)(param_3 + 0x10) != 0) {
    uVar3 = fn_828B5580(auStack_80,auStack_88);
    dVar4 = (double)fStack_98;
    if (*(int *)(param_3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    piVar1 = *(int **)(param_3 + 0x10);
    iVar2 = *piVar1;
    fn_828B5580(auStack_78,uVar3);
    (**(code **)(iVar2 + 4))(dVar4,piVar1);
    fn_828B55B0(uVar3);
  }
  fn_828B55B0(auStack_88);
  return;
}

