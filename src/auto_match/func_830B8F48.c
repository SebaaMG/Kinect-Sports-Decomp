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
extern unsigned int lbl_831769B8;


void fn_830B8F48(undefined8 param_1,int param_2)

{
  uint uVar2;
  ulonglong uVar1;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  
  uVar4 = 0;
  uVar2 = (uint)(*(ushort *)(param_2 + 0x34) >> 1);
  uVar1 = (ulonglong)(*(ushort *)(param_2 + 0x32) >> 1);
  if (uVar2 != 0) {
    puVar7 = (undefined1 *)(*(int *)(param_2 + 0x524) + -1);
    do {
      iVar6 = 0;
      if (uVar1 != 0) {
        uVar8 = uVar1;
        do {
          bVar3 = iVar6 == 0;
          iVar6 = iVar6 + 1;
          uVar5 = *(ulonglong *)
                   (&lbl_831769B8 + ((uint)bVar3 + ((uint)((ulonglong)LZCOUNT(uVar4) >> 4) & 2)) * 8
                   ) & 0xf0f0f0f0f0f;
          puVar7[1] = (char)uVar5;
          puVar7[2] = (char)(uVar5 >> 8);
          puVar7[3] = (char)(uVar5 >> 0x10);
          puVar7[4] = (char)(uVar5 >> 0x18);
          puVar7[5] = (char)(uVar5 >> 0x20);
          puVar7 = puVar7 + 6;
          *puVar7 = (char)(uVar5 >> 0x28);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}

