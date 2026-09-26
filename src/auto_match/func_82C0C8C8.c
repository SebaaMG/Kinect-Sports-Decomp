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
extern int fn_82C04268();
extern int fn_82C0BF10();
extern unsigned int uStack_44;


undefined8 fn_82C0C8C8(int *param_1,ulonglong param_2,uint *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  uint uStack_44;
  int *piStack_40;
  int *piStack_3c;
  int *apiStack_38 [14];
  
  uStack_44 = 0;
  apiStack_38[0] = (int *)0x0;
  piStack_3c = (int *)0x0;
  piStack_50 = (int *)0x0;
  piStack_48 = (int *)0x0;
  piStack_40 = (int *)0x0;
  piStack_4c = (int *)0x0;
  (**(code **)(*param_1 + 0xc))();
  (**(code **)(*(int *)param_1[0xb] + 0x44))((int *)param_1[0xb],apiStack_38,&piStack_3c,0);
  (**(code **)(*(int *)param_1[0xb] + 0x3c))((int *)param_1[0xb],&piStack_50,&piStack_48,0);
  uVar1 = (**(code **)(*(int *)param_1[0xb] + 0x40))((int *)param_1[0xb],&piStack_40,&piStack_4c,0);
  piVar4 = (int *)0x0;
  if (piStack_50 != (int *)0x0) {
    (**(code **)(*piStack_50 + 0xc))(piStack_50);
    piVar4 = piStack_50;
  }
  piVar2 = (int *)0x0;
  if (piStack_48 != (int *)0x0) {
    (**(code **)(*piStack_48 + 0xc))();
    piVar4 = piStack_50;
    piVar2 = piStack_48;
  }
  if (piStack_40 != (int *)0x0) {
    (**(code **)(*piStack_40 + 0xc))(piStack_40);
    piVar4 = piStack_50;
    piVar2 = piStack_48;
  }
  piVar3 = (int *)0x0;
  if (piStack_4c != (int *)0x0) {
    (**(code **)(*piStack_4c + 0xc))(piStack_4c);
    piVar4 = piStack_50;
    piVar2 = piStack_48;
    piVar3 = piStack_4c;
  }
  if (piVar2 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar2 + 0x7c))(piVar2,param_2,&uStack_44);
    param_2 = (ulonglong)uStack_44;
    piVar4 = piStack_50;
    piVar3 = piStack_4c;
  }
  if (-1 < (int)uVar1) {
    if (piVar4 != (int *)0x0) {
      uVar1 = (**(code **)(*piVar4 + 0x7c))(piVar4,param_2,&uStack_44);
      piVar3 = piStack_4c;
    }
    if (-1 < (int)uVar1) {
      if (piStack_3c != (int *)0x0) {
        uVar1 = (**(code **)(*piVar3 + 0x54))(piVar3,4);
        fn_82C0BF10(piStack_3c);
      }
      if (-1 < (int)uVar1) {
        fn_82C04268(param_1[0xb],uStack_44);
      }
    }
  }
  (**(code **)(*param_1 + 200))(param_1);
  (**(code **)(*param_1 + 0xc4))(param_1);
  if (piStack_4c != (int *)0x0) {
    (**(code **)(*piStack_4c + 0x14))();
  }
  if (piStack_40 != (int *)0x0) {
    (**(code **)(*piStack_40 + 0x14))();
  }
  if (piStack_48 != (int *)0x0) {
    (**(code **)(*piStack_48 + 0x14))();
  }
  if (piStack_50 != (int *)0x0) {
    (**(code **)(*piStack_50 + 0x14))();
  }
  (**(code **)(*param_1 + 0x14))(param_1);
  if (param_3 != (uint *)0x0) {
    *param_3 = uStack_44;
  }
  if (piStack_40 != (int *)0x0) {
    (**(code **)(*piStack_40 + 8))();
    piStack_40 = (int *)0x0;
  }
  if (piStack_4c != (int *)0x0) {
    (**(code **)(*piStack_4c + 8))();
    piStack_4c = (int *)0x0;
  }
  if (piStack_50 != (int *)0x0) {
    (**(code **)(*piStack_50 + 8))();
    piStack_50 = (int *)0x0;
  }
  if (piStack_48 != (int *)0x0) {
    (**(code **)(*piStack_48 + 8))();
    piStack_48 = (int *)0x0;
  }
  if (apiStack_38[0] != (int *)0x0) {
    (**(code **)(*apiStack_38[0] + 8))();
    apiStack_38[0] = (int *)0x0;
  }
  if (piStack_3c != (int *)0x0) {
    (**(code **)(*piStack_3c + 8))();
  }
  return uVar1;
}

