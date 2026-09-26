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
extern int fn_8267BC98();
extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_826D6420();
extern int fn_826D6780();
extern int fn_826D96A8();
extern int fn_826DA0A0();
extern int fn_826DA118();
extern int fn_826DA190();
extern int fn_826DCDA8();
extern int fn_826EA050();
extern int fn_82758FE8();
extern int fn_8275F258();
extern unsigned int lbl_8200C6D8;
extern U64 storeWordConditionalIndexed();


void fn_826DD218(undefined4 *param_1)

{
  int iVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  char in_RESERVE;
  byte in_cr0;
  
  *param_1 = &lbl_8200C6D8;
  puVar4 = (undefined4 *)0x0;
  if ((int)param_1[0x1d] < 2) {
    RtlEnterCriticalSection(param_1 + 0x2b);
    puVar4 = param_1;
  }
  uVar5 = 0;
  if (param_1[0x3d] != 0) {
    lVar6 = 0;
    do {
      fn_82758FE8(lVar6 + (ulonglong)(uint)param_1[0x3c]);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (uVar5 < (uint)param_1[0x3d]);
  }
  uVar5 = 0;
  if (param_1[0x40] != 0) {
    lVar6 = 0;
    do {
      fn_82758FE8((ulonglong)(uint)param_1[0x3f] + lVar6);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (uVar5 < (uint)param_1[0x40]);
  }
  iVar1 = param_1[6];
  if (iVar1 != 0) {
    fn_8275F258(iVar1);
    fn_8267BE38(iVar1);
  }
  if (param_1[0x1b] != 0) {
    fn_8267BE38();
    param_1[0x1b] = 0;
  }
  if (param_1[0x45] != 0) {
    fn_8267C498();
  }
  if (puVar4 != (undefined4 *)0x0) {
    RtlLeaveCriticalSection(puVar4 + 0x2b);
  }
  fn_826DA0A0(param_1 + 0x43);
  fn_8267BE38(param_1[0x3f]);
  fn_8267BE38(param_1[0x3c]);
  fn_826EA050(param_1 + 0x35);
  fn_826DA190(param_1 + 0x34);
  fn_826DA118(param_1 + 0x33);
  fn_826D96A8(param_1 + 0x32);
  fn_826EA050(param_1 + 0x2b);
  fn_826DCDA8(param_1 + 0x22);
  if (param_1[0x21] != 0) {
    fn_8267C4F0();
  }
  fn_826D6780(param_1 + 0x13);
  lVar6 = ((ulonglong)(uint)param_1[9] & 0xfffffffc) + 4;
  do {
    puVar2 = (uint *)lVar6;
    uVar3 = (ulonglong)*puVar2;
    if (in_RESERVE != '\0') {
      uVar5 = storeWordConditionalIndexed(uVar3 - 1,0,lVar6);
      *puVar2 = uVar5;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar3 == 1) {
    fn_8267BE38();
  }
  if (param_1[8] != 0) {
    fn_8267BC98();
  }
  fn_826D6420(param_1 + 2);
  fn_8267C488(param_1);
  return;
}

