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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8223C478();
extern int fn_8223C610();
extern int fn_8233EBE0();
extern int fn_8265CA20();
extern int fn_828E9D28();
extern int fn_828E9DB8();
extern unsigned int iStack_48;
extern unsigned int lbl_821B15A0;
extern unsigned int lbl_821B15DC;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;


void fn_8233E7C0(int *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  uVar1 = *(uint *)(&lbl_821B15DC + param_3 * 4);
  (**(code **)(*param_1 + 0x40))(param_1,auStack_70);
  puStack_50 = auStack_70 + (uVar1 >> 3);
  iStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_4c = 5;
  fn_828E9D28(auStack_60,puStack_50,5);
  if ((uVar1 & 7) != 0) {
    fn_8223C610(auStack_60,uVar1 & 7,0,0);
  }
  uVar2 = *(undefined4 *)(&lbl_821B15A0 + param_3 * 4);
  fn_8223C478(auStack_60,uVar2,0);
  fn_828E9DB8(auStack_60,param_2,uVar2);
  fn_8233EBE0(param_1,auStack_70);
  if (iStack_48 != 0) {
    fn_8265CA20();
  }
  return;
}

