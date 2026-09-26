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
extern int fn_829BC7D8();


void fn_829BD2A8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar1 = param_1[0x70];
  if ((((param_1[0x65] != 0) || (param_1[0x66] != 0x3f)) || (param_1[0x67] != 0)) ||
     (param_1[0x68] != 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x7a;
    (**(code **)(*param_1 + 4))(param_1,0xffffffffffffffff);
  }
  iVar7 = 0;
  if (0 < param_1[0x53]) {
    puVar6 = (undefined4 *)(iVar1 + 0x10);
    piVar4 = param_1 + 0x53;
    do {
      piVar4 = piVar4 + 1;
      iVar2 = *(int *)(*piVar4 + 0x14);
      iVar3 = *(int *)(*piVar4 + 0x18);
      fn_829BC7D8(param_1,1,iVar2,(iVar2 + 10) * 4 + iVar1);
      fn_829BC7D8(param_1,0,iVar3,(iVar3 + 0xe) * 4 + iVar1);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = 0;
    } while (iVar7 < param_1[0x53]);
  }
  iVar7 = 0;
  if (0 < param_1[0x5a]) {
    puVar5 = (uint *)(iVar1 + 0xc0);
    piVar4 = param_1 + 0x5b;
    do {
      iVar2 = param_1[*piVar4 + 0x54];
      puVar5[-0x1e] = *(uint *)((*(int *)(iVar2 + 0x14) + 10) * 4 + iVar1);
      puVar5[-0x14] = *(uint *)((*(int *)(iVar2 + 0x18) + 0xe) * 4 + iVar1);
      if (*(int *)(iVar2 + 0x30) == 0) {
        *puVar5 = 0;
        puVar5[-10] = 0;
      }
      else {
        puVar5[-10] = 1;
        *puVar5 = (int)((~(ulonglong)*(uint *)(iVar2 + 0x24) & 0xffffffff) >> 0x1f) +
                  (uint)((ulonglong)*(uint *)(iVar2 + 0x24) < 2) & 1;
      }
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar7 < param_1[0x5a]);
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x24) = param_1[0x46];
  return;
}

