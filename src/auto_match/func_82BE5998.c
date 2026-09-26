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
extern int fn_82BE5230();
extern unsigned int lbl_820E9334;
extern unsigned int lbl_831751CC;
extern U64 storeWordConditionalIndexed();


void fn_82BE5998(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  
  puVar3 = (undefined4 *)param_1;
  *puVar3 = &lbl_820E9334;
  lVar4 = param_1 + 0x44;
  do {
    puVar5 = (uint *)lVar4;
    uVar1 = *puVar5;
    if (uVar1 != 1) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar4);
        *puVar5 = uVar2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(0,0,lVar4);
      *puVar5 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if ((uVar1 != 0) && (puVar3[7] != 0)) {
    (*(code *)lbl_831751CC)();
    puVar3[7] = 0;
  }
  if (puVar3[0xc] != 0) {
    (*(code *)lbl_831751CC)();
    puVar3[0xc] = 0;
  }
  fn_82BE5230(param_1);
  return;
}

