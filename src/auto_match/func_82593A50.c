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
extern int fn_823AB478();
extern int fn_82512610();
extern int fn_825269D0();
extern int fn_828EA610();
extern int fn_828EB518();
extern int fn_82AB8588();
extern unsigned int lbl_83265988;
extern unsigned int lbl_8327F668;


void fn_82593A50(undefined8 param_1)

{
  char cVar3;
  int iVar2;
  ulonglong uVar1;
  
  cVar3 = fn_828EA610();
  fn_82512610(param_1,0,cVar3 == '\0',0);
  lbl_8327F668 = fn_823AB478(param_1);
  cVar3 = fn_828EA610(param_1);
  if (cVar3 != '\0') {
    iVar2 = fn_82AB8588(lbl_83265988);
    if (iVar2 == 0xff) {
      uVar1 = (ulonglong)lbl_83265988;
    }
    else {
      uVar1 = fn_828EB518();
    }
    fn_82512610(uVar1,1,0,0);
  }
  fn_825269D0(0x3e,0);
  return;
}

