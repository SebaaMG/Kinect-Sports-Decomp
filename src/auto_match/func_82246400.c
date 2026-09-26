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
extern int fn_82517D50();
extern int fn_8265C9E0();
extern int fn_828904D8();
extern int fn_828AD740();
extern unsigned int lbl_82197950;
extern unsigned int lbl_82197990;


void fn_82246400(int param_1,undefined8 param_2,int param_3)

{
  char cVar2;
  undefined4 *puVar1;
  
  (**(code **)(**(int **)(param_1 + 0x18) + 0x10))();
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else if (param_3 == 2) {
    cVar2 = fn_828AD740(*(undefined4 *)(param_1 + 8));
    if (cVar2 != '\0') {
      puVar1 = (undefined4 *)fn_8265C9E0(0x88);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        fn_82517D50(puVar1,*(undefined4 *)(param_1 + 8),6);
        *(undefined1 *)(puVar1 + 0x20) = 0;
        *puVar1 = &lbl_82197950;
        puVar1[0x1a] = &lbl_82197990;
        puVar1[0x21] = 0;
      }
      *(undefined4 **)(param_1 + 0x38) = puVar1;
      fn_828904D8();
    }
  }
  else if (param_3 == 3) {
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  return;
}

