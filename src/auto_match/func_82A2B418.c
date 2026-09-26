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
extern int fn_82A2B760();
extern unsigned int uStack_14;
extern unsigned int uStack_16;
extern unsigned int uStack_18;
extern unsigned int uStack_1a;
extern unsigned int uStack_1c;
extern unsigned int uStack_1e;
extern unsigned int uStack_20;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


bool fn_82A2B418(undefined2 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  
  uStack_20 = *param_1;
  uStack_1e = param_1[1];
  uStack_1c = param_1[3];
  uStack_1a = param_1[4];
  uStack_18 = param_1[5];
  uStack_16 = param_1[6];
  uStack_14 = param_1[7];
  cVar1 = RtlTimeFieldsToTime(&uStack_20,&uStack_30);
  if (cVar1 != '\0') {
    param_2[1] = uStack_2c;
    *param_2 = uStack_30;
  }
  else {
    fn_82A2B760(0xffffffffc000000d);
  }
  return cVar1 != '\0';
}

