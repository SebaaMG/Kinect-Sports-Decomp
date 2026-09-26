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
extern int fn_826C6368();
extern int fn_8279B858();
extern int fn_8279B8E0();
extern int fn_8279D848();
extern int fn_827A9870();


void fn_8279E7B0(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1[0x24c] != 0) {
    fn_827A9870((ulonglong)*param_1 + 0xe4);
  }
  puVar1 = (uint *)param_1[0x141];
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
    *puVar1 = (uint)((ulonglong)uVar2 - 1);
    if ((ulonglong)uVar2 - 1 == 0) {
      fn_826C6368(puVar1);
      fn_8267BE38(puVar1);
    }
  }
  fn_8279B858(param_1 + 0x8b);
  fn_8279B858(param_1 + 0x60);
  fn_8279B858(param_1 + 0x35);
  fn_8279B8E0(param_1 + 0x31);
  fn_8279D848(param_1 + 0x2f);
  fn_8279B858(param_1 + 4);
  return;
}

