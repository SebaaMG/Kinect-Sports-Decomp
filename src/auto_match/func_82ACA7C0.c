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
extern int fn_82ACA548();
extern int fn_82ACA638();


void fn_82ACA7C0(undefined8 param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  
  puVar6 = *(uint **)(param_2 + 4);
  for (puVar7 = puVar6; puVar7 != (uint *)0x0; puVar7 = (uint *)puVar7[2]) {
    if ((*puVar7 & 0xe000000) != 0) {
      bVar2 = true;
      if ((*puVar7 >> 0x1e & 1) != 0) goto LAB_82aca804;
      break;
    }
  }
  bVar2 = false;
LAB_82aca804:
  if ((!bVar2) || (cVar4 = fn_82ACA548(param_2), cVar4 != '\0')) goto LAB_82aca908;
  uVar8 = 0xe4;
  cVar4 = fn_82ACA638(param_2);
  if (cVar4 == '\0') {
    uVar1 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
    if ((uVar1 < 0x20) || (bVar2 = true, 0x52 < uVar1)) {
      bVar2 = false;
    }
    if (bVar2) goto LAB_82aca858;
  }
  else {
LAB_82aca858:
    uVar1 = *(uint *)(param_2 + 8);
    uVar3 = uVar1 >> 1 & 0xf;
    uVar5 = (1 << (uVar1 >> 0xe & 7)) - 1;
    if (uVar3 != uVar5) {
      uVar8 = (uint)(byte)"SV_Depth"[uVar3 + 0xb];
      *(uint *)(param_2 + 8) = uVar5 * 2 & 0x1e | uVar1 & 0xffffffe1;
    }
  }
  for (; puVar6 != (uint *)0x0; puVar6 = (uint *)puVar6[2]) {
    uVar1 = *puVar6;
    if ((uVar1 & 0xe000000) != 0) {
      if (uVar8 != 0xe4) {
        *puVar6 = ((((uVar8 >> (uVar1 >> 10 & 6) & 3) << 2 | uVar8 >> (uVar1 >> 8 & 6) & 3) << 2 |
                   uVar8 >> (uVar1 >> 6 & 6) & 3) << 2 | uVar8 >> (uVar1 >> 4 & 6) & 3) << 5 |
                  uVar1 & 0xffffe01f;
      }
      *puVar6 = *puVar6 & 0xbe001fff;
    }
  }
LAB_82aca908:
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) & 0xfe001fff;
  return;
}

