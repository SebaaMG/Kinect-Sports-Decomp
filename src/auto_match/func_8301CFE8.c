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
extern int fn_82FA5190();
extern int fn_83021E70();
extern int fn_830223E0();
extern int fn_830265E0();
extern int fn_83026AA8();
extern int fn_83039920();
extern int fn_8303A5E8();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_831BC770;


void fn_8301CFE8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  
  fn_8303A5E8(param_1[0x3f]);
  uVar2 = lbl_831BC770;
  puVar1 = (undefined4 *)param_1[0x3f];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,0);
    fn_82FA5190(uVar2,puVar1);
  }
  piVar4 = param_1 + 0x40;
  lVar3 = 4;
  do {
    if (*piVar4 != 0) {
      fn_830265E0();
      uVar2 = lbl_831BC770;
      puVar1 = (undefined4 *)*piVar4;
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        fn_82FA5190(uVar2,puVar1);
      }
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 1;
  } while (lVar3 != 0);
  fn_83026AA8(param_1);
  fn_830223E0(param_1 + 0x30);
  fn_83021E70(param_1 + 0x33);
  param_1[0x30] = &lbl_8217D040;
  fn_83039920(param_1 + 4);
  *param_1 = &lbl_8217D040;
  fn_82FA5190(lbl_831BC770,param_1);
  return;
}

