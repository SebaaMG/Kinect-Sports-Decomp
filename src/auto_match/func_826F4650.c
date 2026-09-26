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
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826D6370();
extern int fn_826D6780();
extern int fn_826E54D8();
extern int fn_826E7638();
extern int fn_826E77B0();
extern unsigned int lbl_82005700;
extern unsigned int lbl_8200DB70;
extern unsigned int lbl_8200DB78;


void fn_826F4650(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined4 *)param_1[0xad];
  *param_1 = &lbl_8200DB78;
  param_1[5] = &lbl_8200DB70;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar1 = *(int *)(param_1[8] + 0x84);
  if (iVar1 != 0) {
    fn_8267C4C8(iVar1);
  }
  fn_826E77B0(param_1 + 10);
  if (param_1[8] != 0) {
    fn_8267C4F0();
  }
  param_1[8] = 0;
  if (param_1[7] != 0) {
    fn_8267C4F0();
  }
  param_1[7] = 0;
  fn_826D6370(iVar1);
  if (iVar1 != 0) {
    fn_8267C4F0(iVar1);
  }
  fn_8267BE38(param_1[0xc2]);
  puVar2 = param_1 + 0xc2;
  lVar3 = 1;
  do {
    puVar2 = puVar2 + -3;
    fn_8267BE38(*puVar2);
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  fn_826D6780(param_1 + 0xa6);
  fn_826E7638(param_1 + 10);
  if (param_1[8] != 0) {
    fn_8267C4F0();
  }
  if (param_1[7] != 0) {
    fn_8267C4F0();
  }
  param_1[5] = &lbl_82005700;
  fn_826E54D8(param_1);
  return;
}

