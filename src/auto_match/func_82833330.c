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
extern int fn_823E2D30();
extern int fn_82832430();
extern int fn_82832FC0();
extern int fn_82833188();


undefined4 * fn_82833330(undefined4 *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int *apiStack_40 [16];
  
  if (*(int *)(param_2 + 8) == 0) {
    param_3 = *(int **)(param_2 + 4);
  }
  else {
    piVar2 = *(int **)(param_2 + 4);
    if (param_3 != (int *)*piVar2) {
      if (param_3 == piVar2) {
        param_3 = (int *)piVar2[2];
        if (param_3[4] == *(uint *)(param_4 + 0x10)) {
          uVar7 = param_3[5];
          uVar5 = *(uint *)(param_4 + 0x14);
          if (uVar7 == uVar5) {
            uVar7 = param_3[3];
            uVar5 = *(uint *)(param_4 + 0xc);
          }
          bVar8 = uVar5 <= uVar7;
        }
        else {
          bVar8 = *(uint *)(param_4 + 0x10) <= (uint)param_3[4];
        }
        if (bVar8) goto LAB_828335a0;
        uVar4 = 0;
        goto LAB_8283336c;
      }
      uVar7 = *(uint *)(param_4 + 0x10);
      if (uVar7 == param_3[4]) {
        uVar5 = *(uint *)(param_4 + 0x14);
        uVar6 = param_3[5];
        if (uVar5 == uVar6) {
          uVar5 = *(uint *)(param_4 + 0xc);
          uVar6 = param_3[3];
        }
        bVar8 = uVar6 <= uVar5;
      }
      else {
        bVar8 = (uint)param_3[4] <= uVar7;
      }
      if (bVar8) {
LAB_828334e4:
        if (param_3[4] == uVar7) {
          uVar5 = param_3[5];
          uVar6 = *(uint *)(param_4 + 0x14);
          if (uVar5 == uVar6) {
            uVar5 = param_3[3];
            uVar6 = *(uint *)(param_4 + 0xc);
          }
          bVar8 = uVar6 <= uVar5;
        }
        else {
          bVar8 = uVar7 <= (uint)param_3[4];
        }
        if (bVar8) {
LAB_828335a0:
          puVar3 = (undefined4 *)fn_82833188(apiStack_40,param_2,param_4,0);
          *param_1 = *puVar3;
          return param_1;
        }
        apiStack_40[0] = param_3;
        fn_823E2D30(apiStack_40);
        if (apiStack_40[0] != piVar2) {
          if (uVar7 == apiStack_40[0][4]) {
            uVar7 = *(uint *)(param_4 + 0x14);
            uVar5 = apiStack_40[0][5];
            if (uVar7 == uVar5) {
              uVar7 = *(uint *)(param_4 + 0xc);
              uVar5 = apiStack_40[0][3];
            }
            bVar8 = uVar5 <= uVar7;
          }
          else {
            bVar8 = (uint)apiStack_40[0][4] <= uVar7;
          }
          if (bVar8) goto LAB_828335a0;
        }
        cVar1 = *(char *)(param_3[2] + 0x1d);
        piVar2 = param_3;
        param_3 = apiStack_40[0];
      }
      else {
        apiStack_40[0] = param_3;
        fn_82832430(apiStack_40);
        if (apiStack_40[0][4] == uVar7) {
          uVar5 = apiStack_40[0][5];
          uVar6 = *(uint *)(param_4 + 0x14);
          if (uVar5 == uVar6) {
            uVar5 = apiStack_40[0][3];
            uVar6 = *(uint *)(param_4 + 0xc);
          }
          bVar8 = uVar6 <= uVar5;
        }
        else {
          bVar8 = uVar7 <= (uint)apiStack_40[0][4];
        }
        if (bVar8) goto LAB_828334e4;
        cVar1 = *(char *)(apiStack_40[0][2] + 0x1d);
        piVar2 = apiStack_40[0];
      }
      if (cVar1 == '\0') {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
        param_3 = piVar2;
      }
      goto LAB_8283336c;
    }
    uVar7 = *(uint *)(param_4 + 0x10);
    uVar5 = param_3[4];
    if (uVar7 == uVar5) {
      uVar7 = *(uint *)(param_4 + 0x14);
      uVar5 = param_3[5];
      if (uVar7 == uVar5) {
        uVar7 = *(uint *)(param_4 + 0xc);
        uVar5 = param_3[3];
      }
    }
    if (uVar5 <= uVar7) goto LAB_828335a0;
  }
  uVar4 = 1;
LAB_8283336c:
  fn_82832FC0(param_1,param_2,uVar4,param_3,param_4);
  return param_1;
}

