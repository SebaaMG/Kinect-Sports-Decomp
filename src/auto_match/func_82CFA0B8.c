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
extern unsigned int *auStack_820;
extern unsigned int *auStack_868;
extern unsigned int *auStack_870;
extern int fn_82CE3E48();
extern int fn_82CFBB60();
extern int fn_82D00D38();
extern int fn_82D00D50();
extern int fn_82D00DD8();
extern unsigned int lbl_8323B50C;
extern unsigned int uStack_21;


void fn_82CFA0B8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_870 [8];
  undefined1 auStack_868 [72];
  undefined1 auStack_820 [2047];
  undefined1 uStack_21;
  
  fn_82CFBB60(auStack_820,0x800,0xffffffff82133a4c,param_5,param_6,param_3,param_2,param_4);
  uStack_21 = 0;
  (**(code **)(param_1 + 0x20))(auStack_820,*(undefined4 *)(param_1 + 0x24));
  if (param_7 != '\0') {
    uVar1 = (ulonglong)lbl_8323B50C;
    if (uVar1 == 0) {
      uVar1 = fn_82D00DD8();
      if (lbl_8323B50C != 0) {
        fn_82CE3E48(lbl_8323B50C);
      }
      lbl_8323B50C = (uint)uVar1;
    }
    lVar2 = fn_82D00D50(uVar1,auStack_870,0x14);
    if (2 < (int)lVar2) {
      (**(code **)(param_1 + 0x20))(0xffffffff82133a38,*(undefined4 *)(param_1 + 0x24));
      fn_82D00D38(lbl_8323B50C,auStack_868,lVar2 + -2,*(undefined4 *)(param_1 + 0x20),
                   *(undefined4 *)(param_1 + 0x24));
    }
  }
  return;
}

