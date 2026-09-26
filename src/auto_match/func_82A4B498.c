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
extern int fn_82A4B0D8();
extern int fn_82A59DB0();
extern int fn_82A5CC60();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82A4B498(longlong param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  char in_RESERVE;
  
  iVar5 = (int)param_1;
  fn_82A59DB0(*(undefined4 *)(iVar5 + 0x48),param_2 & 1);
  lVar9 = param_1 + 0x1c;
  (**(code **)(*(int *)(iVar5 + 0x1c) + 8))(lVar9);
  uVar6 = fn_82A5CC60(*(undefined4 *)(iVar5 + 0x4c));
  iVar7 = (int)uVar6;
  if (-1 < iVar7) {
    uVar6 = fn_82A4B0D8(param_1,((param_2 & 1) == 0) + '\x01',0);
    iVar7 = (int)uVar6;
    if (-1 < iVar7) goto LAB_82a4b568;
  }
  bVar1 = iVar7 == 0;
  param_1 = param_1 + 0x40;
  do {
    puVar8 = (uint *)param_1;
    uVar2 = *puVar8;
    if (uVar2 != 0) {
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((ulonglong)uVar2,0,param_1);
        *puVar8 = uVar4;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(uVar6,0,param_1);
      *puVar8 = uVar4;
      bVar1 = true;
    }
  } while (!bVar1);
  if ((-1 < (int)uVar2) && (piVar3 = *(int **)(iVar5 + 0x50), piVar3 != (int *)0x0)) {
    (**(code **)(*piVar3 + 8))(piVar3,uVar6);
  }
LAB_82a4b568:
  (**(code **)(*(int *)lVar9 + 0x14))(lVar9);
  return 0;
}

