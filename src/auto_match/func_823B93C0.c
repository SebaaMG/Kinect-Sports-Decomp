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
extern U64 storeWordConditionalIndexed();


void fn_823B93C0(int *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  int *piVar8;
  char in_RESERVE;
  byte in_cr0;
  
  uVar4 = param_2 + 0x68;
  if ((int)param_2 == 0) {
    uVar4 = 0;
  }
  uVar5 = (ulonglong)(uint)param_1[2];
  if ((uVar4 & 0xffffffff) == uVar5) {
    return;
  }
  if (uVar5 != 0) {
    lVar6 = uVar5 + 0xc;
LAB_823b93f4:
    do {
      puVar7 = (uint *)lVar6;
      uVar1 = *puVar7;
      if (uVar1 == 0) {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed(1,0,lVar6);
          *puVar7 = uVar3;
          in_cr0 = 2;
        }
        if (!(bool)(in_cr0 >> 1 & 1)) goto LAB_823b93f4;
      }
      else if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar6);
        *puVar7 = uVar3;
        in_cr0 = 2;
      }
    } while (uVar1 != 0);
    sync(1);
    *(int *)(*param_1 + 4) = param_1[1];
    *(int *)param_1[1] = *param_1;
    sync(1);
    *puVar7 = 0;
  }
  param_1[2] = (int)uVar4;
  if ((uVar4 & 0xffffffff) == 0) {
    return;
  }
  lVar6 = uVar4 + 0xc;
LAB_823b9464:
  do {
    puVar7 = (uint *)lVar6;
    uVar1 = *puVar7;
    if (uVar1 == 0) {
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(1,0,lVar6);
        *puVar7 = uVar3;
        in_cr0 = 2;
      }
      if (!(bool)(in_cr0 >> 1 & 1)) goto LAB_823b9464;
    }
    else if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar6);
      *puVar7 = uVar3;
      in_cr0 = 2;
    }
    if (uVar1 == 0) {
      sync(1);
      piVar8 = (int *)(param_1[2] + 4);
      iVar2 = *piVar8;
      param_1[1] = (int)piVar8;
      *param_1 = iVar2;
      *(int **)(*piVar8 + 4) = param_1;
      *piVar8 = (int)param_1;
      sync(1);
      *puVar7 = 0;
      return;
    }
  } while( true );
}

