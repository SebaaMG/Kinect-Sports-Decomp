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
extern unsigned int *auStack_38;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82A86FF8();
extern int fn_82A8C620();


bool fn_82A8B1E8(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [56];
  
  cVar1 = (**(code **)(*param_1 + 0x10))(param_1,auStack_38,0xc,auStack_50);
  if (cVar1 != '\0') {
    fn_82A86FF8(auStack_48,auStack_38,0xc);
    fn_82A8C620(auStack_48,0,0x20,param_2);
    fn_82A8C620(auStack_48,0x20,0x20,param_3);
    fn_82A8C620(auStack_48,0x40,0x20,param_4);
  }
  return cVar1 != '\0';
}

