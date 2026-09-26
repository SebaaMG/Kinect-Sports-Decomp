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
extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_826C6368();
extern unsigned int lbl_8200DDC4;
extern U64 storeWordConditionalIndexed();


void fn_826FDF58(undefined4 *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint *puVar4;
  char in_RESERVE;
  byte in_cr0;
  byte bVar5;
  
  *param_1 = &lbl_8200DDC4;
  puVar4 = (uint *)param_1[7];
  if (puVar4 != (uint *)0x0) {
    lVar3 = (ulonglong)*puVar4 - 1;
    in_cr0 = (lVar3 == 0) << 1;
    *puVar4 = (uint)lVar3;
    if (lVar3 == 0) {
      fn_826C6368(puVar4);
      fn_8267BE38(puVar4);
    }
  }
  if (param_1[6] != 0) {
    fn_8267C498();
  }
  lVar3 = ((ulonglong)(uint)param_1[4] & 0xfffffffc) + 4;
  do {
    puVar4 = (uint *)lVar3;
    uVar2 = (ulonglong)*puVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar2 - 1,0,lVar3);
      *puVar4 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  bVar5 = (uVar2 == 1) << 1;
  if (uVar2 == 1) {
    fn_8267BE38();
  }
  lVar3 = ((ulonglong)(uint)param_1[2] & 0xfffffffc) + 4;
  do {
    puVar4 = (uint *)lVar3;
    uVar2 = (ulonglong)*puVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar2 - 1,0,lVar3);
      *puVar4 = uVar1;
      bVar5 = 2;
    }
  } while (!(bool)(bVar5 >> 1 & 1));
  if (uVar2 == 1) {
    fn_8267BE38();
  }
  fn_8267C488(param_1);
  return;
}

