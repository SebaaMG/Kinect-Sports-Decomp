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
extern int fn_827F3C48();
extern int fn_827F4018();
extern int fn_827F4038();
extern unsigned int lbl_821CC160;


void fn_8250E180(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  byte bVar5;
  double dVar6;
  double dVar7;
  
  uVar2 = fn_827F3C48(param_1,0);
  uVar3 = fn_827F3C48(param_1,1);
  iVar4 = fn_827F4018(uVar2);
  bVar5 = *(byte *)(iVar4 + 0x1c);
  dVar6 = (double)lbl_821CC160;
  dVar7 = dVar6;
  if ((bVar5 & 0x40) != 0) {
    iVar4 = fn_827F4018(uVar2);
    dVar6 = (double)*(float *)(iVar4 + 0x18);
  }
  iVar4 = fn_827F4018(uVar3);
  bVar1 = *(byte *)(iVar4 + 0x1c);
  if ((bVar1 & 0x40) != 0) {
    iVar4 = fn_827F4018(uVar3);
    dVar7 = (double)*(float *)(iVar4 + 0x18);
  }
  iVar4 = fn_827F4038(param_1);
  *(float *)(iVar4 + 0x18) = (float)(dVar7 + dVar6);
  if (((bVar5 & 0x40) == 0) && ((bVar1 & 0x40) == 0)) {
    bVar5 = *(byte *)(iVar4 + 0x1c) & 0xbf;
  }
  else {
    bVar5 = *(byte *)(iVar4 + 0x1c) | 0x40;
  }
  *(byte *)(iVar4 + 0x1c) = bVar5;
  return;
}

