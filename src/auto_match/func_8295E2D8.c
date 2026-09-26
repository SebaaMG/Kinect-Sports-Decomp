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
extern unsigned int *auStack_28;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern int fn_82975B00();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_8295E2D8(int *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uStack_30;
  uint uStack_2c;
  undefined4 auStack_28 [4];
  
  iVar3 = param_1[0x41];
  if ((param_1[0x1b] & 0x100U) == 0) {
    if (*(int *)(iVar3 + 4) == 4) goto LAB_8295e37c;
    uVar5 = 0xffffffff82038374;
  }
  else {
    uVar1 = *(uint *)(iVar3 + 4);
    uVar7 = 0;
    if (uVar1 != 0) {
      iVar6 = 0;
      do {
        if (*(uint *)(*(int *)(*(int *)(*(int *)(iVar3 + 8) + iVar6) * 4 + param_1[5]) + 0x10) !=
            uVar7) {
          uVar5 = 0xffffffff820383b4;
          goto LAB_8295e4c8;
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 4;
      } while (uVar7 < uVar1);
    }
    if (uVar1 == 3) {
LAB_8295e37c:
      iVar6 = *(int *)(**(int **)(iVar3 + 8) * 4 + param_1[5]);
      if (*(int *)(iVar6 + 4) == param_1[0x20]) {
        iVar3 = (**(code **)(*param_1 + 0x15c))(param_1,iVar6,&uStack_2c,&uStack_30);
        if (-1 < iVar3) {
          uVar8 = (ulonglong)uStack_30;
LAB_8295e3f8:
          uVar2 = (ulonglong)uStack_2c;
          uVar5 = fn_8295D0A8(param_1,0x41);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          uVar5 = (**(code **)(*param_1 + 0x150))
                            (param_1,*(undefined4 *)
                                      (**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),auStack_28
                            );
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          uVar5 = (**(code **)(*param_1 + 0x138))
                            (param_1,((uVar8 & 7) << 0x14 | 0x800000 | uVar8 & 0x18) << 8 |
                                     uVar2 & 0x7ff,0xf0000,auStack_28[0]);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          uVar5 = (**(code **)(*param_1 + 0x134))(param_1);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          uVar5 = fn_829548C8(param_1);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          return 0;
        }
        uVar4 = 0;
        uVar5 = 0xffffffff82037a98;
        goto LAB_8295e4cc;
      }
      if (*(int *)(iVar6 + 4) == param_1[0x22]) {
        uVar8 = 0;
        uStack_30 = 0;
        uStack_2c = *(uint *)(iVar6 + 0xc);
        goto LAB_8295e3f8;
      }
      uVar5 = 0xffffffff82038340;
    }
    else {
      uVar5 = 0xffffffff820383d8;
    }
  }
LAB_8295e4c8:
  uVar4 = *(undefined4 *)(iVar3 + 0x3c);
LAB_8295e4cc:
  fn_82975B00(param_1,uVar4,0x1194,uVar5);
  return 0xffffffff80004005;
}

