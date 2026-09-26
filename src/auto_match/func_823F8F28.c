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
extern int fn_823FA9E8();
extern int fn_823FAB00();
extern int fn_823FACD8();


undefined4 * fn_823F8F28(undefined4 *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
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
        if (*(int *)(param_4 + 0x10) <= param_3[4]) goto LAB_823f9074;
        uVar7 = 0;
      }
      else {
        iVar3 = *(int *)(param_4 + 0x10);
        iVar4 = param_3[4];
        if ((iVar3 < iVar4) &&
           (apiStack_50[0] = param_3, piVar5 = (int *)fn_823FACD8(apiStack_50),
           *(int *)(*piVar5 + 0x10) < iVar3)) {
          cVar1 = *(char *)(apiStack_50[0][2] + 0x49);
          piVar2 = apiStack_50[0];
        }
        else {
          if ((iVar3 <= iVar4) ||
             ((apiStack_50[0] = param_3, puVar6 = (undefined4 *)fn_822509A0(apiStack_50),
              (int *)*puVar6 != piVar2 && (apiStack_50[0][4] <= iVar3)))) goto LAB_823f9074;
          cVar1 = *(char *)(param_3[2] + 0x49);
          piVar2 = param_3;
          param_3 = apiStack_50[0];
        }
        if (cVar1 == '\0') {
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
          param_3 = piVar2;
        }
      }
      goto LAB_823f8f6c;
    }
    if (param_3[4] <= *(int *)(param_4 + 0x10)) {
LAB_823f9074:
      puVar6 = (undefined4 *)fn_823FA9E8(auStack_48,param_2,param_4);
      *param_1 = *puVar6;
      return param_1;
    }
  }
  uVar7 = 1;
LAB_823f8f6c:
  fn_823FAB00(param_1,param_2,uVar7,param_3,param_4);
  return param_1;
}

