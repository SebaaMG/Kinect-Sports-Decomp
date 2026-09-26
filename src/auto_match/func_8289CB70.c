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
extern unsigned int *auStack_5c;
extern unsigned int *auStack_6c;
extern unsigned int *auStack_7c;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern int fn_82243568();
extern int fn_8236D750();
extern int fn_8240D928();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_82897B38();
extern int fn_82897BD0();
extern int fn_82897BE0();
extern int fn_82898770();
extern int fn_82898878();
extern int fn_82898900();
extern int fn_82898B18();
extern int fn_82898C40();
extern int fn_82898E38();
extern int fn_82899120();
extern int fn_82899660();
extern int fn_82899780();
extern int fn_828997F0();
extern int fn_82899A70();
extern int fn_8289A718();
extern int fn_8289AA20();
extern int fn_8289BD98();
extern int fn_8289BFA8();
extern int fn_8289CA40();
extern int fn_828BE158();
extern unsigned int uStack_60;
extern unsigned int uStack_70;
extern unsigned int uStack_80;
extern unsigned int uStack_90;
extern unsigned int uStack_a0;
extern unsigned int uStack_b0;


undefined8 fn_8289CB70(int param_1,ulonglong param_2,char param_3,char param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar9;
  int iVar5;
  undefined8 uVar3;
  char cVar10;
  ulonglong uVar4;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar11;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined4 uStack_a0;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_80;
  undefined1 auStack_7c [12];
  undefined4 uStack_70;
  undefined1 auStack_6c [12];
  undefined4 uStack_60;
  undefined1 auStack_5c [92];
  
  cVar9 = (**(code **)(**(int **)(param_1 + 0x1c) + 4))(*(int **)(param_1 + 0x1c),param_1,param_2);
  if (*(char *)(param_1 + 0x24) == '\0') {
    if ((cVar9 != '\0') || (param_3 != '\0')) {
      iVar5 = fn_8240D928(param_2);
      if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
         (iVar6 = (**(code **)(**(int **)(param_1 + 0x20) + 4))(), iVar6 == 0)) {
        if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
           (iVar6 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(), iVar6 == 0)) {
          if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
             (iVar6 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(), iVar6 != 0)) {
            if (*(int **)(param_1 + 0x20) == (int *)0x0) {
              piVar7 = (int *)0x0;
            }
            else {
              piVar7 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
            }
            puVar8 = (undefined4 *)fn_8289BD98(param_1,param_2);
            piVar11 = piVar7 + 3;
            if (puVar8 == (undefined4 *)0x0) {
              cVar9 = fn_828997F0(piVar7 + 10,iVar5);
              if (cVar9 != '\0') {
                return 0;
              }
            }
            else {
              cVar9 = fn_82898E38(puVar8 + 0x22,0,piVar11,iVar5);
              if (cVar9 == '\0') {
                (**(code **)*puVar8)(puVar8,1);
              }
              else if (param_3 == '\0') {
                return 0;
              }
            }
            (**(code **)(*piVar7 + 0x1c))(piVar7,iVar5);
            fn_82898B18(piVar7 + 10,iVar5,piVar11,iVar5);
            if (param_3 == '\0') {
              uVar4 = fn_8265C9E0(0xb8);
              if ((uVar4 & 0xffffffff) == 0) {
                iVar5 = 0;
              }
              else {
                iVar5 = fn_8289A718(uVar4,param_1,piVar11,iVar5,
                                      *(undefined1 *)((int)piVar7 + iVar5 + 5),iVar5);
              }
              fn_82886518(iVar5,0xffffffffffffffff,0xffffffffffffffff);
              uVar3 = fn_8240D928(param_2);
              fn_82898770(param_1,uVar3,1);
              uVar2 = *(undefined4 *)(param_1 + 0x28);
              uVar3 = fn_82897BD0(param_2);
              fn_828BE158(uVar2,iVar5,uVar3,0);
              uVar2 = *(undefined4 *)(iVar5 + 0x18);
              fn_82899120(auStack_98,iVar5 + 0x50);
              uStack_60 = uVar2;
              fn_82899120(auStack_5c,uStack_90);
              fn_8289CA40(auStack_c0,param_1 + 0x44,&uStack_60);
              fn_82899660(&uStack_60);
              fn_82898900(auStack_98);
            }
            else {
              cVar9 = '\0';
              if (param_4 == '\0') {
                cVar9 = fn_82897B38(*(undefined4 *)(param_1 + 0x18));
              }
              if ((cVar9 == '\0') && (uVar4 = fn_8265C9E0(0x24), (uVar4 & 0xffffffff) != 0)) {
                uVar3 = fn_82899780(uVar4,*(undefined4 *)(param_1 + 0x28),param_1,piVar11,iVar5);
                return uVar3;
              }
            }
          }
        }
        else {
          if (*(int **)(param_1 + 0x20) == (int *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
          }
          if ((param_2 & 0xffffffff) == (ulonglong)(uint)piVar7[1]) {
            puVar8 = (undefined4 *)fn_8289BFA8(param_1);
            iVar5 = param_1 + 4;
            if (puVar8 == (undefined4 *)0x0) {
              cVar9 = fn_82898C40(piVar7 + 3,0,iVar5,0);
              if (cVar9 != '\0') {
                return 0;
              }
            }
            else {
              cVar9 = fn_82898C40(puVar8 + 0x22,0,iVar5,0);
              if (cVar9 == '\0') {
                (**(code **)*puVar8)(puVar8,1);
              }
              else if (param_3 == '\0') {
                return 0;
              }
            }
            (**(code **)(*piVar7 + 0x1c))(piVar7);
            fn_82243568(piVar7 + 3,0,iVar5,0);
            if (param_3 == '\0') {
              uVar4 = fn_8265C9E0(0xb8);
              if ((uVar4 & 0xffffffff) == 0) {
                iVar5 = 0;
              }
              else {
                uVar3 = fn_8240D928(param_2);
                iVar5 = fn_8289AA20(uVar4,param_1,iVar5,*(undefined1 *)((int)piVar7 + 9),uVar3);
              }
              fn_82886518(iVar5,0xffffffffffffffff,0xffffffffffffffff);
              fn_82898878(param_1,1);
              uVar2 = *(undefined4 *)(param_1 + 0x28);
              uVar3 = fn_82897BD0(param_2);
              fn_828BE158(uVar2,iVar5,uVar3,0);
              uVar2 = *(undefined4 *)(iVar5 + 0x18);
              fn_82899120(auStack_a8,iVar5 + 0x50);
              uStack_70 = uVar2;
              fn_82899120(auStack_6c,uStack_a0);
              fn_8289CA40(auStack_c0,param_1 + 0x44,&uStack_70);
              fn_82899660(&uStack_70);
              fn_82898900(auStack_a8);
              return 0;
            }
            uVar4 = fn_8265C9E0(0x24);
            if ((uVar4 & 0xffffffff) != 0) {
              uVar3 = fn_82899A70(uVar4,*(undefined4 *)(param_1 + 0x28),param_1,iVar5);
              return uVar3;
            }
          }
        }
      }
      else {
        if (*(int **)(param_1 + 0x20) == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 4))();
        }
        puVar8 = (undefined4 *)fn_8289BD98(param_1,param_2);
        iVar6 = param_1 + 4;
        if (puVar8 == (undefined4 *)0x0) {
          cVar9 = (**(code **)(*piVar7 + 0x5c))(piVar7,iVar5);
          if (cVar9 != '\0') {
            return 0;
          }
        }
        else {
          cVar9 = fn_82898C40(puVar8 + 0x22,0,iVar6,0);
          if (cVar9 == '\0') {
            (**(code **)*puVar8)(puVar8,1);
          }
          else if (param_3 == '\0') {
            return 0;
          }
        }
        (**(code **)(*piVar7 + 0x24))(piVar7,iVar5);
        (**(code **)(*piVar7 + 0x28))(piVar7,iVar5,iVar6);
        fn_82897BE0(*(undefined4 *)(param_1 + 0x18));
        if (param_3 == '\0') {
          uVar4 = fn_8265C9E0(0xb8);
          if ((uVar4 & 0xffffffff) == 0) {
            iVar5 = 0;
          }
          else {
            uVar3 = (**(code **)(*piVar7 + 0x1c))(piVar7,iVar5);
            iVar5 = fn_8289AA20(uVar4,param_1,iVar6,uVar3,iVar5);
          }
          fn_82886518(iVar5,0xffffffffffffffff,0xffffffffffffffff);
          uVar3 = fn_8240D928(param_2);
          fn_82898770(param_1,uVar3,1);
          uVar2 = *(undefined4 *)(param_1 + 0x28);
          uVar3 = fn_82897BD0(param_2);
          fn_828BE158(uVar2,iVar5,uVar3,0);
          uVar2 = *(undefined4 *)(iVar5 + 0x18);
          fn_82899120(auStack_b8,iVar5 + 0x50);
          uStack_80 = uVar2;
          fn_82899120(auStack_7c,uStack_b0);
          fn_8289CA40(auStack_c0,param_1 + 0x44,&uStack_80);
          fn_82899660(&uStack_80);
          fn_82898900(auStack_b8);
          return 0;
        }
        cVar9 = '\0';
        if (param_4 == '\0') {
          cVar9 = fn_82897B38(*(undefined4 *)(param_1 + 0x18));
        }
        if ((cVar9 == '\0') && (uVar4 = fn_8265C9E0(0x24), (uVar4 & 0xffffffff) != 0)) {
          uVar3 = fn_82899A70(uVar4,*(undefined4 *)(param_1 + 0x28),param_1,iVar6);
          return uVar3;
        }
      }
    }
    return 0;
  }
  cVar9 = '\0';
  *(undefined1 *)(param_1 + 0x24) = 0;
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar5 = (**(code **)(**(int **)(param_1 + 0x20) + 8))(), iVar5 == 0)) {
    if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
       (iVar5 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(), iVar5 != 0)) {
      if (*(int **)(param_1 + 0x20) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
      }
      goto LAB_8289cc8c;
    }
    if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
       (iVar5 = (**(code **)(**(int **)(param_1 + 0x20) + 0x18))(), iVar5 == 0)) goto LAB_8289cc8c;
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x20) + 0x18);
      goto LAB_8289cc78;
    }
  }
  else if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x20) + 8);
LAB_8289cc78:
    (*pcVar1)();
  }
  cVar9 = fn_82897B38(*(undefined4 *)(param_1 + 0x18));
LAB_8289cc8c:
  uVar3 = fn_8236D750(*(undefined4 *)(param_1 + 0x18));
  cVar10 = fn_82898C40(param_1 + 4,0,uVar3,0);
  if (((cVar10 == '\0') && (cVar9 == '\0')) &&
     (uVar4 = fn_8265C9E0(0x24), (uVar4 & 0xffffffff) != 0)) {
    uVar3 = fn_82899A70(uVar4,*(undefined4 *)(param_1 + 0x28),param_1,param_1 + 4);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

