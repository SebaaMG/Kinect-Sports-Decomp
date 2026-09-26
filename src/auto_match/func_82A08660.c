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
extern int fn_82A056D0();
extern int fn_82F68CC0();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int *lbl_83218C34;


void fn_82A08660(int param_1,int param_2,undefined8 param_3,longlong param_4,int param_5,
                  ulonglong param_6,int param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  double extraout_f1;
  double dVar5;
  int iStack_60;
  int iStack_5c;
  undefined4 *puStack_58;
  float *pfStack_54;
  
  if ((lbl_83218C34 != (int *)0x0) &&
     (iVar1 = (**(code **)(*lbl_83218C34 + 0x6c))
                        (lbl_83218C34,*(undefined4 *)(param_1 + 0x4144),param_2,param_3,param_6,
                         &iStack_5c,&iStack_60,0), iVar1 != 0)) {
    if (iStack_5c != 0) {
      fn_82F68CC0(iStack_5c,param_5,(param_6 & 0x3fffffff) << 2);
    }
    if ((iStack_60 != 0) && ((param_6 & 0xffffffff) != 0)) {
      lVar4 = 0;
      iVar1 = param_2 * 0x1f0 + param_1 + 0x490;
      lVar3 = param_4 + -8;
      do {
        lVar3 = lVar3 + 0x10;
        iVar2 = iStack_60;
        iVar1 = fn_82A056D0((double)*(float *)lVar3,iVar1);
        *(float *)((int)lVar4 + iVar2) = (float)extraout_f1;
        param_6 = param_6 - 1;
        lVar4 = lVar4 + 4;
      } while (param_6 != 0);
    }
    if ((param_7 != -1) &&
       (iVar1 = (**(code **)(*lbl_83218C34 + 0x6c))
                          (lbl_83218C34,*(undefined4 *)(param_1 + 0x4144),param_2,param_3,1,0,0,
                           &puStack_58), iVar1 != 0)) {
      if (puStack_58 != (undefined4 *)0x0) {
        *puStack_58 = *(undefined4 *)(param_7 * 4 + param_5);
      }
      if (pfStack_54 != (float *)0x0) {
        dVar5 = (double)fn_82A056D0((double)*(float *)(param_7 * 0x10 + (int)param_4 + 8),
                                      param_2 * 0x1f0 + param_1 + 0x490);
        *pfStack_54 = (float)dVar5;
      }
    }
  }
  return;
}

