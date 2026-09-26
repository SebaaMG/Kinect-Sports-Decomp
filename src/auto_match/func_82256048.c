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
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_8c;
extern unsigned int fStack_90;
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B5608();
extern int fn_82F63108();
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;


void fn_82256048(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  float fStack_90;
  undefined1 auStack_8c [4];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 auStack_78 [2];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [96];
  
  fn_828B5608(auStack_70);
  (**(code **)(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,auStack_78);
  (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,&uStack_7c);
  (**(code **)(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,&uStack_80);
  (**(code **)(**(int **)(param_1 + 0x80) + 0x14))(*(int **)(param_1 + 0x80),param_2,&uStack_84);
  (**(code **)(**(int **)(param_1 + 0x88) + 0x14))(*(int **)(param_1 + 0x88),param_2,auStack_70);
  (**(code **)(**(int **)(param_1 + 0x90) + 0x14))(*(int **)(param_1 + 0x90),param_2,&uStack_88);
  (**(code **)(**(int **)(param_1 + 0x98) + 0x14))(*(int **)(param_1 + 0x98),param_2,&fStack_90);
  (**(code **)(**(int **)(param_1 + 0xa0) + 0x14))(*(int **)(param_1 + 0xa0),param_2,auStack_8c);
  if (*(int *)(param_3 + 0x10) != 0) {
    dVar5 = (double)fStack_90;
    uVar3 = fn_828B5580(auStack_68,auStack_70);
    if (*(int *)(param_3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    piVar1 = *(int **)(param_3 + 0x10);
    iVar2 = *piVar1;
    uVar4 = fn_828B5580(auStack_60,uVar3);
    (**(code **)(iVar2 + 4))
              (dVar5,piVar1,auStack_78[0],uStack_7c,uStack_80,uStack_84,uVar4,uStack_88);
    fn_828B55B0(uVar3);
  }
  fn_828B55B0(auStack_70);
  return;
}

