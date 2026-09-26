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
extern int fn_82ABE6D0();
extern int fn_82AE91E8();
extern int fn_82AE9600();


void fn_82ACB4F0(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  
  uVar8 = 0;
  if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    do {
      uVar1 = uVar1 & 0xfffffffe;
      piVar10 = (int *)(uVar1 - 0x28);
      if (piVar10 == (int *)0x0) {
        return;
      }
      uVar3 = *(uint *)(uVar1 - 0x20) >> 7 & 0x7f;
      if (uVar3 != 0x7e) {
        uVar9 = uVar8 + 1;
        if ((uVar3 < 0x20) || (bVar4 = true, 0x52 < uVar3)) {
          bVar4 = false;
        }
        if ((bVar4) && ((*(uint *)(uVar1 - 4) & 1) == 0)) {
          uVar3 = *(uint *)(uVar1 - 4) & 0xfffffffe;
          iVar11 = uVar3 - 0x28;
          if (iVar11 != 0) {
            uVar3 = *(uint *)(uVar3 - 0x20) >> 7 & 0x7f;
            if ((uVar3 == 0) || (bVar4 = true, 0x1f < uVar3)) {
              bVar4 = false;
            }
            if (bVar4) {
              cVar7 = '\0';
              piVar5 = (int *)fn_82ABE6D0(iVar11);
              if (piVar10 == piVar5) {
                cVar7 = '\x01';
              }
              else if ((param_3 != '\0') && (cVar6 = fn_82AE91E8(iVar11), cVar6 != '\0')) {
                for (iVar2 = *piVar10; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
                  if (*(int *)(iVar2 + 0xc) == iVar11) {
                    bVar4 = true;
                    goto LAB_82acb5f4;
                  }
                }
                bVar4 = false;
LAB_82acb5f4:
                if (!bVar4) {
                  cVar7 = fn_82AE9600(param_1,iVar11,piVar10);
                }
              }
              if (cVar7 != '\0') {
                uVar9 = uVar8;
              }
            }
          }
        }
        uVar3 = *(uint *)(uVar1 - 0x14);
        *(uint *)(uVar1 - 0x18) = *(uint *)(uVar1 - 0x18) | 0x1000000;
        *(uint *)(uVar1 - 0x14) = uVar8 & 0x1fff | uVar3 & 0xffffe000;
        uVar8 = uVar9;
      }
      uVar1 = *(uint *)(uVar1 - 4);
    } while ((uVar1 & 1) == 0);
  }
  return;
}

