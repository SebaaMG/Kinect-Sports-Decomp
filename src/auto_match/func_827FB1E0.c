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
extern int fn_827FAF20();
extern unsigned int iStack_6c;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;


void fn_827FB1E0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uStack_70;
  int iStack_6c;
  float *pfStack_68;
  undefined4 *puStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  
  dVar8 = (double)lbl_821AAD20;
  uVar5 = 0;
  do {
    uStack_70 = uVar5;
    fn_827FAF20(param_3,param_4,param_5,&uStack_70);
    uVar2 = (ulonglong)uStack_58;
    if (param_8 == 0) {
      uVar1 = 0;
      if (uVar2 != 0) {
        pfVar4 = pfStack_68;
        do {
          dVar7 = dVar8;
          if (uVar1 < uStack_60) {
            dVar7 = (double)(float)((double)*(float *)((iStack_6c - (int)pfStack_68) + (int)pfVar4)
                                   * param_1);
          }
          dVar6 = dVar8;
          if (uVar1 < uStack_5c) {
            dVar6 = (double)(float)((double)*pfVar4 * param_2);
          }
          *(float *)(((int)puStack_64 - (int)pfStack_68) + (int)pfVar4) = (float)(dVar6 + dVar7);
          uVar1 = uVar1 + 1;
          pfVar4 = pfVar4 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
    }
    else if (uVar2 != 0) {
      puVar3 = puStack_64;
      do {
        *puVar3 = *(undefined4 *)((iStack_6c - (int)puStack_64) + (int)puVar3);
        puVar3 = puVar3 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  return;
}

