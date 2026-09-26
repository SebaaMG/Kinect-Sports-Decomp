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
extern unsigned int *auStack_b0;
extern int fn_82E5E1F0();
extern int fn_82E604D0();
extern int fn_82E626F0();
extern unsigned int iStack_a8;
extern unsigned int lbl_82154EB8;
extern unsigned int uStack_98;
extern unsigned int uStack_a4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong fn_82E61220(int *param_1,int *param_2,undefined4 *param_3,uint *param_4,int param_5,
                      int param_6,int param_7,uint param_8)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  int *piVar5;
  ulonglong uVar6;
  ushort auStack_b0 [2];
  int *piStack_ac;
  int iStack_a8;
  uint uStack_a4;
  int *apiStack_a0 [2];
  ulonglong uStack_98;
  uint auStack_90 [36];
  
  if ((((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_5 == 0)) ||
     ((param_6 == 0 || (param_7 == 0)))) {
    lVar3 = -0x7ff8ffa9;
  }
  else if ((param_4 == (uint *)0x0) || (param_3 == (undefined4 *)0x0)) {
    lVar3 = -0x7fffbffd;
  }
  else {
    *param_4 = 0;
    *param_3 = 0;
    piStack_ac = (int *)0x0;
    apiStack_a0[0] = (int *)0x0;
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0xffffffff82154aa8,0,apiStack_a0);
    piVar2 = apiStack_a0[0];
    piVar5 = (int *)0x0;
    if (-1 < lVar3) {
      apiStack_a0[0] = (int *)0x0;
      uStack_a4 = 0;
      lVar3 = fn_82E626F0(piVar2,&uStack_a4);
      piVar5 = piVar2;
      if (-1 < lVar3) {
        if (uStack_a4 == 0) {
          lVar3 = -0x3ff2c94a;
        }
        else {
          auStack_90[0] = 0;
          lVar3 = (**(code **)(*param_1 + 0x84))(param_1,auStack_90);
          if (-1 < lVar3) {
            uVar6 = 0;
            if (auStack_90[0] != 0) {
              do {
                auStack_b0[0] = 0;
                lVar3 = (**(code **)(*param_1 + 0x88))(param_1,uVar6,auStack_b0,&piStack_ac);
                if (lVar3 < 0) goto LAB_82e614cc;
                if (param_8 < auStack_b0[0]) {
                  lVar3 = -0x7fff0001;
                  break;
                }
                iStack_a8 = 0;
                lVar3 = fn_82E5E1F0(piStack_ac,0xffffffff8214c2a0,&iStack_a8,0);
                if ((lVar3 < 0) ||
                   ((iStack_a8 == 0 &&
                    (lVar3 = fn_82E5E1F0(piStack_ac,0xffffffff8214c290,&iStack_a8,0), lVar3 < 0)))
                   ) goto LAB_82e614cc;
                iVar1 = iStack_a8;
                uStack_98 = uStack_98 & 0xffffffff;
                lVar3 = (**(code **)(*piStack_ac + 0x1c))(piStack_ac,0xffffffff8214c720,&uStack_98);
                if (lVar3 < 0) {
                  uStack_98 = uStack_98 & 0xffffffff;
                  lVar3 = 0;
                }
                *(uint *)((uint)auStack_b0[0] * 4 + param_7) = (((U64)(uStack_98) >> 0) & 0xFFFFFFFF) & 0x80000000;
                uVar4 = fn_82E604D0(piStack_ac,iVar1,uStack_a4);
                if (piStack_ac != (int *)0x0) {
                  (**(code **)(*piStack_ac + 8))(piStack_ac);
                  piStack_ac = (int *)0x0;
                }
                uVar6 = uVar6 + 1;
                *(int *)((uint)auStack_b0[0] * 4 + param_5) = iVar1;
                *(undefined4 *)((uint)auStack_b0[0] * 4 + param_6) = uVar4;
                *param_4 = *param_4 + iVar1;
              } while ((uVar6 & 0xffffffff) < (ulonglong)auStack_90[0]);
            }
            if (-1 < (int)lVar3) {
              uStack_98 = ((ulonglong)uStack_a4 - 0xc & 0x1fffffff) << 3;
              trapWord(6,uStack_98,0);
              uStack_98 = *param_4 / uStack_98;
              *param_3 = (int)(longlong)((double)uStack_98 * lbl_82154EB8);
            }
          }
        }
      }
    }
LAB_82e614cc:
    if (piStack_ac != (int *)0x0) {
      (**(code **)(*piStack_ac + 8))();
      piStack_ac = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    if (apiStack_a0[0] != (int *)0x0) {
      (**(code **)(*apiStack_a0[0] + 8))();
    }
  }
  return lVar3;
}

