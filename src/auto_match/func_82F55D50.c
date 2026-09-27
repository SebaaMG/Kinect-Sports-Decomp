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
extern unsigned int fStack_20;
extern int fn_82F55CC8();
extern unsigned int lbl_82010E78;
extern unsigned int lbl_82057270;
extern unsigned int lbl_821AAD20;


undefined8 fn_82F55D50(void)

{
  undefined8 uVar1;
  double dVar2;
  struct { float first; float second; } stack_pair_20;

  
  dVar2 = (double)lbl_821AAD20;
  stack_pair_20.first = lbl_821AAD20;
  stack_pair_20.second = lbl_821AAD20;
  fn_82F55CC8(&stack_pair_20.first,&stack_pair_20.second);
  if (((((double)lbl_82057270 <= (double)stack_pair_20.first) || ((double)stack_pair_20.first <= dVar2)) ||
      ((double)lbl_82010E78 <= (double)stack_pair_20.second)) ||
     (uVar1 = 1, (double)stack_pair_20.second <= dVar2)) {
    uVar1 = 0;
  }
  return uVar1;
}

