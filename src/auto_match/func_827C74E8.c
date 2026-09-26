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
extern int fn_827C7150();
extern int fn_827C72A8();
extern int fn_827C73F8();


undefined8 fn_827C74E8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  
  iVar1 = param_1[0x57];
  iVar2 = param_1[0x4e];
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)param_1[6];
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1[6] + 4);
  if ((param_1[0x2f] != 0) && (*(int *)(iVar1 + 0x44) == 0)) {
    fn_827C73F8(iVar1,*(undefined4 *)(iVar1 + 0x48));
  }
  iVar8 = 0;
  if (0 < param_1[0x40]) {
    puVar9 = (uint *)(param_1 + 0x41);
    do {
      iVar5 = (int)(((ulonglong)*puVar9 + 9 & 0xffffffff) << 2);
      iVar3 = *(int *)((int)(((ulonglong)*puVar9 + 0x3a & 0xffffffff) << 2) + (int)param_1);
      iVar4 = (int)*(short *)*param_2 >> ((int)(short)iVar2 & 0x3fU);
      lVar6 = (longlong)iVar4 - (ulonglong)*(uint *)(iVar5 + iVar1);
      *(int *)(iVar5 + iVar1) = iVar4;
      lVar7 = lVar6;
      if (lVar6 < 0) {
        lVar7 = -lVar6;
        lVar6 = lVar6 + -1;
      }
      lVar10 = 0;
      if ((int)lVar7 != 0) {
        do {
          lVar7 = (longlong)((int)lVar7 >> 1);
          lVar10 = lVar10 + 1;
        } while (lVar7 != 0);
        if (0xb < (int)lVar10) {
          *(undefined4 *)(*param_1 + 0x14) = 6;
          (**(code **)*param_1)(param_1);
        }
      }
      fn_827C72A8(iVar1,*(undefined4 *)(iVar3 + 0x14),lVar10);
      if ((int)lVar10 != 0) {
        fn_827C7150(iVar1,lVar6,lVar10);
      }
      iVar8 = iVar8 + 1;
      puVar9 = puVar9 + 1;
      param_2 = param_2 + 1;
    } while (iVar8 < param_1[0x40]);
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(param_1[6] + 4) = *(undefined4 *)(iVar1 + 0x14);
  if (param_1[0x2f] != 0) {
    if (*(int *)(iVar1 + 0x44) == 0) {
      *(int *)(iVar1 + 0x44) = param_1[0x2f];
      *(uint *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + 1U & 7;
    }
    *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + -1;
  }
  return 1;
}

