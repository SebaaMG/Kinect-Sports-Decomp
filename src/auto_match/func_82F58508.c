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
extern int fn_82518FF0();
extern int fn_82830D60();
extern int fn_82F57E00();
extern int fn_82F583E0();


undefined4 * fn_82F58508(undefined4 *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int *apiStack_50 [20];
  
  if (*(int *)(param_2 + 8) == 0) {
    param_3 = *(int **)(param_2 + 4);
  }
  else {
    piVar2 = *(int **)(param_2 + 4);
    if (param_3 != (int *)*piVar2) {
      if (param_3 == piVar2) {
        param_3 = (int *)piVar2[2];
        if (*(uint *)(param_4 + 0xc) <= (uint)param_3[3]) goto LAB_82f58644;
        uVar6 = 0;
      }
      else {
        uVar3 = *(uint *)(param_4 + 0xc);
        uVar4 = param_3[3];
        if ((uVar3 < uVar4) &&
           (apiStack_50[0] = param_3, fn_82830D60(apiStack_50), (uint)apiStack_50[0][3] < uVar3)
           ) {
          cVar1 = *(char *)(apiStack_50[0][2] + 0x21);
          piVar2 = apiStack_50[0];
        }
        else {
          if ((uVar3 <= uVar4) ||
             ((apiStack_50[0] = param_3, fn_82518FF0(apiStack_50), apiStack_50[0] != piVar2 &&
              ((uint)apiStack_50[0][3] <= uVar3)))) goto LAB_82f58644;
          cVar1 = *(char *)(param_3[2] + 0x21);
          piVar2 = param_3;
          param_3 = apiStack_50[0];
        }
        if (cVar1 == '\0') {
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
          param_3 = piVar2;
        }
      }
      goto LAB_82f58544;
    }
    if ((uint)param_3[3] <= *(uint *)(param_4 + 0xc)) {
LAB_82f58644:
      puVar5 = (undefined4 *)fn_82F583E0(apiStack_50,param_2,param_4,0);
      *param_1 = *puVar5;
      return param_1;
    }
  }
  uVar6 = 1;
LAB_82f58544:
  fn_82F57E00(param_1,param_2,uVar6,param_3,param_4);
  return param_1;
}

