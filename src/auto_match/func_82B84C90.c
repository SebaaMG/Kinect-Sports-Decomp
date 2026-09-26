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
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AC6560();
extern int fn_82AE7308();
extern int fn_82B83FE0();
extern int fn_82B840F8();


undefined8
fn_82B84C90(int param_1,int param_2,uint param_3,char param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  
  puVar8 = (uint *)(param_2 * 0x28 + *(int *)(param_1 + 0xc));
  if (puVar8[7] == 0) {
    fn_82AE7308();
  }
  uVar4 = (ulonglong)(*puVar8 >> 3) & 0x3fff;
  if (param_4 != '\0') {
    param_3 = *(uint *)(param_3 * 8 + puVar8[7]) >> 4 & 0x3fff;
  }
  uVar5 = 0xffffffff;
  uVar6 = 0;
  lVar7 = 0;
  uVar3 = 0;
  if ((*puVar8 >> 3 & 0x3fff) != 0) {
    iVar2 = 0;
    do {
      if ((*(uint *)(iVar2 + puVar8[7]) >> 4 & 0x3fff) == param_3) {
        lVar7 = lVar7 + 1;
        uVar6 = *(uint *)(iVar2 + puVar8[7]) & 0xf | uVar6;
        if (uVar3 < uVar5) {
          uVar5 = uVar3;
        }
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    if (uVar6 != 0) {
      uVar1 = fn_82ABDD90(param_1,param_5,(int)param_5 == 0x68,lVar7);
      uVar1 = fn_82AC6560(param_1,uVar1,0x23);
      fn_82B840F8(uVar1,param_1,param_5,param_6,param_2,param_3,uVar6,uVar5);
      fn_82B83FE0(param_1,uVar1,param_7);
      uVar5 = puVar8[1] >> 4 & 7;
      if (uVar5 == 0) {
        uVar5 = *(uint *)(param_1 + 0x28) | 0x20000;
      }
      else {
        if (uVar5 != 1) {
          return uVar1;
        }
        uVar5 = *(uint *)(param_1 + 0x28) | 1;
      }
      *(uint *)(param_1 + 0x28) = uVar5;
      return uVar1;
    }
  }
  if (param_4 == '\0') {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c0);
}

