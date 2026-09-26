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
extern unsigned int *auStack_48;
extern int fn_82230040();
extern int fn_825875C0();
extern int fn_8265BF48();
extern int fn_8265C9E0();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;


void fn_82586E58(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [72];
  
  iVar3 = fn_8265BF48(param_3,0);
  iVar1 = **(int **)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 4);
  piVar4 = (int *)fn_8265C9E0(0x10);
  if (piVar4 == (int *)0x0) {
    uStack_4c = 0;
    ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_50);
  }
  *piVar4 = iVar1;
  piVar4[1] = iVar2;
  if (piVar4 + 2 != (int *)0x0) {
    piVar4[2] = iVar3;
    piVar4[3] = param_2;
  }
  if (*(int *)(param_1 + 8) == 0x1ffffffe) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff8219852c);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *(int **)(iVar1 + 4) = piVar4;
  *(int **)piVar4[1] = piVar4;
  fn_825875C0(auStack_48,param_1,(ulonglong)**(uint **)(param_1 + 4) + 8);
  return;
}

