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
extern int fn_82358810();
extern int fn_82417F58();
extern int fn_82419C70();
extern int fn_8288B760();
extern unsigned int lbl_832975B0;


undefined8 fn_82360D00(int param_1,int param_2)

{
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar1;
  
  iVar2 = fn_82417F58(*(undefined4 *)(param_1 + 0x2b20));
  if (param_2 == 0) {
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x168) == 0) {
        uVar4 = *(uint *)(iVar2 + 0x16c);
      }
      else {
        uVar4 = fn_8288B760();
        uVar4 = uVar4 & 0xff;
      }
      if (((uVar4 != 0) && (*(int *)(iVar2 + 0x24) != 0)) &&
         ((iVar3 = fn_82419C70(*(undefined4 *)(param_1 + 0x2b20)), iVar3 != 0 ||
          ((*(int *)(iVar2 + 0x1a0) != 0 || (*(int *)(iVar2 + 0x1e0) != 0)))))) {
        uVar1 = fn_82358810(param_1,0);
        return uVar1;
      }
    }
  }
  else {
    iVar3 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar3 = fn_82250A18();
    }
    if (((*(char *)(iVar3 + 4) == '\0') || (*(int *)(iVar2 + 0x398) == 0)) && (iVar2 != 0)) {
      if (*(int *)(iVar2 + 0x168) == 0) {
        uVar4 = *(uint *)(iVar2 + 0x16c);
      }
      else {
        uVar4 = fn_8288B760();
        uVar4 = uVar4 & 0xff;
      }
      if ((uVar4 != 0) && (*(int *)(iVar2 + 0x24) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

