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
extern unsigned int fStack_20;
extern unsigned int fStack_30;
extern int fn_82AA66A8();
extern int fn_82B86888();
extern int fn_82B8A2E0();
extern unsigned int iStack_2c;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82B8A3E8(double param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  bool bVar1;
  undefined8 uVar2;
  float fStack_30;
  int iStack_2c;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_4 == 0) {
    fStack_30 = (float)param_1;
    if ((ABS(fStack_30) == 0.0) || (bVar1 = false, ((uint)fStack_30 & 0x7f800000) != 0)) {
      bVar1 = true;
    }
    if (!bVar1) {
      fStack_30 = (float)((uint)fStack_30 & 0x80000000);
    }
    uStack_1c = lbl_821AAD20;
    uStack_18 = lbl_821AAD20;
    uStack_14 = lbl_821AAD20;
    fStack_20 = fStack_30;
    fn_82B86888(param_2,1,&fStack_20,0);
    return;
  }
  if (param_4 == 1) {
    iStack_2c = (int)param_1;
    uVar2 = 1;
  }
  else {
    if (2 < param_4) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_2,0x12c0);
    }
    iStack_2c = (int)(longlong)param_1;
    uVar2 = 0;
  }
  fn_82B8A2E0(param_2,iStack_2c,uVar2);
  return;
}

