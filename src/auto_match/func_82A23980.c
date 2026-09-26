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
extern unsigned int *auStack_20;
extern int fn_82A20E30();
extern int fn_82A214B0();
extern int fn_82A23408();
extern int fn_82A23880();
extern unsigned int lbl_83219B94;
extern unsigned int lbl_83219C84;
extern unsigned int lbl_83219C88;


undefined1 fn_82A23980(void)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  if (lbl_83219C88 == 0) {
    RtlEnterCriticalSection(0xffffffff83219ba0);
    iVar1 = fn_82A20E30(auStack_20);
    if (iVar1 == 0) {
      lbl_83219C88 = 1;
      lbl_83219C84 = 0;
    }
    else {
      iVar1 = fn_82A23408(lbl_83219B94,0,auStack_20,0x10,0);
      if (iVar1 == 0) {
        RtlLeaveCriticalSection(0xffffffff83219ba0);
        lbl_83219C84 = fn_82A23880(auStack_20);
        lbl_83219C88 = 1;
        return lbl_83219C84;
      }
      lbl_83219C88 = 1;
      lbl_83219C84 = (undefined1)*(undefined4 *)(iVar1 + 8);
      fn_82A214B0(lbl_83219B94);
    }
    RtlLeaveCriticalSection(0xffffffff83219ba0);
  }
  return lbl_83219C84;
}

