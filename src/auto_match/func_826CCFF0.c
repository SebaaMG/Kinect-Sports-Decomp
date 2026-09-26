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
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_826C59F8();
extern int fn_826CBFF0();
extern int fn_826F9000();
extern unsigned int lbl_8200571C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_4b;
extern unsigned int uStack_4c;


void fn_826CCFF0(int param_1)

{
  undefined4 uVar1;
  int *piVar3;
  undefined8 uVar2;
  int iVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  int *piStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  piVar3 = (int *)fn_826C59F8();
  if (piVar3 != (int *)0x0) {
    piStack_50 = (int *)0x0;
    uVar5 = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    fStack_44 = lbl_821AAD20;
    fStack_48 = lbl_821AAD20;
    fStack_3c = lbl_821AAD20;
    fStack_40 = lbl_821AAD20;
    fStack_34 = lbl_821AAD20;
    fStack_38 = lbl_821AAD20;
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar5 = fn_826957D0(param_1,0);
      uVar5 = fn_82695608(uVar5,uVar1);
      if (4 < *(int *)(param_1 + 0x1c)) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uStack_4b = 1;
        uVar2 = fn_826957D0(param_1,1);
        dVar6 = (double)fn_826972E0(uVar2,uVar1);
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        dVar7 = (double)lbl_8200571C;
        fStack_48 = (float)((double)(float)dVar6 * dVar7);
        uVar2 = fn_826957D0(param_1,2);
        dVar6 = (double)fn_826972E0(uVar2,uVar1);
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        fStack_44 = (float)((double)(float)dVar6 * dVar7);
        uVar2 = fn_826957D0(param_1,3);
        dVar6 = (double)fn_826972E0(uVar2,uVar1);
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        fStack_40 = (float)((double)(float)dVar6 * dVar7);
        uVar2 = fn_826957D0(param_1,4);
        dVar6 = (double)fn_826972E0(uVar2,uVar1);
        fStack_3c = (float)((double)(float)dVar6 * dVar7);
      }
    }
    piStack_50 = piVar3;
    fn_826F9000(&piStack_50,uVar5);
    iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3);
    *(int **)(iVar4 + 0xa08) = piStack_50;
    *(undefined1 *)(iVar4 + 0xa0c) = uStack_4c;
    *(undefined1 *)(iVar4 + 0xa0d) = uStack_4b;
    *(float *)(iVar4 + 0xa10) = fStack_48;
    *(float *)(iVar4 + 0xa14) = fStack_44;
    *(float *)(iVar4 + 0xa18) = fStack_40;
    *(float *)(iVar4 + 0xa1c) = fStack_3c;
    *(float *)(iVar4 + 0xa20) = fStack_38;
    *(float *)(iVar4 + 0xa24) = fStack_34;
    fn_826CBFF0(piVar3);
  }
  return;
}

