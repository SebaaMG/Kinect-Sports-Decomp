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
extern unsigned int fStack00000014;
extern int fn_8306E888();
extern int fn_8306EA00();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82186E10;
extern unsigned int lbl_82186E14;
extern unsigned int lbl_821AAD20;


undefined8 fn_8306F250(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float fStack00000014;
  
  if (lbl_821AAD20 < in_register_00010018) {
    dVar3 = (double)(lbl_82002AE0 / in_register_00010018);
    fStack00000014 = in_register_00010014;
    uVar1 = fn_8306EA00((double)(float)(dVar3 * (double)in_register_00010010));
    uVar2 = fn_8306EA00((double)(float)(dVar3 * (double)fStack00000014));
    dVar3 = (double)fn_8306E888(uVar1);
    if ((dVar3 <= (double)(float)((double)lbl_82186E14 - param_1)) &&
       (dVar3 = (double)fn_8306E888(uVar2),
       dVar3 <= (double)(float)((double)lbl_82186E10 - param_1))) {
      return 0;
    }
  }
  return 1;
}

