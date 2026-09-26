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
extern unsigned int *auStack_ab0;
extern unsigned int *auStack_ae0;
extern unsigned int *auStack_af8;
extern unsigned int *auStack_b10;
extern int fn_82359C18();
extern int fn_82F53C68();
extern int fn_82F56790();
extern int fn_82F56D40();
extern int fn_82F57BF0();
extern int fn_82F58670();
extern int fn_82F63108();
extern unsigned int iStack_b2c;
extern unsigned int lbl_82165F1C;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_ae8;
extern unsigned int uStack_b00;


void fn_82F58770(int param_1,int *param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piStack0000001c;
  int *piStack_b40;
  int aiStack_b3c [3];
  undefined **ppuStack_b30;
  int iStack_b2c;
  undefined ***pppuStack_b20;
  undefined1 auStack_b10 [16];
  undefined4 uStack_b00;
  undefined1 auStack_af8 [16];
  undefined4 uStack_ae8;
  undefined1 auStack_ae0 [48];
  undefined1 auStack_ab0 [2736];
  
  piVar1 = (int *)*param_2;
  piStack0000001c = param_2;
  piStack_b40 = piVar1;
  if (piVar1 != (int *)0x0) {
    fn_82F56D40(aiStack_b3c,param_1,&piStack_b40);
    if (aiStack_b3c[0] == *(int *)(param_1 + 4)) {
      pppuStack_b20 = &ppuStack_b30;
      ppuStack_b30 = &lbl_82165F1C;
      iStack_b2c = param_1;
      fn_82F53C68(piVar1,&ppuStack_b30);
    }
    uVar2 = fn_82F58670(param_1,&piStack_b40);
    uStack_b00 = 0;
    uStack_ae8 = 0;
    fn_82F56790(auStack_b10,param_3);
    fn_82F56790(auStack_af8,param_4);
    lVar3 = fn_82F57BF0(uVar2,&stack0x0000001c);
    fn_82F56790(lVar3,auStack_b10);
    fn_82F56790(lVar3 + 0x18,auStack_af8);
    (**(code **)(*piVar1 + 8))(piVar1,auStack_ae0);
    (**(code **)(*piVar1 + 4))(piVar1,auStack_ab0);
    if (*(int *)(param_3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(code **)(**(int **)(param_3 + 0x10) + 4))(*(int **)(param_3 + 0x10),auStack_ae0,0);
    fn_82359C18(auStack_af8);
    fn_82359C18(auStack_b10);
  }
  fn_82359C18(param_3);
  fn_82359C18(param_4);
  return;
}

