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
extern int fn_826A2CB0();
extern int fn_826C1AD8();
extern unsigned int lbl_82006E68;
extern unsigned int lbl_82006EBC;
extern U64 storeWordConditionalIndexed();


void fn_826A44C0(undefined4 *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  char in_RESERVE;
  byte in_cr0;
  
  *param_1 = &lbl_82006EBC;
  param_1[4] = &lbl_82006E68;
  fn_826A2CB0(param_1,0);
  lVar2 = ((ulonglong)(uint)param_1[0x10] & 0xfffffffc) + 4;
  do {
    puVar3 = (uint *)lVar2;
    uVar4 = (ulonglong)*puVar3;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar2);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar4 == 1) {
    fn_8267BE38();
  }
  fn_8267BE38(param_1[0xd]);
  fn_826C1AD8(param_1);
  return;
}

