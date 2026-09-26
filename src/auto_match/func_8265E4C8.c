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
extern int fn_8265C9E0();
extern int fn_8265CC38();
extern int fn_8265D788();
extern int fn_8265EFE0();
extern int fn_8265F540();
extern int fn_82661300();
extern int fn_826635E0();
extern unsigned int iStack00000014;
extern unsigned int iStack_1c;
extern unsigned int lbl_831E7A18;
extern unsigned int lbl_831E7A2C;
extern unsigned int uStack_30;


ulonglong fn_8265E4C8(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iStack00000014;
  uint uStack_30;
  int iStack_1c;
  
  iStack00000014 = param_1;
  if (lbl_831E7A18 == '\0') {
    thunk_FUN_82a2b748(0x15);
    uVar1 = 0xffffffffffffffff;
  }
  else if (param_1 == 0) {
    thunk_FUN_82a2b748(0x57);
    uVar1 = 0xffffffffffffffff;
  }
  else {
    iVar2 = fn_8265C9E0(0x20);
    if (iVar2 == 0) {
      iStack_1c = 0;
    }
    else {
      iStack_1c = fn_8265D788(iVar2,iStack00000014,1);
    }
    fn_82661300(iStack00000014,0xfffffffffffffeff,0xffffffff8265e648,iStack_1c);
    uStack_30 = 0;
    if (*(ushort *)(lbl_831E7A2C + 0x1c) < *(ushort *)(iStack_1c + 0x1c)) {
      fn_826635E0(0xffffffff831e7a48,1);
      uStack_30 = fn_82661300(iStack00000014,0xfffffffffffffeff,0xffffffff8265e818,0);
      if (0 < (int)uStack_30) {
        *(undefined2 *)(lbl_831E7A2C + 0x1c) = *(undefined2 *)(iStack_1c + 0x1c);
        fn_8265F540(lbl_831E7A2C,iStack_1c);
        fn_8265EFE0(0xffffffff831e7a30);
      }
    }
    if (iStack_1c != 0) {
      fn_8265CC38(iStack_1c,1);
    }
    uVar1 = (ulonglong)uStack_30;
  }
  return uVar1;
}

