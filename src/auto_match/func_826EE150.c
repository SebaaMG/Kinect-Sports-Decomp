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
extern int fn_826EC518();
extern int fn_826EDEC8();
extern int fn_8277B488();
extern unsigned int lbl_8200D8CC;


void fn_826EE150(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  *param_1 = &lbl_8200D8CC;
  piVar1 = (int *)param_1[0x12];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x44))(piVar1,param_1 + 0x12,1);
  }
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  if (6 < *(byte *)((int)param_1 + 0x5d)) {
    fn_8267BE38(param_1[0x18]);
  }
  puVar2 = (undefined4 *)param_1[0x1a];
  if (puVar2 != (undefined4 *)0x0) {
    fn_8267BE38(*puVar2);
    fn_8267BE38(puVar2);
  }
  puVar2 = (undefined4 *)param_1[0x1b];
  if (puVar2 != (undefined4 *)0x0) {
    fn_8267BE38(*puVar2);
    fn_8267BE38(puVar2);
  }
  fn_8267BE38(param_1[0x14]);
  fn_8277B488(param_1 + 0xd);
  fn_826EDEC8(param_1[10],param_1[0xb]);
  fn_8267BE38(param_1[10]);
  fn_826EC518(param_1[7],param_1[8]);
  fn_8267BE38(param_1[7]);
  return;
}

