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
extern int fn_826022E0();
extern int fn_82627340();
extern int fn_826279F0();
extern int fn_82627BB0();
extern int fn_82627DB0();
extern unsigned int lbl_821CC160;


void fn_82602620(double param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_3 + 0x220);
  if (*(short *)(param_3 + 10) == -1) {
    iVar3 = 0;
  }
  else {
    iVar2 = *(short *)(param_3 + 10) * 0x1d0 + param_3;
    iVar3 = iVar2 + 0x2a0;
    *(undefined2 *)(param_3 + 10) = *(undefined2 *)(iVar2 + 0x342);
    *(undefined2 *)(iVar2 + 0x342) = 0xfffe;
    *(int *)(iVar2 + 0x464) = param_3;
    *(undefined4 *)(iVar2 + 0x468) = uVar1;
    *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 1;
    fn_826279F0(iVar3);
    if (*(uint *)(param_3 + 0x254) < 4) {
      fn_82627BB0(param_3,iVar3);
    }
  }
  if (((iVar3 != 0) && (fn_826022E0(param_3,iVar3,param_2), (double)lbl_821CC160 < param_1)) &&
     (iVar2 = fn_82627340(param_1,param_2,iVar3), iVar2 == 0)) {
    fn_82627DB0(param_3,iVar3);
  }
  return;
}

