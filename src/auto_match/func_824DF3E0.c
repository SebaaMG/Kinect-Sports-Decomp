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
extern int fn_82F63108();
extern unsigned int uStack_30;


void fn_824DF3E0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 uStack_30;
  
  fVar1 = (float)param_1[5];
  fVar2 = (float)param_1[7];
  fVar3 = (float)param_1[4];
  pfVar4 = (float *)*param_1;
  while ((pfVar4 != (float *)param_1[1] && ((float)param_1[4] <= (float)param_1[7] - *pfVar4))) {
    pfVar11 = (float *)param_1[1];
    pfVar10 = pfVar4 + 2;
    if (pfVar4 + 2 != pfVar11) {
      pfVar8 = pfVar4 + -2;
      do {
        pfVar8[2] = *pfVar10;
        pfVar6 = pfVar10 + 1;
        pfVar10 = pfVar10 + 2;
        pfVar8[3] = *pfVar6;
        pfVar8 = pfVar8 + 2;
      } while (pfVar10 != pfVar11);
    }
    iVar9 = param_1[1] + -8;
    for (iVar7 = iVar9; iVar7 != param_1[1]; iVar7 = iVar7 + 8) {
    }
    param_1[1] = iVar9;
  }
  if ((fVar3 <= fVar2 - fVar1) && (pfVar4 != (float *)param_1[1])) {
    uStack_30 = *(undefined8 *)pfVar4;
    pfVar11 = pfVar4 + 2;
    if (pfVar4 + 2 != (float *)param_1[1]) {
      do {
        piVar5 = (int *)param_1[0xc];
        if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        iVar7 = (**(code **)(*piVar5 + 4))(piVar5,(int)&uStack_30 + 4,pfVar11 + 1);
        if (iVar7 != 0) {
          uStack_30 = *(undefined8 *)pfVar11;
        }
        pfVar11 = pfVar11 + 2;
      } while (pfVar11 != (float *)param_1[1]);
    }
    *(undefined8 *)(param_1 + 5) = uStack_30;
  }
  return;
}

