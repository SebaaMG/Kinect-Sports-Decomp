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
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_8289EEE0();
extern int fn_828ACD00();
extern int fn_828BDDA0();
extern int fn_828BE158();
extern unsigned int lbl_820255D0;
extern unsigned int lbl_820255D8;


void fn_828D8B60(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar3;
  undefined4 *puVar2;
  
  uVar1 = fn_8289EEE0();
  cVar3 = fn_828ACD00(param_1);
  if (cVar3 == '\0') {
    puVar2 = (undefined4 *)fn_8265C9E0(0x88);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      fn_828BDDA0();
      puVar2[0x20] = param_2;
      puVar2[0x21] = param_3;
      *puVar2 = &lbl_820255D8;
      puVar2[0x14] = &lbl_820255D0;
    }
    fn_82886518(puVar2,0xffffffffffffffff,0xffffffffffffffff);
    uVar1 = fn_82897BD0(uVar1);
    fn_828BE158(param_1,puVar2,uVar1,0);
  }
  return;
}

