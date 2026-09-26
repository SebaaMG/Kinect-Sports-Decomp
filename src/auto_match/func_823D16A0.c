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
extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_822EFBF0();
extern int fn_8236C890();
extern int fn_823831D8();
extern int fn_823D17A0();
extern int fn_8288B760();
extern unsigned int iStack_1c;
extern unsigned int lbl_832975B0;


void fn_823D16A0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if (*(char *)(iVar1 + 4) == '\0') {
    fn_823D17A0(param_1);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x84);
    iVar3 = *(int *)(param_1 + 0x9a0);
    if ((iVar1 != 0) && (iVar3 != 0)) {
      if (*(int *)(iVar3 + 0x168) == 0) {
        uVar2 = *(uint *)(iVar3 + 0x16c);
      }
      else {
        uVar2 = fn_8288B760();
        uVar2 = uVar2 & 0xff;
      }
      if ((uVar2 != 0) && (iVar3 = fn_8236C890(param_1), iVar3 == 0)) {
        if (((*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x54)) ||
            (*(int *)(param_1 + 0x58) == 0)) && (*(int *)(param_1 + 0x54) != 0x11)) {
          puVar4 = (undefined4 *)fn_822EFBF0(auStack_20,iVar1);
          fn_823831D8((ulonglong)*(uint *)*puVar4 + 0x5b0);
          if (iStack_1c != 0) {
            fn_822315A0();
          }
        }
      }
    }
  }
  return;
}

