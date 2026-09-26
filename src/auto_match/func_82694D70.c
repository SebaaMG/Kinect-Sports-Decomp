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
extern unsigned int *auStack_2c;
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_8268CAB0();
extern int fn_82694610();
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


void fn_82694D70(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  char *pcVar10;
  char in_RESERVE;
  byte in_cr0;
  byte bVar11;
  uint uStack_30;
  uint auStack_2c [11];
  
  uVar4 = fn_8268C510(auStack_2c,*param_1);
  fn_8268CAB0(&uStack_30,uVar4);
  lVar7 = ((ulonglong)auStack_2c[0] & 0xfffffffc) + 4;
  do {
    puVar8 = (uint *)lVar7;
    uVar9 = (ulonglong)*puVar8;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed(uVar9 - 1,0,lVar7);
      *puVar8 = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar9 == 1) {
    fn_8267BE38();
  }
  pcVar6 = (char *)((uStack_30 & 0xfffffffc) + 8);
  bVar11 = (pcVar6 == (char *)0x0) << 1;
  iVar2 = *(int *)((uint)param_1 & 0xfffffc00);
  pcVar10 = pcVar6;
  if (pcVar6 == (char *)0x0) {
    puVar5 = *(undefined4 **)(iVar2 + 0x18);
  }
  else {
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    puVar5 = (undefined4 *)fn_82694610(iVar2,pcVar6,pcVar10 + (-1 - (int)pcVar6));
  }
  if ((puVar5 != *(undefined4 **)(iVar2 + 0x18)) && (param_1[1] = puVar5, puVar5 != param_1)) {
    puVar5[2] = puVar5[2] + 1;
  }
  lVar7 = ((ulonglong)uStack_30 & 0xfffffffc) + 4;
  do {
    puVar8 = (uint *)lVar7;
    uVar9 = (ulonglong)*puVar8;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed(uVar9 - 1,0,lVar7);
      *puVar8 = uVar3;
      bVar11 = 2;
    }
  } while (!(bool)(bVar11 >> 1 & 1));
  if (uVar9 == 1) {
    fn_8267BE38();
  }
  return;
}

