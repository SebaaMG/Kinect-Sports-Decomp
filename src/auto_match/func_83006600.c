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
extern int fn_82FA5060();
extern int fn_83004190();
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC768;


void fn_83006600(double param_1,int *param_2)

{
  undefined2 *puVar1;
  short *psVar2;
  double dVar3;
  
  psVar2 = (short *)param_2[0x11];
  if (psVar2 == (short *)0x0) {
    if (param_1 == (double)lbl_821AAD20) {
      return;
    }
    puVar1 = (undefined2 *)fn_82FA5060(lbl_831BC768,0xc);
    param_2[0x11] = (int)puVar1;
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
    }
    psVar2 = (short *)param_2[0x11];
    if (psVar2 == (short *)0x0) {
      return;
    }
  }
  dVar3 = (double)((float)(longlong)*psVar2 * lbl_82186E6C);
  fn_83004190(param_1);
  (**(code **)(*param_2 + 0x3c))((double)(float)(param_1 - dVar3),param_2,0x1d,*param_2,0,0);
  return;
}

