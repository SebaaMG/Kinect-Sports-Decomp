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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_bc;
extern int fn_828FC510();
extern int fn_828FF248();
extern int fn_82901578();
extern int fn_829302D0();
extern int fn_82930318();
extern int fn_82933910();
extern int fn_8293F968();
extern int fn_82980C18();
extern int fn_82980C90();
extern int fn_82F68CC0();


ulonglong fn_8298ED10(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar6;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  bool bVar7;
  int *piStack_c0;
  uint auStack_bc [3];
  undefined1 auStack_b0 [176];
  
  uVar1 = param_1[5];
  piStack_c0 = (int *)0x0;
  bVar7 = true;
  for (; uVar1 != 0; uVar1 = *(uint *)(uVar1 + 0x20)) {
    iVar6 = *(int *)(uVar1 + 0x10);
    if (((iVar6 == 2) || (iVar6 == 3)) || (iVar6 == 4)) {
      bVar7 = false;
      break;
    }
  }
  if (!bVar7) {
    if (param_2 == 0) {
      auStack_bc[0] = 0;
      iVar6 = fn_8293F968(param_1[1],*param_1 & 0x1a0003,auStack_bc,param_1,0xffffffff8298ecc8);
      if (-1 < iVar6) {
        return (ulonglong)auStack_bc[0];
      }
    }
    else {
      fn_82980C18(param_1,param_1 + 10,0xbf8,0xffffffff8204f7d4);
    }
    goto LAB_8298eee0;
  }
  fn_828FC510(auStack_b0,0);
  if (param_2 == 0) {
    iVar6 = fn_82901578(auStack_b0,param_1[1],*param_1 & 0x1a0003,0,&piStack_c0,0);
    if (-1 < iVar6) {
      uVar2 = (**(code **)(*piStack_c0 + 0x10))();
      lVar3 = fn_829302D0(uVar2,1);
      if (lVar3 != 0) {
        uVar4 = (**(code **)(*piStack_c0 + 0xc))();
        fn_82F68CC0(lVar3,uVar4,uVar2);
        if (piStack_c0 != (int *)0x0) {
          (**(code **)(*piStack_c0 + 8))();
          piStack_c0 = (int *)0x0;
        }
        goto LAB_8298eea4;
      }
    }
  }
  else {
    fn_82980C90(param_1,param_1 + 10,0xc81,0xffffffff8204f7a4);
    uVar2 = 0;
    lVar3 = 0;
LAB_8298eea4:
    uVar5 = fn_82930318(0x38);
    if ((uVar5 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_82933910(uVar5,param_1 + 10,lVar3,uVar2);
    }
    if ((uVar5 & 0xffffffff) != 0) {
      fn_828FF248(auStack_b0);
      return uVar5;
    }
  }
  fn_828FF248(auStack_b0);
LAB_8298eee0:
  param_1[0x12] = 1;
  if (piStack_c0 != (int *)0x0) {
    (**(code **)(*piStack_c0 + 8))();
  }
  return 0;
}

