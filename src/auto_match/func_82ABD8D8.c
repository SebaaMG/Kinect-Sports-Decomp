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
extern unsigned int *auStack_4b0;
extern unsigned int *auStack_4c0;
extern int fn_82631400();
extern int fn_82636E10();
extern int fn_82ABC838();
extern int fn_82ABC940();
extern int fn_82ABD6A8();
extern int fn_82ABD710();
extern unsigned int uStack_4b8;


undefined8 fn_82ABD8D8(uint *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 auStack_4c0 [8];
  uint uStack_4b8;
  undefined1 auStack_4b0 [1200];
  
  fn_82631400(param_1,auStack_4c0);
  uVar1 = *param_1 & 1;
  iVar3 = 0;
  if ((*param_1 & 1) == 0) {
    iVar3 = param_1[(param_2 + 3) * 2] + (int)param_1;
  }
  puVar8 = (uint *)(param_1[(param_2 + 3) * 2] + (int)param_1);
  uVar5 = puVar8[2];
  if (uVar1 == 0) {
    uVar6 = uVar5 >> 0x14 & 0xf;
    puVar4 = (uint *)(iVar3 + 0x20);
    uVar2 = puVar8[5] >> 5 & 0x1f;
    uVar7 = 0;
    if (uVar2 != 0) {
      do {
        uVar9 = *puVar4 >> 8 & 0xf;
        if (uVar6 <= uVar9) {
          uVar6 = uVar9;
        }
        uVar7 = uVar7 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar7 < uVar2);
    }
    uVar5 = uVar6 << 0x14 | uVar5 & 0xff0fffff;
  }
  fn_82ABC838(auStack_4b0,uVar1,uVar5,puVar8[3],(ulonglong)*puVar8 + (ulonglong)uStack_4b8,
                puVar8[1],0,0);
  fn_82636E10(param_1,auStack_4b0,0xffffffff82abcec8);
  fn_82ABD710(param_1,auStack_4b0,0x11,0xffffffff82abcf88);
  fn_82ABD6A8(auStack_4b0);
  fn_82ABC940(auStack_4b0,param_3);
  return 0;
}

