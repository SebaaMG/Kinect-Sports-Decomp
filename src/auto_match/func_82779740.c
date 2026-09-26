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
extern int fn_827792C0();
extern unsigned int lbl_82005CCC;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_82779740(int param_1)

{
  float fVar1;
  undefined1 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  fn_827792C0();
  fVar1 = (float)uStack_20;
  uStack_20 = ((((U64)(uStack_20)) & (~(((U64)0xFF) << 56))) | ((((U64)((undefined1)(longlong)((float)uStack_30 * lbl_82005CCC))) & ((U64)0xFF)) << 56));
  uVar2 = (undefined1)uStack_20;
  uStack_28 = ((((U64)(uStack_28)) & (~(((U64)0xFF) << 56))) | ((((U64)((undefined1)(longlong)((float)uStack_28 * lbl_82005CCC))) & ((U64)0xFF)) << 56));
  uStack_20 = ((((U64)(uStack_20)) & (~(((U64)0xFF) << 56))) | ((((U64)((undefined1)(longlong)(fVar1 * lbl_82005CCC))) & ((U64)0xFF)) << 56));
  *(undefined1 *)(param_1 + 1) = uVar2;
  *(undefined1 *)(param_1 + 2) = (undefined1)uStack_28;
  *(undefined1 *)(param_1 + 3) = (undefined1)uStack_20;
  return;
}

