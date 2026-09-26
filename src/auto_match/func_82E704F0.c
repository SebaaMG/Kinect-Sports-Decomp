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
extern unsigned int *auStack_80;
extern int fn_82E6F498();
extern unsigned int iStack_6c;
extern unsigned int iStack_74;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_78;


longlong fn_82E704F0(int param_1,ulonglong param_2,int *param_3,longlong *param_4)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ushort auStack_80 [2];
  int *piStack_7c;
  uint uStack_78;
  int iStack_74;
  uint uStack_70;
  int iStack_6c;
  uint uStack_68;
  uint uStack_64;
  longlong alStack_60 [12];
  
  *param_3 = 0;
  piStack_7c = (int *)0x0;
  lVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x3c))(*(int **)(param_1 + 0x58),&uStack_70);
  piVar2 = piStack_7c;
  if (-1 < lVar1) {
    uVar4 = 0xffffffffffffffff;
    uVar3 = 0;
    if (uStack_70 != 0) {
      do {
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))();
          piStack_7c = (int *)0x0;
        }
        lVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x40))
                          (*(int **)(param_1 + 0x58),uVar3,&piStack_7c);
        piVar2 = piStack_7c;
        if (lVar1 < 0) goto LAB_82e70758;
        piVar2 = (int *)0x0;
        if (piStack_7c != (int *)0x0) {
          lVar1 = (**(code **)(*piStack_7c + 0x44))(piStack_7c,auStack_80);
          piVar2 = piStack_7c;
          if (lVar1 < 0) goto LAB_82e70758;
          if ((ulonglong)auStack_80[0] == (param_2 >> 0x20 & 0xffff)) {
            lVar1 = (**(code **)(*piStack_7c + 0x24))(piStack_7c,&iStack_74);
            piVar2 = piStack_7c;
            if (lVar1 < 0) goto LAB_82e70758;
            if (iStack_74 != 0) {
              alStack_60[0] = 0;
              lVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x4c))
                                (*(int **)(param_1 + 0x58),piStack_7c,alStack_60);
              piVar2 = piStack_7c;
              if (lVar1 < 0) goto LAB_82e70758;
              uStack_78 = 0;
              lVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x44))
                                (*(int **)(param_1 + 0x58),&uStack_78);
              piVar2 = piStack_7c;
              if (lVar1 < 0) goto LAB_82e70758;
              lVar5 = *(longlong *)(param_1 + 0x30) + (ulonglong)uStack_78 + alStack_60[0];
              lVar1 = fn_82E6F498(param_1,lVar5,&uStack_68);
              piVar2 = piStack_7c;
              if (((lVar1 < 0) ||
                  (lVar1 = (**(code **)(*piStack_7c + 0x1c))(piStack_7c,&iStack_6c),
                  piVar2 = piStack_7c, lVar1 < 0)) ||
                 (lVar1 = fn_82E6F498(param_1,((longlong)(iStack_74 + -1) * (longlong)iStack_6c &
                                                0xffffffffU) + lVar5,&uStack_64),
                 piVar2 = piStack_7c, lVar1 < 0)) goto LAB_82e70758;
              *param_4 = lVar5;
              iVar6 = (int)uVar3;
              if ((int *)*param_3 != (int *)0x0) {
                (**(code **)(*(int *)*param_3 + 8))();
                *param_3 = 0;
              }
              *param_3 = (int)piStack_7c;
              piVar2 = (int *)0x0;
              if (piStack_7c != (int *)0x0) {
                (**(code **)(*piStack_7c + 4))();
                piVar2 = piStack_7c;
              }
              uVar4 = uVar3;
              if (((ulonglong)uStack_68 <= (param_2 & 0xffffffff)) &&
                 ((param_2 & 0xffffffff) <= (ulonglong)uStack_64)) break;
            }
          }
        }
        iVar6 = (int)uVar4;
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (ulonglong)uStack_70);
      if (iVar6 != -1) goto LAB_82e70758;
    }
    lVar1 = -0x3ff2c563;
  }
LAB_82e70758:
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  return lVar1;
}

