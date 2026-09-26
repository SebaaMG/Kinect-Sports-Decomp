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
extern int fn_82438BD8();
extern int fn_8243CFD0();
extern int fn_82445EE8();
extern int fn_824C5630();
extern int fn_8265CA20();
extern unsigned int lbl_821B90FC;


void fn_8242E940(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    fn_824C5630(iVar1 + 0xd4);
    *(undefined ***)(iVar1 + 0x60) = &lbl_821B90FC;
    fn_8265CA20(*(undefined4 *)(iVar1 + 100));
    fn_82438BD8(iVar1 + 0x1c);
    fn_82445EE8(iVar1 + 0x10);
    fn_8243CFD0(iVar1 + 8);
    fn_8265CA20(*(undefined4 *)(iVar1 + 4));
    fn_8265CA20(iVar1);
  }
  return;
}

