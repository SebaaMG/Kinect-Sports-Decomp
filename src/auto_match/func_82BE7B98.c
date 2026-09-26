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
extern int fn_82BE8E38();
extern int fn_82BE8EA0();
extern unsigned int lbl_8317523C;
extern unsigned int lbl_8322B1E4;


void fn_82BE7B98(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (lbl_8317523C != 0) {
    lbl_8322B1E4 = 1;
    iVar3 = fn_82BE8E38();
    if (iVar3 != 0) {
      fn_82BE8E38();
      lVar1 = fn_82BE8EA0();
      do {
        if (lbl_8317523C == 0) {
          return;
        }
        fn_82BE8E38();
        lVar2 = fn_82BE8EA0();
      } while ((ulonglong)(lVar2 - lVar1) <= param_1);
    }
  }
  return;
}

