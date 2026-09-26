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
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_827451A8();
extern unsigned int lbl_82005710;
extern unsigned int uStack_18;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_82746788(int param_1)

{
  char cVar2;
  longlong lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  cVar2 = fn_82695468(param_1,0x11);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eef4,0,0);
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      lVar1 = 0;
    }
    uStack_30 = lbl_82005710;
    uStack_28 = lbl_82005710;
    uStack_20 = lbl_82005710;
    uStack_18 = lbl_82005710;
    fn_827451A8(lVar1,*(undefined4 *)(param_1 + 0x18),&uStack_30);
  }
  return;
}

