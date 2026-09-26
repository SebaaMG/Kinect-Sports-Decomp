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
extern unsigned int fStack_30;
extern int fn_823B65F8();
extern int fn_823B6A20();
extern int fn_823B6C60();
extern unsigned int iStack_34;
extern unsigned int lbl_821B9BC8;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_8241CE30(double param_1,int *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  float fStack_30;
  
  uVar1 = *(undefined4 *)(*param_2 + 0x8c);
  iVar2 = fn_823B6C60(uVar1);
  iVar3 = fn_823B6A20(uVar1);
  if (((iVar3 != 0) && (3 < iVar2)) && (iVar2 < 0x18)) {
    fStack_30 = (float)param_1;
    uStack_3c = 2;
    ppuStack_40 = &lbl_821B9BC8;
    uStack_38 = param_4;
    iStack_34 = iVar2;
    fn_823B65F8(uVar1,&ppuStack_40);
  }
  return;
}

