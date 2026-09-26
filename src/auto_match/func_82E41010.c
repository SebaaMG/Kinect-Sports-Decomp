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
extern int fn_82E3D570();
extern int fn_82E3E4D8();
extern int fn_82E3EC48();
extern int fn_82E3FD48();
extern int fn_82E40CB8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E59440();
extern int fn_82E59E00();
extern int fn_82E62630();
extern int fn_82E626B0();
extern int fn_82E626F0();
extern unsigned int iStack_44;


/* WARNING: Type propagation algorithm not settling */

uint fn_82E41010(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  int iStack_44;
  int aiStack_40 [16];
  
  fn_82E50CB8(param_1 + 8);
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80070057;
  }
  else {
    piStack_54 = (int *)0x0;
    piStack_5c = (int *)0x0;
    piStack_48 = (int *)0x0;
    piStack_60 = (int *)0x0;
    piStack_50 = (int *)0x0;
    piStack_58 = (int *)0x0;
    piStack_4c = (int *)0x0;
    uVar1 = fn_82E3FD48(param_1);
    piVar3 = piStack_60;
    if ((((-1 < (int)uVar1) &&
         (uVar1 = (**(code **)*param_2)(param_2,0xffffffff8215ed68,&piStack_54), piVar3 = piStack_60
         , -1 < (int)uVar1)) &&
        (uVar1 = (**(code **)(*piStack_54 + 0x28))(piStack_54,&piStack_5c), piVar3 = piStack_60,
        -1 < (int)uVar1)) &&
       (((uVar1 = (**(code **)*piStack_5c)(piStack_5c,0xffffffff82154c18,&piStack_48),
         piVar3 = piStack_60, -1 < (int)uVar1 &&
         (uVar1 = fn_82E59440(piStack_5c,0xffffffff820ed018,0xffffffff82154c58,&piStack_50),
         piVar3 = piStack_60, -1 < (int)uVar1)) &&
        (uVar1 = (**(code **)*piStack_50)(piStack_50,0xffffffff82154c18,&piStack_60),
        piVar3 = piStack_60, -1 < (int)uVar1)))) {
      *(int **)(param_1 + 0x50) = piStack_60;
      if ((piStack_60 == (int *)0x0) ||
         ((**(code **)(*piStack_60 + 4))(piStack_60), piStack_60 == (int *)0x0)) {
        uVar1 = 0xc00d36bb;
        piVar3 = (int *)0x0;
      }
      else {
        aiStack_40[1] = 0;
        uVar1 = (**(code **)(*piStack_60 + 0xc))(piStack_60,0xffffffff82154b18,aiStack_40 + 1);
        piVar3 = piStack_60;
        if ((-1 < (int)uVar1) &&
           (uVar1 = fn_82E3E4D8(param_1 + 0x1ac,5,0), piVar3 = piStack_60, -1 < (int)uVar1)) {
          iVar2 = (**(code **)(*piStack_60 + 0x10))(piStack_60,0xffffffff82154aa8,0,&piStack_58);
          if (iVar2 < 0) {
            uVar1 = 0xc00d3a9a;
            piVar3 = piStack_60;
          }
          else {
            aiStack_40[0] = 0;
            iStack_44 = 0;
            uVar1 = fn_82E626B0(piStack_58,aiStack_40);
            piVar3 = piStack_60;
            if ((-1 < (int)uVar1) &&
               (uVar1 = fn_82E626F0(piStack_58,&iStack_44), piVar3 = piStack_60, -1 < (int)uVar1))
            {
              if (aiStack_40[0] == iStack_44) {
                *(int *)(param_1 + 0x54) = aiStack_40[0];
                uVar1 = fn_82E62630(piStack_58,param_1 + 0x58);
                piVar3 = piStack_60;
                if ((((-1 < (int)uVar1) &&
                     (uVar1 = fn_82E3D570(param_1,piStack_60), piVar3 = piStack_60,
                     -1 < (int)uVar1)) &&
                    (uVar1 = fn_82E59440(piStack_5c,0xffffffff821549b8,0xffffffff82154c68,
                                               &piStack_4c), piVar3 = piStack_60, -1 < (int)uVar1))
                   && ((uVar1 = (**(code **)(*piStack_4c + 0x38))(piStack_4c,param_1 + 0x4c),
                       piVar3 = piStack_60, -1 < (int)uVar1 &&
                       (uVar1 = fn_82E59E00(param_1 + 0x48), piVar3 = piStack_60,
                       -1 < (int)uVar1)))) {
                  if ((*(uint *)(param_1 + 0x44) & 1) == 0) {
                    uVar1 = fn_82E3EC48(param_1);
                    uVar1 = (int)uVar1 >> 0x1f & uVar1;
                    piVar3 = piStack_60;
                  }
                  else {
                    uVar1 = fn_82E40CB8(param_1,piStack_60,param_2);
                    piVar3 = piStack_60;
                  }
                }
              }
              else {
                uVar1 = 0xc00d36bb;
              }
            }
          }
        }
      }
    }
    if (piStack_54 != (int *)0x0) {
      (**(code **)(*piStack_54 + 8))();
      piStack_54 = (int *)0x0;
      piVar3 = piStack_60;
    }
    if (piStack_5c != (int *)0x0) {
      (**(code **)(*piStack_5c + 8))();
      piStack_5c = (int *)0x0;
      piVar3 = piStack_60;
    }
    if (piStack_48 != (int *)0x0) {
      (**(code **)(*piStack_48 + 8))();
      piStack_48 = (int *)0x0;
      piVar3 = piStack_60;
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      piStack_60 = (int *)0x0;
    }
    if (piStack_50 != (int *)0x0) {
      (**(code **)(*piStack_50 + 8))();
      piStack_50 = (int *)0x0;
    }
    if (piStack_58 != (int *)0x0) {
      (**(code **)(*piStack_58 + 8))();
      piStack_58 = (int *)0x0;
    }
    if (piStack_4c != (int *)0x0) {
      (**(code **)(*piStack_4c + 8))();
      piStack_4c = (int *)0x0;
    }
    if ((int)uVar1 < 0) {
      fn_82E3FD48(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 1;
    }
  }
  fn_82E50F10(param_1 + 8);
  return uVar1;
}

