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
extern unsigned int lbl_831E7E64;
extern U64 storeWordConditionalIndexed();


void fn_8268B738(uint *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  char in_RESERVE;
  byte in_cr0;
  
  uVar1 = *param_1;
  uVar4 = 0;
  if ((uVar1 & 3) == 0) {
    uVar4 = (ulonglong)lbl_831E7E64;
  }
  else if ((uVar1 & 3) == 1) {
    uVar4 = fn_8267BF50(param_1,0);
  }
  else if ((uVar1 & 3) < 3) {
    uVar4 = (ulonglong)param_1[1];
  }
  lVar3 = fn_8268B368(param_1,uVar4,param_3,0);
  (**(code **)(*param_2 + 4))(param_2,lVar3 + 8,param_3);
  lVar5 = ((ulonglong)uVar1 & 0xfffffffc) + 4;
  *param_1 = *param_1 & 3 | (uint)lVar3;
  do {
    puVar6 = (uint *)lVar5;
    uVar4 = (ulonglong)*puVar6;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar4 - 1,0,lVar5);
      *puVar6 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar4 == 1) {
    fn_8267BE38((ulonglong)uVar1 & 0xfffffffc);
  }
  return;
}

