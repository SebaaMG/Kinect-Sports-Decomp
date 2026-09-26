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
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831E7984;
extern unsigned int lbl_8326B860;
extern unsigned int lbl_8326B8E8;
extern unsigned int lbl_83274AE8;
extern unsigned int lbl_83274AFC;


int fn_82624218(void)

{
  int iVar1;
  float fVar2;
  
  if (lbl_83274AFC == lbl_821CC160) {
    iVar1 = (&lbl_8326B8E8)[(&lbl_831E7984)[lbl_83274AE8]];
    fVar2 = lbl_8326B860;
  }
  else {
    iVar1 = (&lbl_8326B8E8)[(&lbl_831E7984)[lbl_83274AE8]];
    fVar2 = lbl_83274AFC;
  }
  return (int)(*(float *)(iVar1 + 0x10) * fVar2);
}

