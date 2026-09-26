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
extern int fn_8240D930();
extern int fn_82610EF0();
extern int fn_8265CAA0();
extern int fn_82E1D550();
extern int fn_82E1DE08();
extern int fn_82E1E4A0();
extern int fn_82E1E590();
extern int fn_82E1E5E0();
extern int fn_82E1E680();
extern int fn_82E1EC90();
extern int fn_82E1EDA0();
extern int fn_82E20380();
extern unsigned int uStack_3f;
extern unsigned int uStack_40;


void fn_82E1EE88(int param_1)

{
  undefined4 uVar1;
  int iVar5;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    uStack_40 = 0xfe;
    uStack_3f = 0xff;
    fn_82E1EC90(param_1,&uStack_40,2);
  }
  iVar5 = fn_82E1D550();
  uVar1 = *(undefined4 *)(iVar5 + 8);
  uVar2 = fn_82E1DE08(uVar1,0xffffffff8214b90c,0xffffffff821a6774);
  uVar3 = fn_82E1DE08(uVar1,0xffffffff8214b7bc,0xffffffff821a6774);
  uVar4 = fn_82E20380();
  fn_82E1E680(param_1,0xffffffff8214ba74);
  fn_82E1E4A0(param_1,0xffffffff8214b90c,0xffffffff82005ea4,uVar2);
  fn_82E1E4A0(param_1,0xffffffff8214b7bc,0xffffffff82005ea4,uVar3);
  uVar2 = fn_82610EF0(*(undefined4 *)(param_1 + 0x54));
  fn_82E1E4A0(param_1,0xffffffff82023c40,0xffffffff82005ea4,uVar2);
  fn_82E1E4A0(param_1,0xffffffff8214ba68,0xffffffff82005ea4,uVar4);
  fn_82E1E4A0(param_1,0xffffffff8214ba48,0xffffffff82005ea4,0xffffffff8214ba58);
  fn_82E1D550();
  uVar2 = fn_8240D930();
  fn_82E1E5E0(param_1,0xffffffff8214ba38,0xffffffff8214b748,uVar2);
  fn_82E1E590(param_1,0xffffffff8214ba28,0xffffffff8202f488,
                (ulonglong)*(uint *)(*(int *)(param_1 + 0x54) + 4) - 1);
  fn_82E1EDA0(param_1);
  if ((uVar4 & 0xffffffff) != 0) {
    fn_8265CAA0(uVar4);
  }
  return;
}

