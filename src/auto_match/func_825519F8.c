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
extern unsigned int *auStack_60;
extern int fn_82F68CC0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_825519F8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
    while (puVar5 = puVar4 + 6, puVar5 != param_2) {
      fn_82F68CC0(auStack_60,puVar5,0x18);
      uVar3 = uStack_4c;
      uVar2 = uStack_50;
      uVar1 = param_1[4];
      if (uStack_50 == uVar1) {
        bVar8 = param_1[5] <= uStack_4c;
        uVar1 = param_1[5] ^ uStack_4c;
      }
      else {
        bVar8 = uVar1 <= uStack_50;
        uVar1 = uVar1 ^ uStack_50;
      }
      puVar7 = puVar5;
      if ((((~(ulonglong)uVar1 & 0xffffffff) >> 0x1f) + (ulonglong)bVar8 & 1) == 0) {
        puVar7 = puVar4 + 10;
        puVar4 = puVar5;
        while( true ) {
          uVar1 = puVar7[-6];
          if (uVar2 == uVar1) {
            bVar8 = puVar7[-5] <= uVar3;
            uVar1 = puVar7[-5] ^ uVar3;
          }
          else {
            bVar8 = uVar1 <= uVar2;
            uVar1 = uVar1 ^ uVar2;
          }
          if ((((~(ulonglong)uVar1 & 0xffffffff) >> 0x1f) + (ulonglong)bVar8 & 1) == 0) break;
          puVar6 = puVar7 + -10;
          fn_82F68CC0(puVar4,puVar6,0x18);
          puVar7 = puVar7 + -6;
          puVar4 = puVar6;
        }
      }
      else {
        while (puVar4 = param_1, param_1 != puVar7) {
          fn_82F68CC0(puVar7,puVar7 + -6,0x18);
          puVar7 = puVar7 + -6;
        }
      }
      fn_82F68CC0(puVar4,auStack_60,0x18);
      puVar4 = puVar5;
    }
  }
  return;
}

