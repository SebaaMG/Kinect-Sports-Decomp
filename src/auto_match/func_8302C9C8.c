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
extern int fn_82FA5060();
extern int fn_8300CE00();
extern int fn_8300CF30();
extern unsigned int lbl_831BC768;


int * fn_8302C9C8(int param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = fn_82FA5060(lbl_831BC768,0x2c);
  if (((uVar1 & 0xffffffff) != 0) &&
     (piVar2 = (int *)fn_8300CF30(uVar1,param_2), piVar2 != (int *)0x0)) {
    iVar3 = fn_8300CE00(piVar2,*(undefined2 *)(param_1 + 0x11c));
    if (iVar3 == 1) {
      if ((*(byte *)(param_1 + 0x11f) & 0x10) == 0) {
        return piVar2;
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 0x88) + 0x30))();
      piVar2[4] = iVar3;
      piVar2[3] = iVar3;
      return piVar2;
    }
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return (int *)0x0;
}

