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
extern unsigned int *auStack_810;
extern int fn_8266C340();
extern int fn_82F66D08();
extern int fn_82F96710();
extern unsigned int iStack00000014;
extern unsigned int iStack_10;
extern unsigned int stack0x00000018;
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_8266C438(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iStack00000014;
  undefined8 uStack00000018;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined1 auStack_810 [2048];
  int iStack_10;
  
  uStack00000018 = param_2;
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  iStack00000014 = param_1;
  if (param_1 == 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82002a4c,0x41,0xffffffff82002a6c);
  }
  iStack_10 = fn_82F66D08(auStack_810,0x400,iStack00000014,&stack0x00000018);
  if (iStack_10 < 1) {
    fn_82F96710(iStack00000014);
  }
  else {
    fn_82F96710(auStack_810);
  }
  return;
}

