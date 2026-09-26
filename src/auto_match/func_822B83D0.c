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
extern unsigned int *auStack_38;
extern int fn_8251F720();
extern int fn_8255F448();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F21F0();
extern int fn_827F2220();
extern unsigned int lbl_821954E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


undefined8 fn_822B83D0(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_38 [56];
  
  fn_8255F880(auStack_38,param_2 + 0x40);
  dVar4 = (double)*(float *)(param_2 + 0x4c);
  if (dVar4 == (double)lbl_821954E8) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    dVar4 = (double)((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460);
  }
  uVar2 = fn_8255F8D0(dVar4,(double)*(float *)(param_2 + 0x48),auStack_38);
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x184) = *(undefined4 *)(param_2 + 0x50);
  uVar3 = fn_8251F720(param_2 + 0x44,0);
  fn_8255F448(iVar1,uVar2,uVar3,0);
  *(undefined4 *)(iVar1 + 0x168) = 0;
  *(undefined4 *)(iVar1 + 0x160) = *(undefined4 *)(param_2 + 0x44);
  fn_827F21F0(*(undefined4 *)(param_1 + 0xc));
  fn_827F2220(*(undefined4 *)(param_1 + 0xc));
  return uVar2;
}

