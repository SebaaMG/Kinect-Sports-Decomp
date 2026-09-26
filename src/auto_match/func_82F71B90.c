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
extern int fn_82A2A360();
extern int fn_82F641F8();
extern int fn_82F68240();
extern int fn_82F68BF0();
extern int fn_82F6CB58();
extern int fn_82F706C0();
extern int fn_82F706F0();
extern int fn_82F71A70();
extern int fn_82F71CA0();
extern int fn_82F71CD0();
extern unsigned int lbl_831BB940;
extern unsigned int uStack_30;


undefined4 fn_82F71B90(int param_1)

{
  int iVar2;
  longlong lVar1;
  undefined4 *puVar3;
  undefined4 uStack_30;
  
  uStack_30 = 1;
  iVar2 = fn_82A2A360();
  if (iVar2 == 0) {
    fn_82F706F0();
    fn_82F706C0(0x1e);
    fn_82F6CB58(0xff);
  }
  if ((&lbl_831BB940)[param_1 * 2] == 0) {
    lVar1 = fn_82F68BF0(0x1c);
    if (lVar1 == 0) {
      puVar3 = (undefined4 *)fn_82F68240();
      uStack_30 = 0;
      *puVar3 = 0xc;
    }
    else {
      fn_82F71CD0(10);
      if ((&lbl_831BB940)[param_1 * 2] == 0) {
        iVar2 = fn_82F71A70(lVar1,4000);
        if (iVar2 == 0) {
          fn_82F641F8(lVar1);
          puVar3 = (undefined4 *)fn_82F68240();
          *puVar3 = 0xc;
          uStack_30 = 0;
        }
        else {
          (&lbl_831BB940)[param_1 * 2] = (int)lVar1;
        }
      }
      else {
        fn_82F641F8(lVar1);
      }
      fn_82F71CA0();
    }
  }
  else {
    uStack_30 = 1;
  }
  return uStack_30;
}

