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
extern unsigned int *auStack_48;
extern int fn_82524E38();
extern int fn_82526260();
extern int fn_8265C990();
extern int fn_82A1C098();
extern int fn_82A1DD38();
extern int fn_82A1F238();
extern int fn_82A81CC0();
extern int fn_82A81CD0();
extern int fn_82A81D40();
extern int memset();
extern float lbl_82191EAC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825250E0(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_48 [8];
  
  if ((*(int *)(param_1 + 0x1c0) == 1) && (*(int *)(param_1 + 0x1c4) != 0x3e5)) {
    iVar2 = fn_82A1C098(param_1 + 0x1c4);
    if ((iVar2 < 0) || (iVar2 = fn_82A81CD0(param_1 + 0x1e0,0xffffffff8327f258), iVar2 != 0))
    {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      fn_82A1DD38(param_1 + 0x1e0,
                        (ulonglong)
                        (uint)(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                                   lbl_82191EAC) * -1000 + -0x7cd99ef8,1000);
    }
    iVar2 = param_1 + 0x1e0;
    fn_82A1DD38(param_1 + 0x5c8,iVar2,1000);
    if ((*(int *)(param_1 + 0x9cc) != 0) || (*(int *)(param_1 + 0x9f0) != 0)) {
      cVar3 = fn_82A81CC0(iVar2);
      uVar5 = 0;
      *(uint *)(param_1 + 0x9b0) = (uint)(cVar3 == '\x01');
      if (cVar3 == '\x01') {
        if (*(int *)(param_1 + 0x9cc) != 0) {
          iVar6 = 0;
          do {
            piVar4 = (int *)(iVar6 + *(int *)(param_1 + 0x9d8));
            iVar1 = *piVar4;
            if (iVar1 != 0) {
              fn_82A81D40(iVar1,piVar4[1],0,auStack_48,iVar2);
            }
            uVar5 = uVar5 + 1;
            iVar6 = iVar6 + 8;
          } while (uVar5 < *(uint *)(param_1 + 0x9cc));
        }
      }
      else if (*(int *)(param_1 + 0x9f0) != 0) {
        iVar6 = 0;
        do {
          piVar4 = (int *)(iVar6 + *(int *)(param_1 + 0x9fc));
          iVar1 = *piVar4;
          if (iVar1 != 0) {
            fn_82A81D40(iVar1,piVar4[1],0,auStack_48,iVar2);
          }
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 8;
        } while (uVar5 < *(uint *)(param_1 + 0x9f0));
      }
    }
                    /* WARNING: Subroutine does not return */
    memset(param_1 + 0x1c4,0,0x1c);
  }
  if ((*(int *)(param_1 + 0x1c0) != 2) || (*(int *)(param_1 + 0x1c4) == 0x3e5)) {
    if ((*(int *)(param_1 + 0x1c0) == 3) &&
       ((*(int *)(param_1 + 0x9bc) == 0 && (*(int *)(param_1 + 0xb68) != 0)))) {
      fn_82524E38(param_1);
      *(undefined4 *)(param_1 + 0x9bc) = 1;
    }
    return;
  }
  iVar2 = fn_82A1C098(param_1 + 0x1c4);
  if ((-1 < iVar2) || (*(int *)(param_1 + 0xa14) != 0)) {
                    /* WARNING: Subroutine does not return */
    memset(param_1 + 0x1c4,0,0x1c);
  }
  if (*(int *)(param_1 + 0xa20) == 0) {
LAB_8252533c:
    if (*(int *)(param_1 + 0xa18) != 0) {
      fn_8265C990(*(int *)(param_1 + 0xa18),0x21006000);
      *(undefined4 *)(param_1 + 0xa18) = 0;
    }
LAB_82525358:
    if ((*(int *)(param_1 + 0xa20) != 0) || (*(int *)(param_1 + 0xa1c) == 0)) goto LAB_82525378;
    fn_82A1F238();
  }
  else {
    if ((*(int *)(param_1 + 0xa18) == 0) || (*(int *)(param_1 + 0xa1c) == 0)) {
      if (*(int *)(param_1 + 0xa20) == 0) goto LAB_8252533c;
      goto LAB_82525358;
    }
    iVar2 = param_1 + 0x1e0;
    if (*(int *)(param_1 + 0x9b4) != 1) {
      iVar2 = param_1 + 0x5c8;
    }
    fn_82526260(iVar2);
    *(undefined4 *)(param_1 + 0xa18) = 0;
  }
  *(undefined4 *)(param_1 + 0xa1c) = 0;
LAB_82525378:
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x1e0,0,1000);
}

