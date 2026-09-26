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
extern unsigned int *auStack_54;
extern unsigned int *auStack_5c;
extern int fn_82EE32B8();
extern int fn_82EE3C50();
extern int fn_82EE3CE0();
extern unsigned int uStack_5e;
extern unsigned int uStack_60;


longlong fn_82F3C768(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uStack_60;
  ushort uStack_5e;
  ushort auStack_5c [2];
  int *piStack_58;
  uint auStack_54 [21];
  
  piStack_58 = (int *)0x0;
  lVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))
                    (*(int **)(param_1 + 0x54),param_2,auStack_54);
  piVar3 = piStack_58;
  if ((-1 < lVar2) && (uVar4 = 0, auStack_54[0] != 0)) {
    while ((lVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0x10))
                              (*(int **)(param_1 + 0x54),param_2,uVar4,&piStack_58),
           piVar1 = piStack_58, piVar3 = piStack_58, -1 < lVar2 &&
           (lVar2 = fn_82EE32B8(piStack_58,&uStack_5e), piVar3 = piStack_58, -1 < lVar2))) {
      uVar5 = 0;
      if (uStack_5e != 0) {
        do {
          lVar2 = fn_82EE3C50(piVar1,uVar5,&uStack_60);
          piVar3 = piStack_58;
          if (lVar2 < 0) goto LAB_82f3c8f8;
          uVar6 = 0;
          if (uStack_60 != 0) {
            do {
              lVar2 = fn_82EE3CE0(piVar1,uVar5,uVar6,auStack_5c);
              piVar3 = piStack_58;
              if (lVar2 < 0) goto LAB_82f3c8f8;
              if ((0x7f < auStack_5c[0]) || (*(int *)((uint)auStack_5c[0] * 4 + param_3) == 0)) {
                lVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0x1c))
                                  (*(int **)(param_1 + 0x54),piStack_58);
                piVar3 = piStack_58;
                if (lVar2 < 0) goto LAB_82f3c8f8;
                goto LAB_82f3c8bc;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < uStack_60);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uStack_5e);
      }
LAB_82f3c8bc:
      if (piStack_58 != (int *)0x0) {
        (**(code **)(*piStack_58 + 8))();
        piStack_58 = (int *)0x0;
      }
      piVar3 = (int *)0x0;
      uVar4 = uVar4 + 1;
      if ((ulonglong)auStack_54[0] <= (uVar4 & 0xffffffff)) break;
    }
  }
LAB_82f3c8f8:
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  return lVar2;
}

