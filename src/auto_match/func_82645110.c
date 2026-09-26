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
extern int fn_82644040();
extern int fn_82644930();
extern int fn_82644C68();
extern int fn_82644DF0();
extern int fn_826452A8();
extern unsigned int iStack_20;
extern unsigned int lbl_832823F8;
extern unsigned int uStack_1c;


undefined4 fn_82645110(int param_1)

{
  longlong lVar1;
  int iStack_20;
  undefined4 uStack_1c;
  
  if ((((*(int *)(param_1 + 0x3460) == 0) && ((*(byte *)(param_1 + 0x2abc) & 0x80) == 0)) &&
      (fn_82644930(param_1,&uStack_1c,&iStack_20), iStack_20 != 0)) &&
     (lVar1 = fn_82644040(param_1,4,4), lVar1 != 0)) {
    fn_82644DF0(param_1,lVar1,uStack_1c,iStack_20,0,param_1 + 0x3500,0);
  }
  fn_82644C68(param_1);
  if ((((*(byte *)(param_1 + 0x2abc) & 0x80) == 0) && (lbl_832823F8 != 0)) &&
     ((*(byte *)(param_1 + 0x2abd) & 2) == 0)) {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x2a9c) - 2;
    if (lVar1 != 0) {
      fn_826452A8(param_1,lVar1,0,0);
    }
    *(byte *)(param_1 + 0x2abd) = *(byte *)(param_1 + 0x2abd) | 2;
  }
  return *(undefined4 *)(param_1 + 0x30);
}

