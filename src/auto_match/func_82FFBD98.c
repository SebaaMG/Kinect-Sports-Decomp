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
extern int fn_82FA5190();
extern int fn_82FF90A8();
extern int fn_82FF9FA8();
extern int fn_82FFB900();
extern int fn_8302B530();
extern int fn_8302B540();
extern int fn_8302B660();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642F0;
extern U64 storeWordConditionalIndexed();


void fn_82FFBD98(longlong param_1,char param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  
  fn_8302B530();
  puVar2 = (undefined4 *)param_1;
  if (param_2 == '\0') {
    do {
      puVar5 = (uint *)(param_1 + 0x44);
      lVar4 = (ulonglong)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar4,0,param_1 + 0x44);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (0 < (int)lVar4) goto LAB_82ffbe6c;
  }
  else {
    puVar2[0x11] = 0;
  }
  fn_82FFB900(lbl_832642F0,param_1);
  if ((int)puVar2[0x10] < 1) {
    fn_8302B660((ulonglong)lbl_832642F0 + 0x39c,puVar2[3]);
    fn_8302B540();
    fn_82FF9FA8(param_1);
    fn_82FF90A8(param_1);
    uVar3 = lbl_831BC768;
    (**(code **)*puVar2)(param_1,0);
    fn_82FA5190(uVar3,param_1);
    return;
  }
LAB_82ffbe6c:
  fn_8302B540();
  return;
}

