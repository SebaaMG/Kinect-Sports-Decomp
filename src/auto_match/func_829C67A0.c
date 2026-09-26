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
extern int fn_829C5C78();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83214F00;
extern unsigned int lbl_83214F04;


undefined8 fn_829C67A0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_r0;
  undefined8 uVar4;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  
  uVar3 = lbl_821AAD20;
  uVar2 = lbl_82002AE0;
  *param_1 = lbl_821AAD20;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar3;
  lbl_83214F04 = 0x58745373;
  lbl_83214F00 = 0x50;
  uVar4 = XamNuiCameraTiltGetStatus(0xffffffff83214f00);
  if (-1 < (int)uVar4) {
    fn_829C5C78(0xffffffff83214f20);
    puVar1 = (undefined4 *)(in_r0 + (int)param_1 & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
  }
  return uVar4;
}

