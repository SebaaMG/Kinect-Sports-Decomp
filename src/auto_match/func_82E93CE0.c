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
extern int fn_82F655D8();
extern int fn_82F6B2A8();
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82017EF8;


void fn_82E93CE0(int param_1,int param_2,int param_3)

{
  double dVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = lbl_82017EF8;
  if ((*(int *)(param_1 + 0x2a0) < 0x12) &&
     (*(int *)(param_1 + 0x77d8) == *(int *)(param_1 + 0x77c0))) {
    lVar5 = (ulonglong)*(uint *)(param_1 + 0x7820) - 2;
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x7824) - 2;
    uVar6 = (uint)lVar5;
    uVar4 = (uint)lVar3;
    uVar6 = (-1 - ((int)uVar6 >> 0x1f)) + (uint)(lVar5 == 0) & uVar6;
    uVar4 = (-1 - ((int)uVar4 >> 0x1f)) + (uint)(lVar3 == 0) & uVar4;
  }
  else if ((*(int *)(param_1 + 0x781c) == 0) ||
          ((*(int *)(param_1 + 0x77a4) != 0 &&
           (*(int *)(param_1 + 0x77d8) < *(int *)(param_1 + 0x77c0))))) {
    uVar6 = 8;
    uVar4 = 8;
  }
  else {
    if ((*(int *)(param_1 + 0x77e8) == 0) || (*(int *)(param_1 + 0x77f0) == 0)) {
      dVar7 = (double)(longlong)(param_2 - param_3) /
              ((double)(longlong)*(int *)(param_1 + 0x560) * *(double *)(param_1 + 0x7850)) +
              *(double *)(param_1 + 0x7830);
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x77d8);
      uVar4 = *(uint *)(param_1 + 0x77cc);
      uVar2 = (ulonglong)uVar4 &
              ~((((ulonglong)uVar6 & 0x7fffffff) << 1 | (ulonglong)(uVar6 >> 0x1f)) - 1);
      trapWord(6,(ulonglong)uVar4,0);
      trapWord(5,uVar2,0xffff);
      dVar7 = (double)fn_82F655D8((double)(longlong)((int)uVar6 / (int)uVar4),
                                        *(undefined8 *)(param_1 + 0x77e0),param_1,uVar2);
      dVar7 = -(dVar7 * (double)(longlong)param_3 - (double)(longlong)param_2) /
              (*(double *)(param_1 + 0x7850) * (double)(longlong)*(int *)(param_1 + 0x77d8)) +
              *(double *)(param_1 + 0x7830);
    }
    dVar1 = lbl_82005758;
    if ((lbl_82005758 <= dVar7) || (dVar1 = lbl_82005730, dVar7 < lbl_82005730)) {
      dVar7 = dVar1;
    }
    dVar7 = (double)fn_82F6B2A8(dVar8 / dVar7);
    uVar6 = (int)dVar7 - 8;
    if ((int)uVar6 < 8) {
      if ((int)uVar6 < 0) {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 8;
    }
    uVar4 = uVar6;
    if (((*(int *)(param_1 + 0x779c) != 0) && (0 < (int)uVar6)) && ((int)uVar6 < 7)) {
      uVar4 = uVar6 + 2;
    }
  }
  if ((uVar6 == *(uint *)(param_1 + 0x7820)) && (uVar4 == *(uint *)(param_1 + 0x7824))) {
    *(undefined4 *)(param_1 + 0x7814) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x7838) = *(undefined8 *)(param_1 + 0x7830);
    *(undefined4 *)(param_1 + 0x7814) = 1;
    *(undefined4 *)(param_1 + 0x7818) = 1;
    *(undefined4 *)(param_1 + 0x784c) = *(undefined4 *)(param_1 + 0x7844);
    *(undefined4 *)(param_1 + 0x7848) = *(undefined4 *)(param_1 + 0x7840);
    *(undefined4 *)(param_1 + 0x782c) = *(undefined4 *)(param_1 + 0x7824);
    *(uint *)(param_1 + 0x7828) = *(uint *)(param_1 + 0x7820);
    *(uint *)(param_1 + 0x7840) = uVar6;
    *(uint *)(param_1 + 0x7844) = uVar4;
    *(uint *)(param_1 + 0x7824) = uVar4;
    *(uint *)(param_1 + 0x7820) = uVar6;
    *(double *)(param_1 + 0x7830) = dVar8 / ((double)(longlong)(int)uVar6 + dVar8);
  }
  return;
}

