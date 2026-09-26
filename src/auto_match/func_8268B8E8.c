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
extern int fn_8267BF50();
extern int fn_8268B368();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;
extern U64 storeWordConditionalIndexed();


void fn_8268B8E8(uint *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  char *pcVar8;
  char in_RESERVE;
  byte in_cr0;
  
  pcVar8 = param_2;
  if (param_2 == (char *)0x0) {
    pcVar8 = (char *)0x0;
  }
  else {
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pcVar8 = pcVar8 + (-1 - (int)param_2);
  }
  uVar2 = *param_1;
  uVar5 = 0;
  if ((uVar2 & 3) == 0) {
    uVar5 = (ulonglong)lbl_831E7E64;
  }
  else if ((uVar2 & 3) == 1) {
    uVar5 = fn_8267BF50(param_1,0);
  }
  else if ((uVar2 & 3) < 3) {
    uVar5 = (ulonglong)param_1[1];
  }
  lVar4 = fn_8268B368(param_1,uVar5,pcVar8,0);
  fn_82F68CC0(lVar4 + 8,param_2,pcVar8);
  lVar6 = ((ulonglong)uVar2 & 0xfffffffc) + 4;
  *param_1 = (uint)lVar4 | *param_1 & 3;
  do {
    puVar7 = (uint *)lVar6;
    uVar5 = (ulonglong)*puVar7;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
      *puVar7 = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38((ulonglong)uVar2 & 0xfffffffc);
  }
  return;
}

