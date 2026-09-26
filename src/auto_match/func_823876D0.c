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
extern int fn_82A1EFC0();
extern unsigned int uStack_4c;


void fn_823876D0(int *param_1,undefined8 param_2)

{
  char *pcStack_50;
  undefined4 uStack_4c;
  
  if (param_1[1] != 0) {
    uStack_4c = 7;
    pcStack_50 = "showvideo";
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if (*param_1 != 0) {
    pcStack_50 = "getready_serving";
    uStack_4c = 7;
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if (param_1[4] != 0) {
    pcStack_50 = "serving";
    uStack_4c = 7;
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if (param_1[5] != 0) {
    pcStack_50 = "getready_serving";
    uStack_4c = 6;
    fn_824BF8A8(param_2,&pcStack_50);
    pcStack_50 = "serving";
    uStack_4c = 8;
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if (param_1[9] != 0) {
    pcStack_50 = "blocking";
    uStack_4c = 8;
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if (param_1[6] != 0) {
    if (param_1[0xb] == 0) {
      if (param_1[6] == 0) goto LAB_82387834;
      pcStack_50 = "returning";
      uStack_4c = 9;
      fn_824BF8A8(param_2,&pcStack_50);
      pcStack_50 = "returning";
    }
    else {
      pcStack_50 = "blocking";
      uStack_4c = 9;
      fn_824BF8A8(param_2,&pcStack_50);
      pcStack_50 = "blocking";
    }
    uStack_4c = 7;
    fn_824BF8A8(param_2,&pcStack_50);
  }
LAB_82387834:
  if (param_1[7] != 0) {
    pcStack_50 = "returning";
    uStack_4c = 8;
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if (param_1[10] != 0) {
    pcStack_50 = "spiking";
    uStack_4c = 9;
    fn_824BF8A8(param_2,&pcStack_50);
    pcStack_50 = "spiking";
    uStack_4c = 7;
    fn_824BF8A8(param_2,&pcStack_50);
  }
  if (param_1[8] != 0) {
    pcStack_50 = "spiking";
    uStack_4c = 8;
    fn_824BF8A8(param_2,&pcStack_50);
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1,0,0x30);
}

