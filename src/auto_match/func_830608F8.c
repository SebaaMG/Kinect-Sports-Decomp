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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_d8;
extern unsigned int *auStack_ec;
extern int fn_82809CB0();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82F691F0();
extern int fn_8305FC10();
extern int fn_8305FC88();
extern int fn_8305FFB8();
extern int fn_83065B90();
extern int fn_83066770();
extern int fn_83066DD8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_f0;


undefined8 fn_830608F8(double param_1,uint *param_2,undefined8 param_3)

{
  char cVar2;
  undefined8 uVar1;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  uint uStack_f0;
  uint auStack_ec;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [1];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [160];
  
  if ((2 < (int)param_2[6]) && (cVar2 = fn_8305FC10(), cVar2 != '\0')) {
    fn_8305FC88(param_2,&auStack_ec,&uStack_f0);
    if ((-1 < (int)auStack_ec) && (-1 < (int)uStack_f0)) {
      uVar5 = *param_2;
      lVar7 = (ulonglong)uStack_f0 * 0xc;
      uVar1 = fn_83066770(param_3);
      fn_8305FFB8(param_2,uVar1,(ulonglong)auStack_ec * 0xc + (ulonglong)uVar5,
                        (ulonglong)uVar5 + lVar7,auStack_a0);
      lVar4 = -1;
      lVar6 = 0;
      dVar9 = (double)lbl_821AAD20;
      if (0 < (int)param_2[6]) {
        lVar3 = 0;
        do {
          fn_83066DD8(auStack_a0,lVar3 + (ulonglong)*param_2);
          dVar8 = (double)fn_82809CB0();
          if (dVar9 < dVar8) {
            lVar4 = lVar6;
            dVar9 = dVar8;
          }
          lVar6 = lVar6 + 1;
          lVar3 = lVar3 + 0xc;
        } while ((int)lVar6 < (int)param_2[6]);
        uVar5 = (uint)lVar4;
        if (((-1 < (int)uVar5) && (uVar5 != auStack_ec)) && (uVar5 != uStack_f0)) {
          fn_82810328((ulonglong)*param_2 + lVar7,
                       (ulonglong)auStack_ec * 0xc + (ulonglong)*param_2,auStack_c8);
          fn_82810328(lVar4 * 0xc + (ulonglong)*param_2,(ulonglong)*param_2 + lVar7,auStack_d8);
          fn_82810240(auStack_c8,auStack_d8,auStack_b8);
          uVar1 = fn_83066770(param_3);
          fn_82810280(auStack_b8,uVar1);
          dVar9 = (double)fn_82809CB0();
          if (param_1 <= dVar9) {
            uVar1 = fn_83065B90(param_2[6]);
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(uVar1,1,param_2[6]);
          }
        }
      }
    }
  }
  return 0;
}

