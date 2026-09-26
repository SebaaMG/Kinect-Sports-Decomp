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
extern unsigned int lbl_821CE890;
extern unsigned int lbl_831D4690;
extern unsigned int lbl_831D46C0;
extern unsigned int lbl_831D46F0;
extern unsigned int lbl_831D4720;
extern unsigned int lbl_831D4750;
extern unsigned int lbl_831D4780;
extern unsigned int uRam831d4694;
extern unsigned int uRam831d4698;
extern unsigned int uRam831d469c;
extern unsigned int uRam831d46c4;
extern unsigned int uRam831d46c8;
extern unsigned int uRam831d46cc;
extern unsigned int uRam831d46f4;
extern unsigned int uRam831d46f8;
extern unsigned int uRam831d46fc;
extern unsigned int uRam831d4724;
extern unsigned int uRam831d4728;
extern unsigned int uRam831d472c;
extern unsigned int uRam831d4754;
extern unsigned int uRam831d4758;
extern unsigned int uRam831d475c;
extern unsigned int uRam831d4784;
extern unsigned int uRam831d4788;
extern unsigned int uRam831d478c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_83125AF0(void)

{
  undefined4 *puVar1;
  int in_r0;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  puVar1 = (undefined4 *)((uint)(&lbl_821CE890 + in_r0) & 0xfffffff0);
  lbl_831D4690 = *puVar1;
  uRam831d4694 = puVar1[1];
  uRam831d4698 = puVar1[2];
  uRam831d469c = puVar1[3];
  lbl_831D46C0 = in_register_000100d0;
  uRam831d46c4 = in_register_000100d4;
  uRam831d46c8 = in_register_000100d8;
  uRam831d46cc = in_vr13;
  lbl_831D46F0 = in_register_000100c0;
  uRam831d46f4 = in_register_000100c4;
  uRam831d46f8 = in_register_000100c8;
  uRam831d46fc = in_vr12;
  lbl_831D4720 = in_register_000100b0;
  uRam831d4724 = in_register_000100b4;
  uRam831d4728 = in_register_000100b8;
  uRam831d472c = in_vr11;
  lbl_831D4750 = in_register_000100a0;
  uRam831d4754 = in_register_000100a4;
  uRam831d4758 = in_register_000100a8;
  uRam831d475c = in_vr10;
  lbl_831D4780 = in_register_00010090;
  uRam831d4784 = in_register_00010094;
  uRam831d4788 = in_register_00010098;
  uRam831d478c = in_vr9;
  return;
}

