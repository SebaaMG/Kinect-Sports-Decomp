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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a4;
extern unsigned int *auStack_af;
extern int fn_8268ADD8();
extern int fn_8268AE48();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268AFF0();
extern int fn_8268B118();
extern int fn_8268B120();
extern int fn_826944C8();
extern int fn_82694610();
extern int fn_82696330();
extern unsigned int iStack_8c;
extern unsigned int iStack_9c;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_b0;


undefined8 fn_8271BF18(int param_1,int *param_2,uint *param_3)

{
  bool bVar1;
  ulonglong uVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 uStack_b0;
  undefined1 auStack_af [3];
  int iStack_ac;
  int iStack_a8;
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined1 auStack_90 [4];
  int iStack_8c;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_60;
  undefined4 uStack_5c;
  
  fn_8268AFB0(&uStack_80,lbl_831E7E64);
  fn_8268AFB0(&uStack_60,lbl_831E7E64);
  if ((*(uint *)(*param_3 & 0xfffffffc) & 0x7fffffff) == 0) {
    uVar7 = 0;
  }
  else {
    bVar1 = true;
    uVar2 = fn_8268ADD8(param_3,0,auStack_a4);
    uVar6 = 0xffffffff82196582;
    while( true ) {
      if (uVar2 == 0) break;
      if ((uVar2 & 0xffffffff) == 0xd) {
        uVar2 = 10;
      }
      if ((uVar2 & 0xffffffff) == 0x26) {
        uVar2 = (ulonglong)uStack_60;
        if ((ulonglong)uStack_60 == 0) {
          uVar2 = uVar6;
        }
        iVar4 = fn_82694610((ulonglong)*(uint *)(param_1 + 0x78) + 0x254,uVar2,uStack_5c);
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        auStack_a0[0] = 5;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        uStack_b0 = 0;
        uVar2 = (ulonglong)uStack_80;
        if ((ulonglong)uStack_80 == 0) {
          uVar2 = uVar6;
        }
        iStack_9c = iVar4;
        iStack_ac = fn_82694610((ulonglong)*(uint *)(param_1 + 0x78) + 0x254,uVar2,uStack_7c);
        *(int *)(iStack_ac + 8) = *(int *)(iStack_ac + 8) + 1;
        (**(code **)(*param_2 + 0xc))(param_2,param_1,&iStack_ac,auStack_a0,&uStack_b0);
        lVar5 = (ulonglong)*(uint *)(iStack_ac + 8) - 1;
        *(int *)(iStack_ac + 8) = (int)lVar5;
        if (lVar5 == 0) {
          fn_826944C8(iStack_ac);
        }
        fn_82696330(auStack_a0);
        lVar5 = (ulonglong)*(uint *)(iVar4 + 8) - 1;
        *(int *)(iVar4 + 8) = (int)lVar5;
        if (lVar5 == 0) {
          fn_826944C8(iVar4);
        }
        fn_8268B118(&uStack_80);
        fn_8268B118(&uStack_60);
        bVar1 = true;
      }
      else {
        if (bVar1) {
          if ((uVar2 & 0xffffffff) == 0x3d) {
            bVar1 = false;
            goto LAB_8271c0d8;
          }
          puVar3 = &uStack_80;
        }
        else {
          puVar3 = &uStack_60;
        }
        fn_8268B120(puVar3);
      }
LAB_8271c0d8:
      uVar2 = fn_8268AE48(param_3,auStack_a4);
    }
    iVar4 = fn_8268AFF0(&uStack_80);
    if (iVar4 != 0) {
      uVar2 = (ulonglong)uStack_60;
      if ((ulonglong)uStack_60 == 0) {
        uVar2 = uVar6;
      }
      iVar4 = fn_82694610((ulonglong)*(uint *)(param_1 + 0x78) + 0x254,uVar2,uStack_5c);
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      auStack_90[0] = 5;
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      auStack_af[0] = 0;
      uVar2 = (ulonglong)uStack_80;
      if ((ulonglong)uStack_80 == 0) {
        uVar2 = uVar6;
      }
      iStack_8c = iVar4;
      iStack_a8 = fn_82694610((ulonglong)*(uint *)(param_1 + 0x78) + 0x254,uVar2,uStack_7c);
      *(int *)(iStack_a8 + 8) = *(int *)(iStack_a8 + 8) + 1;
      (**(code **)(*param_2 + 0xc))(param_2,param_1,&iStack_a8,auStack_90,auStack_af);
      lVar5 = (ulonglong)*(uint *)(iStack_a8 + 8) - 1;
      *(int *)(iStack_a8 + 8) = (int)lVar5;
      if (lVar5 == 0) {
        fn_826944C8(iStack_a8);
      }
      fn_82696330(auStack_90);
      lVar5 = (ulonglong)*(uint *)(iVar4 + 8) - 1;
      *(int *)(iVar4 + 8) = (int)lVar5;
      if (lVar5 == 0) {
        fn_826944C8(iVar4);
      }
    }
    uVar7 = 1;
  }
  fn_8268AFD8(&uStack_60);
  fn_8268AFD8(&uStack_80);
  return uVar7;
}

