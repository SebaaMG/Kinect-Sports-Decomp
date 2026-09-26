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
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822BD338();
extern int fn_82865100();
extern int fn_82865EE0();


undefined8
fn_82864ED0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar2;
  undefined8 uVar1;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  cVar2 = fn_822BD338(param_3,0xffffffff8201f9f0);
  if (cVar2 == '\0') {
    uVar1 = fn_82865100();
    fn_82865EE0(param_1,uVar1,param_3,param_4);
  }
  else {
    fn_82230110(auStack_50,0xffffffff8201f9f4);
    fn_82230110(auStack_70,0xffffffff8201f9fc);
    uVar1 = fn_82865100();
    fn_82865EE0(param_1,uVar1,auStack_70,auStack_50);
    fn_82230300(auStack_70,1,0);
    fn_82230300(auStack_50,1,0);
  }
  return param_1;
}

