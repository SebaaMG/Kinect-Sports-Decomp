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
extern int fn_82FEDB28();
extern int fn_82FEDDA0();
extern unsigned int lbl_831BC794;
extern unsigned int lbl_831BC798;
extern unsigned int lbl_831BC79C;
extern unsigned int lbl_831BC7A8;
extern unsigned int lbl_832643DC;


void fn_82FEE718(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar1 = lbl_831BC794;
  puVar3 = (undefined4 *)0x0;
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    if ((puVar2[5] == 0) &&
       (((puVar2[2] == 0 || (puVar2[2] == 1)) && (iVar5 = fn_82FEDB28(), iVar5 != 1)))) {
      puVar1 = (undefined4 *)*puVar2;
      puVar4 = puVar1;
      if (puVar2 != lbl_831BC794) {
        *puVar3 = puVar1;
        puVar4 = lbl_831BC794;
      }
      lbl_831BC794 = puVar4;
      if (puVar2 == lbl_831BC798) {
        lbl_831BC798 = puVar3;
      }
      *puVar2 = lbl_831BC79C;
      lbl_831BC7A8 = lbl_831BC7A8 + -1;
      lbl_831BC79C = puVar2;
    }
    else {
      puVar1 = (undefined4 *)*puVar2;
      puVar3 = puVar2;
    }
  }
  fn_82FEDDA0(lbl_832643DC);
  return;
}

