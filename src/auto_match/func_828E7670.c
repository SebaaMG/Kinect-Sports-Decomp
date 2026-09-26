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
extern int fn_823AA970();
extern int fn_8240D928();
extern int fn_828DF3C8();
extern int fn_828DF8D0();
extern U64 storeWordConditionalIndexed();


void fn_828E7670(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint *puVar8;
  char in_RESERVE;
  byte in_cr0;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  if ((ulonglong)uVar1 != 0) {
    lVar7 = (ulonglong)uVar1 + 4;
    do {
      puVar8 = (uint *)lVar7;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((ulonglong)*puVar8 + 1,0,lVar7);
        *puVar8 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  iVar3 = *(int *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (iVar3 != 0) {
    fn_822315A0();
  }
  uVar2 = *param_2;
  uVar5 = fn_8240D928(uVar2);
  uVar6 = fn_823AA970(uVar2);
  uVar5 = fn_828DF8D0(uVar6,uVar5);
  fn_828DF3C8(param_1,uVar5);
  return;
}

