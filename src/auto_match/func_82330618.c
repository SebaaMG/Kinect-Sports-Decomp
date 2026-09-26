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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_822C09B0();
extern int fn_82330C48();
extern int fn_824BD858();
extern int fn_82564458();
extern int fn_82F63108();


void fn_82330618(double param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  double dVar13;
  int aiStack_90 [4];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  fVar1 = (float)param_2[0x3d];
  param_2[0x3d] = (float)(param_1 + (double)fVar1);
  if ((((param_2[0x3e] == 0) && ((float)param_2[0x14] <= (float)(param_1 + (double)fVar1))) &&
      (param_2[0x3f] == 0)) && (*(int *)(param_2[10] + 0x78c) == 1)) {
    piVar2 = (int *)param_2[1];
    for (piVar10 = (int *)*param_2; piVar10 != piVar2; piVar10 = piVar10 + 2) {
      *(undefined4 *)(*piVar10 + 0x90) = 1;
    }
    param_2[0x3f] = 1;
  }
  piVar10 = (int *)*param_2;
  pfVar3 = *(float **)(param_2[0xb] + 0x560);
  pfVar4 = *(float **)(param_2[0xb] + 0x9e0);
  dVar13 = (double)((float)param_2[0x12] * pfVar3[0x30]);
  if (piVar10 != (int *)param_2[1]) {
    do {
      fn_82330C48(param_1,*piVar10);
      if (((double)*pfVar3 <= dVar13) || (bVar7 = true, param_2[0xc] == 0)) {
        bVar7 = false;
      }
      if (((double)*pfVar4 <= dVar13) || (bVar8 = true, param_2[0xd] == 0)) {
        bVar8 = false;
      }
      if (bVar7) {
        piVar2 = (int *)*piVar10;
        iVar9 = *piVar2;
        fn_822C09B0(auStack_80,param_2[10],1);
        iVar9 = (**(code **)(iVar9 + 4))((double)(float)param_2[0x11],piVar2);
        bVar7 = true;
        if (iVar9 == 0) goto LAB_8233075c;
      }
      else {
LAB_8233075c:
        bVar7 = false;
      }
      if (bVar8) {
        piVar2 = (int *)*piVar10;
        iVar9 = *piVar2;
        fn_822C09B0(auStack_70,param_2[10],0);
        iVar9 = (**(code **)(iVar9 + 4))((double)(float)param_2[0x11],piVar2);
        bVar8 = true;
        if (iVar9 == 0) goto LAB_823307a8;
      }
      else {
LAB_823307a8:
        bVar8 = false;
      }
      if ((bVar7) || (bVar8)) {
        param_2[0x3e] = 1;
        *(uint *)param_2[0x3c] = *(uint *)param_2[0x3c] | 0x200;
        if (bVar7) {
          param_2[0xc] = 0;
        }
        if (bVar8) {
          param_2[0xd] = 0;
        }
        if (param_2[0x3b] == 0) {
          fn_824BD858((double)*(float *)(param_2[0x3a] + 0x8c),
                            (double)*(float *)(param_2[0x3a] + 0x90));
          param_2[0x3b] = 1;
        }
        if (param_2[8] != 0) {
          if (param_2[8] == 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F63108();
          }
          (**(code **)(*(int *)param_2[8] + 4))();
        }
        fn_82564458(*(undefined4 *)(*piVar10 + 0x10),0x24,0);
        piVar2 = (int *)param_2[1];
        piVar6 = piVar10;
        while (piVar11 = piVar6 + 2, piVar11 != piVar2) {
          iVar12 = 0;
          iVar9 = 0;
          if (aiStack_90 != piVar11) {
            iVar9 = piVar6[3];
            piVar6[3] = 0;
            iVar12 = *piVar11;
            *piVar11 = 0;
          }
          iVar5 = piVar6[1];
          piVar6[1] = iVar9;
          *piVar6 = iVar12;
          piVar6 = piVar11;
          if (iVar5 != 0) {
            fn_822315A0();
          }
        }
        iVar9 = param_2[1];
        for (iVar12 = iVar9 + -8; iVar12 != iVar9; iVar12 = iVar12 + 8) {
          if (*(int *)(iVar12 + 4) != 0) {
            fn_822315A0();
          }
        }
        param_2[1] = param_2[1] + -8;
      }
      else {
        piVar10 = piVar10 + 2;
      }
    } while (piVar10 != (int *)param_2[1]);
  }
  if ((param_2[0x3e] != 0) && (param_2[0x3f] != 0)) {
    piVar2 = (int *)param_2[1];
    for (piVar10 = (int *)*param_2; piVar10 != piVar2; piVar10 = piVar10 + 2) {
      *(undefined4 *)(*piVar10 + 0x90) = 0;
    }
    param_2[0x3f] = 0;
  }
  if (param_2[0xc] == 0) {
    param_2[0xc] = (uint)(*pfVar3 < (float)param_2[0x13] * pfVar3[0x30]);
  }
  if (param_2[0xd] == 0) {
    param_2[0xd] = (uint)(*pfVar4 < pfVar4[0x30] * (float)param_2[0x13]);
  }
  return;
}

