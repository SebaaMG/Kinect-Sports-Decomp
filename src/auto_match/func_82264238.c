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
extern int fn_8225FD88();
extern int fn_8225FDE0();
extern int fn_829C5988();
extern int fn_82E1CA30();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CB40();
extern int fn_82E1CB88();
extern int fn_82E1CC18();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();
extern int fn_82E1CD30();
extern unsigned int uStack_60;


void fn_82264238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  char *pcVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar1;
  undefined4 in_stack_00000054;
  undefined1 in_stack_0000005f;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000074;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000084;
  undefined4 in_stack_0000008c;
  undefined4 uStack_60;
  undefined1 auStack_5c [92];
  
  pcVar2 = (char *)fn_8225F670();
  if (*pcVar2 != '\0') {
    iVar3 = fn_8225FDE0(0x5a,1);
    if ((iVar3 == 0) && (cVar4 = fn_82E1CAD0(0x5a), cVar4 != '\0')) {
      fn_82E1CD30();
      fn_82E1CB88(0xffffffff821a684c,param_3);
      uVar1 = fn_8225FD88(param_4);
      fn_82E1CB08(0xffffffff821a6874,uVar1,0);
      fn_82E1CB40(0xffffffff821a6abc,param_5);
      fn_82E1CB88(0xffffffff821a6a90,param_6);
      fn_82E1CC60(param_1,0xffffffff821a7550);
      fn_82E1CB88(0xffffffff821a7568,param_8);
      fn_82E1CB88(0xffffffff821a757c,param_9);
      fn_82E1CB88(0xffffffff821a7598,param_10);
      fn_82E1CB88(0xffffffff821a75ac,in_stack_00000054);
      fn_82E1CB40(0xffffffff821a6acc,in_stack_0000005f);
      fn_82E1CB88(0xffffffff821a6a9c,in_stack_00000064);
      fn_82E1CC60(param_2,0xffffffff821a75c8);
      fn_82E1CB88(0xffffffff821a75e0,in_stack_00000074);
      fn_82E1CB88(0xffffffff821a75f4,in_stack_0000007c);
      fn_82E1CB88(0xffffffff821a7610,in_stack_00000084);
      fn_82E1CB88(0xffffffff821a7624,in_stack_0000008c);
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
  }
  fn_8225F6D0();
  return;
}

