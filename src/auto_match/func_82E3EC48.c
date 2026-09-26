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
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_82E3BDF8();
extern int fn_82E3BFD8();
extern int fn_82E3E660();
extern int fn_82E50CB8();
extern int fn_82E50F10();


undefined8 fn_82E3EC48(longlong param_1)

{
  int iVar1;
  undefined4 *apuStack_50 [2];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [64];
  
  fn_82E50CB8(param_1 + 8);
  apuStack_50[0] = (undefined4 *)0x0;
  fn_82E3BDF8(param_1 + 0x1ac,auStack_48);
  while( true ) {
    iVar1 = fn_82E3E660(param_1 + 0x1ac,auStack_48,auStack_40,apuStack_50);
    if (iVar1 == 0) break;
    if (apuStack_50[0] != (undefined4 *)0x0) {
      (**(code **)*apuStack_50[0])(apuStack_50[0],1);
    }
    apuStack_50[0] = (undefined4 *)0x0;
  }
  fn_82E3BFD8(param_1);
  fn_82E50F10(param_1 + 8);
  return 0;
}

