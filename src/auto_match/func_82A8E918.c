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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82A8C620();
extern int fn_82A8D250();


undefined8 fn_82A8E918(int *param_1,undefined4 *param_2)

{
  char cVar2;
  undefined8 uVar1;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [48];
  undefined1 auStack_40 [40];
  
  *param_2 = 0;
  cVar2 = (**(code **)(*param_1 + 4))();
  if ((cVar2 == '\0') ||
     (cVar2 = (**(code **)(*param_1 + 0x10))(param_1,auStack_70,0x28,auStack_80), cVar2 == '\0')) {
    uVar1 = 0;
  }
  else {
    fn_82A8D250(auStack_40,auStack_70,0x28);
    fn_82A8C620(auStack_40,0x120,0x20,param_2);
    uVar1 = 1;
  }
  return uVar1;
}

