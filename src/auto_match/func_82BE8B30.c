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
extern int fn_82BE56B0();
extern int fn_82BE8A78();
extern int fn_82BE8E38();
extern int fn_82BE8F70();
extern int fn_82BF3948();
extern int fn_82BF4060();
extern int fn_82D7E470();
extern unsigned int lbl_8322B224;


undefined8 fn_82BE8B30(ulonglong param_1,ulonglong param_2)

{
  int iVar3;
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar4;
  
  if (lbl_8322B224 != 0) {
    return 1;
  }
  if (((((param_1 & 0xffffffff) != 0) && ((param_2 & 0xffffffff) != 0)) &&
      (iVar3 = fn_82BE8E38(), iVar3 != 0)) &&
     ((iVar3 = fn_82BF3948(), iVar3 != 0 && (iVar3 = fn_82BF4060(), iVar3 != 0)))) {
    lVar1 = fn_82BE56B0(0x68);
    if (lVar1 == 0) {
      lbl_8322B224 = 0;
    }
    else {
      fn_82BE8E38();
      uVar2 = fn_82BE8F70();
      lbl_8322B224 = fn_82BE8A78(lVar1,uVar2,0x1e,param_1,param_2);
    }
    if (lbl_8322B224 != 0) {
      iVar3 = fn_82D7E470();
      if (iVar3 != 0) {
        if (iVar3 == 2) {
          if (lbl_8322B224 == 0) {
            return 1;
          }
          if (*(int *)(lbl_8322B224 + 0x58) == 1) {
            return 1;
          }
          uVar4 = 1;
        }
        else {
          if (lbl_8322B224 == 0) {
            return 1;
          }
          if (*(int *)(lbl_8322B224 + 0x58) == 0) {
            return 1;
          }
          uVar4 = 0;
        }
        *(undefined4 *)(lbl_8322B224 + 0x58) = uVar4;
      }
      return 1;
    }
  }
  return 0;
}

