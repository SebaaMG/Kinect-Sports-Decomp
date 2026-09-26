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
extern int fn_82A8DB80();
extern unsigned int uStack_8c;


undefined8 fn_82A8E9C8(int *param_1,int *param_2,longlong param_3)

{
  char cVar2;
  undefined8 uVar1;
  undefined1 *puVar3;
  undefined1 auStack_90 [4];
  undefined4 uStack_8c;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [80];
  
  puVar3 = (undefined1 *)*param_1;
  uStack_8c = 5;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = auStack_90;
  }
  cVar2 = (**(code **)(*param_2 + 4))(param_2);
  if ((cVar2 == '\0') ||
     (cVar2 = (**(code **)(*param_2 + 0x10))(param_2,auStack_50,0x30,auStack_90), cVar2 == '\0')) {
    uVar1 = 0;
  }
  else {
    fn_82A86CB0(auStack_80,auStack_50,0x30);
    fn_82A8C620(auStack_80,0,0x20,param_3);
    fn_82A8DB80(puVar3,param_3 + 4,auStack_80,0x20);
    uVar1 = 1;
  }
  return uVar1;
}

