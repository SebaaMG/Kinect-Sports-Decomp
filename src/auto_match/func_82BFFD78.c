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
#define NAN(x) ((x) != (x))
extern double _seed_nan;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82630040();
extern int fn_82630168();
extern int fn_82630218();
extern int fn_82630260();
extern int fn_82631BF8();
extern int fn_82648B08();
extern unsigned int iStack_44;
extern unsigned int lbl_820EBEE0;
extern unsigned int lbl_820EBEE4;
extern unsigned int uStack_58;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82BFFD78(int *param_1)

{
  float fVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [12];
  int iStack_44;
  
  puVar3 = &uStack_58;
  lVar4 = 6;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  XGetVideoMode(auStack_50);
  uStack_58 = 0;
  fn_82648B08(param_1[0xe],0,auStack_60);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  fVar1 = lbl_820EBEE0;
  if (iStack_44 != 0) {
    fVar1 = lbl_820EBEE4;
  }
  param_1[0x23] = (int)(fVar1 / -(_seed_nan));
  lVar4 = fn_82630168(0xc,0,1,0);
  param_1[0xf] = (int)lVar4;
  if (-1 < (int)-(uint)(lVar4 == 0)) {
    puVar2 = (undefined2 *)fn_82630218(param_1[0xf],0,0,0);
    *puVar2 = 0;
    puVar2[5] = 5;
    puVar2[1] = 1;
    puVar2[3] = 3;
    puVar2[2] = 2;
    puVar2[4] = 4;
    fn_82630260(param_1[0xf]);
    lVar4 = fn_82630040(0x78,0);
    param_1[0x10] = (int)lVar4;
    if (-1 < (int)-(uint)(lVar4 == 0)) {
      lVar4 = fn_82631BF8(0xffffffff83175b34);
      param_1[0x11] = (int)lVar4;
      if (-1 < (int)-(uint)(lVar4 == 0)) {
        (**(code **)(*param_1 + 0x60))(param_1);
      }
    }
  }
  return;
}

