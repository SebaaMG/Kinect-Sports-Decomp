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
extern int fn_82441298();
extern int fn_824BF8A8();
extern unsigned int uStack_2c;


void fn_82441700(uint *param_1,undefined8 param_2)

{
  char *pcStack_30;
  undefined4 uStack_2c;
  
  if ((*param_1 & 0x100000) != 0) {
    uStack_2c = 7;
    pcStack_30 = "100meters_video";
    fn_824BF8A8(param_2,&pcStack_30);
  }
  if ((*param_1 & 0x4000) != 0) {
    param_1[7] = 1;
  }
  fn_82441298(param_1,0xffffffff821b9780,param_2);
  if ((*param_1 & 8) != 0) {
    uStack_2c = 7;
    pcStack_30 = "100meters_getready";
    fn_824BF8A8(param_2,&pcStack_30);
  }
  return;
}

