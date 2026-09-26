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
extern int fn_82809558();
extern int fn_8280DD78();
extern int fn_8280E418();
extern int fn_82F68CC0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82808A80(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  piVar1 = *(int **)(param_1 + 100);
  uVar4 = 0;
  uVar5 = (uint)*(ushort *)((int)piVar1 + 0x32);
  pfVar7 = (float *)((uint)*(byte *)(*(int *)(param_2 + 4) + piVar1[2]) * piVar1[1] + *piVar1);
  pfVar6 = (float *)((uint)*(byte *)(*(int *)(param_2 + 8) + piVar1[2]) * piVar1[1] + *piVar1);
  if (*(short *)(param_1 + 0x48) != 0) {
    dVar10 = (double)lbl_821AAD20;
    dVar9 = (double)lbl_82002AE0;
    do {
      if ((*(int *)(param_1 + 0x50) == 0) || (*(char *)(*(int *)(param_1 + 0x50) + uVar4) != '\0'))
      {
        if (dVar10 < (double)(float)(dVar9 - (double)(pfVar7[2] * pfVar7[2] +
                                                     *pfVar7 * *pfVar7 + pfVar7[1] * pfVar7[1]))) {
          dVar8 = (double)fn_82809558();
          pfVar7[3] = (float)dVar8;
        }
        else {
          pfVar7[3] = (float)dVar10;
        }
        if (dVar10 < (double)(float)(dVar9 - (double)(pfVar6[2] * pfVar6[2] +
                                                     *pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1]))) {
          dVar8 = (double)fn_82809558();
          pfVar6[3] = (float)dVar8;
        }
        else {
          pfVar6[3] = (float)dVar10;
        }
        fn_8280DD78((double)*(float *)(param_1 + 0x40),pfVar7,pfVar6,param_3);
        fn_8280E418(param_3,param_3);
        if (4 < uVar5) {
          iVar2 = uVar5 - 4;
          pfVar3 = pfVar7 + 4;
          do {
            *(float *)((param_3 - (int)pfVar7) + (int)pfVar3) =
                 (*(float *)(((int)pfVar6 - (int)pfVar7) + (int)pfVar3) - *pfVar3) *
                 *(float *)(param_1 + 0x40) + *pfVar3;
            pfVar3 = pfVar3 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        fn_82F68CC0(param_3,*(undefined4 *)(param_1 + 0x54),uVar5 * 4);
      }
      uVar4 = uVar4 + 1;
      param_3 = uVar5 * 4 + param_3;
      pfVar7 = pfVar7 + uVar5;
      pfVar6 = pfVar6 + uVar5;
    } while (uVar4 < *(ushort *)(param_1 + 0x48));
  }
  return;
}

