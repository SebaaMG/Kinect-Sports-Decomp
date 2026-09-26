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
extern int fn_828319F8();
extern int fn_82831A80();
extern int fn_82831BE8();
extern int fn_82831C48();
extern int fn_82831CE8();
extern int fn_82F674A0();
extern int fn_82F67988();


longlong fn_82831DC0(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x1b8) == '\0') {
    lVar1 = 0;
  }
  else {
    lVar2 = fn_82F674A0(param_1 + 0x1b8,0xffffffff8201f114);
    if (lVar2 == 0) {
      lVar1 = 1;
    }
    else {
      lVar1 = fn_82831A80(param_1,lVar2);
      if (lVar1 == 0) {
        lVar1 = fn_82831BE8(param_1,lVar2);
        if (lVar1 == 0) {
          lVar1 = fn_82831C48(param_1,lVar2);
          if ((lVar1 == 0) && (lVar1 = fn_82831CE8(param_1,lVar2), lVar1 == 0)) {
            fn_828319F8(param_1,lVar2);
          }
        }
      }
      fn_82F67988(lVar2);
    }
  }
  return lVar1;
}

