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
extern int fn_8267BE38();
extern int fn_826EA050();
extern int fn_827771B0();
extern int fn_827B02B0();
extern int fn_827B0A40();
extern int fn_827B5EA8();
extern int fn_827B84F8();
extern unsigned int lbl_82015324;
extern unsigned int lbl_8201532C;


void fn_82777298(int param_1)

{
  int iVar1;
  
  fn_827771B0();
  fn_826EA050(param_1 + 0x9e4);
  fn_827B5EA8(param_1 + 0x990);
  fn_827B5EA8(param_1 + 0x980);
  fn_827B5EA8(param_1 + 0x948);
  fn_827B5EA8(param_1 + 0x938);
  fn_827B5EA8(param_1 + 0x91c);
  fn_827B02B0(param_1 + 0x900);
  iVar1 = *(int *)(param_1 + 0x8e4);
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x9ec);
    fn_8267BE38();
  }
  fn_827B0A40(param_1 + 0x8e0);
  fn_827B84F8(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x24);
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x7f0);
    fn_8267BE38();
  }
  *(undefined ***)(param_1 + 0x10) = &lbl_82015324;
  *(undefined ***)(param_1 + 8) = &lbl_8201532C;
  return;
}

