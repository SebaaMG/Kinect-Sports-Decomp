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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_826A1A78();
extern int fn_826A1D48();
extern int fn_826A2AB8();
extern int fn_826AE288();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int uStack_38;


void fn_826A3CE8(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStack_60 [8];
  int iStack_58;
  int iStack_54;
  byte bStack_50;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  uVar1 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x48,
                            0);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_826A2AB8(uVar1,*(undefined4 *)(param_1 + 0x18));
  }
  uStack_38 = 0;
  auStack_60[0] = 1;
  auStack_40[0] = 4;
  (**(code **)(*(int *)(iVar2 + 0x10) + 0xc))
            (iVar2 + 0x10,*(int *)(param_1 + 0x18),
             (ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x250,auStack_40,auStack_60);
  fn_82696330(auStack_40);
  fn_826AE288(&iStack_58,*(undefined4 *)(param_1 + 0x18),2);
  fn_826A1D48(iVar2 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,&iStack_58);
  if (*(int *)(param_1 + 0x1c) != 0) {
    fn_826A1A78(iVar2,param_1);
  }
  fn_82696BC8(*(undefined4 *)(param_1 + 4),iVar2);
  if (((bStack_50 & 2) == 0) && (iStack_58 != 0)) {
    fn_826824B0();
  }
  iStack_58 = 0;
  if (((bStack_50 & 1) == 0) && (iStack_54 != 0)) {
    fn_826824B0();
  }
  iStack_54 = 0;
  fn_826824B0(iVar2);
  return;
}

