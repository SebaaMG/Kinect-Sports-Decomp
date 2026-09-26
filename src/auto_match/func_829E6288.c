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
extern unsigned int *auStack_30;
extern int fn_829D47B0();
extern int fn_829E6798();
extern int fn_829E71F0();
extern int fn_829E7260();
extern int fn_82A28E60();
extern unsigned int lbl_832179FC;


longlong fn_829E6288(void)

{
  longlong lVar1;
  int in_r6;
  ulonglong uVar2;
  uint auStack_30 [12];
  
  lVar1 = fn_829E7260();
  if ((int)lVar1 == 0) {
    fn_829D47B0(auStack_30,0x10e00);
    uVar2 = (ulonglong)auStack_30[0];
    lVar1 = fn_829E71F0(in_r6 + 0x3c,uVar2,uVar2 + 0x8700);
    if (lVar1 == 0) {
      lVar1 = fn_829E6798(in_r6 + 0x3c,*(undefined4 *)(in_r6 + 0x38),uVar2);
      if (lVar1 == 0) {
        if (uVar2 != 0) {
          fn_82A28E60(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,uVar2);
        }
        lVar1 = 0;
      }
      else if (uVar2 != 0) {
        fn_82A28E60(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,uVar2);
      }
    }
    else if (uVar2 != 0) {
      fn_82A28E60(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,uVar2);
    }
  }
  return lVar1;
}

