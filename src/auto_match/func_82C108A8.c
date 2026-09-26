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
extern int fn_82C10710();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined8
fn_82C108A8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,int param_6,undefined8 param_7)

{
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_6c = fn_82C10710(param_1,param_2,param_7,param_3,param_4,&uStack_70,&uStack_60,1);
  if (param_6 != 0) {
    uStack_70 = 1;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_68 = param_5;
    fn_82C10710(param_1,param_7,param_2,param_3,param_4,&uStack_70,&uStack_60,1);
  }
  return 0;
}

