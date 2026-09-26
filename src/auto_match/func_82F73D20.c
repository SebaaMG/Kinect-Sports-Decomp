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
extern int fn_82F72F40();
extern int fn_82F73680();
extern int fn_82F73748();
extern unsigned int *lbl_832635C0;
extern unsigned int lbl_832635D0;
extern unsigned int uStack_20;


ulonglong * fn_82F73D20(ulonglong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uStack_20;
  
  if (*lbl_832635C0 == 'X') {
    uVar2 = 0xffffffff8202f48c;
  }
  else {
    if (*lbl_832635C0 != 'Z') {
      fn_82F73748(&uStack_20);
      if (((uStack_20 & 0xff000000) == 0) && (cVar1 = *lbl_832635C0, cVar1 != '\0')) {
        if (cVar1 == '@') {
          lbl_832635C0 = lbl_832635C0 + 1;
          *param_1 = uStack_20;
          return param_1;
        }
        if (cVar1 != 'Z') {
          *(undefined1 *)((int)param_1 + 5) = 0;
          *(undefined1 *)((int)param_1 + 4) = 2;
          *(undefined4 *)param_1 = 0;
          return param_1;
        }
        lbl_832635C0 = lbl_832635C0 + 1;
        if (((~(ulonglong)lbl_832635D0 & 0xffffffff) >> 0x12 & 1) == 0) {
          uVar2 = 0xffffffff82169e08;
        }
        else {
          uVar2 = 0xffffffff82169e14;
        }
        fn_82F73680(&uStack_20,uVar2);
      }
      *param_1 = uStack_20;
      return param_1;
    }
    if (((~(ulonglong)lbl_832635D0 & 0xffffffff) >> 0x12 & 1) == 0) {
      uVar2 = 0xffffffff82169df8;
    }
    else {
      uVar2 = 0xffffffff82169e04;
    }
  }
  lbl_832635C0 = lbl_832635C0 + 1;
  fn_82F72F40(param_1,uVar2);
  return param_1;
}

