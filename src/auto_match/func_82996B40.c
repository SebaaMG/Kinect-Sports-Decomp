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
extern int fn_82975BB8();


undefined8 fn_82996B40(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1 + 0x4c);
  if (uVar8 < *(uint *)(param_1 + 0x228)) {
    piVar7 = (int *)(*(int *)(param_1 + 0x234) + uVar8 * 4);
    do {
      puVar1 = (uint *)*piVar7;
      if (((puVar1 != (uint *)0x0) && (*puVar1 != 0)) &&
         ((iVar2 = *(int *)(param_1 + 0x14),
          *(int *)(*(int *)(*(int *)puVar1[4] * 4 + iVar2) + 4) != *(int *)(param_1 + 0x84) ||
          ((*puVar1 & 0xfff00000) != 0x10000000)))) {
        uVar5 = 0;
        if (puVar1[1] != 0) {
          piVar6 = (int *)puVar1[2];
          do {
            iVar3 = *(int *)(*piVar6 * 4 + iVar2);
            puVar4 = (uint *)(iVar3 + 0x3c);
            for (; *(int *)(iVar3 + 0x38) != -1;
                iVar3 = *(int *)(*(int *)(iVar3 + 0x38) * 4 + iVar2)) {
            }
            if ((*(char *)(iVar3 + 0x6f) == '\x03') &&
               (((*(uint *)(iVar3 + 0x3c) | *puVar4) & 0x200) == 0)) {
              fn_82975BB8(param_1,puVar1[0xf],0x1263,0xffffffff82050d50,
                            *(undefined1 *)(param_1 + 0xcb));
              return 0;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (uVar5 < puVar1[1]);
        }
      }
      uVar8 = uVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x228));
  }
  return 0;
}

