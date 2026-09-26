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
extern int fn_8229CFB8();
extern int fn_8241A8A0();
extern int fn_8241B4E0();
extern unsigned int lbl_821CC160;


void fn_8241EE50(int *param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[8];
  bVar2 = false;
  if (piVar3 != (int *)param_1[9]) {
    do {
      if (*(int *)(*piVar3 + 0x2c) == 2) {
        fn_8241B4E0(param_1,*piVar3,0);
        bVar2 = true;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)param_1[9]);
    if (bVar2) {
      fn_8241A8A0(param_1,param_2);
      return;
    }
  }
  iVar1 = *param_1;
  if ((*(int *)(iVar1 + 0xcb8) != 0) &&
     (param_1[0x8d] = lbl_821CC160, param_1 == *(int **)(iVar1 + 0x2b20))) {
    fn_8229CFB8(*(undefined4 *)(*(int *)(iVar1 + 0xd4) + 0x1854),0,0);
  }
  return;
}

