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


void fn_82B90378(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float *pfVar7;
  code *UNRECOVERED_JUMPTABLE_00;
  
  uVar5 = 0;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    pfVar7 = (float *)(param_2 + 8);
    do {
      uVar5 = uVar5 + 1;
      iVar1 = *(int *)(param_1 + 0x5c) + (-8 - param_2);
      pfVar7[-2] = pfVar7[-2] + *(float *)((int)pfVar7 + iVar1 + 0x10);
      pfVar7[-1] = pfVar7[-1] + *(float *)((int)pfVar7 + iVar1 + 0x14);
      *pfVar7 = *(float *)((int)pfVar7 + iVar1 + 0x18) + *pfVar7;
      pfVar7[1] = pfVar7[1] + *(float *)((int)pfVar7 + iVar1 + 0x1c);
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x68);
      pfVar7 = pfVar7 + 4;
    } while ((uVar5 & 0xffffffff) < uVar6);
  }
  uVar6 = (uVar6 + 2 & 0xfffffff) * 0x10;
  lVar2 = uVar6 + 1;
  for (puVar3 = *(undefined4 **)(param_1 + 0x5c); lVar2 = lVar2 + -1,
      lVar2 != 0 && ((uint)puVar3 & 3) != 0; puVar3 = (undefined4 *)((int)puVar3 + 1)) {
    uVar6 = uVar6 - 1;
    *(undefined1 *)puVar3 = 0;
  }
  for (uVar5 = (uVar6 & 0xffffffff) >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3 = puVar3 + 4;
  }
  uVar5 = (uVar6 & 0xffffffff) >> 2 & 3;
  puVar4 = puVar3;
  if (uVar5 != 0) {
    *puVar3 = 0;
    puVar4 = puVar3 + 1;
    if (uVar5 != 1) {
      *puVar4 = 0;
      puVar4 = puVar3 + 2;
      if (uVar5 != 2) {
        *puVar4 = 0;
        puVar4 = puVar3 + 3;
      }
    }
  }
  uVar6 = uVar6 & 3;
  if (uVar6 == 0) {
    return;
  }
  *(undefined1 *)puVar4 = 0;
                    /* WARNING: Could not recover jumptable at 0x82f6927c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar6 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x82f69284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar6 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 2) = 0;
  return;
}

