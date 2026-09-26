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
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_826A1370();
extern int fn_8272B128();
extern int fn_8272B180();
extern int fn_8272FFB0();
extern int fn_8279A190();
extern unsigned int lbl_82011418;
extern unsigned int lbl_8201146C;
extern unsigned int lbl_82011478;
extern U64 storeWordConditionalIndexed();


void fn_82731388(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  char in_RESERVE;
  byte in_cr0;
  
  *param_1 = &lbl_82011478;
  param_1[3] = &lbl_8201146C;
  param_1[0x1a] = &lbl_82011418;
  fn_8272B128();
  fn_8279A190(param_1[0x28]);
  iVar1 = param_1[0x39];
  if (iVar1 != 0) {
    fn_8272FFB0(iVar1);
    fn_8267BE38(iVar1);
  }
  if (param_1[0x3a] != 0) {
    fn_826824B0();
  }
  fn_8267C488(param_1 + 0x36);
  fn_8272B180(param_1 + 0x34,0,1);
  lVar3 = ((ulonglong)(uint)param_1[0x33] & 0xfffffffc) + 4;
  do {
    puVar4 = (uint *)lVar3;
    uVar5 = (ulonglong)*puVar4;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar3);
      *puVar4 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  fn_82696330(param_1 + 0x2e);
  lVar3 = (ulonglong)*(uint *)(param_1[0x2d] + 8) - 1;
  *(int *)(param_1[0x2d] + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8();
  }
  if (param_1[0x28] != 0) {
    fn_8267C498();
  }
  fn_826A1370(param_1);
  return;
}

