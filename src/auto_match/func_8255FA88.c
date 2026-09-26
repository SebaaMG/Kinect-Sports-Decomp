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
extern int fn_827F6310();
extern int fn_827F6318();
extern int fn_827F6320();
extern int fn_827F9DF8();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined8 fn_8255FA88(longlong param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = fn_827F6320();
  if (iVar1 != 1) {
    return 0;
  }
  dVar2 = (double)fn_827F6310(param_1);
  dVar3 = (double)lbl_821CC160;
  if ((dVar2 < dVar3) || (iVar1 = fn_827F9DF8(param_1 + 0x24), iVar1 == 1)) {
    dVar2 = (double)fn_827F6318(param_1);
    if (dVar2 <= dVar3) {
      return 1;
    }
  }
  else {
    dVar2 = (double)fn_827F6318(param_1);
    if ((double)lbl_821CA460 <= dVar2) {
      return 1;
    }
  }
  return 0;
}

