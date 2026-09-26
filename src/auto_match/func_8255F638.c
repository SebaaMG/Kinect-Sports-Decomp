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
extern int fn_8255F7E8();
extern int fn_827F2220();
extern int fn_827F22D0();
extern int fn_827F2DD0();
extern int fn_827F3DA8();
extern unsigned int lbl_821CC160;


void fn_8255F638(int param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  
  bVar2 = false;
  if ((*(int *)(param_1 + 0x110) != 0) && (cVar3 = fn_827F3DA8(), cVar3 != '\0')) {
    bVar2 = true;
  }
  fn_8255F7E8(param_1);
  cVar3 = fn_827F22D0(param_1);
  fVar1 = lbl_821CC160;
  if (cVar3 == '\0') {
    fVar1 = *(float *)(param_1 + 0x184);
  }
  *(float *)(param_1 + 0x188) = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  fn_827F2DD0((double)fVar1,param_1,param_2,param_3,0,*(undefined4 *)(param_1 + 0x1a8));
  *(undefined4 *)(param_1 + 0x15c) = 0;
  if (bVar2) {
    fn_827F2220(param_1);
  }
  return;
}

