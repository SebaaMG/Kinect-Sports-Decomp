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
extern int fn_82773B90();


void fn_827B6CF8(int *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  iVar4 = *param_1;
  if (iVar4 != 0) {
    uVar6 = ((uint)(byte)(*(byte *)((int)param_2 + 0xb) ^ *(byte *)((int)param_2 + 10) ^
                          *(byte *)(param_2 + 2) ^ *(byte *)((int)param_2 + 7) ^
                         *(byte *)((int)param_2 + 6)) ^ (uint)*(ushort *)(param_2 + 1) ^
             *param_2 >> 6 ^ (uint)*(byte *)((int)param_2 + 9) << 1 ^ *param_2) &
            *(uint *)(iVar4 + 4);
    iVar3 = uVar6 * 0x18 + iVar4;
    if ((*(int *)(iVar3 + 8) != -2) && (*(uint *)(iVar3 + 0xc) == uVar6)) {
      uVar1 = uVar6;
      uVar5 = 0xffffffff;
      while( true ) {
        uVar7 = uVar1;
        puVar8 = (uint *)(iVar3 + 8);
        if (*(uint *)(iVar3 + 0xc) == uVar6) {
          cVar2 = fn_82773B90((undefined4 *)(iVar3 + 0x10),param_2);
          if (cVar2 != '\0') {
            if (uVar6 == uVar7) {
              uVar6 = *puVar8;
              if (uVar6 != 0xffffffff) {
                *puVar8 = 0xfffffffe;
                iVar4 = uVar6 * 0x18 + iVar4;
                *puVar8 = *(uint *)(iVar4 + 8);
                *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
                *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
                *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
                *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar4 + 0x18);
                *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
                puVar8 = (uint *)(iVar4 + 8);
              }
            }
            else {
              *(uint *)(uVar5 * 0x18 + iVar4 + 8) = *puVar8;
            }
            *puVar8 = 0xfffffffe;
            *(int *)*param_1 = *(int *)*param_1 + -1;
            return;
          }
        }
        uVar1 = *puVar8;
        if (uVar1 == 0xffffffff) break;
        iVar3 = uVar1 * 0x18 + iVar4;
        uVar5 = uVar7;
      }
      return;
    }
  }
  return;
}

