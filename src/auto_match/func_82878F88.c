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
extern unsigned int *auStack_100;
extern unsigned int *auStack_70;
extern unsigned int *auStack_94;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_e4;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82864898();
extern int fn_828648F0();


undefined8 fn_82878F88(int *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar7;
  ulonglong uVar6;
  double dVar8;
  undefined1 auStack_100 [28];
  float fStack_e4;
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [28];
  undefined1 auStack_94 [36];
  undefined1 auStack_70 [112];
  
  bVar2 = false;
  if (param_2 != (int *)0x0) {
    for (iVar7 = *param_2; iVar7 != param_2[1]; iVar7 = iVar7 + 0x20) {
      fn_8223B688(auStack_100,iVar7);
      fStack_e4 = *(float *)(iVar7 + 0x1c);
      dVar8 = (double)fStack_e4;
      iVar1 = *param_1;
      uVar5 = fn_828648F0(auStack_e0,auStack_100);
      uVar6 = (**(code **)(iVar1 + 0x28))(dVar8,param_1,uVar5);
      fn_82864898(auStack_e0);
      if ((uVar6 & 0xffffffff) >> 0x1f != 0) {
        bVar2 = true;
      }
      fn_82230300(auStack_100,1,0);
    }
  }
  if (param_3 != (uint *)0x0) {
    for (uVar6 = (ulonglong)*param_3; (uVar6 & 0xffffffff) != (ulonglong)param_3[1];
        uVar6 = uVar6 + 0x38) {
      fn_8223B688(auStack_b0,uVar6);
      fn_8223B688(auStack_94,uVar6 + 0x1c);
      iVar7 = *param_1;
      uVar5 = fn_828648F0(auStack_70,auStack_94);
      uVar3 = fn_828648F0(auStack_e0,auStack_b0);
      uVar4 = (**(code **)(iVar7 + 0x30))(param_1,uVar3,uVar5);
      fn_82864898(auStack_e0);
      fn_82864898(auStack_70);
      if ((uVar4 & 0xffffffff) >> 0x1f != 0) {
        bVar2 = true;
      }
      fn_82230300(auStack_94,1,0);
      fn_82230300(auStack_b0,1,0);
    }
  }
  uVar5 = 0xffffffffa0200000;
  if (!bVar2) {
    uVar5 = 0x20200000;
  }
  return uVar5;
}

