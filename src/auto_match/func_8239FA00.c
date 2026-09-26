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
extern int fn_82397F30();
extern int fn_8239E318();
extern int fn_8239E540();
extern unsigned int lbl_831D2980;
extern unsigned int lbl_831D2AFC;
extern unsigned int lbl_831D2B00;
extern unsigned int lbl_831D2B04;
extern unsigned int lbl_831D2B08;
extern unsigned int lbl_831D2B0C;
extern unsigned int lbl_831D2B10;
extern unsigned int lbl_831D2B14;
extern unsigned int lbl_831D2B18;
extern unsigned int lbl_831D2B1C;
extern unsigned int lbl_831D2B20;
extern unsigned int lbl_831D2B24;
extern unsigned int lbl_831D2B28;
extern unsigned int lbl_831D2B2C;
extern unsigned int lbl_831D2B30;
extern unsigned int lbl_831D2B34;


void fn_8239FA00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = fn_82397F30(*(undefined4 *)(param_1 + 0x240));
  if (iVar2 == 0) {
    fn_8239E318(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x244) = lbl_831D2AFC;
    *(undefined4 *)(param_1 + 0x248) = lbl_831D2B00;
    *(undefined4 *)(param_1 + 0x24c) = lbl_831D2B04;
    *(undefined4 *)(param_1 + 0x250) = lbl_831D2B08;
    *(undefined4 *)(param_1 + 0x254) = lbl_831D2B0C;
    *(undefined4 *)(param_1 + 600) = lbl_831D2B10;
    *(undefined4 *)(param_1 + 0x25c) = lbl_831D2B14;
    *(undefined4 *)(param_1 + 0x260) = lbl_831D2B18;
    *(undefined4 *)(param_1 + 0x264) = lbl_831D2B1C;
    *(undefined4 *)(param_1 + 0x268) = lbl_831D2B20;
    *(undefined4 *)(param_1 + 0x26c) = lbl_831D2B24;
    *(undefined4 *)(param_1 + 0x270) = lbl_831D2B28;
    *(undefined4 *)(param_1 + 0x274) = lbl_831D2B2C;
    *(undefined4 *)(param_1 + 0x278) = lbl_831D2B30;
    uVar1 = lbl_831D2B34;
    *(undefined **)(param_1 + 0x284) = &lbl_831D2980;
    *(undefined4 *)(param_1 + 0x27c) = uVar1;
  }
  fn_8239E540(param_1);
  return;
}

