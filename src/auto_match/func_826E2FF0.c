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
extern int fn_8268B330();
extern int fn_8268B8E8();
extern int fn_826E1F08();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


void fn_826E2FF0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  char in_RESERVE;
  byte in_cr0;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  fn_8268B330(&uStack_40);
  fn_8268B8E8(&uStack_40,param_2);
  uStack_3c = param_3;
  uStack_38 = param_4;
  fn_826E1F08(param_1,&uStack_40);
  lVar2 = ((ulonglong)uStack_40 & 0xfffffffc) + 4;
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
  return;
}

