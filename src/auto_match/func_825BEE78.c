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
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8256BE68();
extern int fn_8265C9E0();
extern int fn_827D9ED8();
extern int fn_827DE858();
extern unsigned int iStack_5c;
extern unsigned int lbl_821CAC64;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


undefined4 * fn_825BEE78(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  struct { undefined4 first; int second; } stack_pair_60;

  struct { undefined4 first; undefined4 second; } stack_pair_58;


  puVar6 = (undefined4 *)fn_8265C9E0(0x34);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    stack_pair_60.first = 0;
    stack_pair_60.second = 0;
    fn_82517978(&stack_pair_60.first,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
    uVar1 = param_2[0x1a];
    uVar2 = *(undefined4 *)(param_1 + 0x54);
    uVar7 = fn_827D9ED8(param_2);
    iVar5 = stack_pair_60.second;
    stack_pair_58.first = 0;
    stack_pair_58.second = 0;
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    uVar4 = *(undefined4 *)(param_1 + 0x34);
    fn_82517978(&stack_pair_58.first,stack_pair_60.first,stack_pair_60.second,0);
    fn_827DE858(puVar6,&stack_pair_58.first,uVar2);
    puVar6[5] = uVar4;
    puVar6[6] = uVar3;
    puVar6[7] = 0;
    *puVar6 = &lbl_821CAC64;
    puVar6[9] = uVar7;
    puVar6[10] = uVar1;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    fn_8256BE68(puVar6 + 0xb,0);
    if (iVar5 != 0) {
      fn_822315A0(iVar5);
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(param_2,1);
  }
  return puVar6;
}
