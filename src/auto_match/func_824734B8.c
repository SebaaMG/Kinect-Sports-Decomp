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
extern int fn_82473498();
extern int fn_825521F0();
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821B44EC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831D450C;


/* WARNING: Removing unreachable block (ram,0x824734ec) */

void fn_824734B8(int param_1,undefined8 param_2)

{
  undefined **ppuStack_30;
  code *pcStack_2c;
  undefined ***pppuStack_20;
  
  lbl_831D450C = 0xffffffff;
  pcStack_2c = fn_82473498;
  pppuStack_20 = &ppuStack_30;
  ppuStack_30 = &lbl_821B44EC;
  fn_825521F0((double)lbl_821CA460,(double)lbl_821917B4,param_1,param_2,&ppuStack_30);
  *(undefined4 *)(param_1 + 0x34) = 1;
  return;
}

