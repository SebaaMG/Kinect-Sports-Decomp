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
extern int fn_8267BE38();
extern int fn_8268B330();
extern int fn_8268B610();
extern int fn_826944C8();
extern int fn_8269A190();
extern int fn_8269E088();
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


void fn_8269F310(int param_1,uint *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  char in_RESERVE;
  byte bVar7;
  uint uStack_30;
  int aiStack_2c [11];
  
  uVar1 = *param_2;
  *(int *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1;
  lVar5 = (ulonglong)*(uint *)(*(int *)(param_1 + 8) + 8) - 1;
  *(int *)(*(int *)(param_1 + 8) + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8();
  }
  *(uint *)(param_1 + 8) = uVar1;
  fn_8268B330(&uStack_30);
  if ((param_3 & 0xffffffff) != 0) {
    fn_8269E088(param_3,&uStack_30);
    fn_8268B610(&uStack_30,0xffffffff821c7f2c,0xffffffffffffffff);
  }
  fn_8268B610(&uStack_30,**(undefined4 **)(param_1 + 8),0xffffffffffffffff);
  piVar3 = (int *)fn_8269A190(aiStack_2c,*(undefined4 *)(*param_2 & 0xfffffc00),&uStack_30);
  iVar2 = *piVar3;
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  lVar5 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + 8) - 1;
  *(int *)(*(int *)(param_1 + 0xc) + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8();
  }
  *(int *)(param_1 + 0xc) = iVar2;
  lVar5 = (ulonglong)*(uint *)(aiStack_2c[0] + 8) - 1;
  bVar7 = (lVar5 == 0) << 1;
  *(int *)(aiStack_2c[0] + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8(aiStack_2c[0]);
  }
  lVar5 = ((ulonglong)uStack_30 & 0xfffffffc) + 4;
  do {
    puVar6 = (uint *)lVar5;
    uVar4 = (ulonglong)*puVar6;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar5);
      *puVar6 = uVar1;
      bVar7 = 2;
    }
  } while (!(bool)(bVar7 >> 1 & 1));
  if (uVar4 == 1) {
    fn_8267BE38();
  }
  return;
}

