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
extern unsigned int *auStack_5c;
extern int fn_8225F670();
extern int fn_8225F6D0();
extern int fn_8225FDE0();
extern int fn_829C5988();
extern int fn_82E1CA30();
extern int fn_82E1CAD0();
extern int fn_82E1CB88();
extern int fn_82E1CC18();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();
extern int fn_82E1CD30();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int uStack_60;


void fn_82260560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar4;
  int iVar3;
  undefined8 extraout_f1;
  undefined8 uVar5;
  undefined4 uStack_60;
  undefined1 auStack_5c [92];
  
  uVar1 = fn_82F6A548();
  uVar5 = extraout_f1;
  pcVar2 = (char *)fn_8225F670();
  if (((*pcVar2 != '\0') && (cVar4 = fn_82E1CAD0(0x1a), cVar4 != '\0')) &&
     (iVar3 = fn_8225FDE0(0x1a,1), iVar3 == 0)) {
    fn_82E1CD30();
    fn_82E1CB88(0xffffffff821a684c,uVar1);
    fn_82E1CB88(0xffffffff821a6a90,param_6);
    fn_82E1CC60(uVar5,0xffffffff821a6ae8);
    fn_82E1CB88(0xffffffff821a6a9c,param_8);
    fn_82E1CC60(param_2,0xffffffff821a6b00);
    fn_82E1CB88(0xffffffff821a6b18,param_10);
    fn_82E1CC60(param_3,0xffffffff821a6b24);
    fn_82E1CB88(0xffffffff821a6b3c,param_12);
    fn_82E1CC60(param_4,0xffffffff821a6b48);
    iVar3 = fn_829C5988(&uStack_60,auStack_5c);
    if (iVar3 < 0) {
      fn_82E1CB88(0xffffffff821a6adc,0xffffffffffffffff);
    }
    else {
      fn_82E1CC18(0xffffffff821a6adc,uStack_60);
    }
    fn_82E1CCA8();
    fn_82E1CA30();
  }
  fn_8225F6D0();
  fn_82F6A594();
  return;
}

