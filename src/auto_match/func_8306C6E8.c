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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82A2B760();
extern int fn_82A36058();
extern int fn_8314356C();
extern unsigned int iStack_38;
extern unsigned int uStack_34;


undefined8
fn_8306C6E8(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 auStack_40 [2];
  int iStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [48];
  
  uVar1 = fn_82A36058(auStack_30,param_5);
  iVar2 = fn_8314356C(param_1,param_3,auStack_40,&iStack_38,uVar1);
  if ((iVar2 < 0) || (iVar2 == 0x102)) {
    *param_4 = 0;
    if (iVar2 == 0x102) {
      thunk_FUN_82a2b748(0x102);
      return 0;
    }
  }
  else {
    *param_4 = auStack_40[0];
    *param_2 = uStack_34;
    if (-1 < iStack_38) {
      return 1;
    }
  }
  fn_82A2B760();
  return 0;
}

