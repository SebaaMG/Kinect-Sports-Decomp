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
extern unsigned int *auStack_20;
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827EF828();
extern int fn_827EFFE8();
extern int fn_827F0180();
extern int fn_827F2DD0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82507668(int param_1)

{
  longlong lVar1;
  double dVar2;
  undefined1 auStack_20 [16];
  
  fn_8255F880(auStack_20);
  dVar2 = (double)lbl_821CC160;
  lVar1 = fn_8255F8D0(dVar2,(double)lbl_821CA460,auStack_20);
  *(int *)(param_1 + 0xff0) = (int)lVar1;
  if (lVar1 != 0) {
    fn_827F2DD0((double)lbl_8218E8E8,*(undefined4 *)(param_1 + 0xb68));
  }
  fn_827EF828(dVar2,*(undefined4 *)(param_1 + 0xb68));
  fn_827EFFE8(*(undefined4 *)(param_1 + 0xb68));
  if (*(int *)(param_1 + 0x8c0) != 0) {
    fn_827F0180(*(undefined4 *)(param_1 + 0xb68),
                      **(undefined4 **)
                        ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 +
                        *(int *)(param_1 + 0x8c0)),1,0,0);
  }
  return;
}

