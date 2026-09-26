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
extern unsigned int *auStack_34;
extern int fn_82C04268();
extern int fn_82C0BF10();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_40;


undefined8 fn_82C0CC48(double param_1,int *param_2)

{
  float fVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  double dVar7;
  double dVar8;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  int *piStack_38;
  undefined4 auStack_34 [13];
  
  piStack_3c = (int *)0x0;
  piStack_38 = (int *)0x0;
  piStack_50 = (int *)0x0;
  piStack_4c = (int *)0x0;
  piStack_44 = (int *)0x0;
  piStack_48 = (int *)0x0;
  if (param_1 == (double)(float)param_2[0x46]) {
    return 0;
  }
  (**(code **)(*param_2 + 0xc))(param_2);
  (**(code **)(*(int *)param_2[0xb] + 0x44))((int *)param_2[0xb],&piStack_3c,&piStack_38,0);
  (**(code **)(*(int *)param_2[0xb] + 0x3c))((int *)param_2[0xb],&piStack_50,&piStack_4c,0);
  uVar2 = (**(code **)(*(int *)param_2[0xb] + 0x40))((int *)param_2[0xb],&piStack_44,&piStack_48,0);
  piVar5 = (int *)0x0;
  if (piStack_50 != (int *)0x0) {
    (**(code **)(*piStack_50 + 0xc))(piStack_50);
    piVar5 = piStack_50;
  }
  piVar3 = (int *)0x0;
  if (piStack_44 != (int *)0x0) {
    (**(code **)(*piStack_44 + 0xc))();
    piVar5 = piStack_50;
    piVar3 = piStack_44;
  }
  piVar6 = (int *)0x0;
  if (piStack_4c != (int *)0x0) {
    (**(code **)(*piStack_4c + 0xc))(piStack_4c);
    piVar5 = piStack_50;
    piVar3 = piStack_44;
    piVar6 = piStack_4c;
  }
  piVar4 = (int *)0x0;
  if (piStack_48 != (int *)0x0) {
    (**(code **)(*piStack_48 + 0xc))(piStack_48);
    piVar5 = piStack_50;
    piVar3 = piStack_44;
    piVar6 = piStack_4c;
    piVar4 = piStack_48;
  }
  if ((int)uVar2 < 0) goto LAB_82c0cf44;
  dVar8 = (double)lbl_821AAD20;
  (**(code **)(*piVar6 + 0x90))(piVar6,dVar8 < param_1);
  uVar2 = (**(code **)(*(int *)param_2[0xb] + 0x6c))(param_1);
  piVar5 = piStack_50;
  piVar3 = piStack_44;
  piVar6 = piStack_4c;
  piVar4 = piStack_48;
  if ((int)uVar2 < 0) goto LAB_82c0cf44;
  fVar1 = (float)param_2[0x46];
  param_2[0x46] = (int)(float)param_1;
  dVar7 = (double)lbl_82002AE0;
  param_2[0x41] = (uint)(param_1 != dVar7);
  if (param_1 != dVar7) goto LAB_82c0cf44;
  auStack_34[0] = 0;
  uStack_40 = 0;
  if (dVar8 <= (double)fVar1) {
    uVar2 = (**(code **)(*piStack_50 + 0x7c))
                      (piStack_50,*(ulonglong *)(piStack_4c + 0x20) & 0xffffffff,&uStack_40);
LAB_82c0cef4:
    if (-1 < (int)uVar2) {
      uVar2 = fn_82C04268(param_2[0xb],uStack_40);
    }
  }
  else {
    uVar2 = (**(code **)(*piStack_4c + 0x7c))
                      (piStack_4c,*(ulonglong *)(param_2 + 0x48) & 0xffffffff,auStack_34);
    if ((-1 < (int)uVar2) &&
       (uVar2 = (**(code **)(*piStack_50 + 0x7c))(piStack_50,auStack_34[0],&uStack_40),
       -1 < (int)uVar2)) {
      uVar2 = (**(code **)(*piStack_48 + 0x54))(piStack_48,4);
      fn_82C0BF10(piStack_38);
      goto LAB_82c0cef4;
    }
  }
  (**(code **)(*param_2 + 200))(param_2);
  (**(code **)(*param_2 + 0xc4))(param_2);
  piVar5 = piStack_50;
  piVar3 = piStack_44;
  piVar6 = piStack_4c;
  piVar4 = piStack_48;
LAB_82c0cf44:
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x14))(piVar5);
    piVar3 = piStack_44;
    piVar6 = piStack_4c;
    piVar4 = piStack_48;
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x14))();
    piVar6 = piStack_4c;
    piVar4 = piStack_48;
  }
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0x14))(piVar6);
    piVar4 = piStack_48;
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x14))(piVar4);
  }
  (**(code **)(*param_2 + 0x14))(param_2);
  if (piStack_44 != (int *)0x0) {
    (**(code **)(*piStack_44 + 8))();
    piStack_44 = (int *)0x0;
  }
  if (piStack_48 != (int *)0x0) {
    (**(code **)(*piStack_48 + 8))();
    piStack_48 = (int *)0x0;
  }
  if (piStack_50 != (int *)0x0) {
    (**(code **)(*piStack_50 + 8))();
    piStack_50 = (int *)0x0;
  }
  if (piStack_4c != (int *)0x0) {
    (**(code **)(*piStack_4c + 8))();
    piStack_4c = (int *)0x0;
  }
  if (piStack_3c != (int *)0x0) {
    (**(code **)(*piStack_3c + 8))();
    piStack_3c = (int *)0x0;
  }
  if (piStack_38 != (int *)0x0) {
    (**(code **)(*piStack_38 + 8))();
  }
  return uVar2;
}

