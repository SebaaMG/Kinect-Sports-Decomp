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
extern int fn_82809CB0();
extern unsigned int lbl_821AAD20;


void fn_82838B88(int param_1,undefined4 *param_2,float *param_3,longlong param_4,longlong param_5)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  double dVar8;
  double dVar9;
  
  uVar2 = lbl_821AAD20;
  iVar6 = (int)param_5;
  if (iVar6 <= (int)param_4) {
    iVar6 = 0;
    if (0 < (int)param_4) {
      param_1 = param_1 - (int)param_2;
      iVar4 = (int)param_3 - (int)param_2;
      do {
        *(int *)(param_1 + (int)param_2) = iVar6;
        if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
          *(undefined4 *)(iVar4 + (int)param_2) = uVar2;
        }
        else {
          *(undefined4 *)(iVar4 + (int)param_2) = *(undefined4 *)*param_2;
        }
        iVar6 = iVar6 + 1;
        param_2 = param_2 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    return;
  }
  iVar4 = 0;
  if (0 < iVar6) {
    iVar3 = param_1 - (int)param_2;
    iVar5 = (int)param_3 - (int)param_2;
    do {
      *(int *)(iVar3 + (int)param_2) = iVar4;
      if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
        *(undefined4 *)(iVar5 + (int)param_2) = uVar2;
      }
      else {
        *(undefined4 *)(iVar5 + (int)param_2) = *(undefined4 *)*param_2;
      }
      iVar4 = iVar4 + 1;
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  iVar6 = iVar6 + -1;
  do {
    iVar4 = 0;
    pfVar7 = param_3;
    if (0 < iVar6) {
      do {
        dVar9 = (double)pfVar7[1];
        dVar8 = (double)fn_82809CB0((double)*pfVar7);
        dVar9 = (double)fn_82809CB0(dVar9);
        if (dVar8 < dVar9) {
          iVar3 = iVar4 * 4;
          fVar1 = param_3[iVar4];
          param_3[iVar4] = param_3[iVar4 + 1];
          param_3[iVar4 + 1] = fVar1;
          uVar2 = *(undefined4 *)(iVar3 + param_1);
          *(undefined4 *)(iVar3 + param_1) = *(undefined4 *)(iVar3 + param_1 + 4);
          *(undefined4 *)(iVar3 + param_1 + 4) = uVar2;
          break;
        }
        iVar4 = iVar4 + 1;
        pfVar7 = pfVar7 + 1;
      } while (iVar4 < iVar6);
    }
    if (iVar4 == iVar6) {
      return;
    }
  } while( true );
}

