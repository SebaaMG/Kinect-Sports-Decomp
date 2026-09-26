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
extern int fn_826824B0();
extern int fn_826829A0();
extern int fn_826B14D8();
extern int fn_826B32D0();
extern int fn_826C0B08();
extern int fn_8273FF78();
extern unsigned int lbl_82012338;
extern unsigned int lbl_8201238C;


undefined4 * fn_827403B0(undefined4 *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  fn_826C0B08();
  param_1[0xc] = 0;
  *param_1 = &lbl_8201238C;
  param_1[4] = &lbl_82012338;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  fn_8273FF78(param_1,param_3);
  piVar3 = (int *)(param_2 + 0x78);
  uVar1 = fn_826B14D8(*(undefined4 *)(param_2 + 0x78),0xc);
  fn_826829A0(param_1 + 4,piVar3,uVar1);
  uVar2 = fn_826B32D0(param_2,*(undefined4 *)(*(int *)(param_2 + 0x78) + 0x28c),
                            *(int *)(param_2 + 0x78) + 0x3c,0,0xffffffffffffffff);
  if (param_1[0xe] != 0) {
    fn_826824B0(param_1[0xe]);
  }
  param_1[0xe] = uVar2;
  uVar2 = fn_826B32D0(param_2,*(undefined4 *)(*piVar3 + 0x28c),*piVar3 + 0x48,0,
                            0xffffffffffffffff);
  if (param_1[0xf] != 0) {
    fn_826824B0(param_1[0xf]);
  }
  param_1[0xf] = uVar2;
  uVar2 = fn_826B32D0(param_2,*(undefined4 *)(*piVar3 + 0x28c),*piVar3 + 0x44,0,
                            0xffffffffffffffff);
  if (param_1[0x10] != 0) {
    fn_826824B0(param_1[0x10]);
  }
  param_1[0x10] = uVar2;
  return param_1;
}

