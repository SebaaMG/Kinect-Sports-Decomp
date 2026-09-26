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
extern char cRam8327f87e;
extern int fn_825269D0();
extern int fn_8259A230();
extern int fn_82A1BB18();
extern int fn_82A263F0();
extern unsigned int uRam8326f5a8;
extern unsigned int uRam8326f5ac;
extern unsigned int uRam8326f5b0;
extern unsigned int uRam8326f5b4;
extern unsigned int uRam8326f5bc;
extern unsigned int uRam8326f5c0;


void fn_8259A168(void)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  if (cRam8327f87e == '\0') {
    iVar1 = 0;
    piVar2 = (int *)0x8326f5b4;
    uRam8326f5a8 = 0;
    uRam8326f5ac = 0;
    lVar3 = 0x20;
    uRam8326f5b0 = 0;
    uRam8326f5b4 = 0;
    do {
      piVar2[1] = 0;
      piVar2[2] = -1;
      piVar2 = piVar2 + 3;
      *piVar2 = iVar1;
      iVar1 = iVar1 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    cRam8327f87e = '\x01';
    fn_82A263F0(0,0xfffffffffffffffe,0,0xffffffff8326f5b8,0,0,0);
    uRam8326f5bc = fn_82A1BB18();
    uRam8326f5c0 = 0;
    fn_82A1BB18();
    lVar3 = fn_8259A230();
    fn_825269D0(lVar3 + 0x1d,0);
  }
  return;
}

