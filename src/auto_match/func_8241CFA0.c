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
extern int fn_82250A18();
extern int fn_82359928();
extern int fn_82417D18();
extern int fn_82417F58();
extern int fn_8241EE50();
extern int fn_8288B760();
extern unsigned int lbl_832975B0;


void fn_8241CFA0(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = fn_82417F58();
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != 0)) &&
     ((*(int *)(iVar2 + 0x1a0) != 0 || (*(int *)(iVar2 + 0x1e0) != 0)))) {
    if (*(int *)(iVar2 + 0x168) == 0) {
      uVar3 = *(uint *)(iVar2 + 0x16c);
    }
    else {
      uVar3 = fn_8288B760();
      uVar3 = uVar3 & 0xff;
    }
    if (uVar3 != 0) {
      iVar4 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar4 = fn_82250A18();
      }
      if (*(char *)(iVar4 + 4) == '\0') {
        fn_8241EE50(param_1,iVar2);
        iVar2 = *param_1;
        bVar1 = *(int *)(iVar2 + 0xcb8) == 0;
        if (!bVar1) {
          fn_82417D18(param_1,1,0,0);
          iVar2 = *param_1;
        }
        fn_82359928(iVar2,bVar1);
      }
    }
  }
  return;
}

