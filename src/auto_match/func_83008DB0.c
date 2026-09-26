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
extern int fn_8300FA30();
extern int fn_8300FCF0();
extern int fn_8302BD60();
extern int fn_83036370();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E4;


undefined8 fn_83008DB0(int param_1)

{
  ulonglong uVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 2;
  uVar1 = fn_82FA5060(lbl_831BC768,0x1c);
  if (((uVar1 & 0xffffffff) != 0) &&
     (piVar2 = (int *)fn_83036370(uVar1,0x50100,0), piVar2 != (int *)0x0)) {
    fn_8302BD60(piVar2,*(undefined4 *)(param_1 + 0x54),0,0);
    (**(code **)(*piVar2 + 0x14))(piVar2,*(undefined4 *)(param_1 + 0xc));
    uVar1 = fn_82FA5060(lbl_831BC768,0x38);
    if (((uVar1 & 0xffffffff) != 0) && (iVar3 = fn_8300FA30(uVar1,0), iVar3 != 0)) {
      *(int **)(iVar3 + 8) = piVar2;
      *(undefined8 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x28) = 0;
      fn_8300FCF0(lbl_832642E4,iVar3);
      uVar4 = 1;
    }
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return uVar4;
}

