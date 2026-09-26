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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82FFE5B8();
extern unsigned int lbl_832645D8;
extern unsigned int lbl_832645DC;


char fn_82FE6618(uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (param_3 * 0x1000 + param_2) * 0x10 + (param_1 & 0xf);
  for (piVar2 = lbl_832645D8; (piVar2 != lbl_832645DC && (*piVar2 != iVar1)); piVar2 = piVar2 + 3) {
  }
  if ((-(uint)(lbl_832645DC != piVar2) & (uint)(piVar2 + 1)) == 0) {
    if ((param_4 != 0) && (param_5 != 0)) {
      iVar1 = fn_82FFE5B8(0xffffffff832645d8,iVar1,CONCAT44(param_4,param_5));
      return (iVar1 == 0) + '\x01';
    }
    return '\x1f';
  }
  return '\x02';
}

