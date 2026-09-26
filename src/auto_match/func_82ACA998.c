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
extern int fn_82AC8910();
extern int fn_82ADD198();
extern int fn_82ADD590();
extern int fn_82ADD600();


uint fn_82ACA998(int param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = 0;
  if ((*(int *)(param_2 + 0x58) != 0) &&
     (uVar8 = (uint)*(ushort *)(param_3 + 0x12), uVar8 < *(uint *)(param_1 + 0x29c))) {
    iVar7 = uVar8 << 2;
    do {
      iVar4 = *(int *)(iVar7 + *(int *)(param_1 + 0x2c4));
      if (iVar4 != 0) {
        if (iVar4 != param_3) {
          return uVar6;
        }
        uVar1 = fn_82ADD198(param_1,uVar8);
        uVar2 = fn_82AC8910(*(undefined4 *)(param_2 + 0x58),0,*(undefined4 *)(param_1 + 0x2a0));
        if ((uVar2 & 0xffffffff) <= (ulonglong)(*(int *)(param_1 + 0x29c) - 1)) {
          do {
            uVar3 = fn_82ADD198(param_1,uVar2);
            if ((uVar3 & 0xffffffff) == (uVar1 & 0xffffffff)) {
              iVar4 = fn_82ADD600(param_1,uVar1);
              uVar5 = fn_82ADD590(param_1,uVar1);
              uVar6 = 1 << ((*(uint *)(iVar4 + 0xc0) >> 0xe & 0xff) >> ((uVar5 & 0x1f) << 1) & 3) |
                      uVar6;
              break;
            }
            uVar5 = *(int *)(param_1 + 0x29c) - 1;
            if ((uVar2 & 0xffffffff) == (ulonglong)uVar5) {
              uVar2 = 0xffffffffffffffff;
            }
            else {
              uVar2 = fn_82AC8910(*(undefined4 *)(param_2 + 0x58),uVar2 + 1,
                                   *(undefined4 *)(param_1 + 0x2a0));
            }
          } while ((uVar2 & 0xffffffff) <= (ulonglong)uVar5);
        }
      }
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
    } while (uVar8 < *(uint *)(param_1 + 0x29c));
  }
  return uVar6;
}

