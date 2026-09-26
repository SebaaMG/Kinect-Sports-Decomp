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
extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_82693A48();
extern unsigned int lbl_831E7E64;
extern U64 storeWordConditionalIndexed();


undefined8
fn_82684C50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint *puVar6;
  char in_RESERVE;
  uint auStack_40 [16];
  
  auStack_40[0] = 0;
  lVar3 = fn_8267B890(lbl_831E7E64,0xc,0);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    fn_8268C510(auStack_40,param_2);
    uVar4 = fn_82693A48(lVar3,auStack_40,param_3,param_4);
    lVar3 = ((ulonglong)auStack_40[0] & 0xfffffffc) + 4;
    bVar2 = false;
    do {
      puVar6 = (uint *)lVar3;
      uVar5 = (ulonglong)*puVar6;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar3);
        *puVar6 = uVar1;
        bVar2 = true;
      }
    } while (!bVar2);
    if (uVar5 == 1) {
      fn_8267BE38();
    }
  }
  return uVar4;
}

