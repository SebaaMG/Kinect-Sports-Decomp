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
extern int fn_827B3858();
extern int fn_82F655D8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005328;
extern unsigned int lbl_82005CCC;


void fn_827B3C68(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar1 = fn_82F6A548();
  dVar5 = extraout_f1;
  if (extraout_f1 == (double)lbl_82002AE0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  else {
    fn_827B3858((int *)(iVar1 + 8),0x100,0);
    *(undefined4 *)(iVar1 + 0xc) = 0x100;
    iVar2 = 0;
    iVar3 = 0;
    dVar7 = (double)lbl_82005CCC;
    dVar6 = (double)lbl_82002C5C;
    dVar8 = (double)lbl_82005328;
    do {
      dVar4 = (double)fn_82F655D8((double)(float)((double)(longlong)iVar2 * dVar8),dVar5);
      iVar2 = iVar2 + 1;
      *(int *)(*(int *)(iVar1 + 8) + iVar3) = (int)(longlong)((double)(float)dVar4 * dVar7 + dVar6);
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x400);
  }
  *(float *)(iVar1 + 4) = (float)dVar5;
  fn_82F6A594();
  return;
}

