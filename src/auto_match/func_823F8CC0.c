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
extern unsigned int *auStack_48;
extern int fn_822509A0();
extern int fn_823FA890();
extern int fn_823FAB00();
extern int fn_823FACD8();


undefined4 * fn_823F8CC0(undefined4 *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  int *apiStack_50 [2];
  undefined1 auStack_48 [72];
  
  apiStack_50[0] = (int *)0x0;
  if (*(int *)(param_2 + 8) == 0) {
    param_3 = *(int **)(param_2 + 4);
  }
  else {
    piVar2 = *(int **)(param_2 + 4);
    if (param_3 != (int *)*piVar2) {
      if (param_3 == piVar2) {
        param_3 = (int *)piVar2[2];
        if (((uint)param_3[4] < *(uint *)(param_4 + 0x10)) ||
           (((uint)param_3[4] <= *(uint *)(param_4 + 0x10) &&
            (param_3[5] < *(int *)(param_4 + 0x14))))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (!bVar5) goto LAB_823f8f00;
        uVar8 = 0;
        goto LAB_823f8d04;
      }
      uVar3 = *(uint *)(param_4 + 0x10);
      if ((uVar3 < (uint)param_3[4]) ||
         ((uVar3 <= (uint)param_3[4] && (*(int *)(param_4 + 0x14) < param_3[5])))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        apiStack_50[0] = param_3;
        piVar6 = (int *)fn_823FACD8(apiStack_50);
        uVar4 = *(uint *)(*piVar6 + 0x10);
        if ((uVar4 < uVar3) ||
           ((uVar4 <= uVar3 && (*(int *)(*piVar6 + 0x14) < *(int *)(param_4 + 0x14))))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (!bVar5) goto LAB_823f8e58;
        cVar1 = *(char *)(apiStack_50[0][2] + 0x49);
        piVar2 = apiStack_50[0];
      }
      else {
LAB_823f8e58:
        if (((uint)param_3[4] < uVar3) ||
           (((uint)param_3[4] <= uVar3 && (param_3[5] < *(int *)(param_4 + 0x14))))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (!bVar5) {
LAB_823f8f00:
          puVar7 = (undefined4 *)fn_823FA890(auStack_48,param_2,param_4);
          *param_1 = *puVar7;
          return param_1;
        }
        apiStack_50[0] = param_3;
        puVar7 = (undefined4 *)fn_822509A0(apiStack_50);
        if ((int *)*puVar7 != piVar2) {
          if ((uVar3 < (uint)apiStack_50[0][4]) ||
             ((uVar3 <= (uint)apiStack_50[0][4] && (*(int *)(param_4 + 0x14) < apiStack_50[0][5]))))
          {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (!bVar5) goto LAB_823f8f00;
        }
        cVar1 = *(char *)(param_3[2] + 0x49);
        piVar2 = param_3;
        param_3 = apiStack_50[0];
      }
      if (cVar1 == '\0') {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
        param_3 = piVar2;
      }
      goto LAB_823f8d04;
    }
    if ((*(uint *)(param_4 + 0x10) < (uint)param_3[4]) ||
       ((*(uint *)(param_4 + 0x10) <= (uint)param_3[4] && (*(int *)(param_4 + 0x14) < param_3[5]))))
    {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) goto LAB_823f8f00;
  }
  uVar8 = 1;
LAB_823f8d04:
  fn_823FAB00(param_1,param_2,uVar8,param_3,param_4);
  return param_1;
}

