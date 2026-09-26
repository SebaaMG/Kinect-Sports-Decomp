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
extern int fn_826972E0();
extern int fn_82F68918();
extern int fn_82F6A7A0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82006268;
extern unsigned int lbl_82006270;
extern unsigned int lbl_82006278;


ulonglong fn_82697610(char *param_1)

{
  ulonglong uVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  if (*param_1 == '\x04') {
    uVar1 = (ulonglong)*(uint *)(param_1 + 8);
  }
  else {
    dVar2 = (double)fn_826972E0();
    if ((dVar2 == lbl_82005710) || (((ulonglong)dVar2 & 0x7ff0000000000000) == 0x7ff0000000000000))
    {
      uVar1 = 0;
    }
    else if ((dVar2 < lbl_82006278) || (lbl_82006270 < dVar2)) {
      dVar5 = lbl_82005710;
      uVar3 = fn_82F68918(ABS(dVar2));
      dVar4 = (double)fn_82F6A7A0(uVar3,lbl_82006268);
      uVar1 = (longlong)dVar4 & 0xffffffff;
      if (dVar2 < dVar5) {
        uVar1 = -uVar1;
      }
    }
    else {
      uVar1 = (ulonglong)(uint)(int)dVar2;
    }
  }
  return uVar1;
}

