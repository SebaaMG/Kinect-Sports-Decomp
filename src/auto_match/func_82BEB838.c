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
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5398();


undefined8 fn_82BEB838(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x14;
  fn_82BE5340(iVar2);
  while( true ) {
    puVar1 = (undefined4 *)fn_82BE5378(iVar2);
    if (puVar1 == (undefined4 *)0x0) {
      return 0x3e9;
    }
    if (puVar1 == param_2) break;
    fn_82BE5350();
  }
  fn_82BE5398(iVar2,*(undefined4 *)(param_1 + 0x1c),1);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return 0;
}

