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
extern unsigned int *auStack_20;
extern int fn_825AC9E8();
extern int fn_8288B760();
extern int fn_8288F1E8();


undefined8 fn_825AC888(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar4;
  longlong lVar3;
  undefined4 auStack_20 [2];
  
  iVar1 = fn_8288F1E8(*(undefined4 *)(param_1 + 0x6c),param_1 + 0x84);
  if (iVar1 != 0) {
    auStack_20[0] = *(undefined4 *)(param_1 + 0x80);
    cVar2 = fn_8288B760(iVar1);
    if (((cVar2 == '\0') &&
        (fn_825AC9E8(iVar1 + 0xfc,auStack_20), 10 < *(uint *)(iVar1 + 0x10c))) &&
       ((ulonglong)*(uint *)(iVar1 + 0x10c) != 0)) {
      uVar4 = *(int *)(iVar1 + 0x108) + 1;
      *(uint *)(iVar1 + 0x108) = uVar4;
      if ((uint)(*(int *)(iVar1 + 0x104) << 2) <= uVar4) {
        *(undefined4 *)(iVar1 + 0x108) = 0;
      }
      lVar3 = (ulonglong)*(uint *)(iVar1 + 0x10c) - 1;
      *(int *)(iVar1 + 0x10c) = (int)lVar3;
      if (lVar3 == 0) {
        *(undefined4 *)(iVar1 + 0x108) = 0;
      }
    }
  }
  return 1;
}

