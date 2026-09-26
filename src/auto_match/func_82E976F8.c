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
extern int fn_82E94518();
extern int fn_82F655D8();
extern unsigned int lbl_821AAD20;


void fn_82E976F8(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  double dVar3;
  
  if (*(int *)(param_1 + 0x7814) != 0) {
    if (((*(int *)(param_1 + 0x77e8) != 0) && (*(int *)(param_1 + 0x781c) != 0)) &&
       (*(int *)(param_1 + 0x77f0) != 0)) {
      dVar3 = (double)fn_82F655D8((double)(longlong)*(int *)(param_1 + 0x77cc) /
                                        (double)(longlong)*(int *)(param_1 + 0x77d8),
                                        *(undefined8 *)(param_1 + 0x77e0));
      fVar1 = (float)((dVar3 * -((*(double *)(param_1 + 0x7830) - *(double *)(param_1 + 0x7838)) *
                                 *(double *)(param_1 + 0x7850) *
                                 (double)(longlong)*(int *)(param_1 + 0x77d8) -
                                (double)(longlong)param_2)) /
                     (double)(longlong)*(int *)(param_1 + 0x77cc));
      goto LAB_82e978b4;
    }
    if ((*(int *)(param_1 + 0x7814) != 0) && (*(int *)(param_1 + 0x781c) != 0)) {
      fVar1 = (float)((double)(longlong)param_2 / (double)(longlong)*(int *)(param_1 + 0x560)) -
              (float)((*(double *)(param_1 + 0x7830) - *(double *)(param_1 + 0x7838)) *
                     *(double *)(param_1 + 0x7850));
      goto LAB_82e978b4;
    }
  }
  if (*(int *)(param_1 + 0x77e8) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x77f0) == 0) {
    return;
  }
  dVar3 = (double)fn_82F655D8((double)(longlong)*(int *)(param_1 + 0x77cc) /
                                    (double)(longlong)*(int *)(param_1 + 0x77d8),
                                    *(undefined8 *)(param_1 + 0x77e0));
  fVar1 = (float)((dVar3 * (double)(longlong)param_2) / (double)(longlong)*(int *)(param_1 + 0x77cc)
                 );
LAB_82e978b4:
  if (lbl_821AAD20 < fVar1) {
    uVar2 = fn_82E94518(param_1);
    *(undefined4 *)(param_1 + 0x2a0) = uVar2;
  }
  return;
}

