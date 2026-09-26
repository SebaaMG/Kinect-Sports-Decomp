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
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82A86CB0();
extern int fn_82A8C620();


undefined8 fn_82A873E0(int *param_1,undefined4 *param_2)

{
  char cVar2;
  undefined8 uVar1;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [56];
  
  *param_2 = 0;
  cVar2 = (**(code **)(*param_1 + 4))();
  if ((cVar2 == '\0') ||
     (cVar2 = (**(code **)(*param_1 + 0x10))(param_1,auStack_80,0x30,auStack_90), cVar2 == '\0')) {
    uVar1 = 0;
  }
  else {
    fn_82A86CB0(auStack_50,auStack_80,0x30);
    fn_82A8C620(auStack_50,0x160,0x20,param_2);
    uVar1 = 1;
  }
  return uVar1;
}

