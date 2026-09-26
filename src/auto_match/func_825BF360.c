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
extern int fn_822315A0();
extern int fn_8265CA20();
extern int fn_827D50B8();
extern U64 storeWordConditionalIndexed();


void fn_825BF360(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  ulonglong uVar6;
  char in_RESERVE;
  byte in_cr0;
  
  uVar6 = (ulonglong)*(uint *)(param_2 + 0x138);
  iVar1 = *(int *)(param_2 + 0x134);
  if (uVar6 != 0) {
    do {
      puVar5 = (uint *)(uVar6 + 4);
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,uVar6 + 4);
        *puVar5 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  *(int *)(iVar1 + 0x224) = *(int *)(iVar1 + 0x224) + 1;
  iVar3 = fn_827D50B8(*param_1);
  if ((iVar3 != 0) && (uVar4 = fn_827D50B8(*param_1), *(int *)(iVar1 + 0x228) == 0)) {
    *(undefined4 *)(iVar1 + 0x228) = uVar4;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x138) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(param_2);
  }
  if (uVar6 != 0) {
    fn_822315A0(uVar6);
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

