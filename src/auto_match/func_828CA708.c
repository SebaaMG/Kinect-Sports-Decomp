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
extern int fn_828C8C90();
extern int fn_828C8D20();
extern int fn_828C9DB8();
extern int fn_828CA450();


undefined4 * fn_828CA708(undefined4 *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *apiStack_50 [20];
  
  if (*(int *)(param_2 + 8) == 0) {
    fn_828C9DB8(param_1,param_2,1,*(undefined4 *)(param_2 + 4),param_4);
    return param_1;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_3 == (int *)*piVar2) {
    if (*(uint *)(param_4 + 0x10) < (uint)param_3[4]) {
      fn_828C9DB8(param_1,param_2,1,param_3,param_4);
      return param_1;
    }
  }
  else {
    if (param_3 != piVar2) {
      uVar3 = *(uint *)(param_4 + 0x10);
      uVar4 = param_3[4];
      if ((uVar3 < uVar4) &&
         (apiStack_50[0] = param_3, fn_828C8D20(apiStack_50), (uint)apiStack_50[0][4] < uVar3)) {
        cVar1 = *(char *)(apiStack_50[0][2] + 0x49);
        piVar2 = param_3;
        param_3 = apiStack_50[0];
      }
      else {
        if ((uVar3 <= uVar4) ||
           ((apiStack_50[0] = param_3, fn_828C8C90(apiStack_50), apiStack_50[0] != piVar2 &&
            ((uint)apiStack_50[0][4] <= uVar3)))) goto LAB_828ca88c;
        cVar1 = *(char *)(param_3[2] + 0x49);
        piVar2 = apiStack_50[0];
      }
      if (cVar1 == '\0') {
        fn_828C9DB8(param_1,param_2,1,piVar2,param_4);
        return param_1;
      }
      fn_828C9DB8(param_1,param_2,0,param_3,param_4);
      return param_1;
    }
    if (*(uint *)(piVar2[2] + 0x10) < *(uint *)(param_4 + 0x10)) {
      fn_828C9DB8(param_1,param_2,0,piVar2[2],param_4);
      return param_1;
    }
  }
LAB_828ca88c:
  puVar5 = (undefined4 *)fn_828CA450(apiStack_50,param_2,param_4,0);
  *param_1 = *puVar5;
  return param_1;
}

