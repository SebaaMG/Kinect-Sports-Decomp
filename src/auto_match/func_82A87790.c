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
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_82A86E00();
extern int fn_82A87148();
extern int fn_82A8C620();


undefined8 fn_82A87790(undefined8 param_1,int *param_2,longlong param_3)

{
  char cVar2;
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [16];
  
  cVar2 = (**(code **)(*param_2 + 4))(param_2);
  if ((cVar2 == '\0') ||
     (cVar2 = (**(code **)(*param_2 + 0x10))(param_2,auStack_28,8,auStack_30), cVar2 == '\0')) {
    uVar1 = 0;
  }
  else {
    fn_82A86E00(auStack_30,auStack_28,8);
    fn_82A8C620(auStack_30,0,0x20,param_3);
    fn_82A87148(auStack_30,0x20,0x10,param_3 + 6);
    fn_82A87148(auStack_30,0x30,0x10,param_3 + 4);
    uVar1 = 1;
  }
  return uVar1;
}

