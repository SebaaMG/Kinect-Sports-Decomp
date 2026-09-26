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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CF47B0();
extern unsigned int lbl_821333DC;
extern unsigned int lbl_8317F2DC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
fn_82CF4908(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lbl_8317F2DC = lbl_821333DC;
  param_1[2] = 0x80000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  iVar1 = fn_82CE5410();
  if ((int)(param_1[5] & 0x3fffffff) < (int)param_2) {
    lVar2 = ((ulonglong)(uint)param_1[5] & 0x3fffffff) << 1;
    if ((int)lVar2 <= (int)param_2) {
      lVar2 = param_2;
    }
    fn_82CE6310(*(undefined4 *)(iVar1 + 0x10),param_1 + 3,lVar2,1);
  }
  param_1[8] = "Physics";
  fn_82CF47B0(param_1,param_3,param_4);
  return param_1;
}

