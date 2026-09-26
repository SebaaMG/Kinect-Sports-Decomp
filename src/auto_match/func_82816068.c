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
extern unsigned int *auStack_70;
extern int fn_82814E30();
extern int fn_82815268();
extern int fn_82815E50();
extern int fn_82820290();
extern int fn_828220E0();
extern int (*lbl_8320A5C8)();
extern int (*lbl_8320A5CC)();


undefined8 fn_82816068(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint auStack_70 [28];
  
  iVar1 = *(int *)(param_2 + 0x20);
  uVar5 = 0;
  iVar4 = fn_828220E0(param_2);
  if (iVar4 == 0) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
  }
  else {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 1;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar4 = fn_82814E30(param_2);
    if (iVar4 == 0) {
      uVar6 = 0;
      *(undefined4 *)(param_2 + 0x6c) = 0;
      do {
        if (*(int *)((uVar6 + 5) * 0x14 + *(int *)(param_2 + 0x1c)) != 0) {
          *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
        }
        uVar6 = uVar6 + 1 & 0xff;
      } while (uVar6 < 2);
      if (*(int *)(param_2 + 0x6c) != 0) {
        uVar6 = 0;
        do {
          iVar7 = uVar6 * 0x14 + *(int *)(param_2 + 0x1c);
          iVar4 = *(int *)(iVar7 + 100);
          if (iVar4 != 0) {
            if (((*(uint *)(param_2 + 0x10) & 0x1000) == 0) ||
               (bVar3 = true, *(uint *)(iVar7 + 0x58) <= *(uint *)(iVar7 + 0x68))) {
              bVar3 = false;
            }
            uVar2 = *(undefined4 *)(param_2 + 8);
            uVar8 = (ulonglong)*(uint *)(iVar7 + 0x60) + (ulonglong)*(uint *)(iVar7 + 0x5c);
            if (iVar1 != 0) {
              fn_82820290(iVar1,uVar6 + 1,auStack_70);
              uVar8 = auStack_70[0] + uVar8;
            }
            if (((ulonglong)*(uint *)(iVar7 + 0x68) < (ulonglong)*(uint *)(iVar7 + 0x58)) &&
               (!bVar3)) {
              uVar8 = ((ulonglong)*(uint *)(iVar7 + 0x58) - (ulonglong)*(uint *)(iVar7 + 0x68)) +
                      uVar8 + 0x43 & 0xfffffffc;
            }
            *(int *)(param_2 + 8) = iVar4 + *(int *)(param_2 + 8);
            if ((*(uint *)(param_2 + 0x10) & 2) == 0) {
              if (!bVar3) {
                uVar5 = (*lbl_8320A5C8)(*(undefined4 *)(param_2 + 0x18),uVar2,iVar4,uVar8);
              }
              else {
                uVar5 = (*lbl_8320A5CC)();
              }
              uVar5 = fn_82815E50(param_1,param_2,uVar5);
            }
            else if (!bVar3) {
              (**(code **)(param_1 + 4))();
            }
            else {
              (**(code **)(param_1 + 8))();
            }
          }
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < 2);
        return uVar5;
      }
      *(undefined4 *)(param_2 + 0x6c) = 1;
      uVar5 = fn_82815E50(param_1,param_2,0);
      return uVar5;
    }
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 8;
  }
  uVar5 = fn_82815268(param_1,param_2,*(undefined4 *)(param_2 + 0x14));
  return uVar5;
}

