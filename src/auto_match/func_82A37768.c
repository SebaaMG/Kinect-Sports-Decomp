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
extern int fn_82F68CC0();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82A37768(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint *puVar6;
  char in_RESERVE;
  byte in_cr0;
  
  piVar3 = (int *)param_1;
  piVar3[0x10] = piVar3[0x10] + 1;
  if (piVar3[0xd] == 0) {
    NtWaitForSingleObjectEx(piVar3[10],1,0,0);
  }
  if (piVar3[0xc] == 0) {
    uVar4 = 0;
  }
  else {
    fn_82F68CC0(param_2,piVar3[1],0x60);
    iVar1 = piVar3[1];
    piVar3[1] = iVar1 + 0x60;
    if (iVar1 + 0x60 == piVar3[0xb] * 0x60 + *piVar3) {
      piVar3[1] = *piVar3;
    }
    piVar3[0xf] = piVar3[0xf] + 1;
    do {
      puVar6 = (uint *)(param_1 + 0x30);
      lVar5 = (ulonglong)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar5,0,param_1 + 0x30);
        *puVar6 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    piVar3[0xd] = (int)lVar5;
    uVar4 = 1;
  }
  return uVar4;
}

