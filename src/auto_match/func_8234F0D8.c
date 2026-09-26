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
extern int fn_8234F188();
extern int fn_82560010();
extern unsigned int lbl_821954E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_8234F0D8(undefined4 *param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = fn_82560010(*(undefined4 *)*param_1);
  dVar2 = (double)*(float *)(iVar1 + 0x4c);
  if (dVar2 == (double)lbl_821954E8) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    dVar2 = (double)((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460);
  }
  fn_8234F188(dVar2,(double)*(float *)(iVar1 + 0x48),(double)*(float *)(iVar1 + 0x50),
                    (double)*(float *)(iVar1 + 0x54),param_1,iVar1 + 0x40,iVar1 + 0x44);
  return;
}

