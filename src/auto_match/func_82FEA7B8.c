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
extern int fn_82F68B74();
extern int fn_82F68CC0();
extern int fn_82FAB9C0();
extern int fn_82FF4858();
extern int fn_8300F0F0();
extern int fn_8300F208();
extern unsigned int iStack_44;
extern unsigned int iStack_58;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642E4;
extern unsigned int lbl_83264304;
extern unsigned int lbl_83264348;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_5e;


int fn_82FEA7B8(undefined8 param_1,undefined4 param_2,ulonglong param_3,ulonglong param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined2 uVar3;
  int iVar2;
  ulonglong uVar4;
  undefined1 auStack_60 [2];
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  int iStack_58;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  int iStack_44;
  
  uVar4 = 0;
  uVar1 = fn_82F68B74();
  uStack_5e = 1;
  if ((uVar4 & 0xffffffff) == 0) {
    uStack_54 = 0;
    uStack_4c = 0;
  }
  else {
    fn_82F68CC0(&uStack_54,uVar4,0x10);
  }
  iStack_44 = fn_82FAB9C0((ulonglong)lbl_832642E0 + 0x674,uVar1);
  if (iStack_44 != 0) {
    lbl_83264348 = lbl_83264348 + 1;
    uStack_5c = param_2;
    iStack_58 = lbl_83264348;
    uVar3 = fn_8300F0F0();
    iVar2 = fn_8300F208(lbl_832642E4,auStack_60,uVar3);
    if (iVar2 == 1) {
      if (((param_4 & 0xffffffff) == 0) && ((param_3 & 0x10000) == 0)) {
        return iStack_58;
      }
      iVar2 = fn_82FF4858(lbl_83264304,&uStack_5c,param_4,param_5,param_3,
                                *(undefined4 *)(iStack_44 + 0xc));
      if (iVar2 == 1) {
        return iStack_58;
      }
    }
  }
  return 0;
}

