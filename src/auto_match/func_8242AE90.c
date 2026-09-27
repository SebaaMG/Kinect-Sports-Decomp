extern int *piRam8327657c;
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
extern unsigned int *auStack_40;
extern int fn_82358058();
extern int fn_82359C18();
extern int fn_82383300();
extern int fn_8242E940();
extern int fn_82522ED8();
extern int fn_8265CA20();
extern unsigned int lbl_821917D4;
extern unsigned int lbl_821B8F30;
extern unsigned int uRam8328cf80;
extern unsigned int uStack_30;


undefined4 * fn_8242AE90(undefined4 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;

  param_1[0x5e] = 1;
  *param_1 = &lbl_821B8F30;
  fn_82359C18(0xffffffff8328cf70);
  piVar1 = piRam8327657c;
  uRam8328cf80 = 0;
  if (*piRam8327657c != 0) {
    *(int *)(*piRam8327657c + 4) = piRam8327657c[1];
  }
  if ((int *)piVar1[1] != (int *)0x0) {
    *(int *)piVar1[1] = *piVar1;
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  fn_82522ED8();
  *(undefined4 *)(*(int *)(param_1[0x5d] + 100) + 8) = lbl_821917D4;
  if ((int *)param_1[0x21] != (int *)0x0) {
    uStack_30 = 0;
    lVar2 = (**(code **)(*(int *)param_1[0x21] + 0x4c))();
    fn_82383300(lVar2 + 0x30,auStack_40);
    fn_82359C18(auStack_40);
  }
  fn_8242E940(param_1 + 0x5d);
  fn_82358058(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}
