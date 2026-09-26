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
extern int fn_822CEE40();
extern int fn_822CEFA0();
extern int fn_822CF260();
extern int fn_8288B760();
extern unsigned int lbl_821CA460;


uint fn_822CF078(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x168) == 0) {
    uVar1 = *(uint *)(param_1 + 0x16c);
  }
  else {
    uVar1 = fn_8288B760();
    uVar1 = uVar1 & 0xff;
  }
  if ((uVar1 == 0) && (iVar2 = *(int *)(param_1 + 0x168), iVar2 != 0)) {
    if (*(char *)(iVar2 + 0xfc) != '\0') {
      return *(uint *)(iVar2 + 0xf8);
    }
  }
  else if ((lbl_821CA460 <= *(float *)(param_1 + 0x264)) &&
          (((iVar2 = *(int *)(param_1 + 0x1c0), iVar2 == 0 ||
            (*(int *)(*(int *)(*(int *)(iVar2 + 0xd4) + 0x18) + 0xc) == 0)) &&
           (*(int *)(iVar2 + 0x204) == 0)))) {
    if (*(int *)(*(int *)(param_1 + 0x110) + 0x18) == 2) {
      return -(uint)(*(int *)(param_1 + 0x270) != 0) & 0x20;
    }
    iVar2 = fn_822CEE40(param_1);
    if (iVar2 == 0) {
      return 2;
    }
    iVar2 = *(int *)(iVar2 + 0x254);
    iVar3 = fn_822CF260(param_1,0);
    if (iVar3 == 0) {
      iVar2 = fn_822CEFA0(param_1);
      return (iVar2 == 0) + 1;
    }
    if (iVar2 == 7) {
      return 0x10;
    }
    return 8;
  }
  return 0;
}

