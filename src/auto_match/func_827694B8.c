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
extern int fn_827663E0();
extern int fn_82766690();


int fn_827694B8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar5 = (undefined4 *)(param_1 + 8);
  if ((uint)(*(int **)(param_1 + 8))[1] < param_2 + 0xfU) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (*(char *)(**(int **)(param_1 + 8) + param_2) != '\0') {
      do {
        iVar1 = iVar1 + 1;
      } while (*(char *)(*(int *)*puVar5 + iVar1 + param_2) != '\0');
    }
    iVar1 = iVar1 + 1;
    fn_827663E0((int *)(param_1 + 0x1c),iVar1,0);
    *(int *)(param_1 + 0x20) = iVar1;
    uVar4 = 0;
    if (iVar1 != 0) {
      do {
        uVar2 = uVar4 + 1;
        *(undefined1 *)(*(int *)(param_1 + 0x1c) + uVar4) =
             *(undefined1 *)(*(int *)*puVar5 + uVar4 + param_2);
        uVar4 = uVar2;
      } while (uVar2 < *(uint *)(param_1 + 0x20));
    }
    iVar1 = *(int *)(param_1 + 0x20) + param_2;
    *(uint *)(param_1 + 0x28) =
         (uint)CONCAT11(((undefined1 *)(*(int *)*puVar5 + iVar1))[1],
                        *(undefined1 *)(*(int *)*puVar5 + iVar1));
    puVar3 = (undefined1 *)(*(int *)*puVar5 + iVar1 + 2);
    *(uint *)(param_1 + 0x2c) = (uint)CONCAT11(puVar3[1],*puVar3);
    puVar3 = (undefined1 *)(*(int *)*puVar5 + iVar1 + 4);
    *(float *)(param_1 + 0x30) = (float)(longlong)CONCAT11(puVar3[1],*puVar3);
    puVar3 = (undefined1 *)(*(int *)*puVar5 + iVar1 + 6);
    *(float *)(param_1 + 0x34) = (float)(longlong)CONCAT11(puVar3[1],*puVar3);
    puVar3 = (undefined1 *)(*(int *)*puVar5 + iVar1 + 8);
    *(float *)(param_1 + 0x38) = (float)(longlong)CONCAT11(puVar3[1],*puVar3);
    puVar3 = (undefined1 *)(*(int *)*puVar5 + iVar1 + 10);
    *(uint *)(param_1 + 0xc) = CONCAT31(CONCAT21(CONCAT11(puVar3[3],puVar3[2]),puVar3[1]),*puVar3);
    puVar3 = (undefined1 *)(*(int *)*puVar5 + iVar1 + 0xe);
    iVar6 = CONCAT31(CONCAT21(CONCAT11(puVar3[3],puVar3[2]),puVar3[1]),*puVar3) + iVar1 + 0xe + 4;
    *(int *)(param_1 + 0x10) = iVar6;
    iVar6 = *(int *)(param_1 + 0xc) * 8 + iVar6;
    iVar1 = fn_82766690(puVar5,iVar6,param_1 + 0x14);
    iVar1 = iVar1 + iVar6;
    *(int *)(param_1 + 0x18) = iVar1;
    iVar1 = (*(int *)(param_1 + 0x14) * 6 - param_2) + iVar1;
  }
  return iVar1;
}

