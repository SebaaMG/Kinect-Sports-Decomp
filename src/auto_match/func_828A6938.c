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
extern int fn_8265CA20();
extern int fn_8289DD28();
extern int fn_8289FA30();
extern int fn_828A6260();


undefined4 *
fn_828A6938(undefined4 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  char cVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 *apuStack_60 [24];
  
  puVar9 = *(undefined4 **)((int)param_2 + 4);
  lVar14 = 1;
  iVar7 = (int)param_3;
  uVar11 = param_2;
  uVar12 = param_3;
  if (*(char *)((int)puVar9[1] + 0x1d) == '\0') {
    iVar1 = *(int *)(param_3 + 0xc);
    uVar8 = param_4 & 0xff;
    puVar5 = (undefined4 *)puVar9[1];
    do {
      puVar9 = puVar5;
      iVar2 = puVar9[3];
      if (uVar8 == 0) {
        if (iVar1 < iVar2) {
LAB_828a6a78:
          lVar14 = 1;
        }
        else {
          if (iVar1 <= iVar2) {
            if (*(char *)(puVar9 + 4) == '\0') {
              uVar13 = 0;
            }
            else if (*(char *)(iVar7 + 0x10) == '\0') {
              uVar13 = 1;
            }
            else {
              uVar3 = *(uint *)(iVar7 + 0x14);
              uVar4 = puVar9[5];
              param_4 = (ulonglong)uVar3 - (ulonglong)uVar4;
              uVar12 = ~(ulonglong)(uVar4 ^ uVar3);
              uVar11 = (uVar12 & 0xffffffff) >> 0x1f;
              uVar13 = uVar11 + ((ulonglong)uVar4 <= (ulonglong)uVar3) & 1;
            }
            if (uVar13 != 0) goto LAB_828a6a78;
          }
          lVar14 = 0;
        }
      }
      else if (iVar2 < iVar1) {
LAB_828a6a00:
        lVar14 = 0;
      }
      else {
        if (iVar2 <= iVar1) {
          if (*(char *)(iVar7 + 0x10) == '\0') {
            uVar13 = 0;
          }
          else if (*(char *)(puVar9 + 4) == '\0') {
            uVar13 = 1;
          }
          else {
            uVar3 = puVar9[5];
            uVar4 = *(uint *)(iVar7 + 0x14);
            param_4 = (ulonglong)uVar3 - (ulonglong)uVar4;
            uVar12 = ~(ulonglong)(uVar4 ^ uVar3);
            uVar11 = (uVar12 & 0xffffffff) >> 0x1f;
            uVar13 = uVar11 + ((ulonglong)uVar4 <= (ulonglong)uVar3) & 1;
          }
          if (uVar13 != 0) goto LAB_828a6a00;
        }
        lVar14 = 1;
      }
      if (lVar14 == 0) {
        puVar5 = (undefined4 *)puVar9[2];
      }
      else {
        puVar5 = (undefined4 *)*puVar9;
      }
    } while (*(char *)((int)puVar5 + 0x1d) == '\0');
  }
  apuStack_60[0] = puVar9;
  if (lVar14 != 0) {
    if (puVar9 == (undefined4 *)**(undefined4 **)((int)param_2 + 4)) {
      puVar9 = (undefined4 *)fn_828A6260(apuStack_60,param_2,1,puVar9,param_3);
      uVar6 = *puVar9;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar6;
      return param_1;
    }
    fn_8289DD28(apuStack_60,uVar11,uVar12,param_4);
  }
  puVar5 = apuStack_60[0];
  cVar10 = fn_8289FA30(apuStack_60[0] + 3,param_3 + 0xc);
  if (cVar10 == '\0') {
    if (*(char *)(iVar7 + 0x10) != '\0') {
      *(undefined1 *)(iVar7 + 0x10) = 0;
    }
    fn_8265CA20(param_3);
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    puVar9 = (undefined4 *)fn_828A6260(apuStack_60,param_2,lVar14,puVar9,param_3);
    uVar6 = *puVar9;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = uVar6;
  }
  return param_1;
}

