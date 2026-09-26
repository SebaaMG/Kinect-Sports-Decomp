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
extern unsigned int *auStack_40;
extern int fn_8234C398();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F22D0();
extern int fn_827F2D60();
extern int fn_827F6210();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8234C258(int param_1,int param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_40 [64];
  
  uVar1 = fn_8234C398();
  param_1 = param_2 * 0x2c + param_1;
  dVar4 = (double)lbl_821CA460;
  if ((uVar1 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x124)) {
    fn_8255F880(auStack_40,uVar1 + 0x40);
    dVar5 = (double)lbl_821CC160;
    uVar2 = fn_8255F8D0(dVar5,dVar4,auStack_40);
    cVar3 = fn_827F22D0(*(undefined4 *)(param_1 + 0x118));
    if (cVar3 == '\0') {
      dVar5 = (double)lbl_8218E8E8;
    }
    fn_827F2D60(dVar5,*(undefined4 *)(param_1 + 0x118),uVar2,param_3,0x12,0);
    *(int *)(param_1 + 0x120) = (int)uVar2;
    *(int *)(param_1 + 0x124) = (int)uVar1;
  }
  fn_827F6210(dVar4,*(undefined4 *)(param_1 + 0x120));
  return;
}

