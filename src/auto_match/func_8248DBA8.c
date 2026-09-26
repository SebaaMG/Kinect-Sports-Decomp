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
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8248DE88();
extern int fn_8248DF70();
extern int fn_8248E0B0();
extern int fn_8248E338();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_821CC160;


undefined8 fn_8248DBA8(double param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  uint *puVar11;
  double dVar12;
  double dVar13;
  int iStack_50;
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined1 auStack_40 [64];
  
  if (param_2[8] == 0) {
    if (param_2[7] == 0) {
      iVar8 = param_2[9];
      while (iVar8 != 0) {
        iVar8 = fn_8248E0B0(param_2);
      }
      return 1;
    }
    do {
      iVar8 = fn_8248E0B0(param_2);
    } while (iVar8 != 0);
    if ((param_2[7] != 0) && (param_2[0x12] == 0)) {
      param_2[0xf] = (float)((double)(float)param_2[0xf] + param_1);
      dVar13 = (double)lbl_821CC160;
      do {
        if (param_2[0x12] != 0) break;
        puVar11 = param_2 + 2;
        uVar5 = param_2[10];
        uVar10 = (ulonglong)uVar5;
        uVar1 = (int)(param_2[3] - param_2[2]) / 0xc;
        dVar12 = dVar13;
        if (uVar10 < uVar1) {
          dVar12 = (double)*(float *)(uVar5 * 0xc + *puVar11 + 8);
        }
        if ((double)(float)param_2[0xf] <= dVar12) break;
        dVar12 = dVar13;
        if (uVar10 < uVar1) {
          dVar12 = (double)*(float *)(uVar5 * 0xc + *puVar11 + 8);
        }
        param_2[0xf] = (float)((double)(float)param_2[0xf] - dVar12);
        fn_82365BD8(&iStack_50,uVar10 * 0xc + (ulonglong)*puVar11);
        if (iStack_50 != 0) {
          uVar7 = fn_82365BD8(auStack_40,&iStack_50);
          fn_8248E338(param_2,uVar7);
        }
        iVar8 = param_2[10];
        param_2[10] = iVar8 + 1U;
        if ((uint)((int)(param_2[3] - *puVar11) / 0xc) <= iVar8 + 1U) {
          fn_8248DE88(param_2);
        }
        if (iStack_4c != 0) {
          fn_822315A0();
        }
      } while (param_2[7] != 0);
    }
    if (param_2[7] == 0) {
      return 1;
    }
    fn_82365BD8(&iStack_50,(ulonglong)(uint)param_2[10] * 0xc + (ulonglong)(uint)param_2[2]);
    if (iStack_50 != 0) {
      puVar9 = (undefined4 *)param_2[1];
      puVar6 = (undefined4 *)*puVar9;
      uVar7 = fn_82365BD8(auStack_40,&iStack_50);
      iVar8 = (*(code *)*puVar6)(puVar9,uVar7);
      if (iVar8 == 0) {
        if (param_4 != 0) {
          param_2[0x12] = 1;
          if (iStack_4c != 0) {
            fn_822315A0();
          }
          return 0;
        }
      }
      else {
        param_2[0x12] = 0;
      }
    }
  }
  else {
    fn_8248DF70(&iStack_50,param_2);
    piVar2 = (int *)*param_2;
    iVar8 = *piVar2;
    uVar7 = fn_82365BD8(auStack_40,&iStack_50);
    iVar8 = (**(code **)(iVar8 + 4))(piVar2,uVar7);
    if (iVar8 == 0) {
      iVar8 = (int)(param_2[3] - param_2[2]) / 0xc;
      if (iVar8 != 0) {
        iVar3 = param_2[3];
        puVar9 = (undefined4 *)
                 fn_82365BD8(auStack_48,
                                   ((longlong)iVar8 + -2) * 0xc + (ulonglong)(uint)param_2[2]);
        uVar4 = puVar9[1];
        puVar9[1] = *(undefined4 *)(iVar3 + -8);
        *(undefined4 *)(iVar3 + -8) = uVar4;
        uVar4 = *puVar9;
        *puVar9 = *(undefined4 *)(iVar3 + -0xc);
        *(undefined4 *)(iVar3 + -0xc) = uVar4;
        if (iStack_44 != 0) {
          fn_822315A0();
        }
      }
    }
  }
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  return 1;
}

