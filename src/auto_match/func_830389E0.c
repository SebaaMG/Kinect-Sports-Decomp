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
extern int fn_82FA5060();
extern int fn_82FEFC98();
extern int fn_82FEFCC8();
extern int fn_8300FA30();
extern int fn_8300FCF0();
extern int fn_83010868();
extern int fn_8302BD60();
extern int fn_83032D88();
extern int fn_83032FB8();
extern int fn_83032FD0();
extern int fn_83033000();
extern int fn_83033070();
extern int fn_83033110();
extern int fn_83033360();
extern int fn_830337B0();
extern unsigned int lbl_82002C5C;
extern float lbl_8201FBB8;
extern unsigned int lbl_8207F25C;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E4;


void fn_830389E0(double param_1,int *param_2)

{
  int *piVar2;
  ulonglong uVar1;
  int iVar3;
  int *piVar4;
  double dVar5;
  
  fn_82FEFC98();
  if (((*(byte *)((int)param_2 + 0xd9) & 2) == 0) && ((*(byte *)((int)param_2 + 0xd9) & 1) == 0)) {
    (**(code **)(*param_2 + 0x3c))(param_2,1);
    iVar3 = param_2[0x78] >> 0x1c;
    if ((iVar3 == 1) || (iVar3 == 2)) {
      if (param_1 < (double)lbl_8207F25C) goto LAB_83038c80;
    }
    else if (iVar3 != 5) {
      fn_82FEFCC8(param_2);
      return;
    }
    if (param_2[0x77] != 0) {
      piVar4 = param_2 + 0x62;
      piVar2 = (int *)fn_83033360(0x5011,0,piVar4);
      if (piVar2 != (int *)0x0) {
        uVar1 = fn_82FA5060(lbl_831BC768,0x38);
        if (((uVar1 & 0xffffffff) != 0) &&
           (iVar3 = fn_8300FA30(uVar1,param_2[0x1c]), iVar3 != 0)) {
          piVar2[0x27] = param_2[0x4c];
          fn_83032FB8(piVar2,param_2 + 99);
          (**(code **)(*piVar2 + 0x14))(piVar2,param_2[0x77]);
          fn_83032FD0(piVar2,param_2[0x75]);
          fn_83033110(piVar2,param_2[0x17],*(byte *)(param_2 + 0x18) >> 6 & 1,iVar3);
          fn_830337B0(piVar2,param_2 + 0x5f);
          if ((param_2[0x78] >> 0x1c == 1) || (param_2[0x78] >> 0x1c == 2)) {
            dVar5 = (double)(float)(param_1 * (double)lbl_82002C5C);
            if ((float)((double)(float)param_2[0x76] -
                       (double)(float)(param_1 * (double)lbl_82002C5C)) < 0.0) {
              dVar5 = (double)(float)param_2[0x76];
            }
            uVar1 = (ulonglong)(uint)(int)((float)(param_1 - dVar5) * lbl_8201FBB8);
            fn_83033000(piVar2,param_2,(int)dVar5);
          }
          else {
            uVar1 = (ulonglong)(uint)(int)((float)param_2[0x76] * lbl_8201FBB8);
            if (0 < param_2[0x4d]) {
              uVar1 = (uint)param_2[0x4d] + uVar1;
            }
            if ((uVar1 & 0xffffffff) < 0x400) {
              uVar1 = 0x400;
            }
            fn_83033070(piVar2,param_2[0x16],*(byte *)(param_2 + 0x18) >> 7,iVar3);
          }
          fn_8302BD60(piVar2,uVar1,0,0);
          *(int **)(iVar3 + 8) = piVar2;
          *(undefined8 *)(iVar3 + 0x18) = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)(iVar3 + 0x20) = *(undefined8 *)(param_2 + 0x12);
          *(undefined8 *)(iVar3 + 0x28) = *(undefined8 *)(param_2 + 0x14);
          fn_8300FCF0(lbl_832642E4,iVar3);
          if ((0x3ff < (uVar1 & 0xffffffff)) && (param_2[0x4c] != 0)) {
            fn_83010868(lbl_832642E4,iVar3);
          }
        }
        (**(code **)(*piVar2 + 8))(piVar2);
        *(byte *)((int)param_2 + 0xd9) = *(byte *)((int)param_2 + 0xd9) | 0x10;
      }
      iVar3 = *piVar4;
      *piVar4 = 0;
      if (iVar3 != 0) {
        fn_83032D88();
      }
      param_2[0x77] = 0;
    }
  }
LAB_83038c80:
  fn_82FEFCC8(param_2);
  return;
}

