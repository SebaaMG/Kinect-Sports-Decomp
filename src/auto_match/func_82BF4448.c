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
extern int fn_82BE19A0();
extern int fn_82BE51E8();
extern int fn_82BE5240();
extern int fn_82F6A3F8();
extern unsigned int lbl_820EB918;
extern unsigned int lbl_831751D0;


undefined4 *
fn_82BF4448(undefined4 *param_1,char *param_2,undefined4 param_3,ulonglong param_4,ushort param_5,
             undefined2 param_6)

{
  longlong lVar1;
  int iVar3;
  ulonglong uVar2;
  undefined8 uVar4;
  
  fn_82BE51E8(param_1,0xffffffff820eb920);
  param_1[6] = param_3;
  *(ushort *)(param_1 + 8) = param_5;
  *(undefined2 *)((int)param_1 + 0x22) = param_6;
  param_1[5] = 0;
  *param_1 = &lbl_820EB918;
  param_1[7] = 0;
  param_1[9] = 0;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    fn_82BE5240(param_1,400,0xffffffff82196582);
  }
  else {
    iVar3 = fn_82BE19A0(param_2);
    param_1[5] = iVar3;
    if (iVar3 == 0) {
      uVar4 = 0xffffffff820eb8a8;
    }
    else {
      if ((param_4 & 0xffffffff) == 0) {
        return param_1;
      }
      if (param_5 == 0) {
        return param_1;
      }
      lVar1 = (ulonglong)param_5 << 2;
      uVar2 = (*(code *)lbl_831751D0)(lVar1);
      param_1[7] = (int)uVar2;
      if ((uVar2 & 0xffffffff) != 0) {
        fn_82F6A3F8(uVar2,lVar1,param_4,lVar1);
        return param_1;
      }
      uVar4 = 0xffffffff820eb8d8;
    }
    fn_82BE5240(param_1,0x65,uVar4,param_2);
  }
  param_1[4] = 0;
  return param_1;
}

