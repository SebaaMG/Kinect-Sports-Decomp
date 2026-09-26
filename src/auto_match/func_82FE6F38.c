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
extern unsigned int *auStack_60;
extern int fn_82FF4858();
extern int fn_8300F198();
extern int fn_8300F208();
extern int fn_83014B70();
extern unsigned int iStack_44;
extern unsigned int lbl_832642E4;
extern unsigned int lbl_83264304;
extern unsigned int lbl_83264348;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_5e;


undefined4
fn_82FE6F38(undefined4 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined2 uVar2;
  int iVar1;
  ulonglong uVar3;
  undefined1 auStack_60 [2];
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  int iStack_44;
  
  uStack_5e = 0x16;
  uVar3 = (ulonglong)lbl_83264348;
  lbl_83264348 = (uint)(uVar3 + 1);
  uStack_58 = lbl_83264348;
  iStack_44 = fn_83014B70(uVar3 + 1,param_5);
  if (iStack_44 != 0) {
    uStack_4c = 0;
    uStack_54 = 0;
    uStack_5c = param_1;
    uVar2 = fn_8300F198();
    iVar1 = fn_8300F208(lbl_832642E4,auStack_60,uVar2);
    if (iVar1 == 1) {
      if (((param_3 & 0xffffffff) == 0) && ((param_2 & 0x10000) == 0)) {
        return uStack_58;
      }
      iVar1 = fn_82FF4858(lbl_83264304,&uStack_5c,param_3,param_4,param_2,uStack_58);
      if (iVar1 == 1) {
        return uStack_58;
      }
    }
  }
  return 0;
}

