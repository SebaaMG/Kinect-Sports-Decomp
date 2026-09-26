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
extern int fn_82882158();
extern int fn_82897BD0();
extern int fn_828AD0F8();
extern int fn_828AD488();
extern int fn_828B0488();
extern int fn_828B0528();
extern int fn_828B0ED0();
extern int fn_828B13E8();
extern int fn_828B1468();
extern int fn_828B14C0();
extern int fn_828EDD40();


void fn_828D94E0(int param_1,ulonglong param_2)

{
  char cVar3;
  int iVar1;
  int iVar2;
  ulonglong uVar4;
  
  cVar3 = fn_828B0528(*(undefined4 *)(param_1 + 0x14));
  if ((cVar3 != '\0') && (iVar1 = fn_828B0488(param_1), iVar1 != 0)) {
    uVar4 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x14) + 0x8c);
    if (*(char *)(iVar1 + 0x26) == '\0') {
      fn_82897BD0(iVar1);
      iVar2 = fn_82882158();
      if (iVar2 == -1) {
        iVar1 = fn_828B0ED0((ulonglong)*(uint *)(iVar1 + 0x4c) + 0x38,1,0);
        if (iVar1 != 0) {
          fn_828B1468(param_1,4);
          return;
        }
        if (param_2 < 0x1d4d) {
          return;
        }
      }
    }
    else {
      cVar3 = fn_828AD488();
      if (cVar3 != '\0') {
        fn_828B13E8(param_1,1,*(undefined1 *)(param_1 + 0x1c));
        fn_828B14C0(param_1,uVar4 + 0x14,uVar4 + 0x40);
        fn_828B1468(param_1,6);
        return;
      }
      cVar3 = fn_828AD0F8(*(undefined4 *)(param_1 + 0x14));
      if ((cVar3 != '\0') && (cVar3 = fn_828EDD40(uVar4), cVar3 != '\0')) {
        fn_828B13E8(param_1,1,*(undefined1 *)(param_1 + 0x1c));
        fn_828B1468(param_1,3);
        return;
      }
    }
  }
  fn_828B1468(param_1,7);
  return;
}

