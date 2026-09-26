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
extern int fn_82820EF8();
extern int fn_82827750();
extern int fn_8282D818();


void fn_8282AFD0(int param_1)

{
  char cVar1;
  undefined4 *apuStack_20 [4];
  
  fn_8282D818(param_1,apuStack_20,0xc,1);
  apuStack_20[0][2] = *(undefined4 *)(param_1 + 0x2b8);
  *apuStack_20[0] = *(undefined4 *)(param_1 + 0x2c0);
  apuStack_20[0][1] = *(undefined4 *)(param_1 + 0x2c4);
  cVar1 = fn_82827750(param_1);
  if (cVar1 != '\0') {
    fn_82820EF8(apuStack_20[0] + 2,4);
    fn_82820EF8(apuStack_20[0],4);
    fn_82820EF8(apuStack_20[0] + 1,4);
  }
  return;
}

