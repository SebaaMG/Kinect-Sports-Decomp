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
extern int fn_82888720();
extern int fn_828887B0();
extern int fn_82888C30();
extern int fn_82889350();


undefined4 * fn_82889518(undefined4 *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *apiStack_50 [20];
  
  if (*(int *)(param_2 + 8) == 0) {
    fn_82888C30(param_1,param_2,1,*(undefined4 *)(param_2 + 4),param_4);
    return param_1;
  }
  piVar4 = *(int **)(param_2 + 4);
  if (param_3 == (int *)*piVar4) {
    if (*(ushort *)(param_4 + 0x10) < *(ushort *)(param_3 + 4)) {
      fn_82888C30(param_1,param_2,1,param_3,param_4);
      return param_1;
    }
  }
  else {
    if (param_3 != piVar4) {
      uVar2 = *(ushort *)(param_3 + 4);
      uVar3 = *(ushort *)(param_4 + 0x10);
      if ((uVar3 < uVar2) &&
         (apiStack_50[0] = param_3, fn_828887B0(apiStack_50),
         *(ushort *)(apiStack_50[0] + 4) < uVar3)) {
        cVar1 = *(char *)(apiStack_50[0][2] + 0x61);
        piVar4 = param_3;
        param_3 = apiStack_50[0];
      }
      else {
        if ((uVar3 <= uVar2) ||
           ((apiStack_50[0] = param_3, fn_82888720(apiStack_50), apiStack_50[0] != piVar4 &&
            (*(ushort *)(apiStack_50[0] + 4) <= uVar3)))) goto LAB_8288969c;
        cVar1 = *(char *)(param_3[2] + 0x61);
        piVar4 = apiStack_50[0];
      }
      if (cVar1 == '\0') {
        fn_82888C30(param_1,param_2,1,piVar4,param_4);
        return param_1;
      }
      fn_82888C30(param_1,param_2,0,param_3,param_4);
      return param_1;
    }
    if (*(ushort *)(piVar4[2] + 0x10) < *(ushort *)(param_4 + 0x10)) {
      fn_82888C30(param_1,param_2,0,piVar4[2],param_4);
      return param_1;
    }
  }
LAB_8288969c:
  puVar5 = (undefined4 *)fn_82889350(apiStack_50,param_2,param_4,0);
  *param_1 = *puVar5;
  return param_1;
}

