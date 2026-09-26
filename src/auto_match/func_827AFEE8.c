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
extern int fn_827AFDE0();


void fn_827AFEE8(int *param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  int iVar10;
  
  uVar8 = (ulonglong)(uint)param_1[1];
  bVar2 = false;
  uVar3 = param_2[1] + *param_2;
  if (uVar8 != 0) {
    iVar10 = 0;
    do {
      uVar6 = *param_2;
      puVar9 = (uint *)(iVar10 + *param_1);
      uVar1 = *puVar9;
      uVar7 = puVar9[1];
      uVar5 = uVar1 + uVar7;
      if ((uVar6 < uVar1) || (uVar5 < uVar6)) {
        if ((uVar6 < uVar1) && (uVar1 < uVar3)) {
          bVar2 = true;
          uVar4 = *puVar9 - (uVar1 - uVar6);
          uVar7 = uVar7 + (uVar1 - uVar6);
          *puVar9 = uVar4;
          puVar9[3] = uVar4;
          puVar9[1] = uVar7;
          puVar9[4] = uVar7;
          *(undefined1 *)(param_1 + 6) = 0;
          *(undefined1 *)((int)param_1 + 0x19) = 0;
          if (uVar5 <= uVar3) {
            uVar6 = (puVar9[1] - uVar5) + uVar3;
            puVar9[1] = uVar6;
            puVar9[4] = uVar6;
          }
        }
      }
      else if (uVar5 < uVar3) {
        bVar2 = true;
        uVar6 = (uVar7 - uVar5) + uVar3;
        puVar9[1] = uVar6;
        puVar9[4] = uVar6;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)((int)param_1 + 0x19) = 0;
      }
      iVar10 = iVar10 + 0x28;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (!bVar2) {
    fn_827AFDE0();
  }
  return;
}

