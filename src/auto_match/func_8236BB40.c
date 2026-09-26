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
extern int fn_82308E08();
extern int fn_82369160();
extern int fn_823CC7A0();
extern int fn_8288B760();
extern unsigned int lbl_832975B0;


undefined8 fn_8236BB40(int param_1)

{
  bool bVar1;
  char cVar4;
  uint uVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x58) != 0x11) && (*(int *)(param_1 + 0x54) != 0x11)) &&
     (cVar4 = fn_82308E08(param_1 + 0xae8), cVar4 != '\0')) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x9a0);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x24) != 0)) {
    if (*(int *)(iVar3 + 0x168) == 0) {
      uVar2 = *(uint *)(iVar3 + 0x16c);
    }
    else {
      uVar2 = fn_8288B760();
      uVar2 = uVar2 & 0xff;
    }
    if (uVar2 != 0) {
      iVar3 = fn_82369160(param_1,*(undefined4 *)(iVar3 + 0x2c));
      if ((iVar3 == 2) || (bVar1 = false, iVar3 == 1)) {
        bVar1 = true;
      }
      if (!bVar1) {
        iVar3 = lbl_832975B0;
        if (lbl_832975B0 == 0) {
          iVar3 = fn_82250A18();
        }
        if (*(char *)(iVar3 + 4) == '\0') {
          return 0;
        }
      }
                    /* WARNING: Subroutine does not return */
      fn_823CC7A0();
    }
  }
  return 0;
}

