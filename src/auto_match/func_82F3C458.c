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
extern unsigned int *auStack_58;
extern int fn_82EE4DC0();
extern int fn_82EE5338();
extern unsigned int uStack_5e;
extern unsigned int uStack_60;


longlong fn_82F3C458(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  ushort uVar6;
  ushort uStack_60;
  ushort uStack_5e;
  int *piStack_5c;
  uint auStack_58 [22];
  
  piStack_5c = (int *)0x0;
  lVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))
                    (*(int **)(param_1 + 0x54),0xffffffff82154978,auStack_58);
  piVar4 = piStack_5c;
  if ((-1 < lVar3) && (uVar5 = 0, auStack_58[0] != 0)) {
    do {
      lVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x10))
                        (*(int **)(param_1 + 0x54),0xffffffff82154978,uVar5,&piStack_5c);
      piVar2 = piStack_5c;
      piVar4 = piStack_5c;
      if ((lVar3 < 0) ||
         (lVar3 = fn_82EE4DC0(piStack_5c,&uStack_60), piVar4 = piStack_5c, lVar3 < 0)) break;
      bVar1 = false;
      uVar6 = 0;
      if (uStack_60 != 0) {
        do {
          lVar3 = fn_82EE5338(piVar2,uVar6,&uStack_5e);
          piVar4 = piStack_5c;
          if (lVar3 < 0) goto LAB_82f3c5c0;
          if (0x7f < uStack_5e) {
            bVar1 = true;
            break;
          }
          if (*(int *)((uint)uStack_5e * 4 + param_2) == 0) {
            bVar1 = true;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uStack_60);
        if ((bVar1) &&
           (lVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x1c))
                              (*(int **)(param_1 + 0x54),piStack_5c), piVar4 = piStack_5c, lVar3 < 0
           )) break;
      }
      if (piStack_5c != (int *)0x0) {
        (**(code **)(*piStack_5c + 8))();
        piStack_5c = (int *)0x0;
      }
      piVar4 = (int *)0x0;
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (ulonglong)auStack_58[0]);
  }
LAB_82f3c5c0:
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  return lVar3;
}

