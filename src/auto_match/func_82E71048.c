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
extern int fn_82E6F498();
extern int fn_82E6FC88();
extern unsigned int uStack_88;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


longlong fn_82E71048(int param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
                      uint param_5,longlong *param_6)

{
  bool bVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  int *piStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint auStack_90 [2];
  ulonglong uStack_88;
  longlong lStack_80;
  longlong alStack_78 [15];
  
  piStack_a0 = (int *)0x0;
  uStack_98 = 0;
  bVar1 = false;
  lVar2 = (**(code **)(**(int **)(param_1 + 0x58) + 0x3c))(*(int **)(param_1 + 0x58),&uStack_98);
  piVar3 = piStack_a0;
  if (-1 < lVar2) {
    if ((param_4 & 0xffffffff) < (ulonglong)uStack_98) {
      do {
        if (piStack_a0 != (int *)0x0) {
          (**(code **)(*piStack_a0 + 8))();
          piStack_a0 = (int *)0x0;
        }
        uStack_94 = 0;
        uStack_88 = 0;
        uStack_9c = 0;
        lStack_80 = 0;
        lVar2 = (**(code **)(**(int **)(param_1 + 0x58) + 0x40))
                          (*(int **)(param_1 + 0x58),param_4,&piStack_a0);
        piVar3 = piStack_a0;
        if (lVar2 < 0) goto LAB_82e712c0;
        if (piStack_a0 == (int *)0x0) {
          lVar2 = -0x3ff2c945;
          piVar3 = (int *)0x0;
          bVar1 = false;
          break;
        }
        lVar2 = (**(code **)(**(int **)(param_1 + 0x58) + 0x50))
                          (*(int **)(param_1 + 0x58),piStack_a0,&uStack_88);
        piVar3 = piStack_a0;
        if (lVar2 < 0) goto LAB_82e712c0;
        uVar5 = (param_2 & 0xffffffff) - (uStack_88 & 0xffffffff);
        lVar2 = (**(code **)(*piStack_a0 + 0x24))(piStack_a0,&uStack_9c);
        piVar3 = piStack_a0;
        if (lVar2 < 0) goto LAB_82e712c0;
        if ((uVar5 & 0xffffffff) < (ulonglong)uStack_9c) {
          lVar2 = (**(code **)(**(int **)(param_1 + 0x58) + 0x4c))
                            (*(int **)(param_1 + 0x58),piStack_a0,&lStack_80);
          piVar3 = piStack_a0;
          if ((lVar2 < 0) ||
             (lVar2 = (**(code **)(**(int **)(param_1 + 0x58) + 0x44))
                                (*(int **)(param_1 + 0x58),&uStack_94), piVar3 = piStack_a0,
             lVar2 < 0)) goto LAB_82e712c0;
          lVar4 = *(longlong *)(param_1 + 0x30) + (ulonglong)uStack_94 + lStack_80;
          if ((uVar5 & 0xffffffff) < (ulonglong)uStack_9c) {
            do {
              alStack_78[0] = 0;
              auStack_90[0] = 0;
              lVar2 = (**(code **)(*piStack_a0 + 0x2c))
                                (piStack_a0,uVar5,*(undefined2 *)(param_1 + 8),param_3,alStack_78);
              piVar3 = piStack_a0;
              if (lVar2 < 0) goto LAB_82e712c0;
              lVar6 = alStack_78[0] + lVar4;
              lVar2 = fn_82E6FC88(param_1,lVar6);
              piVar3 = piStack_a0;
              if ((lVar2 < 0) ||
                 (lVar2 = fn_82E6F498(param_1,lVar6,auStack_90), piVar3 = piStack_a0, lVar2 < 0))
              goto LAB_82e712c0;
              if (auStack_90[0] != param_5) {
                bVar1 = true;
                param_5 = auStack_90[0];
                goto LAB_82e71274;
              }
              uVar5 = uVar5 + 1;
              param_2 = param_2 + 1;
            } while ((uVar5 & 0xffffffff) < (ulonglong)uStack_9c);
          }
          param_4 = param_4 + 1;
        }
        param_4 = param_4 + 1;
        piVar3 = piStack_a0;
      } while ((param_4 & 0xffffffff) < (ulonglong)uStack_98);
    }
LAB_82e71274:
    if (-1 < (int)lVar2) {
      if (bVar1) {
        alStack_78[0] = 0;
        lVar2 = (**(code **)(*piVar3 + 0x20))
                          (piVar3,*(undefined2 *)(param_1 + 8),param_3,alStack_78);
        piVar3 = piStack_a0;
        if (-1 < lVar2) {
          *param_6 = (ulonglong)param_5 + alStack_78[0];
        }
      }
      else {
        *param_6 = -1;
      }
    }
  }
LAB_82e712c0:
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  return lVar2;
}

