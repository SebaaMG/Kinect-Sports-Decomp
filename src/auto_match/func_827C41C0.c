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
extern int fn_827C36D8();


void fn_827C41C0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar1 = param_1[0x66];
  if ((((param_1[0x5b] != 0) || (param_1[0x5c] != 0x3f)) || (param_1[0x5d] != 0)) ||
     (param_1[0x5e] != 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x7a;
    (**(code **)(*param_1 + 4))(param_1,0xffffffffffffffff);
  }
  iVar6 = 0;
  if (0 < param_1[0x49]) {
    puVar5 = (undefined4 *)(iVar1 + 0x10);
    piVar4 = param_1 + 0x49;
    do {
      piVar4 = piVar4 + 1;
      iVar2 = *(int *)(*piVar4 + 0x14);
      iVar3 = *(int *)(*piVar4 + 0x18);
      fn_827C36D8(param_1,1,iVar2,(iVar2 + 10) * 4 + iVar1);
      fn_827C36D8(param_1,0,iVar3,(iVar3 + 0xe) * 4 + iVar1);
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
    } while (iVar6 < param_1[0x49]);
  }
  iVar6 = 0;
  if (0 < param_1[0x50]) {
    puVar5 = (undefined4 *)(iVar1 + 0x70);
    piVar4 = param_1 + 0x51;
    do {
      iVar2 = param_1[*piVar4 + 0x4a];
      puVar5[-10] = *(undefined4 *)((*(int *)(iVar2 + 0x14) + 10) * 4 + iVar1);
      *puVar5 = *(undefined4 *)((*(int *)(iVar2 + 0x18) + 0xe) * 4 + iVar1);
      if (*(char *)(iVar2 + 0x30) == '\0') {
        *(undefined1 *)(iVar1 + 0xa2 + iVar6) = 0;
        *(undefined1 *)(iVar1 + 0x98 + iVar6) = 0;
      }
      else {
        *(undefined1 *)(iVar1 + 0x98 + iVar6) = 1;
        *(byte *)(iVar1 + 0xa2 + iVar6) =
             (char)((~(ulonglong)*(uint *)(iVar2 + 0x24) & 0xffffffff) >> 0x1f) +
             ((ulonglong)*(uint *)(iVar2 + 0x24) < 2) & 1;
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < param_1[0x50]);
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined1 *)(iVar1 + 8) = 0;
  *(int *)(iVar1 + 0x24) = param_1[0x3f];
  return;
}

