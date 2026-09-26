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
extern unsigned int *auStack_90;
extern int fn_826367A8();
extern int fn_82636938();
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


undefined8
fn_82636C98(undefined4 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulonglong param_7,code *param_8)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 in_stack_00000054;
  uint auStack_90 [4];
  undefined4 uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  
  uVar1 = 0;
  if ((param_7 & 8) == 0) {
    auStack_90[0] = (uint)param_2;
    uVar2 = 0;
    if ((param_2 & 0xffffffff) != 0) {
      puVar3 = param_1;
      do {
        uVar4 = 0;
        puVar5 = &uStack_80;
        uStack_80 = *puVar3;
        uStack_7c = puVar3[1] & 0xffff;
        uStack_78 = puVar3[2] << 0x10 | (uint)puVar3[1] >> 0x10;
        uStack_74 = (uint)puVar3[2] >> 0x10;
        do {
          if (((param_7 & 1) != 0) &&
             (uVar1 = (*param_8)(1,(ulonglong)uVar2 / 6 + uVar4,puVar5,in_stack_00000054),
             (int)uVar1 < 0)) {
            return uVar1;
          }
          if (((1 << ((uint)puVar5[1] >> 0xc & 0xf) & 0x607eU) != 0) &&
             (uVar1 = fn_826367A8(puVar5,auStack_90,param_1,param_2,param_3,param_4,param_7,
                                    param_8), (int)uVar1 < 0)) {
            return uVar1;
          }
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 2;
        } while ((uVar4 & 0xffffffff) < 2);
        if ((param_7 & 0x20) == 0) {
          puVar3[1] = uStack_78 << 0x10 | uStack_7c & 0xffff;
          *puVar3 = uStack_80;
          puVar3[2] = uStack_74 << 0x10 | uStack_78 >> 0x10;
        }
        uVar2 = uVar2 + 0xc;
        puVar3 = puVar3 + 3;
      } while (uVar2 < auStack_90[0]);
    }
  }
  else {
    uVar1 = fn_82636938(param_1);
  }
  return uVar1;
}

