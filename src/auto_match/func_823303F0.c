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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_822315A0();
extern int fn_822C5B18();
extern int fn_8232C8B8();
extern int fn_823309A8();
extern int fn_82331168();
extern int fn_824CCD80();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83280B98;
extern unsigned int uStack_80;


undefined4 *
fn_823303F0(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
             undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  float fVar2;
  int iVar4;
  undefined8 uVar3;
  undefined4 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  undefined8 uStack_80;
  
  uVar8 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  fn_822C5B18(param_1 + 4,param_8);
  param_1[10] = param_4;
  param_1[0xc] = 1;
  param_1[0xb] = param_5;
  param_1[0xd] = 1;
  fn_82F68CC0(param_1 + 0xe,param_2,0x9c);
  param_1[0x35] = param_3;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  fVar2 = lbl_821CC160;
  dVar9 = (double)lbl_821CC160;
  param_1[0x3a] = param_6;
  param_1[0x3d] = fVar2;
  param_1[0x3b] = 0;
  param_1[0x3c] = param_7;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  iVar4 = fn_824CCD80(param_1[0xb]);
  iVar4 = (&lbl_83280B98)[iVar4];
  param_1[0x36] = (float)dVar9;
  uVar7 = *(uint *)(iVar4 + 0xbc);
  param_1[0x38] = (float)dVar9;
  param_1[0x37] = (float)uVar7;
  uStack_80 = (ulonglong)*(uint *)(iVar4 + 0xc0);
  param_1[0x39] = (float)uStack_80;
  uVar6 = (ulonglong)*(uint *)(param_4 + 0x78c) - 1;
  uVar6 = ((uVar6 & 0xffffffff) >> 0x1f) - 1 & uVar6;
  if (5 < (int)uVar6) {
    uVar6 = 6;
  }
  uVar7 = 0;
  iVar4 = (int)((uVar6 & 0xffffffff) << 3) + param_2;
  if (*(int *)(iVar4 + 100) != 0) {
    do {
      uVar1 = *(undefined4 *)(param_1[10] + 0x2c);
      uVar3 = fn_824CCD80(param_1[0xb]);
      puVar5 = (undefined4 *)fn_8265C9E0(0xe0);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = &lbl_821A8D8C;
        puVar5[1] = 1;
        puVar5[2] = 1;
        if (puVar5 + 4 != (undefined4 *)0x0) {
          fn_82331168(puVar5 + 4,param_1 + 0x10,param_1[0x35],param_1 + 0x15,param_1 + 0x1b,
                            param_1 + 0x36,uVar3,uVar1);
        }
      }
      uStack_80 = CONCAT44(puVar5 + 4,puVar5);
      fn_8232C8B8(param_1,&uStack_80);
      if ((((U64)(uStack_80) >> 32) & 0xFFFFFFFF) != 0) {
        fn_822315A0();
      }
      uVar7 = uVar7 + 1;
      param_1[0x40] = param_1[0x40] + 1;
    } while (uVar7 < *(uint *)(iVar4 + 100));
  }
  iVar4 = (int)((uVar6 + 0xd & 0xffffffff) << 3);
  if (*(int *)(iVar4 + param_2) != 0) {
    do {
      fn_823309A8(param_1,1);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(iVar4 + param_2));
  }
  return param_1;
}

