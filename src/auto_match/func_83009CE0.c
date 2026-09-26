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
extern int fn_83005FA8();
extern int fn_83006278();
extern unsigned int lbl_83264300;


undefined8 fn_83009CE0(undefined8 param_1,int *param_2,int *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  undefined8 uVar10;
  
  pbVar3 = (byte *)*param_2;
  uVar10 = 1;
  uVar8 = (ulonglong)*pbVar3;
  *param_2 = (int)(pbVar3 + 1);
  if (uVar8 != 0) {
    bVar1 = pbVar3[1];
    *param_2 = (int)(pbVar3 + 2);
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      puVar4 = (undefined1 *)*param_2;
      uVar2 = *puVar4;
      *param_2 = (int)(puVar4 + 1);
      iVar5 = *(int *)(puVar4 + 1);
      *param_2 = (int)(puVar4 + 5);
      if (iVar5 == -2) {
        *(char *)(lbl_83264300 + 0x94) = '\x01' - ((bVar1 & 0x1f) == 0 && (bVar1 & 0x11) == 0);
      }
      piVar9 = (int *)(*param_2 + 1);
      iVar7 = *param_2 + 5;
      *param_2 = (int)piVar9;
      iVar6 = *piVar9;
      *param_2 = iVar7;
      if (iVar5 != -1) {
        uVar10 = fn_83005FA8(param_1,iVar5,uVar2,iVar7,iVar6);
      }
      *param_2 = *param_2 + iVar6;
      *param_3 = *param_3 - iVar6;
    }
    fn_83006278(param_1,bVar1,0xffffffffffffffff);
  }
  return uVar10;
}

