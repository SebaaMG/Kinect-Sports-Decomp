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
extern int fn_82359C18();
extern int fn_8265CAA0();
extern unsigned int lbl_821B6604;


void fn_823D9FC0(undefined4 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)(uint)param_1[5];
  *param_1 = &lbl_821B6604;
  if (uVar2 != 0) {
    uVar1 = (ulonglong)*(uint *)(param_1[5] - 8);
    lVar3 = uVar1 * 0x18 + uVar2;
    while (uVar1 = uVar1 - 1, -1 < (longlong)uVar1) {
      lVar3 = lVar3 + -0x18;
      fn_82359C18(lVar3);
    }
    fn_8265CAA0(uVar2 - 8);
  }
  fn_8265CAA0(param_1[1]);
  return;
}

