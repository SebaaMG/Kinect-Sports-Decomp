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
extern int fn_8266C9B0();
extern int fn_8266EC60();
extern int fn_82672030();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern unsigned int lbl_82002CD0;
extern unsigned int lbl_82002D08;
extern unsigned int *lbl_831E7B40;
extern unsigned int lbl_831E7B44;


void fn_82673040(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = fn_82A1BB18();
  if (iVar1 == lbl_831E7B44) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x8c))((double)lbl_82002D08);
    fn_8266EC60();
    fn_8266C9B0();
    *(undefined4 *)(param_1 + 0xf4) = 1;
  }
  else if (*(int *)(param_1 + 0xe8) == 0) {
    puVar2 = (undefined4 *)fn_8265C9E0(0x14);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      fn_82672030(puVar2,param_1);
      *puVar2 = &lbl_82002CD0;
    }
    fn_82BFE128(*lbl_831E7B40,puVar2);
  }
  return;
}

