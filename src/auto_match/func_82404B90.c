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
extern int fn_824BF8A8();
extern unsigned int uStack_4c;


void fn_82404B90(uint *param_1,undefined8 param_2)

{
  char *pcStack_50;
  undefined4 uStack_4c;
  
  if ((*param_1 & 2) != 0) {
    pcStack_50 = (char *)0x0;
    uStack_4c = 1;
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if ((*param_1 & 8) != 0) {
    pcStack_50 = "box";
    param_1[0x17] = 1;
    uStack_4c = 4;
    fn_824BF8A8(param_2,&pcStack_50);
    pcStack_50 = "block";
    uStack_4c = 4;
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if ((*param_1 & 0x10) != 0) {
    pcStack_50 = "box";
    param_1[0x17] = 0;
    uStack_4c = 5;
    fn_824BF8A8(param_2,&pcStack_50);
    pcStack_50 = "block";
    uStack_4c = 5;
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if ((*param_1 & 4) != 0) {
    pcStack_50 = (char *)0x0;
    uStack_4c = 2;
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if ((*param_1 & 0x800) != 0) {
    uStack_4c = 7;
    pcStack_50 = "showvideo_fighting";
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if ((*param_1 & 1) != 0) {
    uStack_4c = 7;
    pcStack_50 = "getready";
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if (((*param_1 & 1) != 0) || ((*param_1 & 0x400) != 0)) {
    pcStack_50 = "box";
    uStack_4c = 7;
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if ((*param_1 & 0x20) != 0) {
    pcStack_50 = "box";
    uStack_4c = 8;
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if ((*param_1 & 0x100) != 0) {
    pcStack_50 = "box";
    uStack_4c = 9;
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if ((*param_1 & 0x40) != 0) {
    pcStack_50 = "block";
    uStack_4c = 9;
    fn_824BF8A8(param_2,&pcStack_50);
    pcStack_50 = "block";
    uStack_4c = 7;
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if ((*param_1 & 0x80) != 0) {
    pcStack_50 = "block";
    uStack_4c = 8;
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if ((*param_1 & 0x100) != 0) {
    pcStack_50 = "ko";
    uStack_4c = 7;
    fn_824BF8A8(param_2,&pcStack_50);
    uStack_4c = 7;
    pcStack_50 = "showvideo_knockdown";
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if ((*param_1 & 0x200) != 0) {
    pcStack_50 = "ko";
    uStack_4c = 8;
    fn_824BF8A8(param_2,&pcStack_50);
  }
  *param_1 = 0;
  return;
}

