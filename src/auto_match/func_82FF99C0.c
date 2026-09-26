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
extern int fn_82FA5060();
extern int fn_82FF86A8();
extern int fn_82FF8938();
extern int fn_82FF8988();
extern int fn_82FF8ED8();
extern unsigned int lbl_831BC768;


undefined8 fn_82FF99C0(longlong param_1,int param_2,ulonglong param_3,char param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_40 [64];
  
  uVar3 = 1;
  if (*(int *)(param_2 + 0x20) == 0) {
    uVar4 = (param_3 & 0xffffffff) / 0xc;
    uVar5 = uVar4 * 0xc & 0xfffffffc;
    if (param_4 == '\0') {
      uVar1 = fn_82FA5060(lbl_831BC768);
      *(int *)(param_2 + 0x28) = (int)uVar1;
      if ((uVar1 & 0xffffffff) == 0) {
        uVar3 = 0x34;
      }
      else {
        *(byte *)(param_2 + 0x48) = *(byte *)(param_2 + 0x48) | 0x40;
        fn_82FF8938(param_1 + 4,uVar1,uVar5);
      }
    }
    else {
      uVar2 = fn_82FF8ED8(param_1 + 4,uVar5);
      if (*(int *)(param_2 + 0x28) == 0) {
        *(undefined4 *)(param_2 + 0x28) = uVar2;
      }
      fn_82FF86A8(param_1 + 4);
    }
    if (*(int *)(param_2 + 0x28) != 0) {
      *(int *)(param_2 + 0x24) = (int)uVar4;
    }
  }
  else {
    fn_82FF8988(param_1 + 4,param_3,auStack_40);
    uVar3 = 1;
  }
  return uVar3;
}

