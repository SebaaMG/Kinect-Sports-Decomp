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
extern int fn_822315A0();
extern int fn_82522ED8();
extern int fn_825BF428();
extern int fn_8265CA20();
extern int fn_827D9A90();
extern unsigned int lbl_821C8D10;


void fn_825BCF68(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &lbl_821C8D10;
  piVar1 = *(int **)param_1[0x18];
  if (piVar1 != (int *)param_1[0x18]) {
    do {
      if (piVar1[3] != 0) {
        fn_8265CA20();
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)param_1[0x18]);
  }
  if (param_1[0x79] != 0) {
    fn_82522ED8();
  }
  iVar3 = param_1[0x87];
  if (iVar3 != 0) {
    iVar2 = param_1[0x88];
    for (; iVar3 != iVar2; iVar3 = iVar3 + 8) {
      if (*(int *)(iVar3 + 4) != 0) {
        fn_822315A0();
      }
    }
    fn_8265CA20(param_1[0x87]);
  }
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  if (param_1[0x72] != 0) {
    fn_822315A0();
  }
  fn_825BF428(param_1 + 0x17);
  if (param_1[0x15] != 0) {
    fn_822315A0();
  }
  if (param_1[0x13] != 0) {
    fn_822315A0();
  }
  if (param_1[0x11] != 0) {
    fn_822315A0();
  }
  fn_827D9A90(param_1);
  return;
}

