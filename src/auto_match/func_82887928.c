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
extern int fn_82887688();
extern int fn_8288A4B0();
extern int fn_828DF458();
extern int fn_828EA790();


undefined4 * fn_82887928(undefined4 *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *apiStack_50 [20];
  
  if (*(int *)(param_2 + 8) == 0) {
    fn_828DF458(param_1,param_2,1,*(undefined4 *)(param_2 + 4),param_4);
    return param_1;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_3 == (int *)*piVar2) {
    if (*(int *)(param_4 + 0xc) < param_3[3]) {
      fn_828DF458(param_1,param_2,1,param_3,param_4);
      return param_1;
    }
  }
  else {
    if (param_3 != piVar2) {
      iVar3 = *(int *)(param_4 + 0xc);
      iVar4 = param_3[3];
      if ((iVar3 < iVar4) &&
         (apiStack_50[0] = param_3, fn_8288A4B0(apiStack_50), apiStack_50[0][3] < iVar3)) {
        cVar1 = *(char *)(apiStack_50[0][2] + 0x15);
        piVar2 = param_3;
        param_3 = apiStack_50[0];
      }
      else {
        if ((iVar3 <= iVar4) ||
           ((apiStack_50[0] = param_3, fn_828EA790(apiStack_50), apiStack_50[0] != piVar2 &&
            (apiStack_50[0][3] <= iVar3)))) goto LAB_82887aac;
        cVar1 = *(char *)(param_3[2] + 0x15);
        piVar2 = apiStack_50[0];
      }
      if (cVar1 == '\0') {
        fn_828DF458(param_1,param_2,1,piVar2,param_4);
        return param_1;
      }
      fn_828DF458(param_1,param_2,0,param_3,param_4);
      return param_1;
    }
    if (*(int *)(piVar2[2] + 0xc) < *(int *)(param_4 + 0xc)) {
      fn_828DF458(param_1,param_2,0,piVar2[2],param_4);
      return param_1;
    }
  }
LAB_82887aac:
  puVar5 = (undefined4 *)fn_82887688(apiStack_50,param_2,param_4,0);
  *param_1 = *puVar5;
  return param_1;
}

