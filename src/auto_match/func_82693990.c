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
extern int fn_8267C4F0();
extern unsigned int lbl_82005FD0;
extern unsigned int lbl_831E7E64;


undefined8 fn_82693990(int *param_1)

{
  char cVar3;
  undefined4 *puVar2;
  undefined8 uVar1;
  
  cVar3 = (**(code **)(*param_1 + 8))();
  if (cVar3 == '\0') {
    uVar1 = 0;
  }
  else {
    (**(code **)(*(int *)param_1[2] + 0x48))();
    puVar2 = (undefined4 *)fn_8267B890(lbl_831E7E64,8,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[1] = 1;
      *puVar2 = &lbl_82005FD0;
    }
    if (param_1[2] != 0) {
      fn_8267C4F0();
    }
    param_1[2] = (int)puVar2;
    uVar1 = 1;
  }
  return uVar1;
}

