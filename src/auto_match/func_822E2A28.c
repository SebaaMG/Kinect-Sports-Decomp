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
extern int fn_8236FB68();
extern int fn_82508078();
extern unsigned int lbl_831CD48C;
extern unsigned int lbl_832975B0;


undefined8 fn_822E2A28(double param_1,int param_2)

{
  int iVar3;
  longlong lVar1;
  undefined8 uVar2;
  
  *(float *)(param_2 + 0x40) = (float)(param_1 + (double)*(float *)(param_2 + 0x40));
  iVar3 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar3 = fn_82250A18();
  }
  if ((*(char *)(iVar3 + 4) == '\0') || (*(float *)(param_2 + 0x40) <= lbl_831CD48C)) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x2f8) = 1;
    iVar3 = *(int *)(param_2 + 0x10);
    lVar1 = fn_8236FB68(5);
    if (lVar1 != 0) {
      fn_82508078(*(undefined4 *)(iVar3 + 0xa4),lVar1,0);
    }
    uVar2 = 1;
  }
  return uVar2;
}

