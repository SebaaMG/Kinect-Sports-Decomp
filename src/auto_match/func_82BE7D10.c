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
extern int fn_82BE56B0();
extern int fn_82BE6590();
extern int fn_82BE66A0();
extern int fn_82BEB9B8();
extern int fn_82BF31A0();
extern int fn_82BF34B8();


void fn_82BE7D10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar1 = fn_82BE56B0(0x50);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)fn_82BF31A0();
    }
    if (puVar2 != (undefined4 *)0x0) {
      iVar1 = fn_82BF34B8(puVar2,param_1);
      if ((iVar1 != 0) && (iVar1 = fn_82BE6590(puVar2), iVar1 == 0)) {
        iVar1 = fn_82BEB9B8(param_1,puVar2);
        if (iVar1 == 0) {
          *(undefined4 **)(param_1 + 0x88) = puVar2;
          return;
        }
        fn_82BE66A0(puVar2);
      }
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}

