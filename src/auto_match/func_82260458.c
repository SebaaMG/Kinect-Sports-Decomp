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
extern unsigned int *auStack_3c;
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
extern unsigned int uStack_40;


void fn_82260458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  undefined4 uStack_40;
  undefined1 auStack_3c [60];
  
  pcVar1 = (char *)fn_8225F670();
  if (*pcVar1 != '\0') {
    iVar2 = fn_8225FDE0(0x19,1);
    if ((iVar2 == 0) && (cVar3 = fn_82E1CAD0(0x19), cVar3 != '\0')) {
      fn_82E1CD30();
      fn_82E1CB88(0xffffffff821a684c,param_2);
      fn_82E1CB88(0xffffffff821a6a90,param_3);
      fn_82E1CB88(0xffffffff821a6a9c,param_4);
      fn_82E1CC60(param_1,0xffffffff821a6aa8);
      fn_82E1CB88(0xffffffff821a6abc,param_6);
      fn_82E1CB88(0xffffffff821a6acc,param_7);
      iVar2 = fn_829C5988(&uStack_40,auStack_3c);
      if (iVar2 < 0) {
        fn_82E1CB88(0xffffffff821a6adc,0xffffffffffffffff);
      }
      else {
        fn_82E1CC18(0xffffffff821a6adc,uStack_40);
      }
      fn_82E1CCA8();
      fn_82E1CA30();
    }
  }
  fn_8225F6D0();
  return;
}

