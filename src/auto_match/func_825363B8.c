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
extern unsigned int *auStack_110;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a4;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_f4;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82864898();
extern int fn_828648F0();
extern unsigned int *lbl_8327F868;


ulonglong fn_825363B8(int *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  double dVar8;
  undefined1 auStack_110 [28];
  float fStack_f4;
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [28];
  undefined1 auStack_a4 [36];
  undefined1 auStack_80 [128];
  
  iVar7 = *param_2;
  bVar2 = 0;
  if (iVar7 != param_2[1]) {
    do {
      fn_8223B688(auStack_110,iVar7);
      fStack_f4 = *(float *)(iVar7 + 0x1c);
      dVar8 = (double)fStack_f4;
      iVar1 = *param_1;
      uVar3 = fn_828648F0(auStack_f0,auStack_110);
      uVar4 = (**(code **)(iVar1 + 0x28))(dVar8,param_1,uVar3);
      fn_82864898(auStack_f0);
      if ((uVar4 & 0xffffffff) >> 0x1f != 0) {
        (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0xabb,0xffffffff821c3ecc);
        bVar2 = 1;
      }
      fn_82230300(auStack_110,1,0);
      iVar7 = iVar7 + 0x20;
    } while (iVar7 != param_2[1]);
  }
  uVar4 = (ulonglong)*param_3;
  if (uVar4 != param_3[1]) {
    do {
      fn_8223B688(auStack_c0,uVar4);
      fn_8223B688(auStack_a4,uVar4 + 0x1c);
      iVar7 = *param_1;
      uVar3 = fn_828648F0(auStack_80,auStack_a4);
      uVar5 = fn_828648F0(auStack_f0,auStack_c0);
      uVar6 = (**(code **)(iVar7 + 0x30))(param_1,uVar5,uVar3);
      fn_82864898(auStack_f0);
      fn_82864898(auStack_80);
      if ((uVar6 & 0xffffffff) >> 0x1f != 0) {
        (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0xac6,0xffffffff821c3ee4);
        bVar2 = 1;
      }
      fn_82230300(auStack_a4,1,0);
      fn_82230300(auStack_c0,1,0);
      uVar4 = uVar4 + 0x38;
    } while ((uVar4 & 0xffffffff) != (ulonglong)param_3[1]);
  }
  return -(ulonglong)bVar2 & 0xffffffff80004005;
}

