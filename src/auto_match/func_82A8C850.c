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
extern unsigned int *auStack_18;
extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern int fn_82A8BED0();
extern int fn_82A8C620();


undefined4 fn_82A8C850(undefined8 param_1,int *param_2)

{
  char cVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined4 auStack_18 [2];
  
  cVar1 = (**(code **)(*param_2 + 4))(param_2);
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(*param_2 + 0x10))(param_2,auStack_20,4,auStack_18), cVar1 == '\0')) {
    auStack_18[0] = 0;
  }
  else {
    fn_82A8BED0(auStack_1c,auStack_20,4);
    fn_82A8C620(auStack_1c,0,0x20,auStack_18);
  }
  return auStack_18[0];
}

