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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))
extern int fn_826C8C70();
extern int fn_826E7800();


int fn_826E8858(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint uVar10;
  
  *(undefined1 *)(param_1 + 0x15) = 0;
  lVar9 = ((ulonglong)*(uint *)(param_1 + 0x34) - (ulonglong)*(uint *)(param_1 + 0x30)) +
          (ulonglong)*(uint *)(param_1 + 0x2c);
  if ((int)(*(uint *)(param_1 + 0x30) - *(uint *)(param_1 + 0x2c)) < 2) {
    fn_826E7800(param_1,2);
  }
  iVar7 = *(int *)(param_1 + 0x2c) + 2;
  puVar8 = (undefined1 *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
  uVar1 = puVar8[1];
  uVar2 = *puVar8;
  *(int *)(param_1 + 0x2c) = iVar7;
  uVar6 = CONCAT11(uVar1,uVar2);
  uVar10 = uVar6 & 0x3f;
  iVar5 = (int)(uint)uVar6 >> 6;
  if (uVar10 == 0x3f) {
    *(undefined1 *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - iVar7 < 4) {
      fn_826E7800(param_1,4);
    }
    puVar8 = (undefined1 *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar8[3];
    uVar2 = puVar8[2];
    uVar3 = puVar8[1];
    uVar4 = *puVar8;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
    uVar10 = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
  }
  param_2[1] = (int)lVar9;
  *param_2 = iVar5;
  param_2[2] = uVar10;
  param_2[3] = (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
    fn_826C8C70(param_1,0xffffffff8200d6e0,iVar5,uVar10,lVar9);
  }
  *(uint *)((*(int *)(param_1 + 0x28) + 8) * 4 + param_1) =
       (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x2c) + uVar10;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return iVar5;
}

