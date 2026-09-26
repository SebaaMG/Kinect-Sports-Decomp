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
extern int fn_8267C540();
extern int fn_82687270();
extern int fn_8269A608();
extern int fn_826A0A70();
extern int fn_826BF548();
extern unsigned int lbl_82005700;
extern unsigned int lbl_82006850;
extern unsigned int lbl_82006B48;
extern unsigned int lbl_82006B9C;
extern unsigned int lbl_82006BA8;


void fn_826A1370(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &lbl_82006BA8;
  param_1[3] = &lbl_82006B9C;
  param_1[0x1a] = &lbl_82006B48;
  if (param_1[0x20] != 0) {
    *(undefined4 *)(param_1[0x20] + 4) = 0;
  }
  if (param_1[0x21] != 0) {
    fn_8267BE38();
  }
  fn_826A0A70(param_1 + 0x22);
  puVar1 = (uint *)param_1[0x20];
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
    *puVar1 = (uint)((ulonglong)uVar2 - 1);
    if ((longlong)((ulonglong)uVar2 - 1) < 1) {
      fn_8269A608(puVar1);
      fn_8267BE38(puVar1);
    }
  }
  if (param_1[0x1f] != 0) {
    fn_82687270();
  }
  fn_826BF548(param_1 + 0x1a);
  *param_1 = &lbl_82006850;
  param_1[3] = &lbl_82005700;
  fn_8267C540(param_1);
  return;
}

