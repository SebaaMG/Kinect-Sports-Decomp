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
extern int fn_8306E9B8();
extern int fn_8306ED78();
extern int fn_8306ED98();
extern int fn_8306EDB0();
extern int fn_8306EDE8();
extern int fn_830760D0();
extern int fn_830763C8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_8201DFF8;
extern unsigned int lbl_82196080;
extern V16 vectorSplatImmediateSignedWord128();
extern V16 vectorUnpackD3D128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_83076BE0(void)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  fn_830760D0();
  dVar1 = (double)fn_8306ED98();
  if ((float)(dVar1 - (double)lbl_82002AE0) <= lbl_8201DFF8) {
    if (lbl_82196080 <= (float)(dVar1 + (double)lbl_82002AE0)) {
      dVar1 = (double)fn_8306E9B8();
      fn_8306ED78();
      fn_8306EDB0();
    }
    else {
      fn_8306EDE8();
      dVar1 = (double)lbl_8201DD74;
    }
    fn_830763C8(dVar1);
  }
  else {{ V16 _vt0 = vectorSplatImmediateSignedWord128(0); memcpy(auVar2, &_vt0, 16); }
    vectorUnpackD3D128(auVar2,4);
  }
  return;
}

