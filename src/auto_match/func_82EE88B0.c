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
extern int fn_82A1E650();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E665B0();
extern int fn_82EE8160();
extern int fn_82EE8230();
extern int fn_82EE82A0();
extern int fn_82EE8420();
extern U64 storeWordConditionalIndexed();


longlong fn_82EE88B0(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  char in_RESERVE;
  byte bVar9;
  
  fn_82E50CB8(param_1 + 0x5c);
  uVar4 = fn_82E50BE8(0x6c,0,0,0,0);
  if ((uVar4 & 0xffffffff) == 0) {
    lVar8 = -0x7ff8fff2;
  }
  else {
    puVar5 = (undefined4 *)fn_82EE8160(uVar4,param_1);
    iVar3 = (int)param_1;
    lVar8 = fn_82EE8230(puVar5,*(undefined4 *)(iVar3 + 0xa0));
    if (lVar8 < 0) {
      (**(code **)*puVar5)(puVar5,0);
      fn_82E4FE40(puVar5);
    }
    else {
      if (*(int *)(iVar3 + 0xac) != 0) {
        lVar8 = fn_82E665B0(puVar5[4]);
        if (lVar8 < 0) goto LAB_82ee89f8;
      }
      bVar9 = (lVar8 == 0) << 1;
      if (*(int *)(iVar3 + 0xa4) != 0) {
        fn_82EE82A0(puVar5);
      }
      puVar1 = *(undefined4 **)(iVar3 + 0x58);
      puVar5[1] = iVar3 + 0x54;
      puVar5[2] = puVar1;
      *puVar1 = puVar5 + 1;
      *(undefined4 **)(iVar3 + 0x58) = puVar5 + 1;
      *(int *)(iVar3 + 0x50) = *(int *)(iVar3 + 0x50) + 1;
      do {
        puVar7 = (uint *)(param_1 + 0x98);
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((ulonglong)*puVar7 + 1,0,param_1 + 0x98);
          *puVar7 = uVar2;
          bVar9 = 2;
        }
      } while (!(bool)(bVar9 >> 1 & 1));
      iVar6 = fn_82A1E650(*(undefined4 *)(*(int *)(iVar3 + 0xa0) + 0x44),0xffffffffffffffff);
      if (iVar6 == 0) {
        if (*(int *)(iVar3 + 0xb0) == 1) {
          lVar8 = fn_82EE8420(puVar5,1,0);
        }
      }
      else {
        lVar8 = -0x7fffbffb;
      }
    }
  }
LAB_82ee89f8:
  fn_82E50F10(param_1 + 0x5c);
  return lVar8;
}

