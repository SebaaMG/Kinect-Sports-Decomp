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
extern int fn_825315E0();
extern int fn_825467B8();
extern int fn_825611A8();
extern int fn_82639EA8();
extern int fn_8263DE70();
extern int iRam8326b47c;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int lbl_8326B478;
extern unsigned int lbl_83296BB8;
extern unsigned int uRam8326b46c;
extern unsigned int uRam8326b480;
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


void fn_82546930(void)

{
  bool bVar1;
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
  
  if (uRam8326b480 != 0) {
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_6c = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3220);
    uStack_38 = uStack_6c;
    uStack_58 = lbl_8326B430;
    uStack_64 = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3224);
    uStack_34 = uStack_64;
    uStack_6c = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3218);
    uStack_50 = *(undefined4 *)(lbl_8320A898 + 0x3228);
    uStack_64 = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x321c);
    uStack_4c = *(undefined4 *)(lbl_8320A898 + 0x322c);
    uStack_54 = lbl_8326B434;
    uStack_40 = uStack_6c;
    uStack_3c = uStack_64;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    fn_82639EA8(lbl_8320A898,&uStack_60);
    fn_8263DE70((double)lbl_821CA460,lbl_8320A898,0,0,0xf,0);
    fn_82639EA8(lbl_8320A898,&uStack_40);
  }
  fn_825467B8();
  bVar1 = iRam8326b47c != lbl_8326B478;
  lbl_8326B478 = iRam8326b47c;
  uRam8326b480 = (uint)bVar1;
  if (bVar1) {
    fn_825611A8();
  }
  lbl_83296BB8 = 1;
  fn_825315E0(lbl_8320A898);
  uRam8326b46c = 0;
  return;
}

