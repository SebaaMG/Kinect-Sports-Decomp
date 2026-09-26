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
extern int fn_822C7900();
extern int fn_822C7BF0();
extern int fn_822C7D48();
extern int fn_822C7F30();
extern int fn_8260D428();


undefined4 * fn_822C7978(undefined4 *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *apiStack_50 [2];
  undefined1 auStack_48 [72];
  
  apiStack_50[0] = (int *)0x0;
  puVar4 = (undefined4 *)(param_4 + 0xc);
  if (*(int *)(param_2 + 8) == 0) {
    param_3 = *(int **)(param_2 + 4);
  }
  else {
    piVar3 = *(int **)(param_2 + 4);
    if (param_3 != (int *)*piVar3) {
      if (param_3 == piVar3) {
        if (0xf < *(uint *)(param_4 + 0x20)) {
          puVar4 = (undefined4 *)*puVar4;
        }
        iVar2 = fn_8260D428(piVar3[2] + 0xc,0,*(undefined4 *)(piVar3[2] + 0x1c),puVar4,
                             *(undefined4 *)(param_4 + 0x1c));
        if (-1 < iVar2) goto LAB_822c7bc8;
        uVar5 = 0;
        param_3 = *(int **)(*(int *)(param_2 + 4) + 8);
        goto LAB_822c79c0;
      }
      piVar7 = param_3 + 3;
      piVar3 = piVar7;
      if (0xf < (uint)param_3[8]) {
        piVar3 = (int *)*piVar7;
      }
      iVar2 = fn_8260D428(puVar4,0,*(undefined4 *)(param_4 + 0x1c),piVar3,param_3[7]);
      if (iVar2 < 0) {
        apiStack_50[0] = param_3;
        piVar3 = (int *)fn_822C7F30(apiStack_50);
        puVar6 = puVar4;
        if (0xf < *(uint *)(param_4 + 0x20)) {
          puVar6 = (undefined4 *)*puVar4;
        }
        iVar2 = fn_8260D428(*piVar3 + 0xc,0,*(undefined4 *)(*piVar3 + 0x1c),puVar6,
                             *(undefined4 *)(param_4 + 0x1c));
        if (-1 < iVar2) goto LAB_822c7b14;
        cVar1 = *(char *)(apiStack_50[0][2] + 0x45);
        piVar3 = apiStack_50[0];
      }
      else {
LAB_822c7b14:
        puVar6 = puVar4;
        if (0xf < *(uint *)(param_4 + 0x20)) {
          puVar6 = (undefined4 *)*puVar4;
        }
        iVar2 = fn_8260D428(piVar7,0,param_3[7],puVar6,*(undefined4 *)(param_4 + 0x1c));
        if (-1 < iVar2) {
LAB_822c7bc8:
          puVar4 = (undefined4 *)fn_822C7BF0(auStack_48,param_2,param_4);
          *param_1 = *puVar4;
          return param_1;
        }
        apiStack_50[0] = param_3;
        piVar3 = (int *)fn_822C7900(apiStack_50);
        if (*piVar3 != *(int *)(param_2 + 4)) {
          piVar3 = apiStack_50[0] + 3;
          if (0xf < (uint)apiStack_50[0][8]) {
            piVar3 = (int *)*piVar3;
          }
          iVar2 = fn_8260D428(puVar4,0,*(undefined4 *)(param_4 + 0x1c),piVar3,apiStack_50[0][7]);
          if (-1 < iVar2) goto LAB_822c7bc8;
        }
        cVar1 = *(char *)(param_3[2] + 0x45);
        piVar3 = param_3;
        param_3 = apiStack_50[0];
      }
      if (cVar1 == '\0') {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        param_3 = piVar3;
      }
      goto LAB_822c79c0;
    }
    piVar3 = param_3 + 3;
    if (0xf < (uint)param_3[8]) {
      piVar3 = (int *)*piVar3;
    }
    iVar2 = fn_8260D428(puVar4,0,*(undefined4 *)(param_4 + 0x1c),piVar3,param_3[7]);
    if (-1 < iVar2) goto LAB_822c7bc8;
  }
  uVar5 = 1;
LAB_822c79c0:
  fn_822C7D48(param_1,param_2,uVar5,param_3,param_4);
  return param_1;
}

