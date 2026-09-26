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
extern int fn_82BE5230();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern int fn_82BE54C0();
extern int fn_82BE66A0();
extern unsigned int lbl_820EAF14;


void fn_82BEB7A8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1 + 5;
  *param_1 = &lbl_820EAF14;
  fn_82BE5340(puVar2);
  while( true ) {
    puVar1 = (undefined4 *)fn_82BE5378(puVar2);
    if (puVar1 == (undefined4 *)0x0) break;
    fn_82BE66A0(puVar1);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    fn_82BE5350(puVar2);
  }
  fn_82BE5478(puVar2);
  fn_82BE54C0(puVar2);
  fn_82BE5230(param_1);
  return;
}

