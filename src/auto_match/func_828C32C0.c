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
extern int fn_8260D428();
extern int fn_828A0D90();
extern int fn_828C1F70();
extern int fn_828C2EF8();
extern int fn_828C30F8();


undefined4 * fn_828C32C0(undefined4 *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *apiStack_50 [20];
  
  puVar2 = (undefined4 *)(param_4 + 0xc);
  if (*(int *)(param_2 + 8) == 0) {
    fn_828C2EF8(param_1,param_2,1,*(undefined4 *)(param_2 + 4),param_4);
    return param_1;
  }
  piVar3 = *(int **)(param_2 + 4);
  if (param_3 == (int *)*piVar3) {
    piVar3 = param_3 + 3;
    if (0xf < (uint)param_3[8]) {
      piVar3 = (int *)*piVar3;
    }
    iVar1 = fn_8260D428(puVar2,0,*(undefined4 *)(param_4 + 0x1c),piVar3,param_3[7]);
    if (iVar1 < 0) {
      fn_828C2EF8(param_1,param_2,1,param_3,param_4);
      return param_1;
    }
  }
  else if (param_3 == piVar3) {
    if (0xf < *(uint *)(param_4 + 0x20)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    iVar1 = fn_8260D428(piVar3[2] + 0xc,0,*(undefined4 *)(piVar3[2] + 0x1c),puVar2,
                         *(undefined4 *)(param_4 + 0x1c));
    if (iVar1 < 0) {
      fn_828C2EF8(param_1,param_2,0,*(undefined4 *)(*(int *)(param_2 + 4) + 8),param_4);
      return param_1;
    }
  }
  else {
    piVar5 = param_3 + 3;
    piVar3 = piVar5;
    if (0xf < (uint)param_3[8]) {
      piVar3 = (int *)*piVar5;
    }
    iVar1 = fn_8260D428(puVar2,0,*(undefined4 *)(param_4 + 0x1c),piVar3,param_3[7]);
    if (iVar1 < 0) {
      apiStack_50[0] = param_3;
      fn_828C1F70(apiStack_50);
      piVar3 = apiStack_50[0];
      puVar4 = puVar2;
      if (0xf < *(uint *)(param_4 + 0x20)) {
        puVar4 = (undefined4 *)*puVar2;
      }
      iVar1 = fn_8260D428(apiStack_50[0] + 3,0,apiStack_50[0][7],puVar4,
                           *(undefined4 *)(param_4 + 0x1c));
      if (iVar1 < 0) {
        if (*(char *)(piVar3[2] + 0x39) != '\0') {
          fn_828C2EF8(param_1,param_2,0,piVar3,param_4);
          return param_1;
        }
        fn_828C2EF8(param_1,param_2,1,param_3,param_4);
        return param_1;
      }
    }
    puVar4 = puVar2;
    if (0xf < *(uint *)(param_4 + 0x20)) {
      puVar4 = (undefined4 *)*puVar2;
    }
    iVar1 = fn_8260D428(piVar5,0,param_3[7],puVar4,*(undefined4 *)(param_4 + 0x1c));
    if (iVar1 < 0) {
      apiStack_50[0] = param_3;
      fn_828A0D90(apiStack_50);
      piVar3 = apiStack_50[0];
      if (apiStack_50[0] != *(int **)(param_2 + 4)) {
        piVar5 = apiStack_50[0] + 3;
        if (0xf < (uint)apiStack_50[0][8]) {
          piVar5 = (int *)*piVar5;
        }
        iVar1 = fn_8260D428(puVar2,0,*(undefined4 *)(param_4 + 0x1c),piVar5,apiStack_50[0][7]);
        if (-1 < iVar1) goto LAB_828c3570;
      }
      if (*(char *)(param_3[2] + 0x39) != '\0') {
        fn_828C2EF8(param_1,param_2,0,param_3,param_4);
        return param_1;
      }
      fn_828C2EF8(param_1,param_2,1,piVar3,param_4);
      return param_1;
    }
  }
LAB_828c3570:
  puVar2 = (undefined4 *)fn_828C30F8(apiStack_50,param_2,param_4,0);
  *param_1 = *puVar2;
  return param_1;
}

