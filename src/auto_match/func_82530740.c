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
extern int fn_82530800();
extern int fn_82531688();
extern int fn_825316F0();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82192604;
extern unsigned int lbl_82193B38;
extern unsigned int lbl_821956B4;
extern unsigned int lbl_821956B8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83296AE0;


double fn_82530740(void)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = *(uint *)(lbl_83296AE0 + 0x6c);
  if (uVar1 == 0) {
    dVar2 = (double)fn_82531688();
    dVar4 = (double)(float)((double)lbl_8218E8FC / dVar2);
    dVar3 = (double)fn_825316F0();
    dVar2 = (double)lbl_82192604;
  }
  else {
    if (uVar1 != 1) {
      if (uVar1 < 3) {
        dVar2 = (double)fn_82531688();
        dVar4 = (double)(float)((double)lbl_821956B8 / dVar2);
        dVar3 = (double)fn_825316F0();
        dVar2 = (double)lbl_821CA460;
        goto LAB_825307e8;
      }
      if (uVar1 == 3) {
        dVar2 = (double)fn_82530800();
        return dVar2;
      }
    }
    dVar2 = (double)fn_82531688();
    dVar4 = (double)(float)((double)lbl_821956B4 / dVar2);
    dVar3 = (double)fn_825316F0();
    dVar2 = (double)lbl_82193B38;
  }
LAB_825307e8:
  return (double)(float)(dVar4 / (double)(float)(dVar2 / dVar3));
}

