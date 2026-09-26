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
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82639EA8();
extern int fn_82838650();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8327F8B8;
extern unsigned int lbl_8327F94C;
extern unsigned int lbl_832810F0;
extern unsigned int lbl_832810F4;
extern unsigned int lbl_832810F8;
extern unsigned int lbl_83296E10;
extern unsigned int lbl_83296E14;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;


void fn_82580138(void)

{
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (lbl_832810F0 != 0) {
    fn_82838650(*(undefined4 *)(lbl_832810F0 + 0x14),0);
    uStack_50 = lbl_821CA460;
    uStack_4c = lbl_821CA460;
    uStack_6c = (undefined4)(longlong)lbl_83296E14;
    uStack_54 = uStack_6c;
    uStack_64 = (undefined4)(longlong)lbl_832810F4;
    uStack_60 = uStack_64;
    uStack_64 = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3218);
    uStack_40 = uStack_64;
    uStack_64 = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3220);
    uStack_38 = uStack_64;
    uStack_6c = (undefined4)(longlong)lbl_83296E10;
    uStack_58 = uStack_6c;
    uStack_64 = (undefined4)(longlong)lbl_832810F8;
    uStack_6c = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x321c);
    uStack_3c = uStack_6c;
    uStack_6c = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3224);
    uStack_30 = *(undefined4 *)(lbl_8320A898 + 0x3228);
    uStack_2c = *(undefined4 *)(lbl_8320A898 + 0x322c);
    uStack_5c = uStack_64;
    uStack_34 = uStack_6c;
    fn_82639EA8(lbl_8320A898,&uStack_60);
    fn_82631920(lbl_8320A898,lbl_8327F8B8);
                    /* WARNING: Subroutine does not return */
    fn_82631578(lbl_8320A898,lbl_8327F94C);
  }
  return;
}

