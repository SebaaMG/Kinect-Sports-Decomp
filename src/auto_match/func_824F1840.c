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
extern int fn_824F0B80();
extern int fn_82522D98();
extern int fn_8265C9E0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_824F1840(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar2 = *(int *)(param_1 + 0x14);
    uVar1 = (uint)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                  (float)(longlong)*(int *)(param_1 + 0x10));
    uVar4 = uVar1;
    if (*(char *)(iVar2 + uVar1) == '\0') {
      iVar5 = uVar1 * 1000 + *(int *)(param_1 + 0x18);
      *(undefined1 *)(iVar2 + uVar1) = 1;
    }
    else {
      do {
        uVar4 = uVar4 + 1;
        if (*(uint *)(param_1 + 0x10) <= uVar4) goto LAB_824f1918;
      } while (*(char *)(iVar2 + uVar4) != '\0');
      iVar5 = *(int *)(param_1 + 0x18);
      *(undefined1 *)(iVar2 + uVar4) = 1;
      iVar5 = uVar4 * 1000 + iVar5;
      if (iVar5 == 0) {
LAB_824f1918:
        uVar4 = 0;
        if (uVar1 != 0) {
          do {
            if (*(char *)(*(int *)(param_1 + 0x14) + uVar4) == '\0') {
              iVar5 = *(int *)(param_1 + 0x18);
              *(undefined1 *)(*(int *)(param_1 + 0x14) + uVar4) = 1;
              iVar5 = uVar4 * 1000 + iVar5;
              break;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar1);
        }
      }
    }
  }
  uVar3 = fn_8265C9E0(0xc0);
  if ((uVar3 & 0xffffffff) != 0) {
    fn_824F0B80(uVar3,param_3,iVar5);
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(8);
}

