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
extern int fn_82CE5410();
extern unsigned int lbl_82134BF8;
extern unsigned int lbl_82134CD4;
extern unsigned int lbl_82135724;
extern unsigned int lbl_82135744;
extern unsigned int lbl_821385C8;
extern unsigned int lbl_821385EC;


undefined4 * fn_82D438E0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  *param_1 = &lbl_82134BF8;
  if (param_2 != 0) {
    param_1[3] = 0;
  }
  param_1[4] = &lbl_82134CD4;
  *param_1 = &lbl_82135744;
  param_1[4] = &lbl_82135724;
  if (param_2 != 0) {
    param_1[3] = 7;
    *(undefined1 *)((int)param_1 + 0x15) = 3;
  }
  *param_1 = &lbl_821385EC;
  param_1[4] = &lbl_821385C8;
  if (param_2 != 0) {
    iVar2 = 0;
    *(undefined1 *)((int)param_1 + 0x15) = 1;
    if (0 < (int)param_1[0x2e]) {
      iVar3 = 0;
      do {
        if (*(char *)(iVar3 + param_1[0x2d] + 1) == '\0') {
          *(undefined1 *)(iVar3 + param_1[0x2d] + 1) = 1;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x60;
      } while (iVar2 < (int)param_1[0x2e]);
    }
    iVar2 = 0;
    if (0 < (int)param_1[0x31]) {
      iVar3 = 0;
      do {
        if (*(char *)(iVar3 + param_1[0x30] + 1) == '\0') {
          *(undefined1 *)(iVar3 + param_1[0x30] + 1) = 1;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x40;
      } while (iVar2 < (int)param_1[0x31]);
    }
    if (param_1[0x2e] == 1) {
      puVar6 = param_1 + 0x2d;
      puVar4 = (undefined8 *)(param_1 + 6);
      lVar7 = 0xc;
      puVar5 = (undefined8 *)(param_1[0x2d] + -8);
      do {
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar5;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      iVar2 = fn_82CE5410();
      piVar1 = *(int **)(iVar2 + 0x10);
      param_1[0x2e] = 0;
      if ((param_1[0x2f] & 0x80000000) == 0) {
        (**(code **)(*piVar1 + 0x10))(piVar1,*puVar6,param_1[0x2f] & 0x3fffffff,0x60);
      }
      *puVar6 = 0;
      param_1[0x2f] = 0x80000000;
      *puVar6 = param_1 + 8;
      param_1[0x2e] = 1;
      param_1[0x2f] = 0x80000001;
    }
    if (param_1[0x38] == -1) {
      param_1[0x38] = 0x80000000;
    }
  }
  param_1[3] = 0xe;
  return param_1;
}

