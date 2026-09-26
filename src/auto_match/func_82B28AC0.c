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
extern unsigned int *auStack_68;
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82B25248();
extern int fn_82B82D28();
extern int fn_82B84350();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82B28AC0(int param_1,uint param_2,uint *param_3,int param_4,uint param_5,ulonglong param_6
                  ,ulonglong param_7)

{
  uint uVar1;
  uint uVar3;
  undefined8 uVar2;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uStack_70;
  uint uStack_6c;
  uint auStack_68 [26];
  
  fn_82B25248(param_1,param_3[3],*(undefined4 *)(param_1 + 0x28c));
  uVar5 = *param_3;
  uVar12 = (ulonglong)(uVar5 >> 0x19) & 7;
  if (uVar12 == 1) {
    puVar9 = (uint *)(param_3[3] + 4);
    for (puVar8 = (uint *)*puVar9; puVar8 != param_3; puVar8 = (uint *)puVar8[2]) {
      puVar9 = puVar8 + 2;
    }
    *puVar9 = param_3[2];
    param_3[2] = *(uint *)(param_5 + 4);
    *(uint **)(param_5 + 4) = param_3;
    param_3[3] = param_5;
    *param_3 = (uint)((param_6 & 0xffffffff) << 5) & 0x360 | 0x1c80 | *param_3 & 0xfffffc80 |
               (uint)param_7 & 0x1f;
  }
  else {
    uVar3 = fn_82B84350(param_1,*(undefined4 *)(param_2 + 0x1c),0,uVar12);
    uVar1 = uVar3 & 0xfffffffe;
    puVar8 = (uint *)((param_2 & 0xfffffffe) + 0x24);
    uVar11 = 0;
    *(uint *)(uVar1 + 0x24) = *puVar8;
    *(uint *)(*puVar8 & 0xfffffffe) = uVar1;
    *(uint *)(uVar1 + 0x28) = param_2 & 0xfffffffe;
    *puVar8 = uVar1 + 0x28;
    if ((uVar5 >> 0x19 & 7) != 0) {
      puVar10 = (undefined4 *)(uVar3 + 0x2c);
      do {
        uVar6 = param_6;
        uVar7 = param_7;
        uVar5 = param_5;
        if ((int)uVar11 != param_4) {
          fn_82B82D28(param_3,uVar11,auStack_68,&uStack_6c,&uStack_70,0,0,0);
          uVar6 = (ulonglong)uStack_6c;
          uVar7 = (ulonglong)uStack_70;
          uVar5 = auStack_68[0];
        }
        uVar2 = fn_82AD1918(param_1,uVar5,uVar6,uVar7);
        uVar4 = fn_82AD1978(uVar3,uVar2);
        uVar11 = uVar11 + 1;
        *puVar10 = uVar4;
        puVar10 = puVar10 + 1;
      } while ((uVar11 & 0xffffffff) < uVar12);
    }
    puVar9 = (uint *)(param_3[3] + 4);
    for (puVar8 = (uint *)*puVar9; puVar8 != param_3; puVar8 = (uint *)puVar8[2]) {
      puVar9 = puVar8 + 2;
    }
    *puVar9 = param_3[2];
    param_3[2] = *(uint *)(uVar3 + 4);
    *(uint **)(uVar3 + 4) = param_3;
    param_3[3] = uVar3;
    *param_3 = *param_3 & 0xffffe000 | 0x1c80;
    fn_82B25248(param_1,uVar3,*(undefined4 *)(param_1 + 0x28c));
  }
  return;
}

