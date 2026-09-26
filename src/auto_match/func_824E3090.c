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
extern int fn_825597C0();
extern int fn_8258C000();
extern int fn_8266EA18();
extern int fn_8266EC60();
extern int fn_82BE3A18();
extern int fn_82F4EAD0();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F894;
extern unsigned int uStack_22;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_824E3090(void)

{
  int iVar1;
  double dVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  
  fn_82F4EAD0();
  dVar2 = (double)lbl_8327F894;
  fn_825597C0();
  fn_8266EC60();
  fn_8266EA18(dVar2);
  iVar1 = fn_8258C000();
  if (((*(int *)(iVar1 + 0x1fc) != 0) && (*(int *)(iVar1 + 500) != 0)) &&
     ((*(int *)(iVar1 + 0x1f8) != 0 || (*(int *)(iVar1 + 0x1a0) == 0)))) {
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_30 = lbl_821CC160;
    uStack_34 = 0;
    uStack_2c = lbl_821CC160;
    uStack_24 = 0;
    uStack_28 = lbl_821CC160;
    uStack_22 = 0;
    fn_82BE3A18(&uStack_40,0);
  }
  return;
}

