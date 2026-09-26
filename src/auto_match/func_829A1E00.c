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
extern int fn_8265C990();
extern int fn_82954CC0();
extern int fn_829639F0();
extern int fn_82964180();
extern int fn_82BA02A8();
extern unsigned int lbl_82050BD0;


void fn_829A1E00(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *param_1 = &lbl_82050BD0;
  fn_8265C990(param_1[0x8c],0x24810000);
  fn_8265C990(param_1[0x8d],0x24810000);
  if ((param_1[0xae] != 0) && (uVar2 = 0, param_1[0xb1] != 0)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(param_1[0xae] + iVar4);
      if (iVar1 != 0) {
        fn_82BA02A8(iVar1);
        fn_829639F0(iVar1);
      }
      uVar2 = uVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar2 < (uint)param_1[0xb1]);
  }
  if ((param_1[0xaf] != 0) && (uVar2 = 0, param_1[0xb0] != 0)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(iVar4 + param_1[0xaf]);
      if (iVar1 != 0) {
        fn_82BA02A8(iVar1);
        fn_82964180(iVar1);
      }
      uVar2 = uVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar2 < (uint)param_1[0xb0]);
  }
  puVar5 = param_1 + 0xb1;
  lVar3 = 0x10;
  do {
    iVar4 = puVar5[1];
    if (iVar4 != 0) {
      fn_82BA02A8(iVar4);
      fn_829639F0(iVar4);
    }
    lVar3 = lVar3 + -1;
    puVar5 = puVar5 + 1;
    *puVar5 = 0;
  } while (lVar3 != 0);
  fn_8265C990(param_1[0xae],0x24810000);
  fn_8265C990(param_1[0xaf],0x24810000);
  fn_82954CC0(param_1);
  return;
}

