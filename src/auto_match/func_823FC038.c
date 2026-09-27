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
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_8223AAC0();
extern int fn_82365BD8();
extern int fn_823FD088();
extern unsigned int iStack_74;
extern unsigned int iStack_7c;
extern unsigned int lbl_821AD588;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


undefined4 *
fn_823FC038(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  char cVar6;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  struct { undefined4 first; int second; } stack_pair_80;

  struct { undefined4 first; int second; } stack_pair_78;

  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];

  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    iVar1 = param_6[1];
    uVar2 = *param_6;
    stack_pair_78.first = 0;
    stack_pair_78.second = 0;
    if (iVar1 != 0) {
      cVar6 = fn_8223AAC0(iVar1);
      if (cVar6 != '\0') {
        stack_pair_78.first = uVar2;
        stack_pair_78.second = iVar1;
      }
    }
    iVar1 = param_3[1];
    uVar2 = *param_3;
    stack_pair_80.first = 0;
    stack_pair_80.second = 0;
    if ((iVar1 != 0) && (cVar6 = fn_8223AAC0(iVar1), cVar6 != '\0')) {
      stack_pair_80.first = uVar2;
      stack_pair_80.second = iVar1;
    }
    uVar3 = fn_82365BD8(auStack_70,param_5);
    uVar4 = fn_82365BD8(auStack_68,param_4);
    uVar5 = fn_82365BD8(auStack_60,param_2);
    fn_823FD088(param_1 + 3,uVar5,&stack_pair_80.first,uVar4,uVar3,&stack_pair_78.first);
  }
  return param_1;
}
