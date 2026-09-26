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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D1C120();


/* WARNING: Removing unreachable block (ram,0x82d1c628) */
/* WARNING: Removing unreachable block (ram,0x82d1c63c) */
/* WARNING: Removing unreachable block (ram,0x82d1c6c4) */
/* WARNING: Removing unreachable block (ram,0x82d1c6d4) */
/* WARNING: Removing unreachable block (ram,0x82d1c770) */
/* WARNING: Removing unreachable block (ram,0x82d1c780) */
/* WARNING: Removing unreachable block (ram,0x82d1c7c4) */

void fn_82D1C480(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint in_r0;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [160];
  
  iVar4 = 0;
  if (0 < param_3[1]) {
    piVar6 = (int *)*param_3;
    do {
      if (((*piVar6 == *param_1) && (piVar6[1] == param_1[1])) ||
         ((piVar6[1] == *param_1 && (*piVar6 == param_1[1])))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if (iVar4 != -1) {
          return;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 8;
    } while (iVar4 < param_3[1]);
  }
  iVar4 = fn_82CE5410();
  if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
    fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),param_3,0x20);
  }
  puVar7 = (undefined8 *)(param_3[1] * 0x20 + *param_3);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = *(undefined8 *)param_1;
    puVar7[1] = *(undefined8 *)(param_1 + 2);
    puVar7[2] = *(undefined8 *)(param_1 + 4);
    puVar7[3] = *(undefined8 *)(param_1 + 6);
  }
  param_3[1] = param_3[1] + 1;
  pcVar5 = (char *)fn_82D1C120(auStack_b0,param_1 + 4,param_2,*param_1,param_1[1],param_1[2],
                                     auStack_a0);
  if (*pcVar5 != '\0') {
    iVar4 = fn_82CE5410();
    if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
      fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),param_4,0x10);
    }
    puVar1 = (undefined4 *)(in_r0 & 0xfffffff0);
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + param_4[1] * 0x10 + *param_4 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    param_4[1] = param_4[1] + 1;
  }
  fn_82CE5410();
  return;
}

