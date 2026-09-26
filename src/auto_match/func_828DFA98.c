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
extern int fn_8288A4B0();
extern int fn_828DF458();
extern int fn_828DF768();
extern int fn_828E0270();
extern int fn_828EA790();


undefined4 * fn_828DFA98(undefined4 *param_1,int param_2,int *param_3,longlong param_4)

{
  int *piVar1;
  char cVar3;
  undefined4 *puVar2;
  longlong lVar4;
  int *apiStack_50 [20];
  
  lVar4 = param_4 + 0xc;
  if (*(int *)(param_2 + 8) == 0) {
    fn_828DF458(param_1,param_2,1,*(undefined4 *)(param_2 + 4),param_4);
  }
  else {
    piVar1 = *(int **)(param_2 + 4);
    if (param_3 == (int *)*piVar1) {
      cVar3 = fn_828E0270(lVar4,param_3 + 3);
      if (cVar3 != '\0') {
        fn_828DF458(param_1,param_2,1,param_3,param_4);
        return param_1;
      }
    }
    else if (param_3 == piVar1) {
      cVar3 = fn_828E0270((ulonglong)(uint)piVar1[2] + 0xc,lVar4);
      if (cVar3 != '\0') {
        fn_828DF458(param_1,param_2,0,*(undefined4 *)(*(int *)(param_2 + 4) + 8),param_4);
        return param_1;
      }
    }
    else {
      cVar3 = fn_828E0270(lVar4,param_3 + 3);
      if (cVar3 != '\0') {
        apiStack_50[0] = param_3;
        fn_8288A4B0(apiStack_50);
        piVar1 = apiStack_50[0];
        cVar3 = fn_828E0270(apiStack_50[0] + 3,lVar4);
        if (cVar3 != '\0') {
          if (*(char *)(piVar1[2] + 0x15) != '\0') {
            fn_828DF458(param_1,param_2,0,piVar1,param_4);
            return param_1;
          }
          fn_828DF458(param_1,param_2,1,param_3,param_4);
          return param_1;
        }
      }
      cVar3 = fn_828E0270(param_3 + 3,lVar4);
      if ((cVar3 != '\0') &&
         ((apiStack_50[0] = param_3, fn_828EA790(apiStack_50), piVar1 = apiStack_50[0],
          apiStack_50[0] == *(int **)(param_2 + 4) ||
          (cVar3 = fn_828E0270(lVar4,apiStack_50[0] + 3), cVar3 != '\0')))) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          fn_828DF458(param_1,param_2,0,param_3,param_4);
          return param_1;
        }
        fn_828DF458(param_1,param_2,1,piVar1,param_4);
        return param_1;
      }
    }
    puVar2 = (undefined4 *)fn_828DF768(apiStack_50,param_2,param_4,0);
    *param_1 = *puVar2;
  }
  return param_1;
}

