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
extern float fRam83270244;
extern float fRam83270248;
extern int fn_8251F720();
extern int fn_8265BF48();
extern int fn_8284C850();
extern int iRam83270240;
extern int iRam83270250;
extern int iRam83270258;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int lbl_83297898;
extern unsigned int lbl_8329E4FC;
extern unsigned int uRam8327024c;
extern unsigned int uRam83270254;


void fn_825F51D8(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((lbl_8329E4FC & 1) == 0) {
    lbl_8329E4FC = lbl_8329E4FC | 1;
    lbl_83297898 = fn_8265BF48(0xffffffff821ca420,0);
  }
  iRam83270240 = fn_8251F720(0xffffffff83297898,0);
  iVar1 = fn_8284C850(*(undefined4 *)(iRam83270240 + 0x14));
  fRam83270244 = lbl_821916FC / (float)(longlong)iVar1;
  iVar1 = fn_8284C850(*(undefined4 *)(iRam83270240 + 0x14));
  uVar3 = lbl_8326B430 - 6;
  uVar2 = lbl_8326B434 - 6;
  iRam83270250 = ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0);
  uRam8327024c = 4;
  uRam83270254 = 4;
  fRam83270248 = lbl_821CA460 / (float)(longlong)iVar1;
  iRam83270258 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  return;
}

