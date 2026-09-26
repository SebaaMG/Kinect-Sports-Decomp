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
extern int fn_829C56D8();
extern int fn_829F4FC8();
extern int fn_82A1E810();
extern int fn_82A1F2F8();
extern int fn_82F65018();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83214DCC;
extern unsigned int lbl_83214DD0;
extern unsigned int lbl_83214E00;
extern unsigned int lbl_83214E0C;
extern unsigned int lbl_83214F48;
extern unsigned int lbl_83214F4C;
extern unsigned int lbl_83214F58;
extern unsigned int lbl_83214F80;
extern unsigned int lbl_83214FA0;


void fn_829C57F8(ulonglong param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  uVar3 = KfAcquireSpinLock(0xffffffff83214dd4);
  puVar2 = lbl_83214FA0;
  lbl_83214FA0 = (undefined4 *)0x0;
  KfReleaseSpinLock(0xffffffff83214dd4,uVar3);
  lbl_83214E0C = lbl_83214E0C + 1;
  dVar4 = (double)fn_82F65018((double)(longlong)lbl_83214F4C,(double)(longlong)lbl_83214F48);
  fn_829F4FC8((double)(float)dVar4,(double)lbl_821AAD20,0,0xffffffff83214f30);
  if ((lbl_83214F80 & 0x20) == 0) {
    lbl_83214F58 = fn_82A1F2F8();
    lbl_83214DD0 = lbl_83214DCC;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if ((param_1 & 0xffffffff) != 0x4c7) {
      lbl_83214E00 = 0;
    }
    pcVar1 = (code *)puVar2[4];
    *puVar2 = (int)param_1;
    if ((puVar2[3] != 0) && (puVar2[3] != -1)) {
      fn_82A1E810();
    }
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,0,puVar2);
    }
    fn_829C56D8(param_1);
  }
  return;
}

