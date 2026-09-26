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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82A86EA8();
extern int fn_82A87148();
extern int fn_82A8C620();


undefined8 fn_82A87540(int *param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [64];
  
  cVar1 = (**(code **)(*param_2 + 4))(param_2);
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(*param_2 + 0x10))(param_2,auStack_40,0x18,auStack_70), cVar1 != '\0')) {
    fn_82A86EA8(auStack_60,auStack_40,0x18);
    fn_82A8C620(auStack_60,0,0x20,param_1);
    fn_82A8C620(auStack_60,0x20,0x20,param_1 + 1);
    if (*param_1 == 1) {
      fn_82A87148(auStack_60,0x40,0x10,param_1 + 2);
      fn_82A87148(auStack_60,0x50,0x10,(int)param_1 + 10);
      fn_82A8C620(auStack_60,0x60,0x20,param_1 + 3);
    }
    else {
      param_1 = param_1 + 2;
      lVar2 = 0x40;
      lVar3 = 4;
      do {
        fn_82A8C620(auStack_60,lVar2,0x20,param_1);
        lVar3 = lVar3 + -1;
        param_1 = param_1 + 1;
        lVar2 = lVar2 + 0x20;
      } while (lVar3 != 0);
    }
    return 1;
  }
  return 0;
}

