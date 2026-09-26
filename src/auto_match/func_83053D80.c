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
extern int fn_82FA5060();
extern int fn_8304F0A8();
extern int fn_8304FC90();
extern int fn_83050FC0();
extern int fn_830510E0();
extern int fn_830516C8();
extern unsigned int lbl_8217DFA0;
extern unsigned int lbl_8217E068;
extern unsigned int lbl_831BC978;


undefined4 *
fn_83053D80(int param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_5 = 0;
  puVar2 = (undefined4 *)fn_82FA5060(lbl_831BC978,0xc0);
  if (puVar2 == (undefined4 *)0x0) {
    fn_8304F0A8(param_1,*(undefined1 *)(param_3 + 0x10));
    puVar2 = (undefined4 *)fn_82FA5060(lbl_831BC978,0xc0);
    if (puVar2 == (undefined4 *)0x0) goto LAB_83053e64;
  }
  fn_83050FC0(puVar2);
  puVar2[0x1e] = &lbl_8217DFA0;
  *puVar2 = &lbl_8217E068;
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  puVar2[0x2c] = 0;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x2f] = 0;
  iVar3 = fn_830510E0(puVar2,param_1,param_2,param_3,param_4,uVar1);
  if (iVar3 == 1) {
    fn_830516C8(param_1,puVar2);
    *param_5 = puVar2 + 0x1e;
    return puVar2;
  }
  fn_8304FC90(puVar2);
LAB_83053e64:
  *param_5 = 0;
  return (undefined4 *)0x0;
}

