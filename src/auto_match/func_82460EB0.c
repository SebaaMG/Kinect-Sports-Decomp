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
extern int fn_824EF658();
extern int fn_8266F580();
extern unsigned int lbl_832765BC;


void fn_82460EB0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (lbl_832765BC != 0) {
    iVar1 = *(int *)(lbl_832765BC + 0x38);
    if ((*(int *)(*(int *)(iVar1 + 4) + 0x10) == 1) &&
       (*(int *)(*(int *)(iVar1 + 0x444) + 0x10) != 0)) {
      fn_8266F580(*(undefined4 *)(*(int *)(iVar1 + 0x444) + 4));
      fn_824EF658();
    }
    iVar1 = *(int *)(iVar1 + 4);
    if ((*(int *)(iVar1 + 0x28) == 1) && (*(int *)(iVar1 + 0x10) != 1)) {
      uVar2 = 0;
    }
    else {
      if (*(int *)(iVar1 + 0x28) == 1) {
        return;
      }
      uVar2 = 1;
      if (*(int *)(iVar1 + 0x10) != 1) {
        return;
      }
    }
    *(undefined4 *)(iVar1 + 0xd58) = uVar2;
  }
  return;
}

