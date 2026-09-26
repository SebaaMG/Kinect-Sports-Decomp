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
extern int fn_83006180();
extern int fn_83006278();


undefined8 fn_83000EC8(int param_1,int *param_2,int *param_3,char param_4)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  
  cVar1 = *(char *)*param_2;
  uVar10 = 1;
  *param_2 = (int)((char *)*param_2 + 1);
  if (param_4 == '\0') {
    *(byte *)(param_1 + 0x3e) = (cVar1 != '\0') << 7 | *(byte *)(param_1 + 0x3e) & 0x7f;
  }
  pbVar4 = (byte *)*param_2;
  uVar9 = (ulonglong)*pbVar4;
  *param_2 = (int)(pbVar4 + 1);
  if (uVar9 != 0) {
    bVar2 = pbVar4[1];
    *param_2 = (int)(pbVar4 + 2);
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      puVar5 = (undefined1 *)*param_2;
      uVar3 = *puVar5;
      *param_2 = (int)(puVar5 + 1);
      iVar6 = *(int *)(puVar5 + 1);
      *param_2 = (int)(puVar5 + 5);
      cVar1 = puVar5[5];
      *param_2 = (int)(puVar5 + 6);
      fn_83006180(param_1,uVar3,cVar1 != '\0');
      piVar8 = (int *)*param_2 + 1;
      iVar7 = *(int *)*param_2;
      *param_2 = (int)piVar8;
      if ((iVar6 != -1) && (param_4 == '\0')) {
        uVar10 = fn_83005FA8(param_1,iVar6,uVar3,piVar8,iVar7);
      }
      *param_2 = *param_2 + iVar7;
      *param_3 = *param_3 - iVar7;
    }
    if (param_4 == '\0') {
      fn_83006278(param_1,bVar2,0xffffffffffffffff);
    }
  }
  return uVar10;
}

