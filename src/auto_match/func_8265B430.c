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
extern int fn_8265AF38();
extern int fn_8265B100();
extern int fn_8265B200();
extern int fn_8265B300();
extern unsigned int stack0x00000030;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_8265B430(undefined8 param_1,char param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  fn_8265AF38();
  fn_8265B300(param_1,0xffffffff821ce838);
  fn_8265B200(param_1,0xffffffff821ce870);
  if (param_2 == '\0') {
    iVar1 = (int)param_3;
    fn_8265B200(param_1,0xffffffff821ce87c,
                  (longlong)(iVar1 >> 1) + (ulonglong)(iVar1 < 0 && (param_3 & 1) != 0),
                  param_3 + ((longlong)(iVar1 >> 1) + (ulonglong)(iVar1 < 0 && (param_3 & 1) != 0) &
                            0x7fffffff) * -2);
  }
  else {
    fn_8265B200(param_1,0xffffffff821ce874,param_3);
  }
  fn_8265B200(param_1,0xffffffff821ce884);
  fn_8265B100(param_1,param_4,&stack0x00000030);
  fn_8265B300(param_1,0xffffffff821ce828);
  fn_8265AF38(param_1);
  return;
}

