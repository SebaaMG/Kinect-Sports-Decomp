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
extern int fn_8289DD28();
extern int fn_8289FA30();
extern int fn_828A6260();
extern int fn_828A6938();
extern int fn_828E5F60();


undefined4 * fn_828A6C40(undefined4 *param_1,int param_2,int *param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  char cVar5;
  undefined4 *puVar4;
  longlong lVar6;
  int *apiStack_50 [20];
  
  lVar6 = param_4 + 0xc;
  if (*(int *)(param_2 + 8) == 0) {
    fn_828A6260(param_1,param_2,1,*(undefined4 *)(param_2 + 4),param_4);
  }
  else {
    piVar1 = *(int **)(param_2 + 4);
    if (param_3 == (int *)*piVar1) {
      cVar5 = fn_8289FA30(lVar6,param_3 + 3);
      if (cVar5 != '\0') {
        fn_828A6260(param_1,param_2,1,param_3,param_4);
        return param_1;
      }
    }
    else if (param_3 == piVar1) {
      uVar2 = piVar1[2];
      cVar5 = fn_8289FA30((ulonglong)uVar2 + 0xc,lVar6);
      if (cVar5 != '\0') {
        fn_828A6260(param_1,param_2,0,(ulonglong)uVar2,param_4);
        return param_1;
      }
    }
    else {
      cVar5 = fn_8289FA30(lVar6,param_3 + 3);
      if (cVar5 != '\0') {
        apiStack_50[0] = param_3;
        fn_8289DD28(apiStack_50);
        piVar3 = apiStack_50[0];
        cVar5 = fn_8289FA30(apiStack_50[0] + 3,lVar6);
        if (cVar5 != '\0') {
          if (*(char *)(piVar3[2] + 0x1d) != '\0') {
            fn_828A6260(param_1,param_2,0,piVar3,param_4);
            return param_1;
          }
          fn_828A6260(param_1,param_2,1,param_3,param_4);
          return param_1;
        }
      }
      cVar5 = fn_8289FA30(param_3 + 3,lVar6);
      if ((cVar5 != '\0') &&
         ((apiStack_50[0] = param_3, fn_828E5F60(apiStack_50), piVar3 = apiStack_50[0],
          apiStack_50[0] == piVar1 ||
          (cVar5 = fn_8289FA30(lVar6,apiStack_50[0] + 3), cVar5 != '\0')))) {
        if (*(char *)(param_3[2] + 0x1d) != '\0') {
          fn_828A6260(param_1,param_2,0,param_3,param_4);
          return param_1;
        }
        fn_828A6260(param_1,param_2,1,piVar3,param_4);
        return param_1;
      }
    }
    puVar4 = (undefined4 *)fn_828A6938(apiStack_50,param_2,param_4,0);
    *param_1 = *puVar4;
  }
  return param_1;
}

