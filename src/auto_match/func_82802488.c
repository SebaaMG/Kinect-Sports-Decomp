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
extern int fn_828114A8();
extern int fn_82811500();


void fn_82802488(int param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar8 = 0;
  lVar6 = 0;
  uVar7 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar5 = 0;
    do {
      if (param_4 == 0) {
        uVar4 = 0;
        if (*(short *)(param_2 + 10) != 0) {
          do {
            uVar2 = (*(uint *)((uVar8 >> 3 & 0x1ffffffc) + param_2 + 0x10) & 3 << (uVar8 & 0x1f)) >>
                    (uVar8 & 0x1f);
            if ((uVar2 == 2) || (uVar2 == 3)) {
              fn_828114A8(param_3,lVar6);
            }
            else {
              fn_82811500(param_3,lVar6);
            }
            uVar4 = uVar4 + 1;
            uVar8 = uVar8 + 2;
            lVar6 = lVar6 + 1;
          } while (uVar4 < *(ushort *)(param_2 + 10));
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 0x1c);
        bVar3 = false;
        if ((iVar1 == 0) || ((ulonglong)*(ushort *)(iVar5 + iVar1) == (uVar7 & 0xffffffff))) {
          iVar5 = iVar5 + 2;
          uVar4 = 0;
          if (*(ushort *)(param_2 + 10) != 0) {
            do {
              uVar2 = (*(uint *)((uVar8 >> 3 & 0x1ffffffc) + param_2 + 0x10) & 3 << (uVar8 & 0x1f))
                      >> (uVar8 & 0x1f);
              if ((uVar2 == 2) || (uVar2 == 3)) {
                bVar3 = true;
              }
              uVar4 = uVar4 + 1;
              uVar8 = uVar8 + 2;
            } while (uVar4 < *(ushort *)(param_2 + 10));
            if (bVar3) {
              fn_828114A8(param_3,uVar7);
              goto LAB_828025d8;
            }
          }
        }
        if (iVar1 == 0) {
          fn_82811500(param_3,uVar7);
        }
      }
LAB_828025d8:
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 8));
  }
  return;
}

