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
extern unsigned int *auStack_190;
extern unsigned int *auStack_6c;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E7C7B0();
extern int fn_82EF0770();
extern int fn_82EF0858();
extern int fn_82EF0A88();
extern int fn_82EF0D10();
extern int fn_82EF0F88();
extern int fn_82EF1830();
extern int fn_82EF19C0();
extern int fn_82EF1A70();
extern unsigned int lbl_82160300;
extern unsigned int uStack_1a8;
extern unsigned int uStack_1aa;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1ae;
extern unsigned int uStack_1b0;
extern unsigned int uStack_60;
extern unsigned int uStack_68;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong fn_82E7D068(undefined8 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ushort uStack_1b0;
  ushort uStack_1ae;
  ushort uStack_1ac;
  undefined2 uStack_1aa;
  undefined4 uStack_1a8;
  int *piStack_1a4;
  int aiStack_1a0 [4];
  undefined1 auStack_190 [292];
  undefined1 auStack_6c [4];
  undefined4 uStack_68;
  undefined4 uStack_60;
  
  uStack_1ac = 0;
  aiStack_1a0[0] = 0;
  uStack_1a8 = 0;
  lVar7 = 0;
  uStack_1aa = 0;
  uVar4 = 0;
  uStack_1b0 = 0;
  uVar3 = 0;
  uStack_1ae = 0;
  piStack_1a4 = (int *)0x0;
  fn_82EF19C0(auStack_190);
  iVar2 = fn_82E7C7B0(param_1,&piStack_1a4);
  piVar1 = piStack_1a4;
  if ((((-1 < iVar2) && (lVar7 = fn_82EF0D10(piStack_1a4,&uStack_1ac), -1 < lVar7)) &&
      (lVar7 = fn_82EF1A70(auStack_6c,uStack_1ac), -1 < lVar7)) &&
     (lVar7 = fn_82EF0A88(piVar1,aiStack_1a0), -1 < lVar7)) {
    uVar5 = 0;
    if (uStack_1ac != 0) {
      do {
        uVar6 = uVar5;
        if (aiStack_1a0[0] != 0) {
          uVar6 = uVar5 + lbl_82160300 & 0xffff;
        }
        uStack_1b0 = 0;
        lVar7 = fn_82EF0858(piVar1,uVar6,&uStack_1a8,&uStack_1aa,0,&uStack_1b0);
        if (lVar7 < 0) goto LAB_82e7d2e8;
        if ((uVar4 & 0xffffffff) != 0) {
          fn_82E4FE40(uVar4);
        }
        uVar4 = fn_82E50BE8((ulonglong)uStack_1b0 << 1,0,0,0,0);
        if (uVar4 == 0) {
LAB_82e7d338:
          lVar7 = -0x7ff8fff2;
          goto LAB_82e7d2e8;
        }
        lVar7 = fn_82EF0858(piVar1,uVar6,&uStack_1a8,&uStack_1aa,uVar4,&uStack_1b0);
        if (lVar7 < 0) goto LAB_82e7d2e8;
        uStack_1ae = 0;
        lVar7 = fn_82EF0770(piVar1,uStack_1aa,0,&uStack_1ae);
        if (lVar7 < 0) goto LAB_82e7d2e8;
        if ((uVar3 & 0xffffffff) != 0) {
          fn_82E4FE40(uVar3);
        }
        uVar3 = fn_82E50BE8((ulonglong)uStack_1ae << 1,0,0,0,0);
        if (uVar3 == 0) goto LAB_82e7d338;
        lVar7 = fn_82EF0770(piVar1,uStack_1aa,uVar3,&uStack_1ae);
        if ((((lVar7 < 0) ||
             (lVar7 = fn_82EF1A70(auStack_6c,(ulonglong)uStack_1b0 << 1), lVar7 < 0)) ||
            ((lVar7 = fn_82EF0F88(auStack_6c,uVar4,(ulonglong)uStack_1b0 << 1), lVar7 < 0 ||
             ((lVar7 = fn_82EF1A70(auStack_6c,(ulonglong)uStack_1ae << 1), lVar7 < 0 ||
              (lVar7 = fn_82EF0F88(auStack_6c,uVar3,(ulonglong)uStack_1ae << 1), lVar7 < 0))))
            )) || (lVar7 = fn_82EF1A70(auStack_6c,uStack_1a8), lVar7 < 0)) goto LAB_82e7d2e8;
        uVar5 = uVar5 + 1 & 0xffff;
      } while (uVar5 < uStack_1ac);
    }
    lVar7 = (**(code **)(*param_2 + 0x68))(param_2,0xffffffff8214c150,uStack_68,uStack_60);
  }
LAB_82e7d2e8:
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((uVar4 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar4);
  }
  if ((uVar3 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar3);
  }
  fn_82EF1830(auStack_190);
  return lVar7;
}

