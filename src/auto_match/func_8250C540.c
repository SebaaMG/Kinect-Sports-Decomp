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
extern int fn_8250C280();
extern unsigned int iStack_6c;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;


void fn_8250C540(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  float *pfVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uStack_70;
  int iStack_6c;
  float *pfStack_68;
  float *pfStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  
  dVar8 = (double)lbl_821CC160;
  uVar5 = 0;
  do {
    uStack_70 = uVar5;
    fn_8250C280(param_3,param_4,param_5,&uStack_70);
    if (param_8 == 0) {
      uVar3 = (ulonglong)uStack_58;
      uVar2 = 0;
      if (uVar3 != 0) {
        pfVar4 = pfStack_68;
        do {
          dVar7 = dVar8;
          if (uVar2 < uStack_60) {
            dVar7 = (double)(float)((double)*(float *)((int)pfVar4 + (iStack_6c - (int)pfStack_68))
                                   * param_1);
          }
          dVar6 = dVar8;
          if (uVar2 < uStack_5c) {
            dVar6 = (double)(float)(param_2 * (double)*pfVar4);
          }
          *(float *)(((int)pfStack_64 - (int)pfStack_68) + (int)pfVar4) = (float)(dVar6 + dVar7);
          uVar2 = uVar2 + 1;
          pfVar4 = pfVar4 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    else {
      uVar3 = (ulonglong)uStack_58;
      uVar2 = 0;
      if (uVar3 != 0) {
        pfVar4 = pfStack_64;
        do {
          if (uVar2 < uStack_60) {
            fVar1 = *(float *)(((int)pfStack_68 - (int)pfStack_64) + (iStack_6c - (int)pfStack_68) +
                              (int)pfVar4);
LAB_8250c5ec:
            *pfVar4 = fVar1;
          }
          else {
            if (uVar2 < uStack_5c) {
              fVar1 = *(float *)(((int)pfStack_68 - (int)pfStack_64) + (int)pfVar4);
              goto LAB_8250c5ec;
            }
            *pfVar4 = (float)dVar8;
          }
          uVar2 = uVar2 + 1;
          pfVar4 = pfVar4 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    uVar5 = uVar5 + 1;
    if (1 < uVar5) {
      return;
    }
  } while( true );
}

