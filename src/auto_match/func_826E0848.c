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
extern int fn_8267BE38();
extern int fn_826A9280();
extern int fn_826D64E0();
extern int fn_826DF4E8();
extern int fn_826E7408();
extern unsigned int lbl_831E7E64;


void fn_826E0848(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x314);
  if (iVar2 == 0) {
    iVar2 = param_1 + 0x28;
  }
  iVar1 = fn_826E7408(iVar2);
  iVar2 = *(int *)(param_1 + 0x314);
  if (iVar2 == 0) {
    iVar2 = param_1 + 0x28;
  }
  iVar1 = ((*(int *)(iVar2 + 0x30) - *(int *)(iVar2 + 0x34)) - *(int *)(iVar2 + 0x2c)) + iVar1;
  iVar2 = fn_8267B890(lbl_831E7E64,iVar1 + 1,0);
  if (iVar2 != 0) {
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        uVar3 = fn_826DF4E8(param_1);
        *(undefined1 *)(iVar4 + iVar2) = uVar3;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    fn_826D64E0(*(undefined4 *)(param_1 + 0x20),iVar2,iVar1);
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    *(undefined1 *)(iVar1 + iVar2) = 0;
    fn_826A9280(param_1 + 0x14,0xffffffff8200cc08,iVar2);
    fn_8267BE38(iVar2);
  }
  return;
}

