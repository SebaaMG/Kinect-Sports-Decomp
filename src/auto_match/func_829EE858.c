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
extern int fn_829F1960();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82015BD0;
extern unsigned int lbl_82015BD8;
extern float lbl_82079F20;
extern float lbl_82079F24;
extern unsigned int lbl_82079F28;
extern unsigned int lbl_83218B9C;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_829EE858(void)

{
  float fVar1;
  double dVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  fVar1 = lbl_82079F28;
  if (lbl_83218B9C != 0) {
    fVar1 = lbl_82002C28;
  }
  dVar2 = (double)fVar1;
  uStack_30 = (ulonglong)(((U64)(uStack_30) >> 32) & 0xFFFFFFFF);
  uStack_28 = (ulonglong)(((U64)(uStack_28) >> 32) & 0xFFFFFFFF);
  fn_829F1960(&uStack_30,&uStack_28);
  if ((dVar2 <= (double)(lbl_82002AE0 -
                        ABS(((float)(longlong)(((U64)(uStack_30) >> 0) & 0xFFFFFFFF) - lbl_82015BD0) * lbl_82079F24))) &&
     (dVar2 <= (double)(lbl_82002AE0 -
                       ABS(((float)(longlong)(((U64)(uStack_28) >> 0) & 0xFFFFFFFF) - lbl_82015BD8) * lbl_82079F20)))) {
    lbl_83218B9C = 1;
    return;
  }
  lbl_83218B9C = 0;
  return;
}

