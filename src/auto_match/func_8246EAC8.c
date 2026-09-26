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
extern int fn_822315A0();
extern int fn_82356F98();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_8246E850();
extern int fn_824713F8();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;
extern unsigned int uStack_30;


void fn_8246EAC8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uStack00000024;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  uStack_30 = 0;
  uStack00000024 = param_3;
  fn_824713F8(auStack_28,param_2,&uStack_30,&stack0x00000024);
  uVar1 = fn_82365BD8(&uStack_30,auStack_28);
  fn_8246E850(param_1,uVar1,0,0,0,param_4);
  fn_82356F98(&uStack_30);
  fn_823F2E20(auStack_28,&uStack_30);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  return;
}

