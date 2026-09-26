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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_6c;
extern unsigned int *auStack_80;
extern int fn_82E2E920();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E59440();
extern int fn_82E5A018();
extern int fn_82E5A4E0();
extern int fn_82E5B290();
extern int fn_82E764B0();
extern int fn_82E772F0();
extern int fn_82E77398();
extern int fn_82E783C0();
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_74;


/* WARNING: Type propagation algorithm not settling */

ulonglong fn_82E78738(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ushort auStack_80 [2];
  int *piStack_7c;
  int *piStack_78;
  uint uStack_74;
  int *piStack_70;
  uint auStack_6c [3];
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 auStack_50 [40];
  
  if ((param_2 & 0xffffffff) == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    piStack_70 = (int *)0x0;
    piStack_78 = (int *)0x0;
    piStack_7c = (int *)0x0;
    uVar5 = 0;
    uVar2 = fn_82E59440(param_2,0xffffffff820ed018,0xffffffff82154c58,&piStack_70);
    piVar4 = piStack_7c;
    if ((-1 < (longlong)uVar2) &&
       (uVar2 = (**(code **)*piStack_70)(piStack_70,0xffffffff82154c18,&piStack_78),
       piVar4 = piStack_7c, -1 < (longlong)uVar2)) {
      uStack_74 = 0;
      uVar2 = (**(code **)(*piStack_78 + 0xc))(piStack_78,0xffffffff820f8f08,&uStack_74);
      piVar4 = piStack_7c;
      if (-1 < (longlong)uVar2) {
        fn_82E783C0(param_1 + 0x18,uStack_74);
        uVar2 = 0;
        uVar6 = 0;
        piVar4 = piStack_7c;
        if (uStack_74 != 0) {
          do {
            uVar5 = 0;
            uVar2 = (**(code **)(*piStack_78 + 0x10))
                              (piStack_78,0xffffffff820f8f08,uVar6,&piStack_7c);
            piVar1 = piStack_7c;
            piVar4 = piStack_7c;
            if ((longlong)uVar2 < 0) break;
            if (piStack_7c == (int *)0x0) {
              uVar2 = 0xffffffff8000ffff;
              piVar4 = (int *)0x0;
              break;
            }
            auStack_80[1] = 0;
            uVar2 = fn_82E5A018(piStack_7c,auStack_80 + 1);
            auStack_6c[0] = (uint)uVar2;
            piVar4 = piStack_7c;
            if ((longlong)uVar2 < 0) break;
            auStack_80[0] = 0;
            fn_82E5A4E0(piVar1,auStack_80);
            uVar5 = fn_82E50BE8(8,0,0,0,0);
            if ((uVar5 & 0xffffffff) == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = fn_82E772F0(uVar5,auStack_80[0],auStack_6c);
              uVar2 = (ulonglong)auStack_6c[0];
            }
            auStack_6c[0] = (uint)uVar5;
            piVar4 = piStack_7c;
            if ((int)uVar2 < 0) break;
            if ((uVar5 & 0xffffffff) == 0) {
              uVar2 = 0xffffffff8007000e;
              break;
            }
            uVar7 = 0;
            if (auStack_80[0] != 0) {
              do {
                uStack_5c = 0;
                uStack_58 = 0;
                uStack_54 = 0;
                auStack_50[0] = 0;
                uVar2 = fn_82E5B290(piVar1,uVar7,auStack_60,auStack_50,0,0);
                piVar4 = piStack_7c;
                if (((longlong)uVar2 < 0) ||
                   (uVar2 = fn_82E764B0(uVar5,uVar7,auStack_60), piVar4 = piStack_7c,
                   (longlong)uVar2 < 0)) goto LAB_82e789a4;
                uVar7 = uVar7 + 1;
              } while (uVar7 < auStack_80[0]);
            }
            iVar3 = fn_82E2E920(param_1 + 8,auStack_80 + 1,auStack_6c);
            if (iVar3 == 0) {
              uVar2 = 0xffffffff8007000e;
              piVar4 = piStack_7c;
              break;
            }
            if (piStack_7c != (int *)0x0) {
              (**(code **)(*piStack_7c + 8))();
              piStack_7c = (int *)0x0;
            }
            uVar6 = uVar6 + 1;
            uVar5 = 0;
            piVar4 = piStack_7c;
          } while ((uVar6 & 0xffffffff) < (ulonglong)uStack_74);
        }
      }
    }
LAB_82e789a4:
    if (piStack_70 != (int *)0x0) {
      (**(code **)(*piStack_70 + 8))(piStack_70);
      piStack_70 = (int *)0x0;
      piVar4 = piStack_7c;
    }
    if (piStack_78 != (int *)0x0) {
      (**(code **)(*piStack_78 + 8))(piStack_78);
      piStack_78 = (int *)0x0;
      piVar4 = piStack_7c;
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
      piStack_7c = (int *)0x0;
    }
    if ((uVar5 & 0xffffffff) != 0) {
      fn_82E77398(uVar5);
      fn_82E4FE40(uVar5);
    }
  }
  return uVar2;
}

