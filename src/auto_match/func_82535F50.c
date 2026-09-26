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
extern unsigned int *lbl_8327F868;


void fn_82535F50(int *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar3;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*param_1 + 0x20))();
    if (piVar1 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar1 + 4))(piVar1);
      if ((cVar3 != '\0') && (iVar2 = (**(code **)(*piVar1 + 0x80))(piVar1,param_2), iVar2 < 0)) {
        (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x79a,0xffffffff821c3ddc);
      }
    }
  }
  return;
}

