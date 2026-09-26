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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82A86FF8();
extern int fn_82A8C620();


undefined8 fn_82A87660(undefined8 param_1,int *param_2,longlong param_3)

{
  char cVar2;
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  cVar2 = (**(code **)(*param_2 + 4))(param_2);
  if ((cVar2 == '\0') ||
     (cVar2 = (**(code **)(*param_2 + 0x10))(param_2,auStack_28,0xc,auStack_40), cVar2 == '\0')) {
    uVar1 = 0;
  }
  else {
    fn_82A86FF8(auStack_38,auStack_28,0xc);
    fn_82A8C620(auStack_38,0,0x20,param_3);
    fn_82A8C620(auStack_38,0x20,0x20,param_3 + 8);
    fn_82A8C620(auStack_38,0x40,0x20,param_3 + 4);
    uVar1 = 1;
  }
  return uVar1;
}

