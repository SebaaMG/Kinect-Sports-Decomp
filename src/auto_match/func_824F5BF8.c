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
extern int fn_82631578();
extern int fn_82631920();
extern int fn_8263C7F0();
extern int fn_8263E9F0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;


void fn_824F5BF8(double param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  iVar1 = lbl_8320A898;
  if (*(char *)(param_2 + 0x18) == '\0') {
    if (*(char *)(param_2 + 0x19) == '\0') {
      return;
    }
    if (param_1 < (double)(*(float *)(param_2 + 0x1c) + *(float *)(param_2 + 0x20))) {
      *(undefined4 *)(lbl_8320A898 + 0x2ed8) = 0;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x80000;
      iVar1 = lbl_8320A898;
      *(uint *)(lbl_8320A898 + 0x2948) = *(uint *)(lbl_8320A898 + 0x2948) & 0xfffffff8;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40;
      fn_82631920(lbl_8320A898,*(undefined4 *)(param_2 + 0xc));
                    /* WARNING: Subroutine does not return */
      fn_82631578(lbl_8320A898,*(undefined4 *)(param_2 + 0x10));
    }
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x14) == 0) {
      uVar2 = fn_8263C7F0(lbl_8326B430,lbl_8326B434,1,1,0,0x18280186,0,3);
      *(undefined4 *)(param_2 + 0x14) = uVar2;
    }
    fn_8263E9F0((double)lbl_821CA460,lbl_8320A898,0,0,0,0,*(undefined4 *)(param_2 + 0x14),0,0)
    ;
    uVar3 = 1;
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  *(undefined1 *)(param_2 + 0x19) = uVar3;
  return;
}

