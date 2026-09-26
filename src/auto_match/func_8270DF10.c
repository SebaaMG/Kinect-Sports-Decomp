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
extern int fn_8275AAF0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;


void fn_8270DF10(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  int iVar3;
  int *piVar4;
  ulonglong uVar2;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  iVar3 = fn_82F6A548();
  if (*(int *)(iVar3 + 0x148) != 0) {
    piVar4 = (int *)fn_8275AAF0(param_3);
    if (piVar4 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar4 + 0xc))(piVar4,*(undefined4 *)(*param_2 + 0xc));
      (**(code **)(*piVar4 + 0x14))(&iStack_60,piVar4);
      iStack_58 = iStack_58 - iStack_60;
      if (((longlong)(iStack_54 - iStack_5c) * (longlong)iStack_58 != 0) &&
         ((ulonglong)*(uint *)(iVar3 + 0x150) != (uVar2 & 0xffffffff))) {
        uVar5 = (**(code **)(*piVar4 + 4))(piVar4);
        iVar7 = iStack_54 - iStack_5c;
        dVar12 = (double)(float)((double)(longlong)iStack_58 / (double)uVar5);
        uVar5 = (**(code **)(*piVar4 + 8))(piVar4);
        dVar10 = (double)(longlong)iStack_60;
        dVar11 = (double)(float)((double)(longlong)iVar7 / (double)uVar5);
        uVar5 = (**(code **)(*piVar4 + 4))(piVar4);
        dVar9 = (double)(longlong)iStack_5c;
        dVar10 = (double)(float)(dVar10 / (double)uVar5);
        uVar5 = (**(code **)(*piVar4 + 8))(piVar4);
        uVar6 = 0;
        if (*(int *)(iVar3 + 0x148) != 0) {
          pfVar8 = (float *)(iVar3 + -4);
          do {
            uVar6 = uVar6 + 1;
            pfVar1 = pfVar8 + 9;
            pfVar8[6] = (float)((double)pfVar8[6] * dVar12 + dVar10);
            pfVar8[7] = (float)((double)pfVar8[7] * dVar11 + (double)(float)(dVar9 / (double)uVar5))
            ;
            pfVar8[8] = (float)((double)pfVar8[8] * dVar12 + dVar10);
            pfVar8 = pfVar8 + 9;
            *pfVar8 = (float)((double)*pfVar1 * dVar11 + (double)(float)(dVar9 / (double)uVar5));
          } while (uVar6 < *(uint *)(iVar3 + 0x148));
        }
        *(int *)(iVar3 + 0x150) = (int)uVar2;
      }
      (**(code **)(**(int **)(*param_2 + 0xc) + 0x68))
                (*(int **)(*param_2 + 0xc),iVar3 + 4,*(undefined4 *)(iVar3 + 0x148),0,
                 *(undefined4 *)(iVar3 + 0x148),uVar2,param_4,0);
    }
  }
  fn_82F6A594();
  return;
}

