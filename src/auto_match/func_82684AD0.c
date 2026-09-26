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
extern unsigned int *auStack_70;
extern int fn_82684A58();
extern int fn_826E6BC8();
extern int fn_826E7A08();
extern int fn_826E7B08();
extern int fn_827D1EB0();
extern int fn_827D3518();
extern unsigned int uStack_4c;


void fn_82684AD0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [32];
  undefined1 *puStack_50;
  uint uStack_4c;
  
  lVar1 = fn_826E6BC8(&puStack_50,param_1);
  if (lVar1 == 0) {
    do {
      puStack_50 = auStack_70;
      uStack_4c = fn_826E7A08(param_2,auStack_70,0x20);
      uVar2 = fn_827D1EB0(&puStack_50,2);
      if ((int)uVar2 == 1) goto LAB_82684b84;
    } while ((int)uVar2 == 0);
    fn_82684A58(param_2,0xffffffff82005a6c,uVar2);
    if ((ulonglong)uStack_4c != 0) {
      fn_826E7B08(param_2,(((ulonglong)*(uint *)(param_2 + 0x34) -
                                 (ulonglong)*(uint *)(param_2 + 0x30)) +
                                (ulonglong)*(uint *)(param_2 + 0x2c)) - (ulonglong)uStack_4c);
LAB_82684b84:
      if ((ulonglong)uStack_4c != 0) {
        fn_826E7B08(param_2,(((ulonglong)*(uint *)(param_2 + 0x34) -
                                   (ulonglong)*(uint *)(param_2 + 0x30)) +
                                  (ulonglong)*(uint *)(param_2 + 0x2c)) - (ulonglong)uStack_4c);
      }
    }
    lVar1 = fn_827D3518(&puStack_50);
    if (lVar1 == 0) {
      return;
    }
    uVar2 = 0xffffffff82005a38;
  }
  else {
    uVar2 = 0xffffffff82005aa0;
  }
  fn_82684A58(param_2,uVar2);
  return;
}

