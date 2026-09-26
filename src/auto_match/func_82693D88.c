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
extern int fn_8267B890();
extern int fn_82693D18();


undefined4 * fn_82693D88(int param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((param_2 & 0xffffffff) < 0xc) {
    if (*(int *)(param_1 + 0x10) == 0) {
      fn_82693D18();
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = *puVar1;
      puVar2 = puVar1;
    }
  }
  else {
    puVar2 = (undefined4 *)fn_8267B890(*(undefined4 *)(param_1 + 4),param_2 + 1,0);
  }
  return puVar2;
}

