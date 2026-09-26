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
extern int fn_82687270();
extern int fn_82687DA8();
extern int fn_82687F98();
extern int fn_8268BA10();
extern int fn_826D7C00();
extern int fn_826DC448();
extern int fn_826DC860();
extern int fn_826F30F0();
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int uStack_6c;


int * fn_826DD848(int *param_1,undefined8 param_2,ulonglong param_3,undefined4 *param_4)

{
  char cVar7;
  int *piVar3;
  ulonglong uVar1;
  int iVar4;
  undefined8 uVar2;
  int *piVar5;
  int iVar6;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  undefined4 auStack_80 [2];
  int iStack_78;
  int iStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  
  iVar6 = *(int *)(param_1[7] + 0xc);
  iVar10 = *(int *)(*(int *)(iVar6 + 0x20) + 0x98);
  sync(1);
  do {
    if (iVar10 == 0) {
      piVar5 = *(int **)(*(int *)(iVar6 + 0x20) + 0x90);
      sync(1);
      do {
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)(**(code **)(*param_1 + 0x60))(param_1,param_2);
          if (((piVar5 == (int *)0x0) ||
              (uVar1 = (**(code **)(*piVar5 + 8))(piVar5), (uVar1 & 0xff00) != 0x200)) ||
             (((-(ulonglong)((param_3 & 0x300) != 0) & 0x300 | param_3 & 0x10 | 3) &
              (ulonglong)*(uint *)(piVar5[3] + 0x14)) != (param_3 & 0x313))) {
            if (param_4 != (undefined4 *)0x0) {
              *param_4 = 0;
            }
            piVar5 = (int *)0x0;
          }
          else if (param_4 != (undefined4 *)0x0) {
            *param_4 = 6;
          }
          return piVar5;
        }
        uVar9 = 0;
        if (piVar5[1] != 0) {
          iVar10 = 0;
          do {
            if (param_4 != (undefined4 *)0x0) {
              fn_826DC860(param_4 + 1,param_4 + 1,piVar5 + 3);
            }
            iStack_78 = 0;
            iStack_74 = 0;
            auStack_80[0] = *(undefined4 *)(iVar10 + *piVar5 + 4);
            cVar7 = fn_826DC448(*(undefined4 *)(iVar6 + 0x20),&iStack_78,auStack_80);
            if ((((cVar7 != '\0') &&
                 (piVar3 = (int *)fn_826D7C00(&iStack_78,(ulonglong)(uint)param_1[7] + 0x18),
                 piVar3 != (int *)0x0)) &&
                (uVar1 = (**(code **)(*piVar3 + 8))(piVar3), (uVar1 & 0xff00) == 0x200)) &&
               (((-(ulonglong)((param_3 & 0x300) != 0) & 0x300 | param_3 & 0x10 | 3) &
                (ulonglong)*(uint *)(piVar3[3] + 0x14)) == (param_3 & 0x313))) {
              iVar4 = thunk_FUN_82f65ac0(((ulonglong)*(uint *)(iVar10 + *piVar5) & 0xfffffffc) + 8,
                                         param_2);
              if (iVar4 != 0) {
                uVar2 = (**(code **)(*(int *)piVar3[3] + 0x3c))();
                iVar4 = thunk_FUN_82f65ac0(uVar2,param_2);
                if (iVar4 != 0) goto LAB_826dda30;
              }
              if (param_4 == (undefined4 *)0x0) goto LAB_826ddbd4;
              puVar11 = (uint *)(piVar5 + 3);
              if ((*(uint *)(*puVar11 & 0xfffffffc) & 0x7fffffff) < 0xe) {
LAB_826ddbc0:
                uVar8 = 4;
              }
              else {
                iVar6 = thunk_FUN_82f65ac0(((ulonglong)*puVar11 & 0xfffffffc) +
                                           ((ulonglong)*(uint *)(*puVar11 & 0xfffffffc) & 0x7fffffff
                                           ) + -6,0xffffffff8200c730);
                uVar8 = 5;
                if (iVar6 != 0) goto LAB_826ddbc0;
              }
              *param_4 = uVar8;
              fn_8268BA10(param_4 + 2,puVar11);
LAB_826ddbd4:
              if (iStack_78 != 0) {
                return piVar3;
              }
              if (iStack_74 == 0) {
                return piVar3;
              }
              fn_82687270();
              return piVar3;
            }
LAB_826dda30:
            if ((iStack_78 == 0) && (iStack_74 != 0)) {
              fn_82687270();
            }
            uVar9 = uVar9 + 1;
            iVar10 = iVar10 + 0xc;
          } while (uVar9 < (uint)piVar5[1]);
        }
        piVar5 = (int *)piVar5[6];
        sync(1);
      } while( true );
    }
    cVar7 = fn_82687DA8(*(undefined4 *)(iVar10 + 4),param_2,param_3);
    if (cVar7 != '\0') {
      iVar4 = param_1[7];
      piStack_70 = (int *)0x0;
      uStack_6c = 0;
      if ((*(char *)(iVar4 + 0x40) == '\0') || (*(uint *)(iVar4 + 0x1c) <= *(uint *)(iVar10 + 8))) {
        fn_826F30F0(iVar4 + 0x18,&piStack_70);
      }
      else {
        fn_82687F98(&piStack_70,
                          (ulonglong)*(uint *)(iVar4 + 0x20) +
                          ((ulonglong)*(uint *)(iVar10 + 8) & 0x1fffffff) * 8);
      }
      piVar5 = piStack_70;
      if (piStack_70 != (int *)0x0) {
        if (param_4 == (undefined4 *)0x0) goto LAB_826ddb50;
        if (((~(ulonglong)(uint)((int *)piStack_70[3])[5] & 0xffffffff) >> 6 & 1) == 0) {
          uVar8 = 2;
        }
        else {
          if ((param_3 & 3) != 0) {
            cVar7 = (**(code **)(*(int *)piStack_70[3] + 0x40))();
            uVar8 = 3;
            if (cVar7 == '\0') goto LAB_826ddb4c;
          }
          uVar8 = 1;
        }
LAB_826ddb4c:
        *param_4 = uVar8;
LAB_826ddb50:
        if (piStack_70 == (int *)0x0) {
          return piVar5;
        }
        fn_82687270(piStack_70);
        return piVar5;
      }
    }
    iVar10 = *(int *)(iVar10 + 0xc);
    sync(1);
  } while( true );
}

