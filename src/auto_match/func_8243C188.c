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
extern int fn_822315A0();
extern int fn_8243E0D8();
extern int fn_824420B0();
extern int fn_82454F08();
extern int fn_8265CA20();


void fn_8243C188(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x350);
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar1 + 0x354);
      for (; iVar3 != iVar2; iVar3 = iVar3 + 8) {
        if (*(int *)(iVar3 + 4) != 0) {
          fn_822315A0();
        }
      }
      fn_8265CA20(*(undefined4 *)(iVar1 + 0x350));
    }
    *(undefined4 *)(iVar1 + 0x350) = 0;
    *(undefined4 *)(iVar1 + 0x354) = 0;
    *(undefined4 *)(iVar1 + 0x358) = 0;
    fn_82454F08(iVar1 + 0x208);
    fn_8243E0D8(iVar1 + 0x1f0);
    fn_824420B0(iVar1 + 0x1dc);
    if (*(int *)(iVar1 + 0x1c4) != 0) {
      fn_8265CA20();
    }
    *(undefined4 *)(iVar1 + 0x1c4) = 0;
    *(undefined4 *)(iVar1 + 0x1c8) = 0;
    *(undefined4 *)(iVar1 + 0x1cc) = 0;
    fn_8265CA20(iVar1);
  }
  return;
}

