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
extern int fn_82FA9208();
extern int fn_82FABDE0();
extern int fn_82FF8410();
extern int fn_8300C9F8();
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8216D7FC;
extern unsigned int lbl_8216D804;
extern unsigned int lbl_8216D80C;
extern unsigned int lbl_8216D824;
extern unsigned int lbl_831BC768;


void fn_82FB51B8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  *param_1 = &lbl_8216D824;
  param_1[1] = &lbl_8216D80C;
  param_1[4] = &lbl_8216D804;
  param_1[6] = &lbl_8216CC7C;
  param_1[0x10] = &lbl_8216D7FC;
  if (param_1[0x19] != 0) {
    for (puVar1 = (undefined4 *)param_1[0x15]; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      puVar2 = (undefined4 *)puVar1[1];
      uVar3 = puVar2[0x13];
      puVar2[0x13] = (int)((ulonglong)uVar3 - 1);
      if ((ulonglong)uVar3 - 1 == 0) {
        iVar4 = puVar2[7];
        puVar2[7] = 0;
        if (iVar4 != 0) {
          fn_82FA9208();
        }
        uVar5 = lbl_831BC768;
        (**(code **)*puVar2)(puVar2,0);
        fn_82FA5190(uVar5,puVar2);
      }
    }
    fn_82FF8410(param_1 + 0x15);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x11] + 8))();
  }
  fn_8300C9F8(param_1 + 0x10);
  fn_82FABDE0(param_1);
  return;
}

