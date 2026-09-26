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
extern int fn_82FA9208();
extern int fn_82FABA50();


void fn_82FAAF20(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  puVar3 = (undefined4 *)0x0;
  while( true ) {
    puVar2 = puVar4;
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    if (puVar2 + 1 == param_2) break;
    puVar4 = (undefined4 *)*puVar2;
    puVar3 = puVar2;
  }
  iVar1 = puVar2[5];
  puVar2[5] = 0;
  if (iVar1 != 0) {
    fn_82FA9208();
  }
  fn_82FABA50(param_1 + 0x2c,puVar2,puVar3);
  return;
}

