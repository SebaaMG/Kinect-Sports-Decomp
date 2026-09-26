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
extern int iRam831bf70c;


void fn_82608D38(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (iRam831bf70c != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_2 + 0xb4)) {
      puVar1 = (undefined4 *)(param_2 + 0xb4);
      do {
        puVar1 = puVar1 + 1;
        (**(code **)(*(int *)*puVar1 + 4))(param_1,(int *)*puVar1,param_3,param_2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_2 + 0xb4));
    }
  }
  return;
}

