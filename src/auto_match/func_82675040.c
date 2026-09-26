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
extern int fn_8251F2B0();
extern int fn_825503E0();
extern int fn_82550E48();
extern int fn_8260D428();
extern int fn_82674D78();


undefined4 * fn_82675040(undefined4 *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *apiStack_50 [20];
  
  puVar3 = (undefined4 *)(param_4 + 0xc);
  if (*(int *)(param_2 + 8) == 0) {
    param_3 = *(int **)(param_2 + 4);
  }
  else {
    piVar6 = *(int **)(param_2 + 4);
    if (param_3 != (int *)*piVar6) {
      if (param_3 == piVar6) {
        if (0xf < *(uint *)(param_4 + 0x20)) {
          puVar3 = (undefined4 *)*puVar3;
        }
        iVar2 = fn_8260D428(piVar6[2] + 0xc,0,*(undefined4 *)(piVar6[2] + 0x1c),puVar3,
                             *(undefined4 *)(param_4 + 0x1c));
        if (-1 < iVar2) goto LAB_82675284;
        uVar4 = 0;
        param_3 = *(int **)(*(int *)(param_2 + 4) + 8);
        goto LAB_82675080;
      }
      piVar7 = param_3 + 3;
      piVar6 = piVar7;
      if (0xf < (uint)param_3[8]) {
        piVar6 = (int *)*piVar7;
      }
      iVar2 = fn_8260D428(puVar3,0,*(undefined4 *)(param_4 + 0x1c),piVar6,param_3[7]);
      if (iVar2 < 0) {
        apiStack_50[0] = param_3;
        fn_8251F2B0(apiStack_50);
        piVar6 = apiStack_50[0];
        puVar5 = puVar3;
        if (0xf < *(uint *)(param_4 + 0x20)) {
          puVar5 = (undefined4 *)*puVar3;
        }
        iVar2 = fn_8260D428(apiStack_50[0] + 3,0,apiStack_50[0][7],puVar5,
                             *(undefined4 *)(param_4 + 0x1c));
        if (-1 < iVar2) goto LAB_826751d4;
        cVar1 = *(char *)(piVar6[2] + 0x2d);
      }
      else {
LAB_826751d4:
        puVar5 = puVar3;
        if (0xf < *(uint *)(param_4 + 0x20)) {
          puVar5 = (undefined4 *)*puVar3;
        }
        iVar2 = fn_8260D428(piVar7,0,param_3[7],puVar5,*(undefined4 *)(param_4 + 0x1c));
        if (-1 < iVar2) {
LAB_82675284:
          puVar3 = (undefined4 *)fn_82674D78(apiStack_50,param_2,param_4,0);
          *param_1 = *puVar3;
          return param_1;
        }
        apiStack_50[0] = param_3;
        fn_825503E0(apiStack_50);
        piVar7 = apiStack_50[0];
        if (apiStack_50[0] != *(int **)(param_2 + 4)) {
          piVar6 = apiStack_50[0] + 3;
          if (0xf < (uint)apiStack_50[0][8]) {
            piVar6 = (int *)*piVar6;
          }
          iVar2 = fn_8260D428(puVar3,0,*(undefined4 *)(param_4 + 0x1c),piVar6,apiStack_50[0][7]);
          if (-1 < iVar2) goto LAB_82675284;
        }
        cVar1 = *(char *)(param_3[2] + 0x2d);
        piVar6 = param_3;
        param_3 = piVar7;
      }
      if (cVar1 == '\0') {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
        param_3 = piVar6;
      }
      goto LAB_82675080;
    }
    piVar6 = param_3 + 3;
    if (0xf < (uint)param_3[8]) {
      piVar6 = (int *)*piVar6;
    }
    iVar2 = fn_8260D428(puVar3,0,*(undefined4 *)(param_4 + 0x1c),piVar6,param_3[7]);
    if (-1 < iVar2) goto LAB_82675284;
  }
  uVar4 = 1;
LAB_82675080:
  fn_82550E48(param_1,param_2,uVar4,param_3,param_4);
  return param_1;
}

