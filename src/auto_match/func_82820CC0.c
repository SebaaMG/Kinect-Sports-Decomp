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
extern int fn_82815268();
extern int fn_82820068();
extern int fn_82820158();
extern int fn_82820810();
extern int fn_82820BC0();
extern int fn_82F68CC0();
extern int (*lbl_8320A5C8)();


undefined8 fn_82820CC0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar4;
  undefined8 uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  iVar4 = fn_82820158(iVar1);
  if (iVar4 == 0) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x8000;
  }
  else {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x4000;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    fn_82820810(iVar1);
    uVar6 = (ulonglong)*(uint *)(param_2 + 4);
    piVar9 = (int *)(param_2 + 0x20);
    uVar2 = *(uint *)(iVar1 + 0x28);
    uVar5 = ((ulonglong)uVar2 - (uVar6 + 0x3a & ~(uVar6 - 1))) + 0x3b;
    uVar5 = (((uVar5 & 0xffffffff) >> 0x1f) - 1) + (ulonglong)(uVar5 == 0) & uVar5;
    lVar8 = uVar2 - uVar5;
    iVar4 = fn_82820068(param_2,(((uVar6 + uVar5) - 1 & ~(uVar6 - 1)) - (ulonglong)uVar2) +
                                  (ulonglong)*(uint *)(iVar1 + 0x24) + lVar8 + 0x48,param_2,piVar9);
    if (iVar4 == 0) {
      *(int *)(*piVar9 + 0x3c) = (int)lVar8;
      iVar4 = *piVar9;
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 0x10) = 0;
      if ((*(uint *)(iVar4 + 0x10) & 2) != 0) {
        *(undefined4 *)(param_2 + 0x10) = 2;
      }
      if ((*(uint *)(iVar4 + 0x10) & 0x1000) != 0) {
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x1000;
      }
      uVar2 = *(uint *)(*piVar9 + 0x1c);
      fn_82F68CC0((ulonglong)uVar2,iVar1,0x3b);
      lVar7 = (ulonglong)uVar2 + 0x3b;
      if (*(char *)(iVar1 + 0x3a) != '\0') {
        if ((ulonglong)*(uint *)(iVar1 + 0x28) < (ulonglong)*(uint *)(iVar1 + 0x24)) {
          lVar7 = ((ulonglong)*(uint *)(iVar1 + 0x24) - (ulonglong)*(uint *)(iVar1 + 0x28)) + lVar7
                  + 0x40;
        }
      }
      fn_82F68CC0(lVar7,iVar1 + 0x3b,lVar8);
      iVar1 = *(int *)(iVar4 + 8);
      if ((int)uVar5 < 1) {
        uVar3 = 0;
      }
      else {
        *(int *)(iVar4 + 8) = iVar1 + (int)uVar5;
        if ((*(uint *)(param_2 + 0x10) & 2) != 0) {
          (**(code **)(param_1 + 4))(*(undefined4 *)(iVar4 + 0x18));
          return 0;
        }
        uVar3 = (*lbl_8320A5C8)(*(undefined4 *)(param_2 + 0x18),iVar1,
                                (*(uint *)(param_2 + 4) + uVar5) - 1 &
                                ~((ulonglong)*(uint *)(param_2 + 4) - 1),lVar7 + lVar8);
      }
      uVar3 = fn_82820BC0(param_1,*piVar9,uVar3);
      return uVar3;
    }
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x2000;
  }
  uVar3 = fn_82815268(param_1,param_2,*(undefined4 *)(param_2 + 0x14));
  return uVar3;
}

