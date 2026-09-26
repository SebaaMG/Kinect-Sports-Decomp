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
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82637398();
extern int fn_82637840();
extern int fn_82639DB0();
extern int fn_82639EA8();
extern int fn_8263DF30();
extern int fn_82643B08();
extern int fn_82645110();
extern int fn_82645EA8();
extern int fn_8264EFE0();
extern int fn_82F68CC0();
extern unsigned int lbl_83000000;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82646858(int param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  ulonglong uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  if ((*(byte *)(param_1 + 0x2abc) & 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x3260) = 1;
    fn_8264EFE0();
  }
  else {
    fn_82645110();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x350c);
  if (*(undefined4 **)(param_1 + 0x3510) < puVar1 + 1) {
    puVar1 = (undefined4 *)fn_82643B08(param_1 + 0x3500);
  }
  *puVar1 = &lbl_83000000;
  *(undefined4 **)(param_1 + 0x350c) = puVar1 + 1;
  *(uint *)(param_1 + 0x3250) = *(uint *)(param_1 + 0x2934) >> 4 & 7;
  *(byte *)(param_1 + 0x2abc) = *(byte *)(param_1 + 0x2abc) | 0x40;
  uVar4 = *(ulonglong *)(param_1 + 0x28) | 0x2000000000;
  if (((*(byte *)(param_1 + 0x2abf) & 0x20) != 0) &&
     (*(uint *)(param_1 + 0x3428) != (*(uint *)(param_1 + 0x2880) & 0x3fff))) {
    uVar4 = *(ulonglong *)(param_1 + 0x28) | 0x200002000000000;
  }
  *(ulonglong *)(param_1 + 0x28) = uVar4;
  *(byte *)(param_1 + 0x2abd) = (~param_2 & 1) << 6 | *(byte *)(param_1 + 0x2abd) & 0xbf;
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 8;
  *(undefined4 *)(param_1 + 0x324c) = 0xffffffff;
  fn_82637398(param_1,1);
  if (((*(uint *)(param_1 + 0x3434) & 1) == 0) && ((*(byte *)(param_1 + 0x2abf) & 0x20) != 0)) {
    uVar7 = 0;
    uVar6 = 0;
    uVar2 = 0;
    if (*(uint *)(param_1 + 0x327c) != 0) {
      piVar3 = (int *)(param_1 + 0x328c);
      piVar5 = (int *)(param_1 + 0x3374);
      uVar7 = 0;
      uVar6 = 0;
      do {
        if (uVar7 <= (uint)(piVar3[-1] - piVar5[-1])) {
          uVar7 = piVar3[-1] - piVar5[-1];
        }
        if (uVar6 <= (uint)(*piVar3 - *piVar5)) {
          uVar6 = *piVar3 - *piVar5;
        }
        uVar2 = uVar2 + 1;
        piVar5 = piVar5 + 2;
        piVar3 = piVar3 + 4;
      } while (uVar2 < *(uint *)(param_1 + 0x327c));
    }
    fn_82F68CC0(&fStack_60,param_1 + 0x3218,0x1c);
    uStack_70 = *(undefined4 *)(param_1 + 0x3234);
    uStack_6c = *(undefined4 *)(param_1 + 0x3238);
    uStack_68 = *(undefined4 *)(param_1 + 0x323c);
    uStack_64 = *(undefined4 *)(param_1 + 0x3240);
    fn_82639EA8(param_1,0xffffffff821cc030);
    fn_82639DB0(param_1,0xffffffff821cc048);
    uStack_78 = *(undefined4 *)(param_1 + 0x342c);
    uStack_74 = *(undefined4 *)(param_1 + 0x3430);
    uStack_80 = 0;
    uStack_7c = 0;
    fn_82645EA8(param_1,1);
    fn_8263DF30((double)*(float *)(param_1 + 0x3450),param_1,0x30,&uStack_80,param_1 + 0x3440);
    uVar8 = 0xf;
    if ((*(byte *)(param_1 + 0x2abf) & 0x10) == 0) {
      uVar8 = 0x3f;
    }
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = uVar7;
    uStack_74 = uVar6;
    fn_82645EA8(param_1,2);
    fn_8263DF30((double)*(float *)(param_1 + 0x3450),param_1,uVar8,&uStack_80,param_1 + 0x3440);
    fn_82645EA8(param_1,0);
    fn_82637840((double)fStack_60,(double)fStack_5c,(double)fStack_58,(double)fStack_54,
                      (double)fStack_50,(double)fStack_4c,param_1);
    fn_82639DB0(param_1,&uStack_70);
  }
  return;
}

