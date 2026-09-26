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
extern unsigned int *auStack_30;
extern int fn_8267BE38();
extern int fn_8268B1F0();
extern int fn_8268C510();
extern U64 storeWordConditionalIndexed();


void fn_827532F0(int *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  int iVar5;
  char in_RESERVE;
  byte in_cr0;
  uint auStack_30 [12];
  
  if (param_1 != (int *)0x0) {
    fn_8268C510(auStack_30,0xffffffff82014024);
    iVar5 = 0;
    if (0 < *param_1) {
      do {
        fn_8268B1F0(param_1 + 1,(uint *)(auStack_30[0] & 0xfffffffc) + 2,
                          *(uint *)(auStack_30[0] & 0xfffffffc) & 0x7fffffff);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *param_1);
    }
    fn_8268B1F0(param_1 + 1,param_2,0xffffffffffffffff);
    fn_8268B1F0(param_1 + 1,0xffffffff821cc86c,0xffffffffffffffff);
    lVar2 = ((ulonglong)auStack_30[0] & 0xfffffffc) + 4;
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
  }
  return;
}

