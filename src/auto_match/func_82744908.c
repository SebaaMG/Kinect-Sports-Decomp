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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_82695DA0();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_82743808();
extern int fn_82744378();
extern int fn_82F64318();


void fn_82744908(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  uVar1 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x30,
                            0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82744378(uVar1,*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x1c) < 2) {
    fn_82743808(uVar1,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff831f12e8);
    fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar1);
    if ((uVar1 & 0xffffffff) != 0) {
      fn_826824B0(uVar1);
    }
    return;
  }
  uVar2 = fn_826957D0(param_1,0);
  fn_82695DA0(auStack_50,uVar2);
  uVar2 = fn_826957D0(param_1,1);
  fn_82695DA0(auStack_60,uVar2);
  fn_826972E0(auStack_50,*(undefined4 *)(param_1 + 0x18));
  fn_826972E0(auStack_60,*(undefined4 *)(param_1 + 0x18));
                    /* WARNING: Subroutine does not return */
  fn_82F64318();
}

