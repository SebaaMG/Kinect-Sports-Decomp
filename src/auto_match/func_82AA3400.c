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
extern int fn_82AA1C90();
extern int fn_82AA2720();
extern int fn_82AA31E8();
extern unsigned int lbl_8315FC18;


longlong fn_82AA3400(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      ulonglong param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint *apuStack_a0 [40];
  
  lVar3 = fn_82AA31E8(param_5,1,0x20,param_1,param_2,param_3,param_4,apuStack_a0);
  if ((-1 < lVar3) && ((param_5 & 0x100) != 0)) {
    fn_82AA2720(param_2,0xffffffff821ce7a4);
    fn_82AA1C90(param_2,0xffffffff821cc86c);
    fn_82AA2720(param_2,0xffffffff821ce838);
    fn_82AA1C90(param_2,0xffffffff820d32c8,*(undefined2 *)(param_1 + 0x1a),
                  *(undefined2 *)(param_1 + 0x18));
    fn_82AA2720(param_2,0xffffffff821ce7a4);
    fn_82AA1C90(param_2,0xffffffff821cc86c);
    uVar1 = *(uint *)(param_1 + 0x1c);
    fn_82AA1C90(param_2,0xffffffff820d3294,uVar1 & 0xf,uVar1 >> 4 & 1,uVar1 >> 5 & 1);
    fn_82AA2720(param_2,0xffffffff821ce7a4);
    fn_82AA1C90(param_2,0xffffffff821cc86c);
    uVar1 = *(uint *)(param_1 + 0x14) >> 5;
    if ((uVar1 & 0x1f) != 0) {
      fn_82AA1C90(param_2,0xffffffff820d3278);
      fn_82AA2720(param_2,0xffffffff821ce7a4);
      fn_82AA1C90(param_2,0xffffffff821cc86c);
      uVar6 = 0;
      uVar8 = 0;
      if ((uVar1 & 0x1f) != 0) {
        puVar7 = apuStack_a0[0];
        do {
          uVar2 = *puVar7;
          uVar5 = 0xffffffff821ce35c;
          if ((uVar2 >> 0xc & 2) == 0) {
            uVar5 = 0xffffffff82196582;
          }
          uVar4 = 0xffffffff821ce358;
          if ((uVar2 >> 0xc & 1) == 0) {
            uVar4 = 0xffffffff82196582;
          }
          fn_82AA1C90(param_2,0xffffffff820d3228,uVar8,
                        (&lbl_8315FC18)[uVar2 >> 4 & 0xf],uVar2 & 0xf,uVar2 >> 8 & 0xf,
                        uVar4,uVar5);
          fn_82AA2720(param_2,0xffffffff821ce7a4);
          fn_82AA1C90(param_2,0xffffffff821cc86c);
          if (((uVar8 & 0xffffffff) != 0) && ((uVar2 & 0xff) <= uVar6)) {
            fn_82AA1C90(param_2,0xffffffff820d3244);
            fn_82AA2720(param_2,0xffffffff821ce7a4);
            fn_82AA1C90(param_2,0xffffffff821cc86c);
          }
          uVar8 = uVar8 + 1;
          uVar6 = uVar2 & 0xff;
          puVar7 = puVar7 + 1;
        } while ((uVar8 & 0xffffffff) < ((ulonglong)uVar1 & 0x1f));
      }
      fn_82AA2720(param_2,0xffffffff821ce7a4);
      fn_82AA1C90(param_2,0xffffffff821cc86c);
    }
    fn_82AA2720(param_2,0xffffffff821ce828);
  }
  return lVar3;
}

