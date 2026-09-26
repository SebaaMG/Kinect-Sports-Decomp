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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_50;
extern int fn_8229DA88();
extern int fn_82555A88();
extern int fn_8266F578();
extern int fn_82673A28();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821938C8;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_8229D898(double param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined **ppuVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_50 [80];
  
  ppuVar6 = &lbl_821938C8;
  dVar10 = (double)lbl_821CC160;
  if (param_2[9] == 0) {
    iVar3 = fn_8266F578(param_2[1]);
    if (iVar3 != 0) {
      lVar5 = 0x10;
      do {
        piVar4 = (int *)fn_82555A88((ulonglong)(uint)param_2[3] + 0x98,*ppuVar6);
        if (piVar4 != (int *)0x0) {
          iVar3 = *piVar4;
          puVar1 = (undefined4 *)((uint)(piVar4 + 0x14) & 0xfffffff0);
          uVar11 = puVar1[1];
          uVar12 = puVar1[2];
          uVar13 = puVar1[3];
          puVar2 = (undefined4 *)((uint)(auStack_50 + (int)in_r0) & 0xfffffff0);
          *puVar2 = *puVar1;
          puVar2[1] = uVar11;
          puVar2[2] = uVar12;
          puVar2[3] = uVar13;
          if (iVar3 != 0) {
            fn_8229DA88((double)(float)piVar4[0x1c],param_2,iVar3,auStack_50);
          }
        }
        lVar5 = lVar5 + -1;
        ppuVar6 = ppuVar6 + 1;
      } while (lVar5 != 0);
      fn_8229DA88(dVar10,param_2,param_2[3],0);
      (**(code **)(*param_2 + 8))(param_2,1);
      fn_82673A28(param_2[1],0xffffffff82f54250,param_2);
      param_2[9] = 1;
    }
  }
  if ((dVar10 < (double)(float)param_2[5]) && (param_2[5] != 0)) {
    dVar7 = (double)(float)((double)(float)param_2[5] - param_1);
    dVar9 = -dVar7;
    dVar8 = dVar10;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar9 < dVar10) << 2) | (uint)(NAN(dVar9) || NAN(dVar10)) << 2)) <
        0.0) {
      dVar8 = dVar7;
    }
    param_2[5] = (int)(float)dVar8;
    if (dVar8 == dVar10) {
      param_2[5] = lbl_82192734;
      (**(code **)(*param_2 + 8))(param_2,param_2[4]);
    }
  }
  return;
}

