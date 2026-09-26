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
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_220;
extern unsigned int *auStack_228;
extern unsigned int *auStack_238;
extern int fn_82E65CB8();
extern int fn_82F691F0();
extern unsigned int uStack_218;
extern unsigned int uStack_22c;
extern unsigned int uStack_230;


/* WARNING: Removing unreachable block (ram,0x82e3d550) */

longlong fn_82E3CFB0(int param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piStack0000001c;
  int *piStack_240;
  int *piStack_23c;
  uint auStack_238 [2];
  undefined4 uStack_230;
  undefined4 uStack_22c;
  uint auStack_228 [2];
  undefined1 auStack_220 [8];
  undefined8 uStack_218;
  undefined1 auStack_1c0 [448];
  
  if (param_2 == (int *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else if (*(int *)(param_1 + 0x4c) == 0) {
    lVar1 = -0x3ff2c94a;
  }
  else {
    piStack_23c = (int *)0x0;
    piStack_240 = (int *)0x0;
    *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 1;
    auStack_228[0] = 0;
    uStack_22c = 0;
    piStack0000001c = param_2;
    lVar1 = (**(code **)(*param_2 + 0x9c))(param_2,auStack_228);
    piVar2 = piStack_23c;
    piVar3 = piStack_240;
    if (-1 < lVar1) {
      uVar4 = 0;
      uVar5 = 0;
      if (auStack_228[0] != 0) {
        do {
          lVar1 = (**(code **)(*param_2 + 0xa0))(param_2,uVar5,&piStack_23c);
          piVar2 = piStack_23c;
          piVar3 = piStack_240;
          if ((lVar1 < 0) ||
             (lVar1 = fn_82E65CB8(piStack_23c,&piStack_240), piVar2 = piStack_23c,
             piVar3 = piStack_240, lVar1 < 0)) goto LAB_82e3d508;
          auStack_238[0] = 0;
          lVar1 = (**(code **)(*piStack_240 + 0x14))(piStack_240,0,auStack_238);
          piVar2 = piStack_23c;
          piVar3 = piStack_240;
          if (lVar1 < 0) goto LAB_82e3d508;
          uStack_230 = 0;
          lVar1 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x24))
                            (*(int **)(param_1 + 0x4c),piStack_240,0,auStack_238[0],uVar4,
                             &uStack_230);
          piVar2 = piStack_23c;
          piVar3 = piStack_240;
          if (lVar1 < 0) goto LAB_82e3d508;
          if (piStack_23c != (int *)0x0) {
            (**(code **)(*piStack_23c + 8))();
            piStack_23c = (int *)0x0;
          }
          piVar2 = (int *)0x0;
          if (piStack_240 != (int *)0x0) {
            (**(code **)(*piStack_240 + 8))(piStack_240);
            piStack_240 = (int *)0x0;
            piVar2 = piStack_23c;
          }
          piVar3 = (int *)0x0;
          uVar5 = uVar5 + 1;
          uVar4 = auStack_238[0] + uVar4;
        } while ((uVar5 & 0xffffffff) < (ulonglong)auStack_228[0]);
      }
      if (((int)lVar1 == 0) && ((uVar4 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 0x54))) {
        uStack_218 = 0;
        lVar1 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x28))
                          (*(int **)(param_1 + 0x4c),auStack_220);
        piVar2 = piStack_23c;
        piVar3 = piStack_240;
        if ((-1 < lVar1) && ((((U64)(uStack_218) >> 16) & 0xFFFF) != 0)) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(auStack_1c0,0,0x125);
        }
      }
      else {
        lVar1 = -0x3ff2c566;
      }
    }
LAB_82e3d508:
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
      piStack_23c = (int *)0x0;
      piVar3 = piStack_240;
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return lVar1;
}

