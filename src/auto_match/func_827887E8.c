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


ulonglong fn_827887E8(int *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  iVar1 = *(int *)(*param_1 + 0xc);
  uVar2 = *(uint *)(*(int *)((*param_3 >> 6 & 0x3fffffc) + iVar1) + (*param_3 & 0xff) * 0xc + 8);
  uVar3 = *(uint *)(*(int *)((*param_2 >> 6 & 0x3fffffc) + iVar1) + (*param_2 & 0xff) * 0xc + 8);
  uVar4 = *(uint *)(*(int *)((param_3[1] >> 6 & 0x3fffffc) + iVar1) + (param_3[1] & 0xff) * 0xc + 8)
  ;
  uVar5 = *(uint *)(*(int *)((param_2[1] >> 6 & 0x3fffffc) + iVar1) + (param_2[1] & 0xff) * 0xc + 8)
  ;
  if (uVar3 == uVar2) {
    if (uVar5 == uVar4) {
      iVar1 = *(int *)(*param_1 + 0xc);
      uVar2 = *(uint *)(*(int *)((param_3[2] >> 6 & 0x3fffffc) + iVar1) + (param_3[2] & 0xff) * 0xc
                       + 8);
      uVar3 = *(uint *)(*(int *)((param_2[2] >> 6 & 0x3fffffc) + iVar1) + (param_2[2] & 0xff) * 0xc
                       + 8);
      bVar6 = uVar2 <= uVar3;
      uVar2 = uVar2 ^ uVar3;
    }
    else {
      bVar6 = uVar4 <= uVar5;
      uVar2 = uVar4 ^ uVar5;
    }
  }
  else {
    bVar6 = uVar2 <= uVar3;
    uVar2 = uVar2 ^ uVar3;
  }
  return ((~(ulonglong)uVar2 & 0xffffffff) >> 0x1f) + (ulonglong)bVar6 & 1;
}

