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
extern int fn_8267B7A8();
extern int fn_8267B7E0();
extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_82685AC0();
extern int fn_826EA050();
extern unsigned int lbl_82005B28;
extern unsigned int lbl_82005B44;


void fn_82685E08(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &lbl_82005B44;
  fn_8267B7E0(param_1[2],0);
  fn_8267B7A8(param_1[2],0);
  fn_82685AC0(param_1);
  fn_826EA050(param_1 + 0x17);
  iVar1 = param_1[0x10];
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x13d8);
    fn_8267BE38();
  }
  iVar1 = param_1[7];
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0xbe8);
    fn_8267BE38();
  }
  param_1[4] = &lbl_82005B28;
  fn_8267C488(param_1);
  return;
}

