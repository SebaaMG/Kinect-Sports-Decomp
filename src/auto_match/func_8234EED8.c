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
extern unsigned int *auStack_30;
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_82560010();
extern int fn_827F22D0();
extern int fn_827F2D60();
extern int fn_827F3580();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8234EED8(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined1 auStack_30 [48];
  
  puVar5 = param_1 + 3;
  if (0xf < (uint)param_1[8]) {
    puVar5 = (undefined4 *)*puVar5;
  }
  uVar2 = fn_82560010(*(undefined4 *)*param_1,puVar5);
  if ((uVar2 & 0xffffffff) == 0) {
    fn_827F3580((double)lbl_821CC160,(double)lbl_8218E8E8,param_1[1]);
  }
  else {
    fn_8255F880(auStack_30,uVar2 + 0x40);
    uVar3 = fn_8255F8D0((double)lbl_821CC160,(double)lbl_821CA460,auStack_30);
    cVar4 = fn_827F22D0(param_1[1]);
    fVar1 = lbl_8218E8E8;
    if (cVar4 != '\0') {
      fVar1 = lbl_821CC160;
    }
    fn_827F2D60((double)fVar1,param_1[1],uVar3,param_3,0x12,0);
  }
  param_1[0xc] = 0;
  return;
}

