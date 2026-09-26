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
extern int fn_82E22E18();
extern int fn_82E23350();
extern int fn_82E23750();
extern int fn_82E23950();
extern int fn_82F68CC0();


longlong fn_82E233E0(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  fn_82F68CC0(param_1 + 0xc,param_2,0x20);
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  uVar2 = param_2[2];
  if (uVar2 < 0x201) {
    uVar2 = 0x200;
  }
  *(uint *)(param_1 + 0x184) = uVar2 << 6;
  lVar1 = fn_82E23750(param_1 + 0x30,*param_2,param_2[1],param_2[2],uVar2 << 6,0);
  if ((lVar1 != 0) || (lVar1 = fn_82E23350(param_1), lVar1 != 0)) {
    fn_82E22E18(param_1);
    fn_82E23950(param_1 + 0x30);
  }
  return lVar1;
}

