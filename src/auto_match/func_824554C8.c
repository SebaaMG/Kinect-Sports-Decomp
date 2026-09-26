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
extern int fn_824556F0();
extern int fn_8254E7D8();
extern unsigned int lbl_82192734;
extern unsigned int lbl_82195530;
extern unsigned int lbl_821CA460;


void fn_824554C8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    fn_824556F0(param_1,param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x90) = 1;
  }
  if (*(int *)(*(int *)(param_1 + 0x7c) + 4) != 0) {
    fn_8254E7D8((double)lbl_82195530,(double)*(float *)(param_1 + 0x6c));
  }
  iVar1 = *(int *)(param_1 + 0x7c);
  if (*(int *)(iVar1 + 4) != 0) {
    *(undefined4 *)(iVar1 + 0x1d4) = 0;
    uVar2 = lbl_82192734;
    *(undefined4 *)(iVar1 + 0x1cc) = 0;
    uVar3 = lbl_821CA460;
    *(undefined4 *)(iVar1 + 0x1d0) = uVar2;
    *(undefined4 *)(iVar1 + 0x1e0) = uVar3;
  }
  return;
}

